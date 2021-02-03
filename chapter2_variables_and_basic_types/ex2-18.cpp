//Exercise  2.18:  Write  code  to  change  the  value  of  a  pointer.
//int *p = NULL;
//int *p2 = NULL;
//p = p2;
//Write  code  tochange the value to which the pointer points.
//*p2 = 5;

//Exercise 2.19: Explain the key differences between pointers and references.
//pointers save the address of a variable in the memory of the computer.
//references gives the address of a variable.
//pointer is an object where reference is not.
//also: reference can not be void, pointers can be multi-level where references are only
//one leveled, the value of reference can not be reseated, references can not be NULL, 
//reference must be initialized when declared

//Exercise 2.20: What does the following program do?
//int i = 42;
//int *p1 = &i;
//*p1 = *p1 * *p1;
//the pointer p1 points to the value of i. *p1 = *p1 * *p1; is the same as i = i * i;

//Exercise  2.21:  Explain  each  of  the  following  definitions.  Indicate  whetherany are illegal and, if so, why.
//int i = 0;
//(a)double* dp = &i; illegal. Trying to assign the address of an int to double pointer.
//(b)int *ip = i; illegal. Trying to assign int to *int, and the types do not match.
//(c)int *p = &i; legal. Assigning the address of i to int pointer p.

//Exercise 2.22: Assuming p is a pointer to int, explain the following code:
//if (p) // ... if the pointer is not a NULL pointer.
//if (*p) // ... if the pointer points to a value that is not 0

//Exercise 2.23: Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?
//just with a pointer you can not. But a good practise is to set unused pointer to NULL, so when they are
//pointing to a valid object they are not NULL. This also applies to freeing the pointer, it should be set to NULL again.

//Exercise 2.24: Why is the initialization of p legal but that of lp illegal?
//int i = 42; void *p = &i; long *lp = &i;
//void pointer can point to value of any type. In any other case the type of the pointer must match that of the value.