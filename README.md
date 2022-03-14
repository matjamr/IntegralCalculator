# IntegralCalculator

 1.Opis zadania
Celem zadania było stworzenie programu w c pozwalającego na obliczenie całki oznaczonej. Program dzieli się na dwa pliki: całka.c i całki.c.
• całka.càplik z funkcją main, który ma za zadanie pobrać od użytkownika przedziały, a następnie wyświetlić wyniki całkowania 4 funkcji za pomocą 3 metod. Zawiera w sobie również 2 główne funkcje, a reszta jest importowana z całki.c
• całki.càplik z 2 funkcjami ( przeznaczonymi do testowania ), oraz trzema zaimplementowania algorytmów do obliczenia całki, metoda: prostokątów, trapezów i Monte Carlo:
o Metoda prostokątówàmetoda mająca cztery wariacje: f(x1), f(x2), f((x1+x2)/2) oraz (f(x1) +f(x2))/2. Na przedziale od a do b należy podzielić na równe przedziały w zależności od dokładności określoną jako liczba przedziałów i na tej podstawie oblicza się pole prostokąta, gdzie jeden mały przedział razy jedna z czterech powyżej wymienionych funkcji sumuje się razem z pozostałymi i daje to całkę.
o Metoda trapezówàBardzo podobne obliczenia i kroki jak w metodzie powyżej, lecz aby uzyskać zbliżony wzór należy przekształcić:
!∗(𝑓(𝑥!)+𝑓(𝑥")∗h)+ !∗(𝑓(𝑥")+𝑓(𝑥#)∗h).....=𝑐𝑎𝑙𝑘𝑎 na𝑐𝑎𝑙𝑘𝑎= ""
! ∗h(𝑓(𝑥!)+𝑓(𝑥")+ 𝑓(𝑥#)+⋯ "
o Metoda Monte Carlo -> Polega na wyznaczeniu wartości min i max w przedziale [a,b] losuje się wartości i na podstawie tego, czy należą do obszaru pomiędzy wykresem (i ich znaku) dodaje lub odejmuje. Po czym na podstawie odpowiedniej zależności wyznacza się całkę używając liczbę losowań, losowych liczb należących i pola prostokątu.

2.Schematy blokowe
Metoda prostokątów 𝑓 1$! %$#2, gdzie x2 = x1 + step "
 
Metoda Trapezów
 
Metoda Monte Carlo
 
3.Wykresy
𝑓(𝑥) = 0.23𝑥# + 2𝑥 − 99
 𝑓(𝑥) = 𝑠𝑖𝑛2𝑥 + 𝑐𝑜𝑠3𝑥 − 1
 
𝑓(𝑥) = 𝑥𝑒"$
  𝑓(𝑥) = >𝑥" + 3
 
4.Rozwiązania analityczne z obliczeniami
 5.Wyniki metod i rozwiązania
analitycznego, <-1,1>
0.23𝑥# + 2𝑥 − 99
    Metoda
Prostokątów Trapezów Monte Carlo Obliczenia analityczne
Rozwiązanie dla Lp 100 -198 -198 -196.3862 -198
Rozwiązanie dla Lp 1000 -198 -198 -196.3862 -198
Rozwiązanie dla Lp 10000 -198.019354 -198.019354 -198.086864 -198
                    
Metoda
Prostokątów Trapezów Monte Carlo Obliczenia analityczne
Metoda
Prostokątów Trapezów Monte Carlo Obliczenia analityczne
Metoda
Prostokątów Trapezów Monte Carlo Obliczenia analityczne
Rozwiązanie dla Lp 100 -1.905906 -1.905948 -1.435916 -1.9059
Rozwiązanie dla Lp 1000 -1.905906 -1.905948 -1.435916 -1.9059
𝑠𝑖𝑛2𝑥 + 𝑐𝑜𝑠3𝑥 − 1
    Rozwiązanie dla Lp 10000 -1.906136 -1.906136 -1.912502 -1.9059
Rozwiązanie dla Lp 10000 1.950244 1.950243 1.950244 1.9488
Rozwiązanie dla Lp 10000 3.648318 3.648318 3.648800 3.64791
Metoda całkowania, jak widać na powyższych testach (liczbie powtórzeń), może być mniej lub bardziej dokładna. Zbyt mała lub zbyt duża ilość testów daje przybliżony wynik podobnie jak metoda Monte Carlo (da dokładny wynik tylko przy dużej liczbie losowanych liczb), lecz jak widać przy 1000lp metoda prostokątów i trapezów daje niemal identyczne wyniki pokrywające się z rzeczywistością. Oczywiście dokładność wynikająca z liczba testów jest zależna od przedziału ( w powyższych obserwacjach przedział wynosił <-1, 1>), oraz z każdego kroku do pokonania.
                    𝑥𝑒"$
    Rozwiązanie dla Lp 100 1.948394 1.949509 1.428256 1.9488
Rozwiązanie dla Lp 1000 1.948394 1.949509 1.428256 1.9488
                     >𝑥" + 3
    Rozwiązanie dla Lp 100 3.647902 3.647952 3.72 3.64791
Rozwiązanie dla Lp 1000 3.647902 3.647952 3.72 3.64791
                    6.Wnioski
