#include<stdio.h>
main()
{
	char s[]="No two viruses work similarly";
	int i=0;
	while(s[i]!=0)
	{
		printf("\n%c %c",s[i],*(s+i));
		printf("\n%c %c",i[s],*(i+s));
		i++;
	}
}
/*Out put:
N N
N N
o o
o o


t t
t t
w w
w w
o o
o o


v v
v v
i i
i i
r r
r r
u u
u u
s s
s s
e e
e e
s s
s s


w w
w w
o o
o o
r r
r r
k k
k k


s s
s s
i i
i i
m m
m m
i i
i i
l l
l l
a a
a a
r r
r r
l l
l l
y y
y y*/
