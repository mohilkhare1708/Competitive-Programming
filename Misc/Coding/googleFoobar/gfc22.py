def decimalToBase(dn, db):
    digits = []
    while dn > 0:
        digits.insert(0, str(dn % db))
        dn  = dn / db
    return ''.join(digits)

def baseToDecimal(bn, cb):
    n = 0
    for d in str(bn):
        n = cb * n + int(d)
    return n

def getSubtract(x, y, b):
    if b==10:
        return int(x) - int(y)
    dx=baseToDecimal(x,b)
    dy=baseToDecimal(y,b)
    dz=dx-dy
    return decimalToBase(dz, b)

def solution(n, b):
    mySet = []
    while True:
        x = ''.join(sorted(n, reverse=True))
        y = ''.join(sorted(n))
        print(x, y)
        #print(int(x) + 5 + int(y))
        xint = int(x)
        yint = int(y)
        print(xint, yint)
        z = getSubtract(xint, yint, b)
        lenDiff = len(x) - len(str(z))
        #print(x, y, z)
        newZ = str(z).ljust(lenDiff + len(z), '0')
        #print(newZ)
        mySet.append(newZ)
        n = newZ
        #print(mySet)

solution('210022', 3)
        
