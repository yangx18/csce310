#include "csce310homeWork01part02.h"
#include <string>
#include <iostream>

using namespace std;

void printPermutations( string word , int permutations ){
	
	for( int a = 0; a < permutations; a++ ){
		cout << word << endl;
		int i,j;
	
		int length= word.size();
		// i = largest index such that ai < ai+1;//	 
		for (i = length-2;i>0;i--){ //i = largest index such that a(i) < a(i+1) 
	
			if (word[i]<word[i+1])
			break;
		}
		//  j = largest index such that a(j)<a(i)//
		for (j=length-1;j>i;j--){ //j = largest index such that a(j)<a(i)
	
			if (word[i]<word[j])
			break;
		}
		
		//swap ai and aj//
		char x; 
		x=word[i];				//swap a(i) and a(j) 
		word[i]=word[j]; 
		word[j]=x; 
		
		//reverse order of ai=1 through an
		//add permutation to List 
		//If ... go to step (i = largest index ...)
		int index = length - 1;
		while   (i=i+1;i<index;i++,index--){ //reverse order of a[i+1] to the end 
			x=word[i];				
			word[i]=word[index];
			word[index]=x;
		}
	
	}						
  	
  return;
}
