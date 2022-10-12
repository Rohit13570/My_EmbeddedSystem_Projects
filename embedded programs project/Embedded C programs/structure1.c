#include <stdio.h>
#include <string.h>
struct books{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};
int main()
{
	struct books book1;
	struct books book2;
	strcpy(book1.title," c programming");
	strcpy(book1.author," nuha ali");
	strcpy(book1.subject," c programming");
 book1.book_id =1;
	strcpy(book2.title," telecom");
	strcpy(book2.author," rohit");
	strcpy(book2.subject," telecom tutorial");
	book2.book_id=2;
	printf(" book 1 title =%s\n",book1.title);
	printf(" book 1 author =%s\n",book1.author);
	printf(" book 1 subject =%s\n",book1.subject);
	printf(" book 1 id =%d\n",book1.book_id);
	printf(" book 2 title =%s\n",book2.title);
	printf(" book 2 author =%s\n",book2.author);
	printf(" book 2 subject =%s\n",book2.subject);
	printf(" book 2 id =%d\n",book2.book_id);
	return 0;
}
