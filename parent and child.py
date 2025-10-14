class parent:
    def show(self):
        print("this is parent class")
        
class child(parent):
    def display(self):
        print("this is child class")
        
obj=child()
obj.show()
obj.display()
