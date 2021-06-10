# -*- coding: utf8 -*

# 수 정수형

a = 1000
print(a)

a = -7
print(a)

# 0
a = 0
print(a)

# 양의 실수
a = 157.93
print(a)

# 음의 실수
a = -18737.2
print(a)

# 소수부가 0일 때 0을 생략
a = 5.
print(a)

# 정수부가 0일 때 0을 생략
a = -.7
print(a)

# 10억의 지수 표현 방식
a = 1e9
print(a)

# 752.5
a = 75.25e1

# 3.954
a = 3954e-3 # 
print(a)

# 확실히 0.9가 아니다.
a = 0.3 + 0.6
print(a)
if a == 0.9:
    print(True)
else:
    print(False)

# round 함수로 확실하게!
a = 0.3 * 0.6
print(round(a, 4))

if round(a, 4) == 0.9 :
    print(True)
else :
    print(False)

# 거듭 제곱
a = 5
b = 3
print(a**b)

# 리스트
a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(a)

# 인덱스 4, 즉 다섯 번째 원소에 접ㄱ든
print(a[4])

# 빈 리스트 선언 방법
# 1)
a = list()
print(a)
# 2)
a = []
print(a)
# 크기가 N이고, 모든 값이 0인 1차원 리스트 초기화
n = 10
a = [0] * n
print(a)
# 인덱싱
# 뒤에서 첫번째 원소 출력
a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(a[-1])
# 네 번째 원소 값 변경
a[3] = 7
print(a)
# 슬라이싱
print(a[1:4])
# 리스트 컴프리헨션(리스트 초기화)
# 0부터 19까지의 수 중에서 홀수만 포함하는 리스트
array = [i for i in range(20) if i % 2 == 1]
print(array)
# 일반적인 예
# array = []
# for i in range(20):
#     if i % 2 == 1:
#         array.append(i)
# print(array)
# 1부터 9까지의 수의 제곱 값을 포함하는 리스트
array = [i * i for i in  range(1, 10)]
print(array)
# 2차원 리스트를 초기화할 때 효과적
# 특정한 크기를 가지는 2차원 리스트를 초기화할 때에는 리스트 컴프리헨션을 이용해야 한다는 점을 기억
n = 3
m = 4
array = [[0] * m for _ in range(n)]
array[1][1] = 5
print(array)
# 내부적으로 포함된 3개의 리스트가 모두 동일한 객체에 대한 3개의 레퍼런스로 인식되기 때문이다.
n = 3
m = 4
array = [[0] * m] * n
array[1][1] = 5
print(array)
# 리스트 관련 기타 메서드
a = [1, 4, 3]
print("기본 리스트: ", a)
# 원소 삽입 : 시간복잡도 O(1)
a.append(2)
print("삽입 : ", a)
# 오름차순 정렬 : 시간복잡도 O(NlogN)
a.sort()
print("오름차순 정렬 : ", a)
# 내림차순 정렬 : 시간복잡도 O(NlogN)
a.sort(reverse=True)
print("내림차순 정렬 : ", a)
# 리스트 원소 뒤집기 : 시간복잡도 O(N)
a.reverse()
print("원소 뒤집기 : ", a)
# 특정 인덱스에 데이터 추가 : 시간복잡도 O(N)
a.insert(2, 3)
print("원소 뒤집기 : ", a)
# 특정 값인 데이터 개수 세기 : 시간복잡도 O(N)
print("값이 3인 데이터 개수 : ", a.count(3))
# 특정 값 데이터 삭제 : 시간복잡도 O(N)
a.remove(1)
print("값이 1인 데이터 삭제: ", a)
# 특정한 값의 원소를 모두 제거
a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3, 5}
result = [i for i in a if i not in remove_set]
print(result)

# 문자열 자료형
# 문자열 초기화
data  =  "Hello World"
print(data)

data = "don't you know \"Python\"?"
print(data)
# 문자열 연산
a = "Hello"
b = "World"
print(a + " " + b)
a = "String"
print(a * 3)
# 문자열에도 똑같이 인덱싱과 슬라이싱을 이용할 수 있다.
a = "ABCDEF"
print(a[2 : 4])

# 튜플 자료형
"""
1. 튜플은 한 번 선언된 값을 변경할 수 없다.
2. 리스트는 대괄호([])를 이용하지만, 튜플은 소괄호(())를 이용한다.
최단 경로를 찾아주는 알고리즘에서 사용
"""
a = (1, 2, 3, 4)
print(a)
try :
    a[2] = 7
except Exception as err:
    print(err)

# 사전 자료형 : 시간복잡도 O(1)
data = dict()
data['사과'] = 'Apple'
data['바나나'] = 'Banana'
data['코코넛'] = 'Coconut'
print(data)
if '사과' in data : # 리스트나 튜플에서도 사용 가능
    print("'사과'를 키로 가지는 데이터가 존재합니다.")
