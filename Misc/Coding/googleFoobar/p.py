#!/bin/python3

import os
import sys

def SieveOfEratosthenes(n): 
    ans = []
    prime = [True for i in range(n + 1)] 
    p = 2
    while (p * p <= n): 
        if (prime[p] == True): 
            for i in range(p * 2, n + 1, p): 
                prime[i] = False
        p += 1
    prime[0]= False
    prime[1]= False
    for p in range(n + 1): 
        if prime[p]: 
            ans.append(p) 
    return ans

def binarySearchCount(arr, n, key): 
    left = 0
    right = n - 1
    count = 0
    while (left <= right):  
        mid = int((right + left) / 2)
        if (arr[mid] <= key):  
            count = mid + 1
            left = mid + 1
        else: 
            right = mid - 1
      
    return count 

def sillyGame(n, primes):
    #primes = SieveOfEratosthenes(n)
    if n == 1:
        return('Bob')
    else:
        i = binarySearchCount(primes, len(primes), n)
        #print(i)
        if i % 2 == 0:
            return('Bob')
        else:
            return('Alice')


primes = SieveOfEratosthenes(100)
#print(binarySearchCount(primes, len(primes), 50))
#print(primes)
n = int(input())
for i in range(n):
    q = int(input())
    print(sillyGame(q, primes))
