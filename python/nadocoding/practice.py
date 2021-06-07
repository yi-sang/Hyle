#숫자 자료형
print(5)
print(-10)
print(3.14)
print(1000)
print(5 + 3)
print(16)
print(3 * (3 + 1))

#문자열 자료형
print('풍선'*9) #풍선풍선풍선풍선풍선풍선풍선풍선풍선

# boolean 자료형
print(5 > 10) #False
print(5 < 10) #True
print(True) #True
print(False) #False
print(not True) #False
print(not False) #True
print(not (5 > 10)) #True

# 애완동물을 소개해 주세요~
name = "연탄"
animal = "강아지"
age = 4
hobby = "산책"
is_adult = age >= 3

print("우리 집 " + animal + "의 이름은 " + name + "이에요.")
print(name + "이는 " + str(age) + "살이며, " + hobby + "을 매우 좋아해요.")
print(name, "이는 ", age, "살이며, ", hobby, "을 매우 좋아해요.")
print(name + "이는 어른일까요? " + str(is_adult))

# 주석
'''# print("우리 집 " + animal + "의 이름은 " + name + "이에요.")
# print(name + "이는 " + str(age) + "살이며, " + hobby + "을 매우 좋아해요.")
# print(name, "이는 ", age, "살이며, ", hobby, "을 매우 좋아해요.")
# print(name + "이는 어른일까요? " + str(is_adult))'''
# 드래그 후 ctrl + /

#연산자
print(2**3) # 2^3 = 8
print(5%3) # 나머지 2
print(10//3) # 몫 3
print(10 > 3) # True

print(3 == 3) # True
print(3 + 4 == 7) # True
print(1 != 3) # True

print(not(1 != 3)) # False

print((3 > 0) and (3 < 5)) # True
print((3 > 0) & (3 < 5)) # True

print((3 > 0) or (3 > 5)) # True
print((3 > 0) | (3 > 5)) # True

print(5 > 4 > 3) # True
print(5 > 4 > 7) # False

# 간단한 수식
print(2 + 3 * 4) # 14
print((2 + 3) * 4) # 20
number = 2 + 3 * 4 # 14
number += 2 # 16
print(number)
number *= 2 # 32
print(number)
number /= 2 # 16
print(number)
number -= 2 # 14
print(number)
number %= 5 # 4
print(number)

# 숫자 처리 함수
print(abs(-5)) # 5
print(pow(4, 2)) # 4^2 = 16
print(4**2) # 4^2 = 16
print(max(5, 12)) # 12
print(min(5, 12)) # 12
print(round(3.14)) # 3
print(round(4.99)) # 5

from math import *
print(floor(4.99)) # 내림 4
print(ceil(3.14)) # 올림 4
print(sqrt(16)) # 16의 제곱근 4

# 랜덤 함수
from random import *

print(random()) # 0.0 ~ 1.0 미만의 임의의 값 생성
print(random() * 10) # 0.0 ~ 10.0 미만의 임의의 값 생성
print(int(random() * 10)) # 0 ~ 10 미만의 임의의 값 생성
print(int(random() * 10) + 1) # 0 ~ 10 이하의 임의의 값 생성

print(randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46),sep = ', ')
# 0 ~ 46 미만의 임의의 값 생성
print(randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), sep = ', ')
# 0 ~ 45 이하의 임의의 값 생성

# 문자열
sentence1 = '나는 소년입니다'
print(sentence1)
sentence2 = '파이썬은 쉽네요'
print(sentence2)
sentence3 = """
나는 소년입니다
파이썬은 쉽네요
"""

# 슬라이싱
jumin = "990120-1234567"

print("성별 : " + jumin[7]) # 1
print("연 : " + jumin[0 : 2]) # 99
print("월 : " + jumin[2 : 4]) # 01
print("일 : " + jumin[4 : 6]) # 20

print("생년월일 : " + jumin[ : 6]) # 990120
print("뒤 7자리 : " + jumin[7 : ]) # 1234567
print("뒤 7자리(뒤에 부터) : " + jumin[-7 : ]) # 1234567 맨 끝자리 = -1

# 문자열 처리 함수
python = "Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())

#숫자 자료형
print(5)
print(-10)
print(3.14)
print(1000)
print(5 + 3)
print(16)
print(3 * (3 + 1))

#문자열 자료형
print('풍선'*9) #풍선풍선풍선풍선풍선풍선풍선풍선풍선

# boolean 자료형
print(5 > 10) #False
print(5 < 10) #True
print(True) #True
print(False) #False
print(not True) #False
print(not False) #True
print(not (5 > 10)) #True

