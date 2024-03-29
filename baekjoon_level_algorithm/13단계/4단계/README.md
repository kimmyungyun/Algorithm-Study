# 2217 -  로프

<hr/>
## 1. 문제 설명

N(1≤N≤100,000)개의 로프가 있다. 이 로프를 이용하여 이런 저런 물체를 들어올릴 수 있다. 각각의 로프는 그 굵기나 길이가 다르기 때문에 들 수 있는 물체의 중량이 서로 다를 수도 있다.

하지만 여러 개의 로프를 병렬로 연결하면 각각의 로프에 걸리는 중량을 나눌 수 있다. k개의 로프를 사용하여 중량이 w인 물체를 들어올릴 때, 각각의 로프에는 모두 고르게 w/k 만큼의 중량이 걸리게 된다.

각 로프들에 대한 정보가 주어졌을 때, 이 로프들을 이용하여 들어올릴 수 있는 물체의 최대 중량을 구해내는 프로그램을 작성하시오. 모든 로프를 사용해야 할 필요는 없으며, 임의로 몇 개의 로프를 골라서 사용해도 된다. 단, 각각의 로프는 한 개씩만 존재한다.

[로프](<https://www.acmicpc.net/problem/2217>)

------

## 2. 입력

첫째 줄에 정수 N이 주어진다. 다음 N개의 줄에는 각 로프가 버틸 수 있는 최대 중량이 주어진다. 이 값은 10,000을 넘지 않는 정수이다.

------

## 3. 출력

첫째 줄에 답을 출력한다.

------

## 4. 문제 풀이

1. 문제를 이해하는데 좀 걸렸다
2. 문제의 핵심은 각 로프에 `w/k` 만큼의 중량이 걸리게 된다 인데
   1. 예를 들면 이해하기 쉽다
   2. 예제 입력에 `10`과 `15`를 주었는데 정답은 `20`이 나온다
   3. 그 이유는 `w/k`만큼이 **모든 로프마다** 중량이 걸리는데 이 값이 로프의 중량을 넘어가면 안되기 때문
   4. 즉 `15`로프만 사용했을 때는 최대 중량이 `15`이다
   5. 그렇지만 `15`와 `10`까지 중량을 사용했을 때 `10`로프에 걸릴 수 있는 중량의 최대값이 `10`이기 때문에 `15`로프에도 똑같이 `10`의 중량이 걸릴 수 밖에 없다
   6. 그래서 `20`이 최댓값이다
3. 이 아이디어를 가지고 알고리즘을 풀면된다
4. 이때, 잠깐 의문이 들은게 무작정 정렬을 하고 마지막 값에다가 로프의 개수를 곱하게 된 것이 가장 큰 값이 아닌가 했지만 반례가 있었다
5. 아래의 예시이다
6. 로프의 중량들을 내림차순으로 정렬을 하고 맨 처음 로프부터 하나씩 증가시키면서 `가장 작은 값 * 선택된 로프의 개수`를 계산하여 최댓값을 찾으면 된다
   1. 예를 들어 주자면
   2. 10, 30, 50, 20 이 있을 때
   3. 내림차순으로 정렬을 하면 50, 30, 20, 10이 된다
   4. 그리고 알고리즘을 돌리면 50 하나만 선택되어 최대 중량은 50이다
   5. 그리고 2개를 선택하게 된다면 50, 30인데 이 때 알고리즘을 계산하면 최대 중량은 60이다
   6. 3개째에서는 60이 되고, 4개째에서는 가장 작은 40이 된다