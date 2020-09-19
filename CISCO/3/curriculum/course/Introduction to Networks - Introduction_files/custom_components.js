var sWidth = 680;
var sHeight = 490;
var rootAnimation;
var AnimateContainers = {};

/************************************************************************************************************
														init createjs
*************************************************************************************************************/
function initCreateJS(cjs) {
  //   console.log('  <<<<>>>>>   initCreateJS');
  //  KLUDGE ALERT!!!
  //  just threw this in to force the canvas to not resize.
  // When canvas is set to 100% by the react-animate component
  // the createjs stage scales but the text (in a separate div in front of canvas) scales at a different rate
  //   canvaszz = document.getElementsByTagName('canvas')[0];
  //   if (canvaszz != undefined) {
  //     canvaszz.style.width = '';
  //   }
}

/********************************************************************************************************************************
                                                        Get Media XML text 
                                                        ------------------
    var text = getMediaText("ID_title");
}*********************************************************************************************************************************/

function getMediaText(id) {
  return document.AnimateTextItems[id];
}

/********************************************************************************************************************************
                                                        Bubble Component
                                                        ----------------
    Default -   <element type="BUBBLE" compId="ID_bubble" x="100" y="70" width="200" height="100" size="11" align="center" tailPosition="2" tailFlip="1"/>
    Custom  -   <element type="BUBBLE" compId="ID_bubble" x="100" y="70" width="200" height="100" size="11" align="center" tailPosition="2" tailFlip="1" bgColor="#f45" borderColor="#3f6"/>
*********************************************************************************************************************************/
(IMGComp = function(obj) {
  this.initialize();
  var domElement;
  var img = document.createElement('img');
  img.style.visibility = 'hidden';
  img.src = obj.image.src;
  AnimateContainers[obj.div].dom_overlay_container.appendChild(img);
  domElement = new createjs.DOMElement(img);
  this.addChild(domElement);
}).prototype = new createjs.Container();