# 애완동물을 소개해 주세요~
name = "연탄"
animal = "강아지"
age = 4
hobby = "산책"
is_adult = age >= 3

print("우리 집 " + animal + "의 이름은 " + name + "이에요.")
print(name + "이는 " + str(age) + "살이며, " + hobby + "을 매우 좋아해요.")
print(name, "이는 ", age, "살이며, ", hobby, "을 매우 좋아해요.")
print(name + "이는 어른일까요? " + str(is_adult))

# 주석
'''# print("우리 집 " + animal + "의 이름은 " + name + "이에요.")
# print(name + "이는 " + str(age) + "살이며, " + hobby + "을 매우 좋아해요.")
# print(name, "이는 ", age, "살이며, ", hobby, "을 매우 좋아해요.")
# print(name + "이는 어른일까요? " + str(is_adult))'''
# 드래그 후 ctrl + /

#연산자
print(2**3) # 2^3 = 8
print(5%3) # 나머지 2
print(10//3) # 몫 3
print(10 > 3) # True

print(3 == 3) # True
print(3 + 4 == 7) # True
print(1 != 3) # True

print(not(1 != 3)) # False

print((3 > 0) and (3 < 5)) # True
print((3 > 0) & (3 < 5)) # True

print((3 > 0) or (3 > 5)) # True
print((3 > 0) | (3 > 5)) # True

print(5 > 4 > 3) # True
print(5 > 4 > 7) # False

# 간단한 수식
print(2 + 3 * 4) # 14
print((2 + 3) * 4) # 20
number = 2 + 3 * 4 # 14
number += 2 # 16
print(number)
number *= 2 # 32
print(number)
number /= 2 # 16
print(number)
number -= 2 # 14
print(number)
number %= 5 # 4
print(number)

# 숫자 처리 함수
print(abs(-5)) # 5
print(pow(4, 2)) # 4^2 = 16
print(4**2) # 4^2 = 16
print(max(5, 12)) # 12
print(min(5, 12)) # 12
print(round(3.14)) # 3
print(round(4.99)) # 5

from math import *
print(floor(4.99)) # 내림 4
print(ceil(3.14)) # 올림 4
print(sqrt(16)) # 16의 제곱근 4

# 랜덤 함수
from random import *

print(random()) # 0.0 ~ 1.0 미만의 임의의 값 생성
print(random() * 10) # 0.0 ~ 10.0 미만의 임의의 값 생성
print(int(random() * 10)) # 0 ~ 10 미만의 임의의 값 생성
print(int(random() * 10) + 1) # 0 ~ 10 이하의 임의의 값 생성

print(randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46), randrange(1, 46),sep = ', ')
# 0 ~ 46 미만의 임의의 값 생성
print(randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), randint(1, 45), sep = ', ')
# 0 ~ 45 이하의 임의의 값 생성

# 문자열
sentence1 = '나는 소년입니다'
print(sentence1)
sentence2 = '파이썬은 쉽네요'
print(sentence2)
sentence3 = """
나는 소년입니다
파이썬은 쉽네요
"""

# 슬라이싱
jumin = "990120-1234567"

print("성별 : " + jumin[7]) # 1
print("연 : " + jumin[0 : 2]) # 99
print("월 : " + jumin[2 : 4]) # 01
print("일 : " + jumin[4 : 6]) # 20

print("생년월일 : " + jumin[ : 6]) # 990120
print("뒤 7자리 : " + jumin[7 : ]) # 1234567
print("뒤 7자리(뒤에 부터) : " + jumin[-7 : ]) # 1234567 맨 끝자리 = -1

# 문자열 처리 함수
python = "Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())
print(len(python))
print(python.replace("Python", "Java"))
index = python.index("n")
print(index) # 5
index = python.index("n", index + 1)
print(index) # 15
print(python.find("Java")) # -1
#print(python.index("Java")) # Error
print(python.count("n")) # 2번

# 문자열 포맷
print("a" + "b")
print("a", "b")
# 방법1
print("나는 %d살입니다." % 20) # 나는 20살입니다
print("나는 %s을 좋아해요." % "파이썬") # 나는 파이썬을 좋아해요.
print("Apple은 %c로 시작해요." % "A") # Apple은 A로 시작해요
print("나는 %s색과 %s색을 좋아해요.\n" % ("파란", "빨간")) # 나는 파란색과 빨간색을 좋아해요
# 방법2
print("나는 {}살입니다.".format(20)) # 나는 20살입니다
print("나는 {}색과 {}색을 좋아해요.".format("파란", "빨간")) # 나는 파란색과 빨간색을 좋아해요.
print("나는 {1}색과 {0}색을 좋아해요.".format("파란", "빨간")) # 나는 빨간색과 파란색을 좋아해요.
print("나는 {0}색과 {1}색을 좋아해요.".format("파란", "빨간")) # 나는 파란색과 빨간색을 좋아해요.
# 방법3
print("나는 {age}살이며, {color}색을 좋아해요.".format(age = 20, color = "빨간")) # 나는 20살이며 빨간색을 좋아해요.
print("나는 {age}살이며, {color}색을 좋아해요.".format(color = "빨간", age = 20)) # 나는 20살이며 빨간색을 좋아해요.
# 방법4
age = 20
color = "파란"
print(f"나는 {age}살이며, {color}색을 좋아해요.") # 나는 20살이며 파란색을 좋아해요.

