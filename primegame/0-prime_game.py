#!/usr/bin/python3
""" Prime Game """

def isWinner(x, nums):
    """ Prime Game"""
    maria_wins = 0
    ben_wins = 0

    for i in range(x):
        n = nums.pop()
        can_move = False

    for num in nums:
        if isPrime(num):
            can_move = True
            nums.remove(num)
            for multiple in range(num * 2, n + 1, num):
                    nums.remove(multiple)
            break

    if can_move:
        maria_wins += 1
    else:
        ben_wins += 1

    if maria_wins > ben_wins:
        return "Maria"
    if ben_wins > maria_wins:
        return "Ben"
    else:
        return None
    
def isPrime(n):
    """ Prime Game """
    if n <= 1:
        return False
    
    for i in range(2, int(num ** 0.5) + 1):
        if n % i == 0:
            return False
        
    return True
