print("Bom dia, Boa tarde, Boa noite")
print()
print("Operacoes e Propriedades de Conjuntos")
print()
print("Escolha os elementos para A e B: ")
print("OBS.: use espaco para separar mais de um elemento")
print()
A = input("A:") 
B = input("B:")

A = set(map(int, A.split()))
B = set(map(int, B.split()))
A_ordenado = sorted(A)
B_ordenado = sorted(B) 

 #.split() => corta os textos nos espaços; 
 #int => trasnforma em numeros inteiros;
 #map => nesse caso aplica int em todos os elementos em A e B; 
 #set(map(int, A.split())) => separe o texto e trasnforme tudo em numeros;
 #set => conjuntos matematicos ;
 #sorted() => organiza em ordem crescente;
 #Pq A_ordenada? para que A continue sendo um conjunto,
 # e não vire uma lista, usa A_ordenado apenas para imprimir organizado;

print()
#imprimir os numeros escolhidos pelo usuario
print("Voce escolheu:")
print()
print("Numeros de A:",A)
print("Numeros de B:",B)
print("-----------------------------------------")

print("União, Interseção e Diferença entre A e B")
print()
print("União entre A e B:")

uniao = A.union(B)
uniao_ordenada = sorted(uniao)
print(uniao_ordenada)
print()
print("acabamos de ver a união entre A e B")
print("a união nada mais é que o juntamento de dois conjuntos,\nrepresenta-se pelo simbolo: '∪'")
print()
print("agora o proximo veremos a interseção")
print("representada pelo simbolo: '∩'")
print()
print("Interseção entre A e B")
intersecao = A.intersection(B)
intersecao_ordenada = sorted(intersecao)
print(intersecao_ordenada)
print()
print("Agora veremos a Diferença, retratada pelo simb: '-'")
print("Diferença de A para B e de B para A")
print()
diferenca_ab = sorted(A.difference(B))
print(diferenca_ab)
print()
diferenca_ba = sorted(B.difference(A))
print(diferenca_ba)
print("--------------------------------------------------------")
print()
print("PRODUTO CARTESIANO")
produto_cartesiano = []
# nos produtos cartesianos pegamos elementos de A e combinamos com cada elemento
# de B, EX.: A = 1 2 3 e B = 1 5 temos (1,1)(1,5)(2,1)(2,5)(3,1)(3,5)
for a in A: 
    for b in B:

        produto_cartesiano.append((a,b))
print(produto_cartesiano)
#for dentro de for faz com que todos os elemtnos de a se junte com os de b 
#.append adiciona os pares ordenados na lista
print("------------------------------------------------------")
print()
print("VERIFICAÇÃO DE SUBCONJUNTOS")
#verificar se todos os elementos de um conjunto existe dentro de outro
#issubset()verifica se um conjunto esta dentro de outro
#retornando true or false 
print()
print("A está contido em B?")
print(A.issubset(B))
print()
print("B está contido em A?")
print(B.issubset(A))
print("-------------------------------------------------------")
print("CARDINALIDADE DOS CONJUNTOS")
#cardinalidade mostrara a quant. de elementos em um conjunto
#len() signf. tamanho e ele contara os elementos
print()

print("cardinalidade de A:")
print(len(A))

print()

print("cardinalidade de B:")
print(len(B))

print()

print("cardinalidade da União")
print(len(uniao))

print()

print("cardinalidade da intersecao")
print(len(intersecao))

print()
print("----------------------------------")
print()
print("MDC, MMC, DIV e MOD")
print()
#while enquanto 
#if se 
#else entao
#primeiro numero
#break parar o while

while True:

    try:

        numero1 = int(input("Digite o primeiro numero inteiro positivo: "))

        if numero1 <= 0:

            print("Erro! Digite apenas numeros positivos.")

        else:

            break

    except:

        print("Erro! Entrada invalida.")

print()

#segundo numero

while True:

    try:

        numero2 = int(input("Digite o segundo numero inteiro positivo: "))

        if numero2 <= 0:

            print("Erro! Digite apenas numeros positivos.")

        else:

            break

    except:

        print("Erro! Entrada invalida.")
print()        

print("Numeros escolhidos:")
print()
print("Numero 1:", numero1)
print("Numero 2", numero2)
print("----------------------------------------------------------")
print()
print("Calculando DIV")
#// divisao inteira
#% resto
print()

div = numero1 // numero2

print(numero1, "//", numero2, "=", div)
print("-------------------------------------")
print()
print("Calculando MOD")

print()

mod = numero1 % numero2

print(numero1, "%", numero2, "=", mod)
print("-------------------------------------")
print()
print("Calculando MDC por Euclides")
#Algoritmo de Euclides => calcula o MDC usando restos de divisao sucessivos;
#while => repete o algoritmo ate o resto ser igual a zero;
#% => calcula o resto da divisao;
print()

a = numero1
b = numero2 

while b !=0:
    
    resto = a % b
    print(a, "%", b, "=", resto)

    a = b 
    b = resto

mdc = a 
print()
print("MDC =", mdc)
print("-----------------------------------")
print()
print("MMC a partir do MDC")
#MMC => menor multiplo comum;
print()
print("(A * B) // mdc")
mmc = (numero1 * numero2) // mdc

print("MMC =", mmc)
print("----------------------------------")
print()
print("ARITMETICA MODULAR, CONGRUENCIA E INVERSO")
print()

while True:
    try:
        n = int(input("Digite um valor para n maior que 1: "))
        if n <= 1:
            print("Erro! Tente novamente.")
        else:
            break
    except:
        print("Erro! Tente novamente.")
print()
print("valor escolhido:")
print("n =", n)
print("---------------------------------")
print()
print("TABELA DA ADIÇÃO MODULAR EM Z", n, sep="")
print()

print(" ", end=" ")
for i in range(n):
    print(i, end=" ")
print()
for i in range(n):
    print(i, end=" ")
    for j in range(n):
        resultado = (i + j) % n
        print(resultado, end=" ")
    print()
print("--------------------------------")
print()
print("TABELA DA MULTIPLICAÇÃO MODULAR EM Z", n, sep=" ")
print()
#Zn => conjunto dos restos modulo n;
#while => repete o codigo ate o usuario digitar um valor valido;
#try e except => tratam erros de entrada invalida;
#if => verifica se n e maior que 1;
print(" ", end=" ")
for i in range(n):
    print(i, end=" ")
print()
for i in range(n):
    print(i, end=" ")
    for j in range(n):
        resultado = (i * j) % n
        print(resultado, end=" ")
    print()
print("--------------------------------")
print()
print("VERIFICAÇÃO DE CONGRUENCIA")
print()

while True:
    try:
        a = int(input("Digite o valor de a: "))

        break
    except:
        print("Erro! Tente novamente.")
print()

while True: 
    try:
        b = int(input("Digite o valor de b:"))

        break
    except:
        print("Erro! Tente novamente.")
print()
print("Valores escolhidos")
print("a =", a)
print("b =", b)
print("----------------------------------------")
print()
print("VERIFICANDO CONGRUENCIA")
print()
#% => calcula o resto da divisao;
#if => verifica se os restos sao iguais;
#numeros com mesmo resto sao congruentes modulo n;

resto_a = a % n 
resto_b = b % n 

print("Resto de a:", resto_a)

print("Resto de b:", resto_b)
print()

if resto_a == resto_b:
    print(a, "=", b, "(mod", n,")")
    print("Os numeros sao congruentes.")
else:
    print(a, "≠", b, "(mod", n, ")" )
    print("Os numeros nao sao congruentes.")
print("----------------FIM------------------------")














