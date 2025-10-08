# EXERCISE 1: Basic Variables

Name = "Nii Quaye Kingsley Asare"
Age = 18

#My Favourite Programming language is C++

#FALSE

#EXERCISE 2: Variable Operation

num1 = 15
num2 = 4
#SUM
sum = num1 + num2
print(f"Sum = {sum}")
#DIFFERENCE
diff = num1 - num2
print(f"Difference = {diff}")
#PRODUCT
multiply = num1 * num2
print(f"Product = {multiply}")
#QUOTIENT
div = num1 / num2
print(f"Quotient = {div}")


#EXERCISE 3: String Manipulation
first_name = "Kingsley Asare"
last_name = "Nii Quaye"
full_name = first_name +" "+ last_name
print(full_name)
fullName = full_name.upper()
print(fullName)
print(f"My name is {fullName}, and i'm {Age} years old. I'm interested in Cybersecuty and ML and AI")

#EXERCISE 4: User Input
favFood = input("What's your favourite food: ")
inTake = input("How many times do you eat per week: ")
print(f"Hey my favourite food is {favFood} and i eat it {inTake} times a week.")


#EXERCISE 5: Type Conversion
age = "25"
#age_int = int(age)
height = 5.8
print("I am " + age + " years old and " + str(height) + " feet tall.")


#EXERCISE 6: Simple Calculator
celsiusTemperature = int(input("Enter your celsius temperature: "))
F = (celsiusTemperature * (9/5)) + 32
print(f"Your Celsius temperature is {celsiusTemperature} and your Fahrienheit is {F}")