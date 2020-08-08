//my_array
//Drew Gotshalk
//2020-08-05
#include <iostream>
#include <string>
#include <stdexcept>
#include "my_array.h"


template <class T, int startsize>
void my_array<T,startsize>::resize(){
	if (current_size == current_capacity){
		T* new_array = new T[current_capacity*2];
		for (int i = 0; i < current_size; ++i){
			new_array[i] = arr[i];
		}
		delete []arr;
		arr	= new_array;
		current_capacity *= 2;
		return;
	}
	else if(current_size == current_capacity/4){
		T* new_array = new T[current_capacity/2];
		for (int i = 0; i < current_size; ++i){
			new_array[i] = arr[i];
		}
		delete []arr;
		arr = new_array;
		current_capacity /= 2;
		return;
	}
};

template <class T,int startsize>
bool my_array<T,startsize>::is_empty(){
	if(current_size == 0){
		return true;
	}
	else {
		return false;
	}
}

template <class T,int startsize>
T my_array<T,startsize>::at(int index){
	if (index > current_size+1 || index < 0){
		throw std::out_of_range("Invalid index");
	}
	return arr[index];
};

template <class T,int startsize>
void my_array<T,startsize>::push(T item){
	arr[current_size] = item;
	resize();
}

template <class T,int startsize>
void my_array<T,startsize>::insert(int index, T item){
		
}

template <class T,int startsize>
void my_array<T,startsize>::prepend(T item){

}

template <class T,int startsize>
T my_array<T,startsize>::pop(){

}

template <class T,int startsize>
void my_array<T,startsize>::remove(int index){

}

template <class T,int startsize>
void my_array<T,startsize>::remove_val(T val){

}

template <class T,int startsize>
int my_array<T,startsize>::find(T val){

}
