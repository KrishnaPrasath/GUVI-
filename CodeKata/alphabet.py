import re
pattern="[A-Za-z]"
char = input()

if re.match(pattern,char):
    print("Alphabet")
else:
    print("No")

