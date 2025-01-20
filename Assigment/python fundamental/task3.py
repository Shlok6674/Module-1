# Get the percentage from the user
percentage = float(input("Enter your percentage: "))

# Determine the grade based on the percentage
if percentage >= 90:
    grade = 'A'
elif percentage >= 80:
    grade = 'B'
elif percentage >= 70:
    grade = 'C'
elif percentage >= 60:
    grade = 'D'
else:
    grade = 'F'

# Print the grade
print(f"Your grade is: {grade}")
