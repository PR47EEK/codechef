for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if(a[0]!=5):print("NO")
    else:
        l=a.copy()
        j=True
        for i in range(0,len(a)):
            if(a[i]==5):j=True
            elif(a[i]==10 and l[0:i].count(5)>=1):
                l.remove(5)
                l=[0]+l
                j=True
            elif(a[i]==15 and (l[0:i].count(10)>=1 or l[0:i].count(5)>=2)):
                if(l[0:i].count(10)>=1):
                    l.remove(10)
                    l=[0]+l
                    j=True
                else:
                    l.remove(5)
                    l.remove(5)
                    l=[0,0]+l
                    j=True
            else:
                j=False
                break
        if(j==True):print("YES")
        else:print("NO")
        
