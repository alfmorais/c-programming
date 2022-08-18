### C++ é uma linguagem com sintaxe baseada na linguagem C. Sobre as características do C++, assinale a alternativa correta:

- A linguagem permite que o programador crie as operações usando orientação a objetos, que, aliado à tipagem dinâmica, facilita a programação de estruturas de dados. 

**Correta** 
- **A linguagem permite acesso direto à memória por meio de ponteiros, que podem ser manipulados de maneira explícita.**

- A linguagem é interpretada, imperativa e com suporte a orientação a objetos.

- A linguagem permite a separação entre a visão lógica das estruturas de dados e a implementação por meio da tipagem dinâmica das variáveis.

- A linguagem permite gerar protótipos de programas muito rapidamente por não ser necessário compilar o código para executar os programas. 

<hr>

### Assinale a alternativa que contém a correta definição de ponteiro. 

**Correta** 
- **Um ponteiro é uma variável cujo conteúdo é um endereço de memória, não um valor no sentido tradicional.**

- Um ponteiro é uma variável associada a um valor tradicional.

- Um ponteiro é uma função na linguagem C++ que retorna um endereço de memória, não um valor no sentido tradicional.

- Um ponteiro P é o endereço na memória de uma variável V já existente no programa. Se V sair do escopo, então P apontará para vazio.

- Um ponteiro P é o conteúdo de uma variável tradicional V. Nesse caso, dizemos que V aponta para P. 

<hr>

### Em C++, qual o papel do operador new? 
		
- declarar uma nova função.		
- Especificar uma nova classe. 
- Declarar uma nova variável.  
- alocar memória estaticamente.
- **Correta: Alocar memória dinamicamente.**

<hr>

### Qual das alternativas a seguir mostra um trecho de código que apresenta um vazamento de memória, situação em que perdemos acesso a uma região de memória, mas não a desalocamos? 

- **CORRETA**
```cplusplus
char *ourCode = new char;

*ourCode = 'a';

char *myCode = new char;

*myCode = 'b';

myCode = ourCode;
```

<hr>

### Para o vetor c de NUM_ELEM elementos dinamicamente alocado via int *c = new int[NUM_ELEM];, qual declaração o desaloca corretamente? 
		
- delete c[NUM_ELEM] 
- delete **c 
- delete *c; 
- delete c; 
- **CORRETA: delete [] c**;

<hr>

### Das funções declaradas, indique qual delas recebe uma cópia das variáveis fornecidas quando invocada. Lembrando que, alterações dentro da função não afetarão os valores originais.   

		
- int swap(a,b,c)
- int swap(a,b)
- void swap(int *a, int *b) 
- **CORRETA: void swap(int a, int b)**
- void swap(int &a, int &b)
