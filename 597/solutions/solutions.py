r1, r2, r3 = map(int, input().split())
if r1 >= r2 and r1 >= r3 and r1 >= r2 + r3:
    print("YES")
else:
    print("NO")
