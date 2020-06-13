for _ in range(int(input())):
    n=int(input())
    shop=list(map(int,input().split()))[0:n]
    ppl=[]
    esc=0
    for i in range(n):
        if shop[i]==1:
            ppl.append(i)
    present=len(ppl)
    if present==1:
        print("YES")
    elif present>1:
        for i in range(1,present):
            if (ppl[i]-ppl[i-1])<6:
                print("NO")
                break
            elif (ppl[i]-ppl[i-1])>=6:
                esc+=1
        if(esc==present-1):
            print("YES")
