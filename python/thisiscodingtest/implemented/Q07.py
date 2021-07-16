a = input()
l = len(a)//2
sm1, sm2 = 0, 0
for i, v in enumerate(a):
    if i < l:
        sm1 += int(v)
    else:
        sm2 += int(v)
if sm1 == sm2:
    print("LUCKY")
else:
    print("READY")

