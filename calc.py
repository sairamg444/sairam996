import tkinter as tk

class Calculator:
    """
    A class to create a calculator with a graphical user interface.
    """
    def __init__(self, master):
        """
        Initializes the calculator GUI and its components.
        :param master: The main window (root) of the application.
        """
        self.master = master
        master.title("Calculator")

        # Configure a dark theme for a modern look
        master.configure(bg="#2c3e50")
        
        # This string will store the current expression to be evaluated
        self.current_expression = ""

        # Create a display widget to show the expression and result
        # 'relief' makes it look recessed, 'bd' is for border width
        self.display = tk.Entry(master, width=30, font=('Arial', 16), justify='right', 
                                relief=tk.SUNKEN, bd=5, bg="#ecf0f1", fg="#34495e")
        self.display.grid(row=0, column=0, columnspan=4, pady=10, padx=10)
        self.display.insert(0, "0")

        # Define the layout of the buttons
        button_layout = [
            ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
            ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
            ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
            ('0', 4, 0), ('.', 4, 1), ('=', 4, 2), ('+', 4, 3)
        ]

        # Create the buttons and place them on the grid
        for (text, row, col) in button_layout:
            if text == '=':
                # The '=' button has a different color and function
                button = tk.Button(master, text=text, width=7, font=('Arial', 14, 'bold'),
                                   command=self.calculate, bg="#f39c12", fg="white", bd=3)
            else:
                button = tk.Button(master, text=text, width=7, font=('Arial', 14),
                                   command=lambda t=text: self.on_button_click(t), 
                                   bg="#34495e", fg="white", bd=3)
            button.grid(row=row, column=col, padx=5, pady=5)

        # Create a clear button and place it separately
        clear_button = tk.Button(master, text="C", width=7, font=('Arial', 14),
                                 command=self.clear_display, bg="#e74c3c", fg="white", bd=3)
        clear_button.grid(row=5, column=0, columnspan=4, pady=10)

    def on_button_click(self, char):
        """
        Handles the action when a number or operator button is clicked.
        :param char: The character from the clicked button.
        """
        # Clear the display if the initial '0' is present
        if self.current_expression == "0":
            self.current_expression = ""
            
        self.current_expression += str(char)
        self.display.delete(0, tk.END)
        self.display.insert(0, self.current_expression)

    def calculate(self):
        """
        Evaluates the expression and displays the result.
        """
        try:
            # Use 'eval' to securely evaluate the string expression
            result = str(eval(self.current_expression))
            self.display.delete(0, tk.END)
            self.display.insert(0, result)
            self.current_expression = result
        except ZeroDivisionError:
            self.display.delete(0, tk.END)
            self.display.insert(0, "Error: Div by zero")
            self.current_expression = ""
        except:
            self.display.delete(0, tk.END)
            self.display.insert(0, "Error")
            self.current_expression = ""

    def clear_display(self):
        """
        Clears the display and resets the current expression.
        """
        self.display.delete(0, tk.END)
        self.display.insert(0, "0")
        self.current_expression = ""

# Main part of the script
if __name__ == "__main__":
    # Create the main window instance
    root = tk.Tk()
    # Create an instance of our Calculator class
    my_calculator = Calculator(root)
    # Start the GUI event loop
    root.mainloop()
