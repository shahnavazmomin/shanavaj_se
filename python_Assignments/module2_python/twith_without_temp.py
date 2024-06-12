'''• Write a Python program to get a single string from two given strings, 
separated by a space and swap the first two characters of each string.
'''
     
m="WXYZ"
n="ABCD"

print("Before swaping".center(40,"*"))
print("A : ",m)
print("B : ",n)

y=m[:2]
m=m.replace(m[:2],n[:2])
n=n.replace(n[:2],y[:2])

print("Afetr swaping".center(40,"*"))

print("A : ",m)
print("B : ",n)

