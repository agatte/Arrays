#ifndef _DynamicArrays_H#define _DynamicArrays_H/*------------------------------------------------------------The dynamic arrays (ArrayLists) container class.Anthony Gatte-------------------------------------------------------------*/class DynamicArrays { public:  /* Constructors/Destructors */  // This constructor initializes the array container to  // be initially empty.  The bag is constructed to contain 42 slots  // if no user value is specified.  DynamicArrays (int initArraySize = 42);  // The destructor deletes the dyanmically allocated array.  ~DynamicArrays ();  /* Accessor methods */  // Return to the caller the total number of objects stored  // in the list.  // Postconditions: returned value is >= 0.  int Size () const;  // Return to the caller the object stored at the specified  // location  // Precondition: 0 <= index < size  int Get (int index) const;  /* Mutator methods */  // Add the given element to the list  // Preconditions: none.  // Postconditions: array[size]=element, size++  void Add (int element);  // Add the given element to the list.  // Preconditions: 0 <= index < size  // Postconditions: array[index]=element, size++  //	This shifts "right" all elements whose index is greater than index  void Add (int index, int element);  // Remove the indicated element from the list  // Preconditions: 0 <= index < size  // Postconditions: size--; all elements to the right of index, shifted left one  int Remove (int index);  // Clear all the elements from the list  // Preconditions: none  // Postconditions: size = 0  void Clear ();  // Removes first element in the array and returns it  // Preconditions: 0 is less than the size of the array  // Postconditions: The size of the array will be array - 1 and all the elements to the right of the first element will be shifted over  int RemoveFirst ();  // Removes the last element in the array and returns it  // Preconditions: 0 is less than the size of the array  // Postconditions: The size of the array will be array - 1  int RemoveLast (); private:  /* Instance variables */  int *bag;  int bagSize;  int size;  /* Helper functions */  void DoubleList();};#endif