# 탈출문자
print("백문이 불여일견\n백견이 불여일타")
print('저는 "나도코딩"입니다') # 반대로
print("저는 '나도코딩'입니다") # 반대로
print("저는 \"나도코딩\"입니다") # 역슬러쉬 \

print("C:\\Users\\왕 감 자\\Desktop\\python") # 역슬러쉬 두번 \\
print("Red Apple\rPine") # \r : 커서를 맨 앞으로 이동 PineApple
print("Redd\bApple") # \b : 백스페이스 Red Apple
print("Red\tApple") # \t : tap Red  Apple

# Quiz) 사이트별로 비밀번호를 만들어주는 프로그램을 작성하시오
# 예) http://naver.com
# 규칙1 : http:// 부분은 제외 => naver.com
# 규칙2 : 처음 만나는 점(.) 이후 부분은 제외 => naver
# 규칙3 : 남은 글자 중 처음 세자리 + 글자 갯수 + 글자 내 'e' 갯수 + "!" 로 구성
# => nav51!
site = "http://hanmail.net"
pw_recipe = site[7:site.index(".")]
password = pw_recipe + str(len(pw_recipe)) + str(pw_recipe.count("e")) + "!"
print("{}의 비밀번호는  {}입니다.".format(site, password))

# 리스트
subway = [10, 20, 30]
print(subway)
subway1 = ["유재석", "조세호", "박명수"]
print(subway1)
# 조세호씨가 몇 번째 칸에 타고 있는가?
print(str(subway1.index("조세호")) + "번째")
# 하하씨가 다음 정류장에서 다음 칸에 탐
subway1.append("하하") # 리스트 항목 추가
print(subway1) # ['유재석', '조세호', '박명수', '하하']
# 정현돈씨를 유재석 / 조세호 사이에 태워봄
subway1.insert(1, "정형돈")
print(subway1) # ['유재석', '정형돈', '조세호', '박명수', '하하']
# 지하철에 있는 사람을 한 명씩 뒤에서 꺼냄
subway1.pop() # 하하
print(subway1) # ['유재석', '정형돈', '조세호', '박명수']
# 같은 이름의 사람이 몇 명있는지 확인
subway1.append("유재석")
print(subway1)
print(subway1.count("유재석")) # 2
subway1.remove("유재석") # 리스트 삭제
print(subway1) # ['정형돈', '조세호', '박명수', '유재석']
# 정렬
subway1.sort() # 사전 순서
print(subway1) # ['박명수', '유재석', '유재석', '정형돈', '조세호']
subway1.reverse()# 거꾸로
print(subway1) # ['조세호', '정형돈', '유재석', '유재석', '박명수']
subway1.clear() # 리스트 초기화 
print(subway1) # []
subway1 = ["조세호", 18, True] # 다양한 자료형 함께 사용
print(subway1)
subway.extend(subway1) # 리스트 확장
print(subway) # [10, 20, 30, '조세호', 18, True]

# 사전
cabinet = {3 : "유재석", 100 : "김태호"} # key : value
print(cabinet[3]) # 유재석
print(cabinet[100]) # 김태호

print(cabinet.get(3)) # 유재석
# print(cavinet[5]) Error
print(cabinet.get(5)) # None
print(cabinet.get(5, "조세호")) # 없으면 "조세호"
print(3 in cabinet) # True
print("유재석" in cabinet) # False
# 새 손님
cabinet[5] = "조세호"
cabinet[3] = "김종국"
print(cabinet)
# 간 손님
del cabinet[3]
print(cabinet)
# key 들만 출력
print(cabinet.keys()) # dict_keys([100, 5])
# value 들만 출력
print(cabinet.values()) # dict_values(['김태호', '조세호'])
# 둘 다 출력
print(cabinet.items()) # dict_items([(100, '김태호'), (5, '조세호')])
# 초기화
cabinet.clear()
print(cabinet) # {}

