color_names = raw_input("Enter comma-separated color names:")
colors = color_names.split(',')
colors = [color.strip() for color in colors]
if len(colors) >= 2:
    print("First color: ",colors[0])
    print("Last color:",colors[-1])
else:
    print("Please enter at least two color names.")
       
