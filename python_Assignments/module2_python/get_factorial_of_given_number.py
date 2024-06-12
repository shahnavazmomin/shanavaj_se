#( (Q-2) Write a Python programme to Factorial Of Given Number....  )


fact=1
s=1

n=int(input("Enter Rendom number  :  "))

while s<=n:
    fact=fact*s
    s+=1

print("The value of",n,"factorial is : ",fact)    
