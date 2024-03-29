# 1541 -  잃어버린 괄호

<hr/>
## 1. 문제 설명

세준이는 양수와 +, -, 그리고 괄호를 가지고 길이가 최대 50인 식을 만들었다. 그리고 나서 세준이는 괄호를 모두 지웠다.

그리고 나서 세준이는 괄호를 적절히 쳐서 이 식의 값을 최소로 만들려고 한다.

괄호를 적절히 쳐서 이 식의 값을 최소로 만드는 프로그램을 작성하시오.

[잃어버린 괄호](<https://www.acmicpc.net/problem/1541>)

------

## 2. 입력

첫째 줄에 식이 주어진다. 식은 ‘0’~‘9’, ‘+’, 그리고 ‘-’만으로 이루어져 있고, 가장 처음과 마지막 문자는 숫자이다. 그리고 연속해서 두 개 이상의 연산자가 나타나지 않고, 5자리보다 많이 연속되는 숫자는 없다. 수는 0으로 시작할 수 있다.

------

## 3. 출력

첫째 줄에 정답을 출력한다.

------

## 4. 문제 풀이

1. 문제를 너무 어렵게 생각했다
2. 예제 입력에 `55-50+40`인데 `55-5(0+40)`을 하게 되면은 `55-200`이 나와서 `-145`가 나온다
3. 이렇게 되면은 예제 출력이 잘못된 값이 되버리는데 답을 못찾던 중 `55-(50+40)`을 하게 되면은 예제 출력이 나온다는 것을 알게 됐다
4. 즉 `-`가 처음 나온 이후의 모든 숫자들은 앞에 `-`가 나오건, `+`가 나오건 기존 값에서 빼주면 된다
5. 내 코드의 경우 마지막 값을 계산해주는 것이 없는데 이전에 `-`가 나왔었는지 여부를 확인하여 그냥 더해줄지 `-`를 해줄지 확인하여 더하는 코드를 추가했다