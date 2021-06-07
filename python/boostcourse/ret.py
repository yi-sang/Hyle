def greet(lang):
    if lang == 'es':
        return('Hola')
    elif lang == 'fr':
        return('Bonjour')
    else:
        return('Hello')

print(greet('en'), 'glenn')
print(greet('fr'), 'sally')
print(greet('es'), ' michael')