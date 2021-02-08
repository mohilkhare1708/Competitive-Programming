def dec_to_base(num,base):
    base_num = ""
    while num>0:
        dig = int(num%base)
        if dig<10:
            base_num += str(dig)
        else:
            base_num += chr(ord('A')+dig-10)
        num //= base
    base_num = base_num[::-1]
    return base_num

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
    #print(dx, dy)
    dz=dx-dy
    #print(dec_to_base(dz, b))
    return dec_to_base(dz, b)

def soltuion(n, b):
    arr=[]
    while True:
        x = "".join(sorted(str(n), reverse=True))
        y = "".join(sorted(str(n)))
        z = getSubtract(x,y,b)
        #print(x, y)
        #print(z)
        zl = len(str(z))
        xl = len(str(x))

        if (zl) != xl:
            z = z * int(pow(10,(xl-zl)))
        #print(z)

        for index, item in enumerate(arr):
            if item == z:
                return index + 1
                break
        arr = [z] + arr
        #print(arr)
        n = z

print(soltuion('1211', 10))