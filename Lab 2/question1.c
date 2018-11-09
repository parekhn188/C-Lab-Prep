#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void print_vector(double array [], int size);
void add_vectors(double vect1[], double vect2[], double vect3[], int n);
double scalar_prod(double vect1[], double vect2[], int n);
double L2_Norm(double vect[], int n);

void main() {
  int arraySize = 0;
  double val = 0.0;
  printf("Enter the size of the vector\n");
  scanf("%d ", &arraySize);

  double array[arraySize];
  double vec2[arraySize];
  double tempVec[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Enter the %d element of the first vector ", i+1);
    scanf("%lf", &val);
    array[i] = (double) val;
  }

  for (int i = 0; i < arraySize; i++) {
    printf("Enter the %d element of the second vector ", i+1);
    scanf("%lf", &val);
    vec2[i] = (double) val;
  }

  //Print Test
  print_vector(array, arraySize);
  printf("\n");
  print_vector(vec2, arraySize);
  printf("\n");

  //Sum Test
  add_vectors(array, vec2, tempVec, arraySize);
  print_vector(tempVec, arraySize);
  printf("\n");

  //Prod Test
  double scalarVal = scalar_prod(array, vec2, arraySize);
  printf("%f\n", scalarVal);

  //L2_Norm Test
  double normVal = L2_Norm(array, arraySize);
  printf("%f\n", normVal);
}

void print_vector(double array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%.3f, ", (double) array[i]);
  }
}

void add_vectors(double vect1[], double vect2[], double vect3[], int n) {
  for (int i = 0; i < n; i++) {
    vect3[i] = vect1[i] + vect2[i];
  }
}

double scalar_prod(double vect1[], double vect2[], int n) {
  double scalarProd = 0.0;
  for (int i = 0; i < n; i++) {
    scalarProd += vect1[i] * vect2[i];
  }
  return scalarProd;
}

double L2_Norm(double vect[], int n) {
  return sqrt(scalar_prod(vect, vect, n));
}
