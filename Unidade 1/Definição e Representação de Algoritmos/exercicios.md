# Exercícios Práticos - Definição e Representação de Algoritmos

## 🎯 Instruções
Para cada exercício abaixo, você deve:
1. **Escrever o algoritmo em pseudocódigo**
2. **Descrever o fluxograma** (forma textual/visual)
3. **Implementar em C**
4. **Testar o programa**

---

## 📚 Exercício 1: Calculadora de Média Aritmética

**Objetivo**: Calcular a média aritmética de três números.

**Descrição**: Crie um programa que leia três notas de um aluno e calcule a média aritmética. Se a média for maior ou igual a 7, exiba "Aprovado", senão exiba "Reprovado".

**Pseudocódigo**: 
```
INÍCIO
  ESCREVA "Calculadora de Média Aritmética"
  ESCREVA "Digite a primeira nota: "
  LEIA nota1
  ESCREVA "Digite a segunda nota: "
  LEIA nota2
  ESCREVA "Digite a terceira nota: "
  LEIA nota3
  media = (nota1 + nota2 + nota3) / 3
  ESCREVA "A média é: ", media
  SE media >= 7 ENTÃO
    ESCREVA "Aprovado"
  SENÃO
    ESCREVA "Reprovado"
  FIMSE
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Adicione validação para notas entre 0 e 10.

---

## 📚 Exercício 2: Contador de Números Pares

**Objetivo**: Contar quantos números pares existem em uma sequência.

**Descrição**: Leia 5 números inteiros e conte quantos deles são pares. Exiba o resultado.

**Pseudocódigo**:
```
INÍCIO
  ESCREVA "Contador de Números Pares"
  contador = 0
  PARA i DE 1 ATÉ 5 FAÇA
    ESCREVA "Digite o ", i, "º número: "
    LEIA numero
    SE numero % 2 = 0 ENTÃO
      contador = contador + 1
    FIMSE
  FIMPARA
  ESCREVA "Total de números pares: ", contador
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Modifique para contar números ímpares também e exibir ambas as contagens.

---

## 📚 Exercício 3: Conversor de Temperatura

**Objetivo**: Criar um conversor entre Celsius e Fahrenheit.

**Descrição**: Crie um menu com as opções:
1. Celsius para Fahrenheit
2. Fahrenheit para Celsius
3. Sair

Fórmula: F = (C * 9/5) + 32

**Pseudocódigo**:
```
INÍCIO
  REPETIR
    ESCREVA "=== CONVERSOR DE TEMPERATURA ==="
    ESCREVA "1 - Celsius para Fahrenheit"
    ESCREVA "2 - Fahrenheit para Celsius"
    ESCREVA "3 - Sair"
    ESCREVA "Escolha uma opção: "
    LEIA opcao
    
    SE opcao = 1 ENTÃO
      ESCREVA "Digite a temperatura em Celsius: "
      LEIA celsius
      fahrenheit = (celsius * 9/5) + 32
      ESCREVA celsius, "°C = ", fahrenheit, "°F"
    SE opcao = 2 ENTÃO
      ESCREVA "Digite a temperatura em Fahrenheit: "
      LEIA fahrenheit
      celsius = (fahrenheit - 32) * 5/9
      ESCREVA fahrenheit, "°F = ", celsius, "°C"
    FIMSE
  ATÉ opcao = 3
  ESCREVA "Obrigado por usar o conversor!"
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Adicione validação para temperaturas abaixo do zero absoluto.

---

## 📚 Exercício 4: Sistema de Login Simples

**Objetivo**: Criar um sistema básico de autenticação.

**Descrição**: Simule um sistema de login que permite até 3 tentativas. Use usuário "admin" e senha "1234" como padrão.

**Pseudocódigo**:
```
INÍCIO
  tentativas = 0
  REPETIR
    ESCREVA "=== SISTEMA DE LOGIN ==="
    ESCREVA "Digite o usuário: "
    LEIA usuario
    ESCREVA "Digite a senha: "
    LEIA senha
    
    SE usuario = "admin" E senha = "1234" ENTÃO
      ESCREVA "Login realizado com sucesso!"
      ESCREVA "Bem-vindo, ", usuario
      break
    SENÃO
      tentativas = tentativas + 1
      ESCREVA "Usuário ou senha incorretos!"
      ESCREVA "Tentativa ", tentativas, " de 3"
    FIMSE
    
    SE tentativas >= 3 ENTÃO
      ESCREVA "Número máximo de tentativas excedido!"
      ESCREVA "Acesso negado!"
    FIMSE
  ATÉ (tentativas >= 3 OU login_sucesso)
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Adicione um sistema de bloqueio temporário após 3 tentativas erradas.