# 튜플
menu = ("돈까스", "치즈까스")
print(menu[0])
print(menu[1])
name = "김종국"
age = 20
hobby = "코딩"
print(name, age, hobby)
#---------------------------------------------
(name, age, hobby) = ("김종국", "20", "운동")
print(name, age, hobby)

# 집합(set)
# 중복 안 됨, 순서 없음

my_set = {1, 2, 3, 3, 3} # key와 value없이
print(my_set) # {1, 2, 3}
can_java = {"유재석", "김태호", " 양세형"}
can_python = set(["유재석", "박명수"])
# 교집합(java와 python을 모두 할 수 있는 개발자)
print(can_java & can_python) # {'유재석'}
print(can_java.intersection(can_python)) # {'유재석'}
# 합집합(java를 할 수 있거나 python을 할 수 있는 개발자)
print(can_java | can_python) # {'유재석', '박명수', '김태호', ' 양세형'}
print(can_java.union(can_python)) # {'유재석', '박명수', '김태호', ' 양세형'}
# 차집합
print(can_java - can_python) # {' 양세형', '김태호'}
print(can_java.difference(can_python)) # {' 양세형', '김태호'}
'''can_java1 =["유재석", "김태호", "양세형"]
can_python1 =["유재석", "박명수"]
print(can_java1)
print(can_java1 & can_python1)''' # 리스트로 하면 Error
# python을 할 줄 아는 사람이 늘어남
can_python.add("김태호") 
print(can_python) # {'김태호', '박명수', '유재석'}
# java를 잊었음
can_java.remove("유재석")
print(can_java) # {'김태호', ' 양세형'}

# 자료구조의 변경
# 커피숍
menu = {"커피", "우유", "쥬스"}
print(menu, type(menu)) # {'우유', '커피', '쥬스'} <class 'set'>

menu = list(menu)
print(menu, type(menu)) # ['우유', '커피', '쥬스'] <class 'list'>

menu = tuple(menu)
print(menu, type(menu)) # ('우유', '커피', '쥬스') <class 'tuple'>

menu = set(menu)
print(menu, type(menu)) # {'우유', '커피', '쥬스'} <class 'set'>

'''
Quiz) 당신의 학교에서는 파이썬 코딩 대회를 주최합니다.
참석률을 높이기 위해 댓글 이벤트를 진행하기로 하였습니다.
댓글 작성자들 중에 추첨을 통해 1명은 치킨, 3명은 커피 쿠폰을 받게 됩니다.
추첨 프로그램을 작성하시오.

조건1 : 편의상 댓글은 20명이 작성하였고 아이디는 1~20 이라고 가정
조건2 : 댓글 내용과 상관없이 무작위로 추첨하되 중복 불가
조건3 : random 모듈의 shuffle과 sample을 활용

(출력 예제)
-- 당첨자발표 --
치킨 당첨자 : 1
커피 당첨자 : [2, 3, 4]
-- 축하합니다 --

(활용 예제)
from random import *
first = [1, 2, 3, 4, 5]
print(first)
shuffle(first)
print(first)
print(sample(first, 1)) # 무작위로 추첨
'''
event = list(range(1, 20)) 
shuffle(event)
draw = list()
draw.append(event[0])
draw.append(event[1])
draw.append(event[2])
event.remove(event[0])
event.remove(event[1])
event.remove(event[2])
print("치킨 당첨자 : {0}".format(sample(event, 1)[0]))
print("커피 당첨자 :", draw)

print("-- 당첨자발표 --")
print("-- 축하합니다 --")

# condithonal
# if
# for
# while

# 한 줄 for
# 출석번호가 1 2 3 4 5 앞에 100을 붙이기로 함
student = list(range(1, 6))
print(student) # [1, 2, 3, 4, 5]
student = [i + 100 for i in student]
print(student) # [101, 102, 103, 104, 105]
# 학생 이름을 길이로 변환
students = ["Iron man", "Thor", "I am groot"]
students = [len(i) for i in students]
print(students)
# 학생 이름을 대문자로 변환
students1 = ["iron man", "Thor", "I am groot"]
students1 = [i.upper() for i in students1]
print(students1)

'''
Quiz) 당신은 코코아 서비스를 이용하는 택시 기사님입니다.
50명의 승객과 매칭 기회가 있을 때, 총 탑승 승객 수를 구하는 프로그램을 작성하시오.

조건1 : 승객별 운행 소요 기간은 5분 ~ 50분 사이의 난수로 정해집니다.
조건2 : 당신은 소요 시간 5분 ~ 15분 사이의 승객만 매칭해야 합니다.

(출력문 예제)
[o] 1번째 손님 (소요시간 : 15분)
[ ] 2번째 손님 (소요시간 : 50분)
[o] 3번째 손님 (소요시간 : 5분)
...
[ ] 50번째 손님 (소요시간 : 16분)

총 탑승 승객 : 2 분
'''
minute = []
yes_no = []
cnt = 0
for i in range(51) :
    minute.append(randrange(5, 51))
    if minute[i] < 15 :
        yes_no.append("o")
        cnt += 1
    else :
        yes_no.append(" ")
    print("[{0}] {1}번째 손님 (소요시간 : {2}분)".format(yes_no[i], i, minute[i]))
