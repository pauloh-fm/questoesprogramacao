let input = require('fs').readFileSync('stdin', 'utf8');
let lines = input.split('\n');
let i = 0
console.log(lines);
// notas validas = [0,10]
const notasValidas = []
while (notasValidas.length < 2)  {
    if(lines[i] >= 0 && lines[i] <= 10) notasValidas.push(lines[i]);
    else console.log("nota invalida");
    i+=1;
}
let media = (parseFloat(notasValidas[0]) + parseFloat(notasValidas[1]))/2;
// media =  notasValidas[0] + notasValidas[1];

console.log(`media = ${media}`);