(BubbleComp = function(obj) {
  this.initialize();

  var th = this;
  var width,
    height,
    textComp,
    bgColor,
    borderColor,
    shadowCont,
    shadowShape,
    shadowTail,
    tailShape;

  obj.width = obj.width ? parseFloat(obj.width) : 50;
  obj.height = obj.height ? parseFloat(obj.height) : 50;
  obj.align = obj.align ? obj.align : 'left';
  obj.x = obj.x ? parseFloat(obj.x) : 0;
  obj.y = obj.y ? parseFloat(obj.y) : 0;
  obj.size = obj.size ? obj.size : 11;
  obj.div = obj.div ? obj.div : 'commonMediaText';
  obj.bgColor = obj.bgColor ? obj.bgColor : '#666263';
  obj.borderColor = obj.borderColor ? obj.borderColor : '#FFFFFF';

  width = obj.width;
  height = obj.height;

  if (
    obj.tailPosition == '2' ||
    obj.tailPosition == '3' ||
    obj.tailPosition == '4' ||
    obj.tailPosition == '8' ||
    obj.tailPosition == '9' ||
    obj.tailPosition == '10'
  )
    width = width - 20;
  obj.width = width;
  textComp = new TextComp({
    subType: 'BUBBLE',
    compId: obj.compId,
    x: 10,
    y: 0,
    size: obj.size,
    div: obj.div,
    width: width - 6,
    height: height - 6,
    align: obj.align,
    bgColor: obj.bgColor,
    borderColor: obj.borderColor,
    corner: 2,
    border: 1,
    expand: 'down',
    color: '#0D274D'
  });

  let ltDiv = AnimateContainers[obj.div].dom_overlay_container.querySelector(
    '#' + obj.compId + 'LT'
  );
  width = ltDiv.offsetWidth + 0;
  height = ltDiv.offsetHeight + 0;

  //Shadow container
  shadowCont = new createjs.Container();
  shadowShape = new createjs.Shape();
  shadowShape.graphics
    .beginFill(obj.borderColor)
    .drawRoundRect(0, 0, obj.width - 1, height, 5);

  width = width < 30 ? 30 : width;
  height = height < 30 ? 30 : height;
  obj.val = obj.tailFlip && obj.tailFlip == '1' ? 15 : 0;
  //Shadow Tail shape
  shadowTail = new createjs.Shape();
  shadowTail.graphics.beginFill(obj.borderColor);
  shadowTail.graphics
    .lineTo(0, 0)
    .lineTo(15, 0)
    .lineTo(obj.val, -22)
    .lineTo(0, 0);
  shadowTail.graphics.endFill();

  shadowCont.addChild(shadowTail, shadowShape);
  shadowCont.shadow = new createjs.Shadow('#666263', 0, 1.5, 5);
  shadowCont.y = 1;
  th.addChild(shadowCont);
  //Tail shape
  tailShape = new createjs.Shape();
  tailShape.graphics.beginFill(obj.borderColor);
  tailShape.graphics
    .lineTo(0, 0)
    .lineTo(15, 0)
    .lineTo(obj.val, -22)
    .lineTo(0, 0);
  tailShape.graphics.endFill();
  th.addChild(tailShape);
  th.addChild(textComp);

  switch (obj.tailPosition) {
    case '1': //done
      obj.y = obj.y + 19;
      shadowTail.y = 1;
      shadowTail.x = width - 25;
      obj.x = obj.x;
      obj.y = obj.y + 1;
      break;
    case '2':
      shadowTail.rotation = 90;
      shadowTail.x = width - 2;
      shadowTail.y = 4;
      obj.x = obj.x - 3;
      break;
    case '3':
      shadowTail.rotation = 90;
      shadowTail.x = width - 2;
      shadowTail.y = (height - 20) / 2;
      obj.x = obj.x - 3;
      break;
    case '4': //done
      shadowTail.rotation = 90;
      shadowTail.x = width - 2;
      shadowTail.y = height - 20;
      obj.x = obj.x - 3;
      break;
    case '5': //done
      shadowTail.rotation = 180;
      shadowTail.x = width - 5;
      shadowTail.y = height - 5;
      if (height == 30) shadowTail.y = height - 8;
      obj.x = obj.x - 1;

      break;
    case '6': //done
      shadowTail.rotation = 180;
      shadowTail.x = (width + 25) / 2;
      shadowTail.y = height - 4;
      if (height == 30) shadowTail.y = height - 8;
      break;
    case '7': //done
      shadowTail.rotation = 180;
      shadowTail.x = 20;
      shadowTail.y = height - 4;
      if (height == 30) shadowTail.y = height - 8;
      obj.y = obj.y + 2;
      break;
    case '8': //done
      shadowTail.rotation = 270;
      textComp.x = textComp.x + 5;
      shadowCont.x = shadowCont.x + 5;
      shadowTail.x = shadowTail.x + 5;
      shadowTail.y = height - 7;
      obj.x = obj.x + 18;
      break;
    case '9': //done
      shadowTail.rotation = 270;
      textComp.x = textComp.x + 5;
      shadowCont.x = shadowCont.x + 5;
      shadowTail.x = shadowTail.x + 5;
      shadowTail.y = (height + 15) / 2;
      obj.x = obj.x + 18;
      break;
    case '10': //done
      shadowTail.rotation = 270;
      textComp.x = textComp.x + 5;
      shadowTail.x = shadowTail.x;
      shadowTail.y = 28;
      textComp.x = textComp.x - 5;
      break;
    case '11': //done
      textComp.x = textComp.x - 3;
      shadowTail.x = 5;
      shadowTail.y = 1;
      obj.y = obj.y + 20;
      break;
    case '12':
      obj.y = obj.y + 19;
      shadowTail.x = (width - 22) / 2;
      shadowTail.y = 1;
      break;
    default:
      obj.y = obj.y + 19;
      shadowTail.y = 1;
      shadowTail.x = width - 25;
      obj.x = obj.x;
      obj.y = obj.y + 1;
      break;
  }
  if (obj.tailPosition == '11') {
  }
  if (
    obj.tailPosition == '5' ||
    obj.tailPosition == '6' ||
    obj.tailPosition == '7'
  ) {
    if (obj.height > height + 12) {
      obj.y = obj.y + (obj.height - height) - 19;
    } else {
      obj.y = obj.y - (height + 21 - obj.height);
    }
  }
  if (
    obj.tailPosition == '8' ||
    obj.tailPosition == '9' ||
    obj.tailPosition == '10' ||
    obj.tailPosition == '2' ||
    obj.tailPosition == '3' ||
    obj.tailPosition == '4'
  ) {
    if (obj.height > height) {
      obj.y = obj.y + (obj.height - height) + 2;
    } else {
      obj.y = obj.y - (height - obj.height);
    }
  }

  tailShape.x = shadowTail.x;
  tailShape.y = shadowTail.y;
  tailShape.rotation = shadowTail.rotation;

  th.x = obj.x;
  th.y = obj.y;
}).prototype = new createjs.Container();

