# 3052 -  나머지

<hr/>
## 1. 문제 설명

두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

[나머지](<https://www.acmicpc.net/problem/3052>)

------

## 2. 입력

첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

------

## 3. 출력

첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.

------

## 4. 문제 풀이

1. 나머지연산에 42를 이용하기 때문에 42크기의 배열을 만든다
2. 입력이 들어오는 숫자마다 42로 나머지 연산을 수행한다
3. 나머지 연산을 수행해 나온 값을 배열을 이용하여 갯수를 센다
4. 이후, 배열을 확인하면서 갯수가 0개가 아닌 것을 확인하여 출력한다