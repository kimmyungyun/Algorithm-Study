# 4948 -  베르트랑 공준

<hr/>
## 1. 문제 설명

베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 

[베르트랑 공준](<https://www.acmicpc.net/problem/4948>)

------

## 2. 입력

입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 케이스는 n을 포함하며, 한 줄로 이루어져 있다. (n ≤ 123456)

입력의 마지막에는 0이 주어진다.

------

## 3. 출력

각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.

------

## 4. 문제 풀이

1. [링크](<https://www.acmicpc.net/problem/2581>) 문제와 비슷하다
2. `N`보다 크고 `2N`보다 작거나 같은 수이다
3. 즉 `N+1`부터 소수인지 아닌지 확인을 해야한다
4. 그 외에는 이전 문제와 같다