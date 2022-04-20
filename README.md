# cPlusPlusWhileExercises
Exercícios de estrutura de repetição em C++
# Pseudo-Códigos dos exercícios

## Estrutura de repetição 1

*INÍCIO
INTEIRO A, B, C, AUX;
LER (A, B);
C = A + B;
AUX = A – B;
ENQUANTO A != B FAÇA
B = B + 2;
C = C + B;
A = A – 1;
AUX = AUX * 2;
FIM – ENQUANTO
ESCEVER (A, B, C, AUX);
FIM*

## Estrutura de repetição 2
INÍCIO 

INTEIRO X, Y, A, B;

LER (X, Y);

A = X * Y;

B = X + Y + A;

ENQUANTO B > A FAÇA

SE X < Y ENTÃO

X = Y + A;

FIM – SE 

SE X >= Y ENTÃO

Y = X + A;

FIM – SE

B = B + 4;

FIM – ENQUANTO

ESCREVER (X, Y, A, B);

FIM

## Programa que lê as bases e a altura de um retângulo e calcula sua área e perímetro

INÍCIO

REAL A, B;

LER (A, B);

REAL AREA = A * B;

REAL PERIMETRO = (A * 2) + (B * 2);

ESCREVER (PERIMETRO, AREA);

FIM

