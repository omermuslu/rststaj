#include "pch.h"
#include <iostream>
#include <vector>
#include "dosyalama.h"
#include "Sorting.h"
#include <fstream>
using namespace std;
dosyalama::dosyalama() {
}
void dosyalama::dosyala(std::vector<int> array, int w) {
	Sorting srt;
	fstream file;
	//burada sorting classından fonksiyon ve variable çağırmak için sortingden bir nesne tanımladık 
	//srt.AsalBulma();
	//srt.Asalbubble(srt.v2, srt.w);
	file.open("asalsayii.txt",ios::out);
	file << "asalbulma fonksiyonumuz" << endl;
	
	for (int p = 0; p < array.size(); p++) //arrayin size ı fonka yanlış geliyo
	{
		y = array[p]; //arrayi doldurmuyor sıkıntı bu
		file << y << endl;
		
	}
	
	
}






