from itertools import count, islice, chain

def func():
    arr = [1]
    yield arr[-1]
    sums1 = set([2])
    newsums = set([])
    for test in count(2):
        for n in chain(arr, [test]):
            sum = n + test
            if sum in sums1:
                newsums.clear()
                break
            newsums.add(sum)
        else:
            sums1 |= newsums
            newsums.clear()
            arr.append(test)
            yield test
 

if __name__ == '__main__':
    f = int(input())
    sum = 0
    for n in (islice(func(), f)):
        sum += n
    print(" ".join(str(n) for n in (islice(func(), f))))
    print(sum)
   