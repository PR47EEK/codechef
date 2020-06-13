#https://www.linkedin.com/in/prateekpatel17/
'''
    author--Pr@33|<  '''
for _ in range(int(input())):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))[0:n]
    revenue=0
    for i in l:
        if(i>k):
            revenue+=(i-k)
    print(revenue)
