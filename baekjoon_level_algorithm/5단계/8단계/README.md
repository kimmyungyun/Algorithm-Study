# 4344 -  평균은 넘겠지

<hr/>
## 1. 문제 설명

대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

[평균은 넘겠지](<https://www.acmicpc.net/problem/4344>)

------

## 2. 입력

첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

------

## 3. 출력

각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.

------

## 4. 문제 풀이

1. 학생들의 점수를 입력받으면서 평균을 구한다
2. 구한 평균으로 학생들의 점수를 확인하며 명수를 센다
3. 명수의 비율을 구하여 출력한다
4. 이 문제도 역시나 출력할 때나 계산할 때 변수타입을 신경써줘야지 안그러면 값이 제대로 안나온다