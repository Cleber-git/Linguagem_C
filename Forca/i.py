PalavraSecreta = ["M", "E", "L", "A", "N", "C", "I", "A"]
chutes = []

letras = 0

while True:
    # Entrada de chute do usuário
    chute = str(input('Escolha sua letra: ')).upper()

    chutes.append(chute)
    # Varrendo a lista da palavra secreta
    
    for c in PalavraSecreta:
        tem = False
        if c == chute:
            letras += 1
        for i in chutes:
            if c == i:
                tem = True
        
        if tem:
                print(c, end="")
            
        else:
            print('_ ', end="")
        
        
    if letras == len(PalavraSecreta):
        break
    print()

            
print("\nParabéns!! Você ganhou!")




