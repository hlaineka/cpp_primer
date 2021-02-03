//Exercise  2.26:  Which  of  the  following  are  legal?  For  those  that  are  illegal, explain why.
//(a)const int buf; illegal, a const must be initialized when declared.
//(b)int cnt = 0; valid.
//(c)const int sz = cnt; valid.
//(d)++cnt; ++sz; illegal. Can not change the value of const sz.