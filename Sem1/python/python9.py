filename =raw_input("Enter a filename :")
if "." in filename:
    name, extension = filename.split(".")
    print("the extension of the file is :" + extension)
else:
    print("Invalid filename fromat. please include the file extension(e.g., filename.txt)")
        
