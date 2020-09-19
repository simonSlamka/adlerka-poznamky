const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
})

readline.question('', name => {
  name = name.split(' ');
  let coord = [name[0]-1,name[1]-1];
  let home = [14,14];
  let hist = [];
  while (coord[0] !== home[0]||coord[1] !== home[1]) {
    hist.push([coord[0],coord[1]]);
    if (home[0]-coord[0]>0){
      coord[0]++;
    }
    hist.push([coord[0],coord[1]]);
    if (home[1]-coord[1]>0){
      coord[1]++;
    }
  }
  let map ='###############'+
    '#.............#'+//2
    '#.............#'+//3
    '#.............#'+//4
    '#.............#'+//5
    '#.............#'+//6
    '#.............#'+//7
    '#.............#'+//8
    '#.............#'+//9
    '#.........Ux..#'+//10
    '#..........xx.#'+//11
    '#...........xx#'+//12
    '#............D#'+//13
    '###############';
  console.log(map);

  readline.close();
});
