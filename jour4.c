#include <stdio.h>


struct Personne
{
  char name[32];
  int age;
  float size;

};




int main(void)
{
  struct Personne firstPerson =
    {
      "Clark",
      56,
      1.72

    };

  struct Personne secondPerson =
    {
      "Bernadette",
      23,
      2.03

    };

  puts("DATA OF FIRST PERSON");
  printf("Name: %s\n", firstPerson.name);
  printf("Age: %d\n", firstPerson.age);
  printf("Size: %.2f\n", firstPerson.size);

  puts("");

  puts("DATA OF SECOND PERSON");
  printf("Name: %s\n", secondPerson.name);
  printf("Age: %d\n", secondPerson.age);
  printf("Size: %.2f\n", secondPerson.size);

  // 1. Sauvegarder les deux personnes dans un fichier binaire
  FILE *file = fopen("personnes.bin", "wb");
  if (file == NULL) {
    printf("Erreur lors de l'ouverture du fichier en ecriture\n");
    return 1;
  }
  
  fwrite(&firstPerson, sizeof(struct Personne), 1, file);
  fwrite(&secondPerson, sizeof(struct Personne), 1, file);
  
  fclose(file);
  printf("\nDonnees sauvegardees dans personnes.bin\n");

  // 2. Relire le fichier et afficher les données
  struct Personne readFirstPerson;
  struct Personne readSecondPerson;
  
  file = fopen("personnes.bin", "rb");
  if (file == NULL) {
    printf("Erreur lors de l'ouverture du fichier en lecture\n");
    return 1;
  }
  
  size_t n1 = fread(&readFirstPerson, sizeof(struct Personne), 1, file);
  size_t n2 = fread(&readSecondPerson, sizeof(struct Personne), 1, file);
  
  if (n1 != 1 || n2 != 1) {
    printf("Erreur de lecture\n");
    fclose(file);
    return 1;
  }
  
  fclose(file);
  
  puts("\nDONNEES RELUES DU FICHIER:");
  puts("DATA OF FIRST PERSON (from file)");
  printf("Name: %s\n", readFirstPerson.name);
  printf("Age: %d\n", readFirstPerson.age);
  printf("Size: %.2f\n", readFirstPerson.size);

  puts("");

  puts("DATA OF SECOND PERSON (from file)");
  printf("Name: %s\n", readSecondPerson.name);
  printf("Age: %d\n", readSecondPerson.age);
  printf("Size: %.2f\n", readSecondPerson.size);

  return 0;

}
