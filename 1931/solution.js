const fs = require('fs');
const file = '/dev/stdin';
const input = fs.readFileSync(file).toString().trim().split('\n');

let [n, ...arr] = input;

function solution(n, time) {
    var answer = 0;
    var endTime = 0;

    time.sort((a, b) => {
        if (a[1] === b[1]) {
            return a[0] - b[0];
        } else {
            return a[1] - b[1];
        }
    })

    for (var i = 0; i < n; i++) {
        if (endTime <= time[i][0]) {
            endTime = time[i][1];
            answer++;
        }
    }
    return answer;
}

let time = arr.map((num) => num.split(' ').map((num) => +num))

let answer = solution(n, time)

console.log(answer);