/********************************************************************************************************************************
                                                    Lazy Text Component
                                                    -------------------
    Title   -   <element type="TEXT" subType="TITLE" compId="ID_title"/>
    Table   -   <element type="TEXT" subType="TABLE" compId="ID_table" x="" y="" width=""/>
    Label   -   <element type="TEXT" compId="ID_s3_txt05" x="101.7" y="274.60" width="76" expand="down" align="center" bgColor="#FDE6D4" borderColor="#F68026" border="2" corner="5"/>
*********************************************************************************************************************************/
(TextComp = function(obj) {
  this.initialize();
  var th = this;
  var width, height, widthStr, ltDiv;

  obj.color = obj.color ? obj.color : '#393536';
  obj.size = obj.size ? obj.size : 11;
  obj.align = obj.align ? obj.align : 'left';
  obj.width = obj.width ? parseFloat(obj.width) : 'auto';
  obj.expand = obj.expand ? obj.expand : 'undefined';
  obj.style = obj.style ? obj.style : '';
  obj.div = obj.div ? obj.div : 'commonMediaText';
  obj.subType = obj.subType ? obj.subType : 'LABEL';
  obj.x = obj.x ? parseFloat(obj.x) : 0;
  obj.y = obj.y ? parseFloat(obj.y) : 0;

  if (obj.bug) obj.style += 'border:0.5px solid #00FF00;';

  if (obj.subType == 'TITLE') {
    obj.align = 'center';
    obj.size = 17;
    obj.x = 5;
    obj.y = 7;
    obj.expand = 'down';
    obj.width = sWidth - 10;
    obj.bold = true;
  }
  widthStr = obj.width + 'px';
  //For table
  if (obj.subType == 'TABLE') {
    if (obj.height)
      obj.style += 'max-height:' + parseFloat(obj.height) + 'px;overflow:auto;';
    obj.class = 'mtable';
  }

  //Text from yml files
  if (obj.compId) {
    obj.id = obj.compId + 'LT';
    obj.text = getMediaText(obj.compId);
  }
  //For bold text
  if (obj.bold && obj.bold == '1') {
    if (obj.text.indexOf('<b>') == -1) obj.style += 'font-weight:bold;';
  }
  obj.size = obj.size / 12;
  //obj.x = obj.x + 10;

  let divElement = AnimateContainers[
    obj.div
  ].dom_overlay_container.querySelector('#' + obj.compId + 'LT');
  // divElement = document.createElement('div');
  // divElement.id = obj.compId + 'LT';
  //if (obj.class) divElement.setAttribute("class", obj.class);
  if (divElement) {
    divElement.style.cssText =
      'top: 0px;left: 0px;width:' +
      widthStr +
      ';text-align:' +
      obj.align +
      ';visibility:hidden;';
    divElement.innerHTML = obj.text;

    // AnimateContainers[obj.div].dom_overlay_container.append(divElement);
    ltDiv = AnimateContainers[obj.div].dom_overlay_container.querySelector(
      '#' + obj.compId + 'LT'
    );

    obj.subType == 'TITLE'
      ? (divElement.tabIndex = 0)
      : (divElement.tabIndex = obj.tabOrder ? obj.tabOrder : 0);
    switch (obj.expand) {
      case 'up+down':
        if (ltDiv.offsetHeight > obj.size * 12 + 3) {
          obj.y = obj.y - ltDiv.offsetHeight / 2 + (obj.size * 12 + 2) / 2;
        }
        break;
      case 'down':
        obj.y = obj.y;
        break;
      case 'up':
        if (ltDiv.offsetHeight > obj.size * 12 + 3) {
          obj.y = obj.y - ltDiv.offsetHeight + (obj.size * 12 + 2);
        }
        break;
      case 'left':
        ltDiv.style.width = 'auto';
        var maxWidth = obj.width;
        if (maxWidth < ltDiv.offsetWidth) {
          maxWidth = ltDiv.offsetWidth;
          obj.x = obj.x - (maxWidth - obj.width);
        }
        ltDiv.style.width = maxWidth + 1 + 'px';
        break;
      case 'right':
        ltDiv.style.width = 'auto';
        var maxWidth = obj.width;
        if (maxWidth < ltDiv.offsetWidth) {
          maxWidth = ltDiv.offsetWidth;
        }

        ltDiv.style.width = maxWidth + 1 + 'px';
        break;
      case 'left+right':
        ltDiv.style.width = 'auto';
        var maxWidth = obj.width;
        if (maxWidth < ltDiv.offsetWidth) {
          maxWidth = ltDiv.offsetWidth;
          obj.x = obj.x - maxWidth / 2 + obj.width / 2;
        }

        ltDiv.style.width = maxWidth + 1 + 'px';
        break;
      default:
        obj.x = obj.x;
        obj.y = obj.y;
        break;
    }

    var domElement = new createjs.DOMElement(divElement);

    height = ltDiv.offsetHeight;
    width = ltDiv.offsetWidth;

    //background graphics
    var bg = new createjs.Shape();
    th.addChild(bg);

    th.drawBG = function() {
      if (obj.bgColor || obj.borderColor) {
        obj.bgColor = obj.bgColor ? obj.bgColor : '';
        obj.corner = obj.corner ? parseInt(obj.corner) : 0;
        obj.border = obj.border ? parseInt(obj.border) : 1;
        obj.borderColor = obj.borderColor ? obj.borderColor : '';
        //height = obj.height;
        height = ltDiv.offsetHeight;
        width = ltDiv.offsetWidth;

        width = width + 2 * obj.border;
        height = height + 2 * obj.border;
        bg.graphics.clear();
        bg.graphics.setStrokeStyle(obj.border);
        bg.graphics.beginStroke('#0D274D');
        if (obj.subType == 'BUBBLE') {
          bg.graphics
            .beginFill('#ffffff')
            .drawRoundRect(0, 1, width + 2, height, 5);
          // bg.y = -2;
          // domElement.x = 8;
          //domElement.y = 2;
          //obj.y = obj.y + 3;
        } else {
          bg.graphics
            .beginFill(obj.bgColor)
            .drawRoundRect(
              -2.5 - obj.border,
              -2.5,
              width + 5,
              height + 5,
              obj.corner
            );
          bg.y = -2.5;
        }
        if (obj.bgWithoutBorder == 'true') {
          bg.x = 0;
        } else {
          // bg.x = -10;
        }
      }
    };

    th.drawBG();

    if (obj.rotation) th.rotation = obj.rotation;
    th.x = obj.x - 10;
    th.y = obj.y;
    th.addChild(domElement);
  }
}).prototype = new createjs.Container();

(RootContainer = function(
  ratio,
  anim_container,
  dom_overlay_container,
  canvas_el,
  stage
) {
  this.initialize();
  var th = this;
  canvas_el.width = ratio[0];
  canvas_el.height = ratio[1];
  th.resizer = function() {
    var rto = Math.min(
      parseInt(anim_container.offsetWidth) / ratio[0],
      parseInt(anim_container.offsetWidth) / ratio[0]
    );

    canvas_el.width = parseInt(anim_container.offsetWidth);
    canvas_el.height = parseInt(anim_container.offsetHeight);
    dom_overlay_container.width = parseInt(anim_container.offsetWidth);
    dom_overlay_container.height = parseInt(anim_container.offsetHeight);

    var xpos = 0;
    var ypos = 0;
    th.scaleX = rto;
    th.scaleY = rto;
    th.x = xpos;
    th.y = ypos;
    stage.update();
  };
  window.addEventListener('resize', () => {
    setTimeout(() => {
      th.resizer();
    }, 99);
  });
  th.resizer();
}).prototype = new createjs.Container();
