#include <stdio.h>

struct student
{
  char firstname[64];
  char lastname[64];
  char id[64];
  int score;
};


struct student getDetail();
void displayDetail(struct student std);

int main()
{
  struct student a[3];
  for(int i = 0; i < 3; i++)
  {
    printf("Enter detail of student %d\n", (i+1));
    a[i] = getDetail();
  }
  for(int i = 0; i < 3; i++)
  {
    printf("\nStudent %d Detail:\n", (i+1));
    displayDetail(a[i]);
  }
  return 0;
}


struct student getDetail()
{
  struct student std;
  printf("Enter First Name: ");
  scanf("%s", std.firstname);
  printf("Enter Last Name: ");
  scanf("%s", std.lastname);
  printf("Enter ID: ");
  scanf("%s", std.id);
  printf("Enter Score: ");
  scanf("%d", &std.score);
  return std;
}


void displayDetail(struct student std)
{
  printf("Firstname: %s\n", std.firstname);
  printf("Lastname: %s\n", std.lastname);
  printf("ID: %s\n", std.id);
  printf("Score: %d\n", std.score);
}
