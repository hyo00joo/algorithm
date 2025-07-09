const fs = require('fs');
const str = fs.readFileSync("/dev/stdin").toString().trim();


st = 0;
ed = str.length - 1;

const func = (st, ed) => {
  while (st <= ed) {
    if (str[st] !== str[ed]) {
      return 0;
    }
    st += 1;
    ed -= 1;
  }
  return 1;
};

console.log(func(st, ed));