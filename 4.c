/*Од стандарден влез се читаат знаци се додека не се прочита извичник.
 Во вака внесениот текст се скриени цели броеви (помали од 100). 
 Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати 
 збирот на сите броеви скриени во текстот.*/

#include <stdio.h>

int main()
{
    char c;
    int zbir=0;
    int temp=0;
    while ((c=getchar()) != '!' ){
        if(c>= '0' && c <= '9')
        {
            temp = (temp*10) + c - ('0');
            // c - 0 e konverzija vo integer
        }
        else
        {
            zbir=zbir+temp;
            temp=0; //se stava 0 za da pocne da go store-ne sledniot broj
        }
    }
     printf("%d",zbir+temp);
     // + temp se stava vo slucaj ako ima preostanat temp koj sto ima stored nekoj broj ali ne bi trebalo bidejki na kraj temp = 0 moze i bez
}