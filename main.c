#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define ex5

#ifdef ex1
// funções
float soma(float *n1, float *n2) { return (*n1 + *n2); }
float sub(float *n1, float *n2) { return (*n1 - *n2); }
float mult(float *n1, float *n2) { return (*n1 * *n2); }
float divi(float *n1, float *n2) { return (*n1 / *n2); }

void alimenta(float *a) {
  printf("Digite o valor: ");
  scanf("%f", a);
}
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  float num1, num2, posta, sair = 0;
  char op;
  float *p1 = &num1, *p2 = &num2, *resp = &posta;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    alimenta(p1);
    resp = p1;

    // entrada de n valores
    while (sair == 0) {
      printf("\nQual operação: (+ Soma, - Subtração, * Multiplicação, / "
             "Divisão, = Sair)");
      scanf("%c", &op);
      scanf("%c", &op);

      switch (op) {
      case ('+'): {
        alimenta(p2);
        *resp = soma(resp, p2);

        // saída
        printf("\nResultado: %.2f", *resp);
        break;
      }
      case ('-'): {
        alimenta(p2);
        *resp = sub(resp, p2);

        // saída
        printf("\nResultado: %.2f", *resp);
        break;
      }
      case ('*'): {
        alimenta(p2);
        *resp = mult(resp, p2);

        // saída
        printf("\nResultado: %.2f", *resp);
        break;
      }

      case ('/'): {
        alimenta(p2);
        *resp = divi(resp, p2);

        // saída
        printf("\nResultado: %.2f", *resp);
        break;
      }
      case ('='): {
        sair = 1;
        break;
      }
        // fim switch
      }

      // fim  while (sair == 0)
    }

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif
#ifdef ex2

char Pesq(char *l, char *str) {
  int achei = 0;
  for (int i = 0; i < 13; i++) {
    if (*l == str[i])
      achei = 1;

    // fim for
  }
  return (achei);
  // fim função
}
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada
  char pesquisa;
  char str1[] = {'b', 'd', 'f', 'h', 'j', 'k', 'm',
                 'o', 'q', 's', 'u', 'w', 'y'};

  char *p1 = &pesquisa, *tring = &str1;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("\nDigite o char que quer pesquisar: ");
    scanf("%c", p1);

    // função
    int igual = Pesq(p1, tring);

    // saida
    if (igual)
      printf("\n A letra %c está no vetor", *p1);
    else
      printf("\n A letra %c não está no vetor", *p1);

    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex3
int Comparar(char *s1, char *s2) {
  int turner = 1;

  for (int i = 0; i < 10; i++) {

    if (*(s1 + i) != *(s2 + i)) {

      turner = 0;
    }
    // fim for
  }
  return (turner);

  // fim funcao
}
void Escrever(char *s1) {

  printf("\nDigte a string:");
  scanf("%s", s1);
  // fim
}
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  char str1[10], str2[10];
  int resp;
  char *ing1 = &str1[1], *ing2 = &str2[1];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    Escrever(ing1);
    Escrever(ing2);
    // função

    resp = Comparar(ing1, ing2);
    // saída
    if (resp) {
      printf("\nResultado: %d\nSão Iguais", resp);
      // fim if
    } else {
      printf("\nResultado: %d\nSão Diferentes", resp);
    }
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex4

struct dados {
  char var1;
  long var2;
  int var3;
  float var4;
  double var5;
  unsigned char var6;
  unsigned int var7;
  unsigned long var8;
};

