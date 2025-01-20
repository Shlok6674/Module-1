# Get the age and weight from the user
age = int(input("Enter your age: "))
weight = float(input("Enter your weight in kg: "))

# Check if the person is eligible to donate blood
if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You are not eligible to donate blood due to insufficient weight.")
else:
    print("You are not eligible to donate blood due to age.")
