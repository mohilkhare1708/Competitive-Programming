# Example:

# {1,1,2,3,4,4}

# no(permu) = 6! / (2! * 2!) = 

# 3 zeroes 4 ones
# Required, all permutations with pattern starting from '1'
# length of pattern = 3 + 4 = 7
#  _ _ _ _ _ _ _
#  we need to fill this wil 3 0s and 4 1s. But since pattern starts from 1 so
#  1 _ _ _ _ _ _
#  we now need to fill this with 3 0s ans 3 1s

#  no. of permutations = (length of permutation)! / ((number of times 1st element repeated)! * (number of times 2nd ele rep)! * ... * (nth ele)!)
#  So, length of permutation 3 + (4 - 1) = 6 (because one 1 is fixed)
#  zero gets repeated 3 times
#  one gets repeated 3 times

#  so, no(permutations) = 6! / (3! * 3!)
#  if number of zeroes is n and one is m,
#  no(permutations) = (n + m - 1)! / (n! * (m-1)!)

#  now let's talk about some modulus properties:
# 1. (A + B) % M = (A % M + B % M) % M
# 2. (A - B) % M = (A % M - B % M) % M
# 3. (A * B) % M = (A % M * B % M) % M
# what about divide?
# we can do it this way = (A / B) % M = (A * B^-1) % M
# = (A % M * B^-1 % M) % M
# let's focus on B^-1 % M for a bit.

from math import factorial
mod = 10**9 + 7
for _ in range(int(input())):
    n, m = map(int, input().split())
    numerator = factorial(n+m-1)
    denominator = pow(factorial(n), mod-2, mod) * pow(factorial(m-1), mod-2, mod)
    print((numerator * denominator) % mod)