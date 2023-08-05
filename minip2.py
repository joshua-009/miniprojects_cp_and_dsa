import random
import string

print("Welcome to the password generator")
l=int(input("How many letters do you want in your password?"))
n=int(input("How many numbers do you want in your password?"))
s=int(input("How many symbols do you want in your password?"))

a=''                                     #initialse string
for i in range(l):
	a+=random.choice(string.ascii_letters)
for i in range(n):
	a+=random.choice(string.digits)
for i in range(s):
	a+=random.choice(string.punctuation)

a=''.join(random.sample(a,len(a)))   #shuffle

print("This is your password as per your requirements:")
print(a)