void imprimir(struct dados *usuario) {

  printf("\n        10        20%10d%10d%10d%10d%10d\n", 30, 40, 50, 60, 70);

  for (int i = 0; i < 7; i++) {

    printf("1234567890");
  }
  // printf("alinhamento %-10 reservo 10 espaços só pra variavel começando do
  // espaço 1, %10 reserva 10 espaços só pra variavel começando do espaço 10")
  printf("\n    %-10c%-10d%-20ld%-20.2f%-20.2lf", usuario->var1, usuario->var3,
         usuario->var2, usuario->var4, usuario->var5);
  printf("\n          %-20c%-20u%-20lu", usuario->var6, usuario->var7,
         usuario->var8);
}
void Receber(struct dados *usuario) {
  printf("\nDigite o valor do char: ");
  scanf("%c", &usuario->var1);

  printf("\nDigite o valor do long: ");
  scanf("%ld", &usuario->var2);

  printf("\nDigite o valor do int: ");
  scanf("%d", &usuario->var3);

  printf("\nDigite o valor do float: ");
  scanf("%f", &usuario->var4);

  printf("\nDigite o valor do double: ");
  scanf("%lf", &usuario->var5);

  getchar();
  printf("\nDigite o valor do unsigned char: ");
  scanf("%c", &usuario->var6);

  printf("\nDigite o valor do unsigned int: ");
  scanf("%u", &usuario->var7);

  printf("\nDigite o valor do unsigned long: ");
  scanf("%lu", &usuario->var8);
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      

  // criar struct
  struct dados usuario1;
  struct dados *usuario = &usuario1;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    Receber(usuario);

    // saída
    imprimir(usuario);

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex5
struct dados {
  char nome[25];
  char end[50];
  char cidade[50];
  char estado[50];
  int cep;
};
void Entrada(struct dados *p) {
  for (int i = 0; i < 4; i++) {
    gets();
    printf("\n________________________");
    printf("\nDigite o %d° Nome: ", i + 1);
    gets(p[i].nome);
    printf("\nDigite o %d° Endereço: ", i + 1);
    gets(p[i].end);
    printf("\nDigite o %d° Cidade: ", i + 1);
    gets(p[i].cidade);
    printf("\nDigite o %d° Estado: ", i + 1);
    gets(p[i].estado);
    printf("\nDigite o %d° CEP: ", i + 1);
    scanf("%d", &p[i].cep);
    printf("\n------------------------");

    // fim for
  }
}
void Saida(struct dados *p) {

  for (int i = 0; i < 4; i++) {
    printf("\n______________________");
    printf("\n%dº Nome: %s", i + 1, p[i].nome);
    printf("\n%dº Endereço: %s", i + 1, p[i].end);
    printf("\n%dº Cidade: %s", i + 1, p[i].cidade);
    printf("\n%dº Estado: %s", i + 1, p[i].estado);
    printf("\n%dº CEP: %d", i + 1, p[i].cep);
    printf("\n----------------------");

    // fim for
  }
  // fim procedimento
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

       
      // criar struct de 4 elementos
      struct dados usuario[4];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // entrada
    struct dados *pont = &usuario[0];
    int olha;
    int *esc = &olha;

    // função menu
    do {
      printf(
          "\nO que deseja fazer? \n\t1 - Entrada\n\t2 - Exibir\n\t3 - Sair\n");
      scanf("%d", esc);
      switch (*esc) {
      case (1): {
        // Entrada
        Entrada(pont);
        break;
      }
      case (2): {
        // Exibir
        Saida(pont);
        break;
      }

      case (3): {
        // sair
        *esc = 7;
        break;
      }
        /// fim switch
      }
    } while (*esc < 6);
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}

#endif

#ifdef ex6
struct dados {
  char nome[25];
  char end[50];
  char cidade[50];
  char estado[50];
  int cep;
};
void Entrada(struct dados *p) {
  for (int i = 0; i < 4; i++) {
    printf("\n________________________");
    printf("\nDigite o %d° Nome: ", i + 1);
    scanf("%s", p[i].nome);
    printf("\nDigite o %d° Endereço: ", i + 1);
    scanf("%s", p[i].end);
    printf("\nDigite o %d° Cidade: ", i + 1);
    scanf("%s", p[i].cidade);
    printf("\nDigite o %d° Estado: ", i + 1);
    scanf("%s", p[i].estado);
    printf("\nDigite o %d° CEP: ", i + 1);
    scanf("%d", &p[i].cep);
    printf("\n------------------------");
    // fim for
  }
}
void Saida(struct dados *p) {

  for (int i = 0; i < 4; i++) {
    printf("\n______________________");
    printf("\n%dº Nome: %s", i + 1, p[i].nome);
    printf("\n%dº Endereço: %s", i + 1, p[i].end);
    printf("\n%dº Cidade: %s", i + 1, p[i].cidade);
    printf("\n%dº Estado: %s", i + 1, p[i].estado);
    printf("\n%dº CEP: %d", i + 1, p[i].cep);
    printf("\n----------------------");

    // fim for
  }
  // fim procedimento
}
int strcmp(const char *str1, const char *str2) {

  int igual = 1;

  for (int i = 0; (str1[i] != '\0' || str2[i] != '\0'); i++) {
    if (str1[i] != str2[i]) {

      igual = 0;

      // fim if
    }

    // fim for
  }
  return (igual);
  // fim função
}
int Pesquisa(struct dados *p, char *txt) {
  char vra[50];
  char *pala = &vra[0];
  int turn = 5;
  // pergunta

  printf("\nQual o nome que você quer %s: ", txt);
  scanf("%s", pala);

  for (int i = 0; i < 4; i++) {
    // achar nome

    if (strcmp(p[i].nome, pala)) {

      turn = i;

      // fim if if (strcmp(p[i].nome , pala))
    }
    // fim for
  }

  if (turn == 5) {
    printf("\nErro!\nNome não encontrado");
  } else {
    printf("\n______________________");
    printf("\n%dº Nome: %s", turn + 1, p[turn].nome);
    printf("\n%dº Endereço: %s", turn + 1, p[turn].end);
    printf("\n%dº Cidade: %s", turn + 1, p[turn].cidade);
    printf("\n%dº Estado: %s", turn + 1, p[turn].estado);
    printf("\n%dº CEP: %d", turn + 1, p[turn].cep);
    printf("\n----------------------");
  }

  return (turn);
  // fim funçao
}
void Excluir(struct dados *p, int *esc) {
  int confirm;
  do {
    printf("\nDeseja realizar a Operação Excluir?(1 - Sim, 2 - Não)");
    scanf("%d", &confirm);
  } while (confirm < 1 || confirm > 2);
  if (confirm == 1) {
    switch (*esc) {
    case (0): {
      // excluir 0
      *p[0].nome = 0;
      *p[0].end = 0;
      *p[0].cidade = 0;
      *p[0].estado = 0;
      p[0].cep = 0;

      printf("\n Excluido com sucesso");

      break;
    }
    case (1): {
      // excluir 1°
      *p[1].nome = 0;
      *p[1].end = 0;
      *p[1].cidade = 0;
      *p[1].estado = 0;
      p[1].cep = 0;

      printf("\n Excluido com sucesso");
      break;
    }
    case (2): {
      // excluir 2°
      *p[2].nome = 0;
      *p[2].end = 0;
      *p[2].cidade = 0;
      *p[2].estado = 0;
      p[2].cep = 0;

      printf("\n Excluido com sucesso");

      break;
    }
    case (3): {
      // excluir 3°
      *p[3].nome = 0;
      *p[3].end = 0;
      *p[3].cidade = 0;
      *p[3].estado = 0;
      p[3].cep = 0;

      printf("\n Excluido com sucesso");
      break;
    }

      // fim switch
    }
    // fim if
  } else {
    printf("\nOperação Excluir não realizada.");
  }
  // fim procedimento
}
void Alterar(struct dados *p, int *esc) {
  int confirm;
  do {
    printf("\nDeseja realizar a Operação Alterar?(1 - Sim, 2 - Não)");
    scanf("%d", &confirm);
  } while (confirm < 1 || confirm > 2);
  if (confirm == 1) {
    switch (*esc) {
    case (0): {
      // alterar 0
      printf("\n________________________");
      printf("\nDigite o Nome: ");
      scanf("%s", p[0].nome);
      printf("\nDigite o Endereço: ");
      scanf("%s", p[0].end);
      printf("\nDigite o Cidade: ");
      scanf("%s", p[0].cidade);
      printf("\nDigite o Estado: ");
      scanf("%s", p[0].estado);
      printf("\nDigite o CEP: ");
      scanf("%d", &p[0].cep);
      printf("\n------------------------");

      printf("\n Alterado com sucesso");

      break;
    }
    case (1): {
      // alterar 1°
      printf("\n________________________");
      printf("\nDigite o Nome: ");
      scanf("%s", p[0].nome);
      printf("\nDigite o Endereço: ");
      scanf("%s", p[0].end);
      printf("\nDigite o Cidade: ");
      scanf("%s", p[0].cidade);
      printf("\nDigite o Estado: ");
      scanf("%s", p[0].estado);
      printf("\nDigite o CEP: ");
      scanf("%d", &p[0].cep);
      printf("\n------------------------");

      printf("\n Alterado com sucesso");
      break;
    }
    case (2): {
      // alterar 2°
      printf("\n________________________");
      printf("\nDigite o Nome: ");
      scanf("%s", p[0].nome);
      printf("\nDigite o Endereço: ");
      scanf("%s", p[0].end);
      printf("\nDigite o Cidade: ");
      scanf("%s", p[0].cidade);
      printf("\nDigite o Estado: ");
      scanf("%s", p[0].estado);
      printf("\nDigite o CEP: ");
      scanf("%d", &p[0].cep);
      printf("\n------------------------");

      printf("\n Alterado com sucesso");
      break;
    }
    case (3): {
      // alterar 3°
      printf("\n________________________");
      printf("\nDigite o Nome: ");
      scanf("%s", p[0].nome);
      printf("\nDigite o Endereço: ");
      scanf("%s", p[0].end);
      printf("\nDigite o Cidade: ");
      scanf("%s", p[0].cidade);
      printf("\nDigite o Estado: ");
      scanf("%s", p[0].estado);
      printf("\nDigite o CEP: ");
      scanf("%d", &p[0].cep);
      printf("\n------------------------");

      printf("\n Alterado com sucesso");
      break;
    }

      // fim switch
    }
    // fim if
  } else {
    printf("\nOperação Alterar não realizada.");
  }

  // fim processo
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // criar struct de 4 elementos
  struct dados usuario[4] = {"a1", "a2", "a3", "a4", 1111, "b1", "b2",
                             "b3", "b4", 2222, "c1", "c2", "c3", "c4",
                             3333, "d1", "d2", "d3", "d4", 4444};
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // entrada
    struct dados *pont = &usuario[0];
    int olha, cao;
    int *esc = &olha, *op = &cao;

    // função menu principal
    do {
      printf("\nO que deseja fazer? \n\t1- Entrada de dados \n\t2- Alterar "
             "dados\n\t3- Excluir elemento\n\t4 - Pesquisar\n\t5 - Exibir\n\t6 "
             "- Sair\n");
      scanf("%d", esc);

      switch (*esc) {
      case (1): {
        // Entrada
        Entrada(pont);
        break;
      }
      case (2): {
        // Alterar
        Saida(pont);
        *op = Pesquisa(pont, "Alterar");
        if (*op < 4) {
          Alterar(pont, op);
        } else {
          printf("\nOperação Alterar não realizada.");
        }
        break;
      }
      case (3): {
        // Excluir
        Saida(pont);
        *op = Pesquisa(pont, "Excluir");
        if (*op < 4) {
          Excluir(pont, op);
        } else {
          printf("\nOperação Excluir não realizada.");
        }

        break;
      }
      case (4): {
        // Pesquisar
        Pesquisa(pont, "Pesquisar");
        break;
      }
      case (5): {
        // Exibir
        Saida(pont);
        break;
      }

      case (6): {
        // sair
        *esc = 7;
        break;
      }
        /// fim switch
      }
    } while (*esc < 6);
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}

#endif
