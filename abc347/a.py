n = int(input())
k = int(input())

a=[]

for i in range(n):
    tmp = int(input())
    if (tmp%k) == 0:
        a.append(int(tmp/k))
        
a.sort()
print(*a)