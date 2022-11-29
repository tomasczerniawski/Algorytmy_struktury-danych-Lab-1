Jaka złożoność czasowa z podanych niżej jest dla poszukiwania najmniejszej liczby w tablice niesortowanej
a) 0(2 do n potegi)


W jakiej postaci możliwa reprezentacji algorytmu?

e) wszystko prawidłowe 


Jaki warunek odpowiada niezmienniku pętli?

c) jeśli predykat jest spełniony przed wejściem w pewną (dowolną) iterację pętli to jest także spełniony po wyjściu z tej iteracji pętli 
d) musi być poprawny algorytm 


Jaka z notacji asymptotycznych jest ze złożonością pod-wykładniczna?

b) W(n)=2+lg2n = 0(lg(n))


Przy jakich warunkach algorytm jest całkowicie poprawny?

d) algorytm przy zatrzymaniu zwraca poprawny wynik 

Mamy funkcja
. Jaka jest złożoność asymptotyczna ?
 
f) 0(nlog(n))

Pytanie 'Czy wskazany algorytm jest całkowicie poprawny?': 
Pseudokod: 
```c
find(array, len, key) {
    i = 0
    
    while (i < len && array[i] != key) {
      i = i + 1;
    }
    
    if (i + 1 >= len) {
      return -1;
    } else {
      return i;    
    }
}
```
Odpowiedz: 
        a) Tak 
