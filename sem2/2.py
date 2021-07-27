def deleteElement(arr,n,x):
    if arr[n-1]==x:
        return n-1
 
    prev = arr[n-1]
    for i in range(n-2,1,-1):
        if arr[i]!=x:
            curr = arr[i]
            arr[i] = prev
            prev = curr
 
    if i<0:
        return 0
    arr[i] = prev
    return n-1

arr = [11,15,6,8,9,10]
n = len(arr)
x = 6
n = deleteElement(arr,n,x)
print("Modified array is")
for i in range(n):
    print(arr[i],end=" ")