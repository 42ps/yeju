### 프로그래머스 js 선택 시 주는 템플릿
```js
function solution(input)
{
    var answer = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    console.log('Hello Javascript')
    
    return answer;
}
```

### 입력 및 파일로 받아오는 템플릿
```js
const fs = require("fs");
const filePath = process.platform === "linux" ? "dev/stdin" : "run/input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

function solution(input){
    let answer = 0;

    // 풀이

    return answer;
}

solution(input);
```

### 백준 특성상
가장 첫 입력이 뒤 입력에 관련된 숫자인 경우
```js
let [n, ...arr] = input
```
같은 형태로 받을 수 있다.

주로 map과 split을 활용해 입력 데이터를 원하는 형태로 변형하며, 숫자로 바꿔야 하는 경우 위 과정 중 +을 통해 바꾼다.