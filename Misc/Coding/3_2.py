for _ in range(int(input())):
    p, q, r = map(int, input().split())
    a, b, c = map(int, input().split())
    if a == p and b == q and c == r:
        print(0)
    elif (a == p and b == q and c != r) or (a != p and b == q and c == r) or (a == p and b != q and c == r):
        print(1)
    elif a != p and b != q and c == r:
        if (a-p == b-q) or ((p > a and q > b) and (p//a == q//b) and (p%a == 0)) or ((a > p and b > q) and (a//p == b//q) and (a%p == 0)):
            print(1)
        else:
            print(2)
    elif a != p and b == q and c != r:
        if (a-p == c-r) or ((p > a and r > c) and (p//a == r//c) and (p%a == 0)) or ((a > p and c > r) and (a//p == c//r) and (a%p == 0)):
            print(1)
        else:
            print(2)
    elif a == p and b != q and c != r:
        if (c-r == b-q) or ((r > c and q > b) and (r//c == q//b) and (r%c == 0)) or ((c > r and b > q) and (c//r == b//q) and (c%r == 0)):
            print(1)
        else:
            print(2)
    else:
        if (a-p == b-q and a-p == c-r) or ((a > p and b > q and c > r) and (a//p == b//q and a//p == c//r) and (a%p == 0)) or ((p > a and q > b and r > c) and (p//a == q//b and p//a == r//c) and (p%a == 0)):
            print(1)
        elif ((a > p and b > q and c > r) and (a//p == b//q and a//p == c//r) and (a-(p*(a//p)) == b-(q*(b//q)) and a-(p*(a//p)) == c-(r*(c//r)))) or ((p > a and q > b and r > c) and (p//a == q//b and p//a == r//c) and (p-(a*(p//a)) == q-(b*(q//b)) and p-(a*(p//a)) == r-(c*(r//c)))):
            print(2)
        elif (((a > p and b > q and c < r) and ((a//p == b//q) and (a%p == 0))) or ((a < p and b < q and c > r) and ((p//a == q//b) and (p%a == 0))) or (a-p == b-q and a-p != c-r)):
            print(2)
        elif (((a > p and b < q and c > r) and ((a//p == c//r) and (a%p == 0))) or ((a < p and b > q and c < r) and ((p//a == r//c) and (p%a == 0))) or (a-p == c-r and a-p != b-q)):
            print(2)
        elif (((a < p and b > q and c > r) and ((b//q == c//r) and (b%q == 0))) or ((a > p and b < q and c < r) and ((q//b == r//c) and (q%b == 0))) or (b-q == c-r and b-q != a-p)):
            print(2)
        else:
            print(3)