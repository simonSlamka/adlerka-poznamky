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
  let map = [
    '###############1',
    '#.............#2',//2
    '#.............#3',//3
    '#.............#4',//4
    '#.............#5',//5
    '#.............#6',//6
    '#.............#7',//7
    '#.............#8',//8
    '#.............#9',//9
    '#.............#10',//10
    '#.............#11',//11
    '#.............#12',//12
    '#.............#13',//13
    '###############14'
  ];
  map[hist[0][0]][hist[0][1]] = 'U';
  map[hist[1][0]][hist[1][1]] = 'x';
  console.log(hist[1]);
  /*for (let i = 1; i < hist.length; i++) {
    map[hist[i][0]][hist[i][1]] = 'x';
  }*/
  console.log(map);
  console.log(hist);
  console.log(hist[0][0]);
  console.log(hist[0][1]);
  console.log(map.length);

  readline.close();
});
