import re

d = "namedev"
pat = r"(is)"  # Raw string notation to define the pattern
result = re.findall(pat, d)
print(result)  # Output: ['n']
