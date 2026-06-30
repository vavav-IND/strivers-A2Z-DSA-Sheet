class Solution:
    def printNumber(self):
        a=int(input())
        if(-1000<=a<=1000):
            print(a)
        else:
            print('enter integer within the range')

a=Solution()
a.printNumber()