print("총 탑승 승객 : {0}분".format(cnt))

# 함수
def open_account() :
    print("새로운 계좌가 생성되었습니다.")
open_account()

# 전달값과 반환값
def deposit(balance, money) : # 입금
    print("입금이 완료되었습니다. 잔액은 {0} 원 입니다.".format(balance + money))
    return balance + money
def withdraw(balance, money) : # 출금
    if balance >= money :
        print("출금이 완료되었습니다. 잔액은 {0}원 입니다.".format(balance - money))
        return balance - money
    else :
        print("출금이 완료되지 않았습니다. 잔액은 {0}원 입니다.".format(balance))
        return balance
def withdraw_night(balance, money) : #저녁에 출금
    commission = 100 # 수수료 100원
    return commission, balance - money - commission
balance = 0 # 잔액
balance = deposit(balance, 5000)
# balance = withdraw(balance, 2000)
# balance = withdraw_night(balance, 500)
commission, balance = withdraw_night(balance, 500)
print("수수료는 {0}원이며, 잔액은 {1}원입니다.".format(commission, balance))

# 기본값
def profile(name, age, main_lang) :
    print("이름 : {0}\t나이 : {1}\t주 사용 언어 : {2}"\
        .format(name, age, main_lang))
profile("유재석", 20, "파이썬")
profile("김태호", 20, "자바")
# 같은 학교, 같은 학년 같은 반, 같은 수업
def profile(name, age=17, main_lang="파이썬") :
    print("이름 : {0}\t나이 : {1}\t주 사용 언어 : {2}"\
        .format(name, age, main_lang))
profile("유재석")
profile("김태호", 17, "자바")

# 키워드 값
def profile(name, age, main_lang) :
    print("이름 : {0}\t나이 : {1}\t주 사용 언어 : {2}"\
        .format(name, age, main_lang))

profile(name = "유재석", main_lang = "파이썬", age = 20)
profile(main_lang = "파이썬", age = 20, name = "김태호")

# 가변 인자
'''def profile(name, age, lang1, lang2, lang3, lang4, lang5) :
    print("이름 : {0}\t나이 : {1}\t"\
        .format(name, age), end = " ")
    print(lang1, lang2, lang3, lang4, lang5)
profile("유재석", 20, "Python", "Java", "C", "C++", "C#")
profile("유재석", 20, "Python", "Java", "", "", "")'''
def profile(name, age, *language) :
    print("이름 : {0}\t나이 : {1}\t"\
        .format(name, age), end = "")
    for lang in language :
        print(lang, end = " ")
    print()
profile("유재석", 20, "Python", "Java", "C", "C++", "C#", "Swift")
profile("유재석", 20, "Python", "Java")

# 지역변수와 전역변수
gun = 10
def checkpoint(soldiers) : # 경계 근무
    global gun # 전역 공간에 있는 gun 사용
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))
def checkpoint_ret(gun, soldiers) : # 경계 근무
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))
    return gun

print("전체 총 : {0}".format(gun))
checkpoint(2) # 두명이 경계 근무를 나감
gun = checkpoint_ret(gun, 2)
print("남은 총 : {0}".format(gun))

'''
Quiz) 표준 체중을 구하는 프로그램을 작성하시오

* 표준 체중 : 각 개인의 키에 적당한 체중
(성별에 따른 공식)
 남자 : 키(m) x 키(m) x 22
 여자 : 키(m) x 키(m) x 21

조건1 : 표준 체중은 별도의 함수 내에서 계산
        * 함수명 : std_weight
        * 전달값 : 키(height), 성별(gender)
조건2 : 표준 체중은 소수점 둘째 자리까지 표시

(출력 예제)
키 175cm 남자의 표준 체중은 67.38kg 입니다.
'''
'''height = int(input("너 키 몇이야?"))
gender = input("성별은 뭐야?")

def std_weight(height, gender) :
    if gender == "남자" :
        std_wgt = (height / 100) ** 2 * 22
    elif gender == "여자" :
        std_wgt = (height / 100) ** 2 * 21
    return(std_wgt)

std_wgt = round(std_weight(height, gender), 2)
print("키 {0}cm {1}의 표준 체중은 {2}kg 입니다.".format(height, gender, std_wgt))'''

