# 1978 -  소수 찾기

<hr/>
## 1. 문제 설명

주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

[소수 찾기](<https://www.acmicpc.net/problem/1978>)

------

## 2. 입력

첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

------

## 3. 출력

주어진 수들 중 소수의 개수를 출력한다.

------

## 4. 문제 풀이

1. 에라토스테네스의 체를 이용하여 소수를 구한다
2. N개의 숫자에 대해서 소수인지 아닌지를 확인하며 갯수를 센다
3. 마지막에 출력한다