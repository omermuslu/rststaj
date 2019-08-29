#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "Sorting.h"
using namespace std;

Sorting::Sorting(){
}
int* Sorting::Bubblesort(int array[],int size)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				memory = array[j];
				array[j] = array[j + 1];
				array[j + 1] = memory;
			}
		}
	}
	return array;
}
int* Sorting::Write(int array[], int size)
{
	for (i = 0; i < size; i++)
	{
		cout << "" << array[i]<<endl;
	}
	cout << endl;
	return array;
}
////////////////////////////////////////////////////////////////////////
void Sorting::Heap(int arr1[], int arr2[], int n1,int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while (i < n1)
		arr3[k++] = arr1[i++]; 
	while (j < n2)
		arr3[k++] = arr2[j++];
}
void Sorting::Writee()
{
	cout << "Array after merging" << endl;
	for (int i = 0; i < 8; i++)
		cout << arr3[i] << " ";
}
//////////////////////////////////////////////////
void Sorting::getarray()
{

	
	cout << "\n eleman?";
	cin >> boyutt;
	cout << "\nEnter array elements:";

	for (i = 0; i < boyutt; i++)
		cin >> a[i];

}
void Sorting::quick_sort(int a[], int l, int u)
{
	
	if (l < u)
	{
		j = partition(a, l, u);
		quick_sort(a, l, j - 1);
		quick_sort(a, j + 1, u);
	}
}
int Sorting::partition(int a[], int l, int u)
{

	v = a[l];
	i = l;
	j = u + 1;

	do
	{
		do{
			i++;

		} while (a[i] < v&&i <= u);

		do{
			j--;
		} while (v < a[j]);

		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	} while (i < j);

	a[l] = a[j];
	a[j] = v;
	cout << "\nArray after Quicksort:";

for (i = 0; i < boyutt; i++){
		cout << a[i] << " ";
}


	return(j);

};
///////////////////////////////////////////////////////////////
void Sorting::merge(int diz[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[3], R[3];
	for (i = 0; i < n1; i++)
		L[i] = diz[l + i];
	for (j = 0; j < n2; j++)
		R[j] = diz[m + 1 + j];

	
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			diz[k] = L[i];
			i++;
		}
		else
		{
			diz[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		diz[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		diz[k] = R[j];
		j++;
		k++;
	}
}
void Sorting::mergeSort(int diz[], int l, int r)
{
	if (l < r)
	{
	int m = l + (r - l) / 2;
	mergeSort(diz, l, m);
	mergeSort(diz, m + 1, r);
	merge(diz, l, m, r);
	}
} //dinamik olmadı 
void Sorting::printArray(int A[], int size)
{
	int i;
	for (i = 0; i < diz_size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

void Sorting::AsalBulma() {


	int sayac1 = 0, sayac2 = 0;
	for (i = 0; i < 100; i++)
	{
		v1.push_back(i);
	}
	cout << "0-100arasi vektor" << endl;
	for (i = 0; i < 100; i++)
	{
		cout << "" << v1.at(i) << endl;
	}
	int boy = v1.size();
	cout << "vektor boyutumuz:" << boy << endl;
	/////////////
	for (i = 2; i < boy; i++)
	{
		sayac1 = 0;
		for (j = 2; j < i; j++)
		{
			if (v1.at(i) % v1.at(j) == 0)
			{
				sayac1++;
				break;
			}
		}
		if (sayac1 % i == 0)
		{
			cout << i << " ";
			v2.push_back(i);//başka bir vektöre doldurduk asal sayıları
			sayac2++;
		}
	}
	cout << endl;
	int w = v2.size();
	cout << "asallarin yeni vektoru" << endl;
	for (i = 0; i < sayac2; i++)
	{
		cout << "" << v2.at(i) << endl;
	}
} 
//bubble sort  asalları dizmek için
void Sorting::Asalbubble(std::vector<int> array, int boy)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				memory = array[j];
				array[j] = array[j + 1];
				array[j + 1] = memory;
			}
		}
	}
	cout << "asallarin bubble sortu" << endl;
	for (i = 0; i < v2.size(); i++)
	{
		cout << "" << array[i] << endl;
	}
	cout << endl;
}