# 표준 입출력 
import sys
print("python", "java", sep=", ", end="?\n")
print("python", "java", file=sys.stdout) # 표준 출력
print("python", "java", file=sys.stderr) # 표준 에러
# 시험 성적
scores = {"수학":0, "영어":50, "코딩":100}
for subject, score in scores.items():
    print(subject.ljust(8), str(score).rjust(4), sep=":")
    # 수학      :   0
    # 영어      :  50
    # 코딩      : 100
# 은행 대기 순번표
# 001, 002, 003, ...
for num in range(1, 21) :
    print("대기번호 : " + str(num).zfill(3)) # 3개의 공간을 확보하고 나머지 빈공간에는 0으로 채움
'''answer = input("아무값이나 입력하세요 : ")
print(type(answer)) # <class 'str'>
print("입력하신 값은 " + answer + "입니다.")'''

# 다양한 출력포맷
# 빈 자리는 빈 공간으로 두고, 오른쪽 정렬을 하되, 총 10자리 공간을 확보
print("{0: >10}".format(500))
# 양수일 땐 +로 표시, 음수일 땐 -로 표시
print("{0: >+10}".format(500))
print("{0: >+10}".format(-500))
# 왼쪽 정렬하고, 빈칸을 _로 채움
print("{0:_<+10}".format(500))
print("{0:_<+10}".format(-500))
# 3자리 마다 콤마를 찍어주기
print("{0:,}".format(100000000))
# 3자리 마다 콤마를 찍어주기, +-부호도 붙이기
print("{0:+,}".format(100000000))
print("{0:+,}".format(-100000000))
# 3자리 마다 콤마를 찍어주기, +-부호도 붙이기, 30자릿수 확보하기
# 빈 자리는 ^로 채우기
print("{0:^>+30,}".format(-100000000))
print("{0:^<+30,}".format(-100000000))
# 소수점 출력
print("{0:f}".format(5/3))
# 소수점 특정 자리수 까지만 표시
print("{0:.2f}".format(5/3))

# 파일 입출력
# score_file = open("score.txt", "w", encoding="utf8") # 덮어쓰기
# print("수학 : 0", file=score_file)
# print("영어 : 50", file=score_file)
# score_file.close()
# score_file = open("score.txt", "a", encoding="utf8") # append
# score_file.write("과학 : 80")
# score_file.write("\n코딩 : 100")
# score_file.close()
# score_file = open("score.txt", "r", encoding="utf-8")
# print(score_file.read())
# score_file.close()
# score_file = open("score.txt", "r", encoding="utf-8")
# print(score_file.readline(), end="")
# print(score_file.readline(), end="")
# print(score_file.readline(), end="")
# print(score_file.readline())
# score_file.close()
# score_file = open("score.txt", "r", encoding="utf-8")
# while True :
#     line = score_file.readline()
#     if not line :
#         break
#     print(line, end="")
# score_file.close()
# score_file = open("score.txt", "r", encoding="utf-8")
# lines = score_file.readlines()
# for line in lines :
#     print(line, end="")
# score_file.close()

# pickle
# import pickle
# profile_file = open("profile.pickle", "wb") # binary
# profile = {"이름":"박명수","나이":30,"취미":["축구", "골프", "코딩"]}
# print(profile)
# pickle.dump(profile, profile_file) # profie 에 있는 정보를 file에 저장
# profile_file.close()
# profile_file = open("profile.pickle", "rb")
# profile = pickle.load(profile_file) # file에 있는 정보를 profile에 불러오기
# print(profile)
# profile_file.close()

# with # 짧고 close를 할 필요X
# import pickle
# with open("profile.pickle", "rb") as profile_file :
#     print(pickle.load(profile_file))
#------------------------------------------------------------------
# with open("study.txt", "w", encoding="utf-8") as study_file:
#     study_file.write("파이썬을 열심히 공부하고 있어요")
# with open("study.txt", "r", encoding="utf-8") as study_file :
#     print(study_file.read())

'''Quiz) 당신의 회사에서는 매주 1회 작성해야 하는 보고서가 있습니다.
보고서는 항상 아래와 같은 형태로 출력되어야 합니다.

- x 주차 주간보고 -
부서 :
이름 :
업무 요약 :

1주차부터 50주차 까지의 보고서 파일을 만드는 프로그램을 작성하시오.

조건 : 파일명은 '1주차.txt', '2주차.txt', ... 과 같이 만듭니다.
'''
# for i in range(1, 51) :
#     with open("{0}주차.txt".format(i), "w", encoding="utf-8") as report_file:
#         report_file.write("- {} 주차 주간보고 -\n부서 :\n이름 :\n업무 요약 :".format(i))

