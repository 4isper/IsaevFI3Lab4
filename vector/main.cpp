#include <iostream>
#include <Matrix.h>
#include <ctime>

int main() {
  TVector<int> vector1;
  TVector<int> vector2(4);
  TVector<int> vector3(vector2);

  TVector<double> vector1d;
  TVector<double> vector2d(5);
  TVector<double> vector3d(vector2d);

  int len = vector1.GetLen();

  vector2[0] = 3; vector2[1] = 2; vector2[2] = 3; vector2[3] = 3;
  std::cin >> vector3;
  /*srand(time(NULL));

  for (int i = 0; i < 100000000; i++) vector2[i] = rand() % 100;

  for (int i = 0; i < 100000000; i++) vector3[i] = rand() % 100;

  clock_t t;
  t = clock();*/
  vector1 = vector3 + vector2;
  //t = clock() - t;
  
  //std::cout << (double(t)) / CLOCKS_PER_SEC << std::endl;

  vector1 = vector3 - vector2;
  vector1 = vector3 * vector2;
  vector1 = vector3 / vector2;
  if (vector1 == vector2) std::cout << true << std::endl;
  if (vector1 != vector2) std::cout << false << std::endl;

  std::cout << vector1;

  TMatrix<int> mat1(3,4);
  TMatrix<int> mat2(4);
  TMatrix<int> mat3;
  TMatrix<int> mat4(mat2);

  int w = mat1.GetWidth();

  mat1[0][0] = 5; mat1[0][1] = 5; mat1[0][2] = 0;
  mat1[1][0] = 6; mat1[1][1] = 2; mat1[1][2] = 1;
  mat1[2][0] = 7; mat1[2][1] = 2; mat1[2][2] = 3;
  mat1[3][0] = 2; mat1[3][1] = 3; mat1[3][2] = 5;

  std::cin >> mat2;
  /*for (int i = 0; i < 10000; i++)
    for (int j = 0; j < 10000; j++) 
      mat1[i][j] = rand() % 100;

  for (int i = 0; i < 10000; i++)
    for (int j = 0; j < 10000; j++)
      mat2[i][j] = rand() % 100;

  t = clock();*/
  mat3 = mat1 + mat2;
 /* t = clock() - t;

  std::cout << (double(t)) / CLOCKS_PER_SEC << std::endl;*/
  mat3 = mat1 - mat2;

  /*t = clock();*/
  mat3 = mat1 * mat2;
  //t = clock() - t;

  //std::cout << (double(t)) / CLOCKS_PER_SEC << std::endl;

  if (mat1 == mat2) std::cout << true << std::endl;
  if (mat1 != mat2) std::cout << false << std::endl;
  mat1[0][0] = 5;

  vector1 = vector2 * mat1;
  vector2 = mat1 * vector1;

  std::cout << vector1;

  vector1.quickSort();
  vector1.bubbleSort();
  vector2.insertionSort();
  vector2.findCol(5);
  vector3.Find(3);
  
  std::cout << vector1;

  std::cin >> mat1;
  std::cout << mat1;

  std::cout << mat1.findCol(8) << std::endl;
  
  int n = 3;
  int* mas = vector2.Find(n);
  for (int i = 0; i < vector2.findCol(n); i++)
    std::cout << mas[i] << " ";
  std::cout << std::endl << std::endl;


  n = 5;
  int** mas2 = mat1.Find(n);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < mat1.findCol(n); j++)
      std::cout << mas2[i][j] << " ";
    std::cout << std::endl;
  }
  return 0;
}