# 키 데이터만 담은 리스트
print(data.keys())
# 값 데이터만 담은 리스트
print(data.values())
# 둘 다 담은 리스트
print(data.items())
# 각 키에 따른 값을 하나씩 출력
for key in data.keys() :
    print(data[key])

# 집합 자료형 : 시간복잡도 O(1)
"""
1. 중복을 허용하지 않는다.
2. 순서가 없다.
3. 특정한 데이터가 이미 등장한 적이 있는지 여부를 체크할 때 효과적
"""
# 집합 자료형 초기화 방법 1
data = set([1, 1, 2, 3, 4, 4, 5])
print(type(data))
print(data)
# 집합 자료형 초기화 방법 2
data = {1, 1, 2, 3, 4, 4, 5}
print(data)

# 집합 자료형의 연산
a = {1, 2, 3, 4, 5}
b = {3, 4, 5, 6, 7}
print(a | b)
print(a & b)
print(a - b)
data = {1, 2, 3}
print(data)
# 새로운 원소 추가 : 시간복잡도 O(1)
data.add(4)
print(data)
# 새로운 원소 여러개 추가 : 시간복잡도 O(1)
data.update([5, 6])
print(data)
print(data)
# 특정한 값을 갖는 원소 삭제 : 시간복잡도 O(1)
data.remove(3)
print(data)

# 조건문
# 반복문

# 함수
def add(a, b) :
    return (a + b)

print(add(654, 1238))
# 파라미터를 직접 지정해주어도 된다.
def add(a, b) :
    print("함수의 결과 : {0}".format(a + b))

add(b = 3 , a = 7)

a = 0
def func():
    global a
    a += 1

for i in range(10) :
    func()
    print(i)

print(a)

# 람다
print((lambda a, b : a + b)(3, 7))

# # 입출력
# 구분자가 공백인 경우
# data = list(map(int, input().split()))
# print(data)
# data.sort(reverse = True)
# print(data)
# 구분자가 줄 바꿈인 경우
# int(input())
# # 공백을 기준으로 구분하여 적은 수의 데이터 입력
# n, m, k = map(int, input().split())
# print(n, m, k)

# 입력의 개수가 많은 경우
# import sys
# data = sys.stdin.readline().rstrip()
# print(data)

# 출력
a = 1
b = 2

print(a, b)
print(a)
print(b)

answer = 7
print(f"정답은 {answer}입니다.")

# 주요 라이브러리의 문법과 유의점
"""
1. 내장함수
2. itertools 순열과 조합
3. heapq 힙. 우선순위 큐
4. bisect 이진 탐색
5. collections 덱, 카운터
6. math 수학
"""
# 1. 내장함수
# 합
result = sum([1, 2, 3, 4, 5])
print(result)
# 최소
result = min(7, 3, 5, 2)
print(result)
# 최대
result = max(7, 3, 5, 2)
print(result)
# 문자열로 들어온 수식을 계산
result = eval("(3 + 5) * 7")
print(result)
# 정렬
result = sorted([9, 1, 8, 5, 4])
print(result)
result = sorted([9, 1, 8, 5, 4], reverse = True)
print(result)
#리스트는 sort()를 내장하고 있다. sort()를 쓰면 리스트가 됨.
data = [9, 1, 8, 5, 4]
data.sort()
print(data)

data = sorted({1, 2, 3, 4})
print(type(data))

data = sorted({1 : 2, 2 : 3, 3 : 4})
print(type(data))

data = sorted((1, 2, 3, 4))
print(type(data))
# 2. itertools
from itertools import permutations

data = ['a', 'b', 'c']
result = list(permutations(data, 2)) # 모든 순열 구하기
print(result, "\n")
# combinations 조합 (순서 고려x)
from itertools import combinations

data = ['a', 'b', 'c']
result = list(combinations(data, 2)) # 모든 조합 구하기
print(result, "\n")
# product 순열 (중복 허용)
from itertools import product

data = ['a', 'b', 'c']
result = list(product(data, repeat=2)) # 모든 순열 구하기
print(result, "\n")
# combinations 조합 (중복 허용)
from itertools import combinations_with_replacement

data = ['a', 'b', 'c']
result = list(combinations_with_replacement(data, 2)) # 모든 조합 구하기
print(result, "\n")

# 3. heapq : 시간 복잡도 O(NlogN)
import heapq

def heapsort(iterable) :
    h = []
    result = []
    # 모든 원소를 차례대로 힙에 삽입
    for value in iterable :
        heapq.heappush(h, value)
        print(h)
    print(h)
    # 힙에 삽입된 모든 원소를 차례대로 꺼내어 담기
    for value in range(len(h)) :
        result.append(heapq.heappop(h))
        print(result)
    return(result)
result = heapsort([1, 3, 5, 7, 9, 2, 4, 6, 8, 0])
print(result)
# 기본 개념이해가 필요할 것 같다. 우선 코드업 100제를 풀고 난 후 진행
