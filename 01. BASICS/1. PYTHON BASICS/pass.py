# n=int(input('n='))
# arr=[]
# i=0
# for i in range(n):
#     arr.append(int(input()))

# arr.reverse()
# print(arr)

n=int(input('n='))
arr=[]
for i in range(n):
    arr.append(int(input()))
left,right=0,n-1
while left<right:
    arr[left],arr[right]=arr[right],arr[left]
    left+=1
    right-=1
print(arr)