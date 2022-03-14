# IntegralCalculator

 1.Opis zadania
Celem zadania było stworzenie programu w c pozwalającego na obliczenie całki oznaczonej. Program dzieli się na dwa pliki: całka.c i całki.c.
- całka.c z funkcją main, który ma za zadanie pobrać od użytkownika przedziały, a następnie wyświetlić wyniki całkowania 4 funkcji za pomocą 3 metod. Zawiera w sobie również 2 główne funkcje, a reszta jest importowana z całki.c
- całki.c z 2 funkcjami ( przeznaczonymi do testowania ), oraz trzema zaimplementowania algorytmów do obliczenia całki, metoda: prostokątów, trapezów i Monte Carlo:
  - Metoda prostokątów -> metoda mająca cztery wariacje: f(x1), f(x2), f((x1+x2)/2) oraz (f(x1) +f(x2))/2. Na przedziale od a do b należy podzielić na równe przedziały w zależności od dokładności określoną jako liczba przedziałów i na tej podstawie oblicza się pole prostokąta, gdzie jeden mały przedział razy jedna z czterech powyżej wymienionych funkcji sumuje się razem z pozostałymi i daje to całkę.
  - Metoda trapezów -> Bardzo podobne obliczenia i kroki jak w metodzie powyżej, lecz aby uzyskać zbliżony wzór należy przekształcić:
1/2∗(𝑓(𝑥1)+𝑓(𝑥2)∗h)+ 1/2∗(𝑓(𝑥3)+𝑓(𝑥4)∗h).....=𝑐𝑎𝑙𝑘𝑎 na 𝑐𝑎𝑙𝑘𝑎= 1/2∗h(𝑓(𝑥1)+𝑓(𝑥2)+ 𝑓(𝑥3)+⋯ 
  -Metoda Monte Carlo -> Polega na wyznaczeniu wartości min i max w przedziale [a,b] losuje się wartości i na podstawie tego, czy należą do obszaru pomiędzy wykresem (i ich znaku) dodaje lub odejmuje. Po czym na podstawie odpowiedniej zależności wyznacza się całkę używając liczbę losowań, losowych liczb należących i pola prostokątu.

2.Schematy blokowe<br>
Metoda prostokątów<br>
![alt text](https://github.com/matjamr/images/blob/main/obraz_2022-03-14_114418.png?raw=true)<br>
 
Metoda Trapezów<br>
![alt text](https://github.com/matjamr/images/blob/main/obraz_2022-03-14_115624.png?raw=true)<br>
Metoda Monte Carlo<br>
![alt text](https://github.com/matjamr/images/blob/main/obraz_2022-03-14_115747.png?raw=true)<br>
 
 
3.Wykresy
𝑓(𝑥) = 0.23𝑥^2 + 2𝑥 − 99<br>

𝑓(𝑥) = 𝑠𝑖𝑛2𝑥 + 𝑐𝑜𝑠3𝑥 − 1
 
𝑓(𝑥) = 𝑥𝑒^2
𝑓(𝑥) = sqrt(𝑥^2 + 3)
 
4.Rozwiązania analityczne z obliczeniami
 5.Wyniki metod i rozwiązania
analitycznego, <-1,1>
                   

