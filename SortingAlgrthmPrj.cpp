#include "pch.h"
#include <iostream>
#include <vector>
#include "Sorting.h"
#include <time.h>
#include "dosyalama.h"
#include <fstream>

using namespace std;
int main()
{
	Sorting classobject;
	dosyalama fileobject;
	cout << "BUBBLE SORT" << endl;
	classobject.Bubblesort(classobject.array, classobject.size);
	classobject.Write(classobject.array, classobject.size);
	classobject.Bubblesort(classobject.arra, classobject.sizee);
	classobject.Write(classobject.arra, classobject.sizee);
	classobject.Bubblesort(classobject.arr, classobject.sizeee);
	classobject.Write(classobject.arr, classobject.sizeee);
	////////////////////////////////////////////////////
	cout << "heap";
	classobject.Heap(classobject.arr1, classobject.arr2,classobject.n1, classobject.n2, classobject.arr3);
	classobject.Writee();
	/////////////////////////////////////////////////////////////
	cout << endl;
	cout << "quicksort";
	classobject.getarray();
	classobject.quick_sort(classobject.a, 0,classobject.boyutt-1);
	cout << endl;
	////////////////////////////////////////////////////////////////////////
	cout << "mergeSort" << endl;
	classobject.printArray(classobject.diz, classobject.diz_size);
	classobject.mergeSort(classobject.diz, 0, classobject.diz_size - 1);
	classobject.printArray(classobject.diz, classobject.diz_size);
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	classobject.AsalBulma(); 
	classobject.Asalbubble(classobject.v2, classobject.w);  //asal sayılarımızı sıraladık hem ekranda
	//classobject.dosyala(classobject.v2, classobject.w); //hem  txt dosyasında yazdırdık
	fileobject.dosyala(classobject.v2 ,classobject.w); //
	cout << "asalbubble txt dosyasina yazildi" << endl;


	
}


