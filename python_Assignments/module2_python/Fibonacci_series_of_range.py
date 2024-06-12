#( (Q-3) Write a Python program to get the Fibonacci series of given range......... )
s=int(input("Enter  Your Number : "))
a=0
b=1
c=0
while c<=s:
    print( c,end=" ,")
    a=b
    b=c
    c=a+b
