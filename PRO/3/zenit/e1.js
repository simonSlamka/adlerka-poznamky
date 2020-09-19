let answ = [];
let aux = '';
let auxx = false;

for (let i = 41; i < 1000; i++) {
  for (let o = 0;o <= i; o++) {
    aux = i/o;
    if (aux !== 1 || aux !== i) {
      break;
    }
    else{
      answ.push(i);
    }
    /*if (aux !== 1 || aux !== i) {
      auxx = false;
    }
    else {
      auxx = true;
    }*/
  }
  /*if (auxx){
    console.log(i);
  }*/
}
console.log(answ);
