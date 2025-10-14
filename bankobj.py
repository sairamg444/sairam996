class bankaccount:
    def __init__(self,accno,accname,ifsccode,balance):
        self.accno=accno
        self.accname=accname
        self.ifsccode=ifsccode
        self.balance=balance
    def display(self):
        print("acc no is:",self.accno)
        print("acc name is:",self.accname)
        print("ifsc code is:",self.ifsccode)
        print("balance is:",self.balance)
    def withdraw(self,amount):
        self.balance=self.balance-amount
    def deposit(self,amount):
        self.balance=self.balance+amount
        
obj1=bankaccount(987655,'asdf',567,100)
obj1.display()
obj2=bankaccount(3456,'dfgh',578,346)
obj2.display()
obj2.withdraw(2000)
obj2.display()
obj1.deposit(1000)
obj1.display
