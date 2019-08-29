//#include "dosyalama.h"
class Sorting{
public:
	Sorting();

	int i; 
	int j, memory;
	int array[5] = { 66,21,33,7,13 };
	int arra[6] = { 11,22,44,55,77,111 };
	int arr[8] = { 9,19,49,29,39,99,88,100 };
	int size = sizeof(array) / sizeof(array[0]);
	int sizee = sizeof(arra) / sizeof(arra[0]);
	int sizeee = sizeof(arr) / sizeof(arr[0]);
	int* Bubblesort(int array[], int size); //bubblesort fonksiyonu
	int* Write(int array[], int size); //ekrana yazma fonksiyonu
	
public://heap sort için
	int arr1[4] = { 1, 13,35, 77 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[4] = { 10, 24, 56, 89 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int arr3[8];
	void Heap(int arr1[],int arr2[],int n1,int n2,int arr3[]);
	void Writee();
/////////////////////////////////////////////////////////////////////////////////////////
	int a[50];//quick sort
	int boyutt;
	int v,temp,n;
	void quick_sort(int[], int, int);	
	int partition(int[], int, int);
	void getarray();
////////////////////////////////////////////
public:
	int diz[6] = { 12, 11, 13, 5, 6, 7 };//merge sort
	int diz_size = sizeof(diz) / sizeof(diz[0]);
	void printArray(int A[], int size);
	void mergeSort(int diz[], int l, int r);
	void merge(int diz[], int l, int m, int r);
	///////////////////
	std::vector<int> v1; //std:: olmadan cppde v1 ve v2yi tanımadı.
	std::vector <int> v2; //asalları bu vektöre dolduracağım.
	int boy; //v1'in boyu
	int w; //v2'nin boyu
	void AsalBulma();
	void Asalbubble(std::vector<int> v2,int w); //v1 ve boy da yazabilirsn
		
};




	




	
	
	




	
	










	
	


	










