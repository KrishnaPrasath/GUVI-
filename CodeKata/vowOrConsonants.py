#check whether a char is vowels or a cononant
import re
char =input()
pattern = "[A-Za-z]"
vowels =list("aeiou")
if(re.match(pattern,char)):
    if(char in vowels):
        print("Vowels")
    else:
        print("Consonant")
else:
    print("Invalid")
