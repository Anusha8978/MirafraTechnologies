y=int(input("enter the year"))
if y%100!=0 and y%4==0 or y%400==0:
	print("leap year")
else:
	print("not a leap year")

