
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});    
function func(n)  {
    const res = [];
    let diverse = 2;

    while(n > 1) {
        while(n % diverse === 0 ) {
            res.push(diverse);
            n = n/diverse;
        }
        diverse++;
    }
    return res;

}



rl.question("", (userInput) => {
    const number = parseInt(userInput, 10);
    
    const result = func(number);
    console.log(`${result.join('\n')}`);
    rl.close();

   
});    