---

## 📚 Exercício 5: Calculadora de Fatorial

**Objetivo**: Calcular o fatorial de um número.

**Descrição**: Leia um número inteiro positivo e calcule seu fatorial.
Lembre-se: n! = n × (n-1) × (n-2) × ... × 1

**Pseudocódigo**:
```
INÍCIO
  ESCREVA "Calculadora de Fatorial"
  ESCREVA "Digite um número inteiro positivo: "
  LEIA numero
  
  SE numero < 0 ENTÃO
    ESCREVA "Erro: número negativo!"
  SENÃO
    fatorial = 1
    PARA i DE 1 ATÉ numero FAÇA
      fatorial = fatorial * i
    FIMPARA
    ESCREVA numero, "! = ", fatorial
  FIMSE
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Adicione o cálculo de fatorial para números grandes usando loop while.

---

## 📚 Exercício 6: Jogo de Adivinhação

**Objetivo**: Criar um jogo onde o computador "pensa" em um número e o usuário tenta adivinhar.

**Descrição**: O programa deve "pensar" em um número entre 1 e 100. O usuário deve tentar adivinhar. Para cada tentativa, o programa deve informar se o número é maior ou menor.

**Pseudocódigo**:
```
INÍCIO
  ESCREVA "=== JOGO DE ADIVINHAÇÃO ==="
  numero_secreto = random(1, 100)
  tentativas = 0
  
  REPETIR
    ESCREVA "Digite seu palpite (1-100): "
    LEIA palpite
    tentativas = tentativas + 1
    
    SE palpite = numero_secreto ENTÃO
      ESCREVA "Parabéns! Você acertou!"
      ESCREVA "Número de tentativas: ", tentativas
      break
    SENÃO SE palpite < numero_secreto ENTÃO
      ESCREVA "O número é MAIOR que ", palpite
    SENÃO
      ESCREVA "O número é MENOR que ", palpite
    FIMSE
  ATÉ (acertou)
FIM
```

**Fluxograma**: Descreva o fluxograma deste algoritmo.

**Desafio Extra**: Adicione um sistema de pontuação baseado no número de tentativas.

---

## 🎓 Dicas para Resolver os Exercícios

### 1. Planejamento
- Leia atentamente o enunciado
- Identifique as entradas e saídas necessárias
- Determine as estruturas de controle necessárias

### 2. Pseudocódigo
- Use palavras em português
- Seja claro e específico
- Use indentação para mostrar a estrutura

### 3. Fluxograma
- Use símbolos padrão (início/fim, processo, decisão, entrada/saída)
- Mantenha o fluxo de cima para baixo
- Use setas para indicar direção

### 4. Implementação em C
- Compile frequentemente para detectar erros
- Use comentários para documentar seu código
- Teste com diferentes valores de entrada

### 5. Validação
- Teste casos extremos (valores zero, negativos, muito grandes)
- Verifique se o programa funciona para todos os caminhos possíveis
- Peça para colegas testarem seus programas

---

## 📝 Entrega dos Exercícios

Para cada exercício, entregue:
1. **Pseudocódigo** (em arquivo .txt ou comentários no código)
2. **Descrição do fluxograma** (texto ou desenho)
3. **Código C completo** (arquivo .c)
4. **Relatório de testes** (valores testados e resultados)

**Organização sugerida:**
```
exercicios/
├── ex1_media.c
├── ex2_pares.c
├── ex3_conversor.c
├── ex4_login.c
├── ex5_fatorial.c
├── ex6_adivinhacao.c
└── relatorio_testes.txt
