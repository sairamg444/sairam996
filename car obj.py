class car:
    def __init__(self,colour,model,year):
        self.colour=colour
        self.model=model
        self.year=year
        self.running=False
    def start(self):
        print("car is starting...")
        self.running=True
    def stop(self):
        print("car is stopping...")
        self.running=False
my_car = car("skoda","red+matte",2022)
my_car.start()
my_car.stop()
