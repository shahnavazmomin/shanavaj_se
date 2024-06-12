'''• Write a Python program that will return true if the two given integer 
values are equal or their sum or difference is 5.'''


def task(m,n):
  return (True if m==n or m+n==5 or (m-n)==5 else  False)


print(task(5,5))
print(task(10,20))
print(task(50,55))
 
 
 
