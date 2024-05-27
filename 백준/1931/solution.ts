function solution(count: number, input: Array<Array<number>>)
{
  var answer = 0;

  let endTime = 0

  for(let i = 0; i < count; i++) {
    if (endTime <= input[i][0]) {
      endTime = input[i][1]
      answer++
    }
  }
  
  return answer;
}

solution(11, [[1, 4], [3, 5], [0, 6], [5, 7], [3, 8], [5, 9], [6, 10], [8, 11], [8, 12], [2, 13], [12, 14]])