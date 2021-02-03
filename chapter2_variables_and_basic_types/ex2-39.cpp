//Exercise  2.39:  Compile  the  following  program  to  see  what  happens  whenyou  forget 
//the  semicolon  after  a  class  definition.  Remember  the  message  forfuture reference.

struct Foo { /* empty*/ } // Note: no semicolon
int main()
{
	return 0;
}

//chapter2/ex2-39.cpp:4:26: error: expected ';' after struct
//struct Foo { /* empty*/ } // Note: no semicolon
//                         ^
//                         ;

