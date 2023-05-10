import re  # Importing the regular expression library

def is_valid_email(email):
    """Checks whether the given string is a valid email address."""
    
    # Define the regular expression pattern for an email address
    pattern = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    
    # Using the match function to see if the email matches the pattern
    if re.match(pattern, email):
        return True  # The email is valid
    else:
        return False  # The email is invalid

# Main program
email = input("Enter an email address: ")
if is_valid_email(email):
    print(f"{email} is a valid email address.")
else:
    print(f"{email} is not a valid email address.")
