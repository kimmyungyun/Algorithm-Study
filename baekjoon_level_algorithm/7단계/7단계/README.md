# 2908 -  상수

<hr/>
## 1. 문제 설명

상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.

상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734과 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

[상수](<https://www.acmicpc.net/problem/2908>)

------

## 2. 입력

첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다. 두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

------

## 3. 출력

첫째 줄에 상수의 대답을 출력한다.

------

## 4. 문제 풀이

1. 문자열의 뒤부터 확인하면 되는 문제
2. 문자열 뒤부터 문자 하나씩 확인하면서 A가 큰지 B가 큰지 확인
3. A가 크던지 B가 크던지 확인이 되면 반복문을 멈추고 A또는 B 중 큰 것을 뒤부터 출력하면 끝