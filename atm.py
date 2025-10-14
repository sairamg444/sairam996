username='shanmukh'
password='shan1234'

c_name=input("enter your name:")
c_pass=str(input("enter your password"))

if c_name==username and c_pass==password:
    print(""""
    1.Deposite
    2.Withdraw    
    3.Mini_statement      
    4.exit      
    """)

    amount=60000
    option=int(input("select your option:"))
    if option==1:
        dep=int(input("enter the amount:"))
        amount+=dep
        print("Total amount:",amount)
    elif option==2:
        withd=int(input("enter the amount:"))
        amount-=withd
        print("Total amount:",amount)
    elif option==3:
        print("***********ATM***********")
        print("Username:",username)
        print("Total amount:",amount)
        print("Thank you visit again")
        print("*************************")
    elif option==4:
        exit()
else:
    print("please enter valid details:")