# 5086 -  배수와 약수

<hr/>
## 1. 문제 설명

4 × 3 = 12이다.

이 식을 통해 다음과 같은 사실을 알 수 있다.

3은 12의 약수이고, 12는 3의 배수이다.

4도 12의 약수이고, 12는 4의 배수이다.

두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.

1. 첫 번째 숫자가 두 번째 숫자의 약수이다.
2. 첫 번째 숫자가 두 번째 숫자의 배수이다.
3. 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

[배수와 약수](<https://www.acmicpc.net/problem/5086>)

------

## 2. 입력

입력은 여러 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다. 마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.

------

## 3. 출력

각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를, 배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.

------

## 4. 문제 풀이

1. `A`라는 숫자가 `B`라는 숫자의 배수인지 약수인지 확인하는 것은 `%` 연산자로 해결이 가능하다
2. 처음 2가지 조건에 부합하지 않는다면 `neither`를 출력해주면 된다
3. 반복되는 입력의 마지막 입력이 0과 0이기 때문에 3가지 조건에 대해서 부합하는지 확인하기 전에 두 숫자가 0인지 아닌지 확인을 해줘야 에러(0으로 나누는 문제)를 방지할 수 있다