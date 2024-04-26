/*
5. Sobre estruturas definidas pelo usuário:
a. Explique qual a sua finalidade em um exemplo real de aplicação.

As estruturas definidas pelo usuário, também conhecidas como structs em C, são usadas para agrupar itens de dados relacionados de diferentes tipos de dados.
Elas são extremamente úteis quando queremos modelar entidades do mundo real que têm várias propriedades ou atributos.
Por exemplo, considere um sistema de gerenciamento de recursos humanos. Nesse sistema, precisamos manter informações sobre cada funcionário,
como nome, endereço, salário, identidade, CPF, estado civil, telefone, idade e sexo.
Em vez de manter cada um desses itens como uma variável separada, podemos criar uma struct para agrupar todas essas informações juntas.
Isso torna o código mais organizado e mais fácil de gerenciar.


b. Crie as structs que melhor representam as relações da figura abaixo.

Cadastro: Nome, Endereço, Salário, Identidade, Cpf, Estado civil, Telefone, Idade, Sexo.
Endereço é composto de: Rua, Bairro, Cidade, Estado, CEP.

struct Endereco {
    char rua[100];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[10];
};

struct Cadastro {
    char nome[100];
    struct Endereco endereco;
    float salario;
    char identidade[20];
    char cpf[15];
    char estadoCivil[20];
    char telefone[15];
    int idade;
    char sexo[10];
};
*/