for _ in range(int(input())):
    s=input()
    i,group=0,0
    while(i+1<len(s)):
        if(s[i]!=s[i+1]):group+=1
        else:
            i=i-1
        i=i+2
    print(group)