# 클래스(스타크래프트)
# __init__
from random import *
# 일반 유닛
class Unit :
    def __init__(self, name, hp, speed) :
        self.name = name
        self.hp = hp
        self.speed = speed
        print("{0} 유닛이 생성되었습니다.".format(name))

    def move(self, location) :
        print("{0} : {1} 방향으로 이동합니다. [속도 {2}]"\
            .format(self.name, location, self.speed))

    def damaged(self, damage) :
        print("{0} : {1} 데미지를 입었습니다."\
            .format(self.name,  damage))
        self.hp -= damage
        print("{0} : 현재 체력은 {1}입니다.".format(self.name, self.hp))
        if self.hp <= 0 :
            print("{0} : 파괴되었습니다.".format(self.name))

'''marine1 = Unit("마린", 40, 5)
marine2 = Unit("마린", 40, 5)
tank1 = Unit("탱크", 150, 35)
marine3 = Unit("마린", 40, 5)

# 멤버 변수
wraith1 = Unit("레이스", 80, 5)
print("유닛 이름 : {0}, 공격력 : {1}".format(wraith1.name, wraith1.damage))
wraith2 = Unit("빼앗은 레이스", 80, 5)
wraith2.clocking = True
if wraith2.clocking == True:
    print("{0}는 현재 클로킹 상태입니다.".format(wraith2.name))'''

# 메소드
# 공격 유닛
class AttackUnit(Unit) :
    def __init__(self, name, hp, speed, damage) :
# 상속
        Unit.__init__(self, name, hp, speed)
        self.damage = damage
    
    def attack(self, location) :
        print("{0} : {1} 방향으로 적군을 공격합니다. [공격력 {2}]"\
            .format(self.name, location, self.damage))

class Marine(AttackUnit) :
    def __init__(self) :
        AttackUnit.__init__(self, "마린", 40, 1, 5)
    
    def stimpack(self):
        if self.hp > 10 :
            self.hp -= 10
            print("{0} : 스팀팩을 사용합니다. (hp 10 감소)".format(self.name))
        else :
            print("{0} : 체력이 부족하여 스팀팩을 사용하지 않습니다.".format(self.name))
# 다중 상속
class Flyable:
    def __init__(self, flying_speed):
        self.flying_speed = flying_speed
    
    def fly(self, name, location):
        print("{0} : {1} 방향으로 날아갑니다. [속도 {2}]"\
            .format(name, location, self.flying_speed))

class Tank(AttackUnit) :
    seize_developed = False

    def __init__(self) :
        AttackUnit.__init__(self, "탱크", 150, 1, 35)
        self.seize_mode = False

    def set_seize_mode(self):
        if Tank.seize_developed == False :
            return

        if self.seize_mode == False:
            print("{0} : 시즈모드로 전환됩니다.".format(self.name))
            self.damage *= 2
            self.sieze_mode = True
        else:
            print("{0} : 시즈모드를 해제합니다.".format(self.name))
            self.damage /= 2
            self.seize_mode = False

class FlyableAttackUnit(AttackUnit, Flyable):
    def __init__(self, name, hp, damage, flying_speed):
        AttackUnit.__init__(self, name, hp, 0, damage) # 지상 speed 0
        Flyable.__init__(self, flying_speed)
# 메소드 오버라이딩
    def move(self, location) :
        self.fly(self.name, location)


class Wraith(FlyableAttackUnit) :
    def __init__(self) :
        FlyableAttackUnit.__init__(self, "레이스", 80, 20 , 5)
        self.clocked = False
    
    def clocking(self) :
        if self.clocked == True :
            print("{0} : 클로킹 모드 해제합니다.".format(self.name))
            self.clocked = False
        else :
            print("{0} : 클로킹 모드 설정합니다.".format(self.name))
            self.clocked = True
def game_start():
    print("[알림] 새로운 게임을 시작합니다.")

def game_over():
    print("Player : gg")
    print("[Player] 님이 게임에서 퇴장하셨습니다.")

'''# 파이어뱃 : 공격 유닛, 화염방사기.
firebat1 = AttackUnit("파이어뱃", 50, 16)
firebat1.attack("5시")
# 공격 2번 받는다고 가정
firebat1.damaged(25)
firebat1.damaged(25)'''


# valkyrie = FlyableAttckUnit("발키리", 200, 6, 5)
# valkyrie.fly(valkyrie.name, "3시")
# vulture = AttackUnit("벌쳐", 80, 10, 20)
# battlecruiser = FlyableAttckUnit("배틀크루저", 500, 25, 3)
# vulture.move("11시")
# battlecruiser.move("11시")

