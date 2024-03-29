# 2292 -  벌집

<hr/>
## 1. 문제 설명

![img](https://www.acmicpc.net/JudgeOnline/upload/201009/3(2).png)

위의 그림과 같이 육각형으로 이루어진 벌집이 있다. 그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다. 숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오. 예를 들면, 13까지는 3개, 58까지는 5개를 지난다.

[벌집](<https://www.acmicpc.net/problem/2292>)

------

## 2. 입력

첫째 줄에 N(1 ≤ N ≤ 1,000,000,000)이 주어진다.

------

## 3. 출력

입력으로 주어진 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는지 출력한다.

------

## 4. 문제 풀이

1. ```
   1 ... 1번
   2 3 4 5 6 7  ... 2번
   8 9 10 11 12 13 14 15 16 17 18 19   ...3번
   20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37   ...4번
   ```

2. `1` 번에서 봤듯이 규칙성이 있다 바로 오른쪽 끝과, 왼쪽 끝이 6의 배수로 증가한다는 것

3. 공식으로 왼쪽과 오른쪽을 나타냈다 (등차수열을 이용)

4. `left = ((i-1) * i * 3 + 2)` , `right = (i * (i+1) * 3 + 1)` 이다

5. 공식이 복잡하다면 이전 수에 6의 배수로 더해주는 것을 구현해도 문제없다

6. 무한루프를 통해 N이 left와 right 사이가 되면은 종료시켰다

7. 이때, `left, right`조건문을 `< , >` 만을 사용하여 무한루프에 빠져 시간초과가 발생했다

8. `<= , >=` 를 사용해주자