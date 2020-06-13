for _ in range(int(input())):
    n=int(input())
    l=[]
    n1=1
    for i in range(0,n):
        l2=[]
        for j in range(0,n):
            l2.append(n1)
            n1+=1
        l.append(l2)
    for i in range(0,n):
        if(i==0):
            print(*l[i])
        elif(i==1):
            l[i]=l[i][::-1]
            print(*l[i])
        elif(i%2==0):
            print(*l[i])
        else:
            print(*l[i][::-1])
