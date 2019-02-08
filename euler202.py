import math

b=1000001
n=(b+3)//2
ans = 0

for i in range(2, n//2):
    if math.gcd(i, n) == 1 and (i+1) % 3 == 0:
        ans = ans + 1

ans = ans * 2

print(ans)


