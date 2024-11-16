scientist = "Alexander von Humboldt"

print(scientist, 'once said: "The nature is all conected."')

famous_person = "Donald Knuth"

message = f"{famous_person} once said: Programming is an art."
print(message)

print(message.removeprefix(famous_person).strip())

print(famous_person, '\t', "is different of", '\n\t\t\t\t\t\t', scientist)
print("hello\n")

py_file = "Bread.py"

print(f"The file name is '{py_file.removesuffix(".py")}'")

