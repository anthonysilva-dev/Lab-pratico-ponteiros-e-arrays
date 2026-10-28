# Para Entregar e Discutir

## 1. Por que a função dobra altera o vetor do main sem return?

Ao chamar `dobra`, a função recebe um ponteiro para os elementos do vetor original. Quando ela muda esses valores, a mudança aparece no `main` mesmo sem devolver nada.

## 2. Dois endereços seguidos de int e a diferença entre eles

```text
&v[0] = 0x7ffc3d323900
&v[1] = 0x7ffc3d323904
```

A diferença é de 4 bytes. Neste teste, cada `int` ocupa 4 bytes.

Esses endereços foram obtidos em uma execução e podem aparecer diferentes em outro computador.

## 3. O que o AddressSanitizer detectou, e por que isso poderia passar despercebido?

Ele encontrou uma escrita em `valores[10]`, fora do vetor de 10 elementos, que sem a verificação poderia acontecer sem aparecer uma mensagem de erro.
