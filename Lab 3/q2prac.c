#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char firstName[15];
  char lastName[15];
  int project1Grade;
  int project2Grade;
  float finalGrade;
} student;

student **createClassList(char *filename, int *sizePtr);
int find(int idNo, student **list, int size);
void inputGrades(char *filename, student **list, int size);
void computeFinal(student **list, int size);
void outputFinal(char *filename, student **list, int size);
void printList(student **list, int size);
void withdraw(int idNo, student **list, int *sizePtr);
void destroy_list(student **list, int *sizePtr);


void main() {
  int classSize, i;
  student **class = createClassList("stulist.txt", &classSize);

  printf("Size: %d\n", classSize);
  for (i = 0; i < classSize; class++, i++) {
    printf("%d %s %s\n", (*class) -> id, (*class) -> firstName, (*class) -> lastName);
  }

  class = class - i;
  printf("\nFind Testing\n");
  printf("%d\n", find(1200, class, classSize));
  printf("%d\n", find(4500, class, classSize));
  printf("%d\n", find(9000, class, classSize));
  printf("%d\n", find(1425, class, classSize));

  inputGrades("grad.txt", class, classSize);
  for(i = 0; i < classSize; class++, i++) {
    printf("%d %d\n", (*class) -> project1Grade, (*class) -> project2Grade);
  }

  class = class - i;
  computeFinal(class, classSize);
  printf("\n");

  outputFinal("finals.txt", class, classSize);

  printList(class, classSize);
  withdraw(1200, class, &classSize);
  printList(class, classSize);
  withdraw(1900, class, &classSize);

  destroy_list(class, &classSize);
  printList(class, classSize);


}


student **createClassList(char *filename, int *sizePtr) {
  FILE *openfile = fopen(filename, "r");
  student **studentList = NULL;

  fscanf(openfile, "%d", sizePtr);
  studentList =  calloc(*sizePtr, sizeof(student*));

  for (int i = 0; i < *sizePtr; i++) {
    *(studentList + i) = malloc(sizeof(student));
    fscanf(openfile, "%d %s %s", &((*(studentList + i)) -> id),
                                 &((*(studentList + i)) -> firstName),
                                 &((*(studentList + i)) -> lastName));
  }
  fclose(openfile);
  return studentList;
}

int find(int idNo, student **list, int size) {
  int isFound = 0;
  int i = 0;

  for (i = 0; i < size; i++) {
    if ((*(list + i)) -> id == idNo) {
      isFound = 1;
      break;
    } else  {
      isFound = 0;
    }
  }
  if (isFound != 0) {
    return i;
  } else {
    return -1;
  }
}

void inputGrades(char *filename, student **list, int size) {
  FILE *openfile = fopen(filename, "r");
  int id, g1, g2;

  for (int i = 0; i < size; i++) {
     fscanf(openfile, "%d %d %d", &id, &g1, &g2);
     if (find(id, list, size) != -1) {
       (*(list + find(id, list, size))) -> project1Grade = g1;
       (*(list + find(id, list, size))) -> project2Grade = g2;
     } else {
       printf("Student does not exist in the list");
   }
  }
  fclose(openfile);
}


void computeFinal(student **list, int size) {
  for (int i = 0; i < size; i++) {
    (*(list + i)) -> finalGrade = ((*(list + i)) -> project1Grade + (*(list + i)) -> project2Grade)/2;
  }
}

void outputFinal(char *filename, student **list, int size) {
  FILE *writeFile = fopen(filename, "w");
  fprintf(writeFile, "%d\n", size);
  for (int i = 0; i < size; i++) {
    fprintf(writeFile, "%d %.2f\n", (*(list + i)) -> id, (*(list + i)) -> finalGrade);
  }
  fclose(writeFile);
}

void printList(student **list, int size) {
  for (int i = 0; i < size; i++) {
    printf("ID: %d First: %s Last: %s P1 Grade : %d P2 Grade: %d Final: %f\n",
      (*(list + i)) -> id,
      (*(list + i)) -> firstName,
      (*(list + i)) -> lastName,
      (*(list + i)) -> project1Grade,
      (*(list + i)) -> project2Grade,
      (*(list + i)) -> finalGrade);
  }
}


void withdraw(int idNo, student **list, int *sizePtr) {
  if (find(idNo, list, *sizePtr) != -1) {
    for (int i = find(idNo, list, *sizePtr) + 1; i < *sizePtr; i++) {
      *(list[i - 1]) = *(list[i]);
    }
    free(list[--(*sizePtr)]);
  }
  else {printf("Student not found\n");}
}


void destroy_list(student **list, int *sizePtr)  {
  for (int i  = 0; i < *sizePtr; i++) {
    free(list[i]);
   }
}
