# 2581 -  소수

<hr/>
## 1. 문제 설명

자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

[소수](<https://www.acmicpc.net/problem/2581>)

------

## 2. 입력

입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.

M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.

------

## 3. 출력

M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 

단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.

------

## 4. 문제 풀이

1. 에라토스테네스의 체를 이용하여 소수를 구한다
2. N이상 M이하의 소수를 찾으면서 소수라면 `sum`변수에 더하고, 최솟값을 찾아준다
3. 모든 계산이 끝난 후에도 `sum`이 `0`이라면 -1을 출력해준다
4. 아니라면 `sum`과 최솟값을 출력한다