int main()
{
  char nome;
  float nota1, nota2, media;
  printf ("Digite o nome do aluno:\n");
  scanf ("%c", &nome);
  printf ("Digite a primeira nota:\n");
  scanf ("%f", &nota1); 
  printf ("Digite a segunda nota:\n");
  scanf ("%f", &nota2); 
  media = (nota1 + nota2)/2;
  printf ("media do aluno = %.2f \n", media);
  if (media >= 6) 
  {
    printf ("Aprovado! \n");
    printf ("Parabéns! \n");
  }
 else 
{
    printf("Reprovado! \n");
    printf("Fail! \n");
}
printf("Programa encerrado \n");
}
