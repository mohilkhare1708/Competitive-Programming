import sys
def solve(start,end):
    print(start,end)
    #check if size of array is 2
    if abs(end-start)==1:
        if end==0:
            print(start)
            x=input()
            if x=='E':
                sys.exit(0)
            return
        print(start)
        x=input()
        if x=='E':
            sys.exit(0)
        print(end)
        x=input()
        if x=='E':
            sys.exit(0)
        return
    #check if size of array is 1
    if start==end:
        print(start)
        x=input()
        if x=='E':
            sys.exit(0)
        return
    mid=(start+end)//2
    print(mid)
    x=input()
    if x=='E':
        sys.exit(0)
    
    if x=='L':
        mid2=(mid+1+end)//2
        print(mid2)
        x1=input()
        if x1=='E':
            sys.exit(0)

        if x1=='L':
            solve(start,mid2-1)
        else:
            solve(start,mid-1)
            solve(mid2+1,end)
    else:
        mid2=(mid-1+start)//2
        print(mid2)
        x1=input()
        if x1=='E':
            sys.exit(0)
        if x1=='G':
            solve(mid2+1,end)
        else:
            solve(start,mid2-1)
            solve(mid+1,end)



n=int(input())
solve(1,n)