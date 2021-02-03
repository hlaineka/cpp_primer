//Exercise 2.27: Which of the following initializations are legal? Explain why.
//(a)int i = -1, &r = 0; illegal. For some reason 0 is a temporary in here. Because i and r are of a different type?
//(b)int *const p2 = &i2; legal, if i2 is declared before this.
//(c)const int i = -1, &r = 0; legal, but WHY?
//(d)const int *const p3 = &i2; legal if i2 is declared before this.
//(e)const int *p1 = &i2;
//(f)const int &const r2;
//(g)const int i2 = i, &r = i;
