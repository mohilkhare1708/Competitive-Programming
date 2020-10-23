def main():
    t = int(input())
    while t > 0:
        n = int(input())
        a = int(input())
        s = 2 * (10**n) + a
        print(s)
        b = int(input())
        c = 10**n - b
        print(c)
        d = int(input())
        e = s - (a + b + c + d)
        print(e)
        v = int(input())
        if v != 1:
            break
        t = t-1
if __name__ == "__main__":
    main()