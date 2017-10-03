def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)


t=int(raw_input())
while t>0:
    n = int(raw_input())
    print fact(n)
    t=t-1
