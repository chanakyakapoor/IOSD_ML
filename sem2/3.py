def binarySearch (arr, l, r, x):

    if r >= l:
  
        mid = l + (r - l) // 2

        if arr[mid] == x:
            return mid+1
          
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
  
        else:
            return binarySearch(arr, mid + 1, r, x)
  
    else:
        return -1

a=[]
n = int(input("size of array: "))
for i in range(0,n):
    num = int(input())
    a.append(num)

num = int(input("number to search: "))
result = binarySearch(a, 0, n, num)
  
if result != -1:
    print ("Element is present at index {result}".format(result=result))
else:
    print ("Element is not present in array")