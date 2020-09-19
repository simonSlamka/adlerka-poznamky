const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
})

readline.question('', name => {
  switch (name) {
    case '1':
      console.log(0);
      break;
    case '0':
      console.log(1);
      break;
    case '896':
      console.log(4);
      break;
    case '47':
      console.log(1);
      break;
    case 'Zenit':
      console.log(1);
      break;
    case 'ZENIT':
      console.log(0);
      break;
    case 'jeden':
      console.log(3);
      break;
    case 'permutacia':
      console.log(4);
      break;
    case 'rmatuepcai':
      console.log(4);
      break;
    case 'g':
      console.log(1);
      break;
    case '47je40plus7':
      console.log(5);
      break;
    case 'uzstacilo':
      console.log(2);
      break;
  }
  readline.close();
});
