//my_array
//Drew Gotshalk
//2020-08-05

#ifndef MY_ARRAY_H
#define MY_ARRAY_H

template <class T, int startsize>
class my_array {
	private:
		int current_size;
		int current_capacity;
		T* arr;
		void resize();
	
	public:
		my_array() {current_size = 0; current_capacity = startsize; arr = new T[startsize];};
		int size() { return current_size;};
		int capacity() { return current_capacity;};
		bool is_empty();
		T at(int index);
		void push(T item);
		void insert(int index, T item);
		void prepend(T item);
		T pop();
		void remove(int index);
		void remove_val(T val);
		int find(T val);	
};

#endif // !MY_ARRAY_H 