# pass
# class BuildingUnit(Unit) :
#     def __init__(self, name, hp, location) :
#         # Unit.__init__(self, name, hp, 0)
#         super().Unit.__init__(name, hp, 0)
#         # 다중상속이 필요할 때는 super를 안 씀
#         self.location = location

# supply_depot = BuildingUnit("서플라이 디폿", 500, "7시")

'''def game_over():
    pass
def gamestart():
    print("[알림] 새로운 게임을 시작합니다.")

gamestart()
game_over()'''

# 게임 시작
game_start()

m1 = Marine()
m2 = Marine()
m3 = Marine()

t1 = Tank()
t2 = Tank()

w1 = Wraith()

# 유닛 일괄 관리
attack_units = []
attack_units.append(m1)
attack_units.append(m2)
attack_units.append(m3)
attack_units.append(t1)
attack_units.append(t2)
attack_units.append(w1)

for unit in attack_units :
    unit.move("1시")

Tank.seize_developed = True
print("[알림] 탱크 시즈 모드 개발이 완료되었습니다.")

for unit in attack_units :
    if isinstance(unit, Marine) :
        unit.stimpack()
    elif isinstance(unit, Tank) :
        unit.set_seize_mode()
    elif isinstance(unit, Wraith) :
        unit.clocking()

# 전군 공격
for unit in attack_units :
    unit.attack("1시")

# 전군 피해
for unit in attack_units :
    unit.damaged(randint(5, 21))

#게임 종료
game_over()

'''Quiz) 주어진 코드를 활용하여 부동산 프로그램을 작성하시오.

(출력 예제)
총 3대의 매물이 있습니다.
강남 아파트 매매 10억 2010년
마포 오피스텔 전세 5억 2007년
송파 빌라 월세 500/50 2000년
'''
class House :
    # 매물 초기화
    def __init__(self, location, house_type, deal_type, price, completion_year) :
        self.location = location
        self.house_type = house_type
        self.deal_type = deal_type
        self.price = price
        self.completion_year =completion_year

    # 매물 정보 표시
    def show_detail(self) :
        print(self.location, self.house_type, self.deal_type, \
            self.price, self.completion_year)

houses = []
houses1 = House("강남", "아파트", "매매", "10억", "2010년")
houses2 = House("마포", "오피스텔", "전세", "5억", "2007년")
houses3 = House("송파", "빌라", "월세", "500/50", "2000년")

houses.append(houses1)
houses.append(houses2)
houses.append(houses3)

print("총 {0}대의 매물이 있습니다.".format(len(houses)))
for house in houses:
    house.show_detail()

# # 예외처리
# try :
#     print("나누기 전용 계산기입니다.")
#     nums = []
#     nums.append(int(input("첫 번째 숫자를 입력하세요 : ")))
#     nums.append(int(input("두 번째 숫자를 입력하세요 : ")))
#     # nums.append(int(nums[0] / nums[1]))
#     print("{0} / {1} = {2}".format(nums[0], nums[1], nums[2]))

# except ValueError :
#     print("에러! 잘못된 값을 입력하였습니다.")

# except ZeroDivisionError as err:
#     print(err)

# except Exception as err:
#     print("알 수 없는 에러가 발생하였습니다.")
#     print(err)

# # 에러 발생시키기
# try :
#     print("한 자리 숫자 나누기 전용 계산기입니다.")
#     num1 = int(input("첫 번째 숫자를 입력하세요 : "))
#     num2 = int(input("첫 번째 숫자를 입력하세요 : "))
#     if num1 >= 10 or num2 >= 10 :
#         raise ValueError
#     print("{0} / {1} = {2}".format(num1, num2, int(num1 / num2))
# except ValueError :
#     print("잘못된 값을 입력하였습니다. 한 자리 숫자만 입력하세요")

class BigNumberError(Exception) :
    def __init__(self, msg) :
        self.msg = msg

    def __str__(self) :
        return self.msg

try :
    print("한 자리 숫자 나누기 전용 계산기입니다.")
    num1 = int(input("첫 번째 숫자를 입력하세요 : "))
    num2 = int(input("첫 번째 숫자를 입력하세요 : "))
    if num1 >= 10 or num2 >= 10 :
        raise BigNumberError("입력값 : {0}, {1}".format(num1, num2))
    print("{0} / {1} = {2}".format(num1, num2, int(num1 / num2)))
except ValueError :
    print("잘못된 값을 입력하였습니다. 한 자리 숫자만 입력하세요")
except BigNumberError as err :
    print("에러가 발생하였습니다. 한 자리 숫자만 입력하세요")
    print(err)
finally :
    print("계산기를 이용해 주셔서 감사합니다.")

# Quiz