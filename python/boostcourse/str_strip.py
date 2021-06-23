greet = '    hello bob    '

print(greet.lstrip() + 'abc')

greet = '    hello bob.'
print(greet.rstrip(".") + 'abc')

greet = '    hello bob    '
print('abc' + greet.strip())