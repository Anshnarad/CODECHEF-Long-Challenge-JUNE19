"""100% AC Solution"""
t=int(input())
for i in range(t):
    n, k = input().split()
    n=int(n)
    k=int(k)
    x=n-1
    s=k-1
    if n==2:
        count=s*(s+1)//2
        print(count%1000000007)
        continue
    else:
        num=s//x + 1
        summ=(num*(2*s+(num-1)*x*-1))//2
        tsum =summ%1000000007
        print(int(tsum))
