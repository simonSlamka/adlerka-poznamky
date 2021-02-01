# Štatistika

Veda o zhormažďovaní, pracovávaní a vyhodnocovaníhromadných dát

## Delenie

### Nematematická časť 

Zhromažďovanie dát

### Matematická časť

Vyhodnocovanie dát

## Pojmový aparát

### Štatistický súbor

Konečná neprázdna množina objektov štatistického pozorovania, ktoré majú isté spoločné vlastnosti. Napríklad ľudia žijúci v istom meste, deti určitého veku.

### Štatistické jednotky

Prvky štatistického súboru

### Rozsah súboru (n)

Počet všetkých statistických prvkov

### Štatistický znak (X)

Spoločná vlastnosť prvkov štatistického súboru, ktorej premenlivos%t je predmetom štatistického skúmania

### Hodnoty znaku

Jednotlivé údaje znaku

#### Kvantitatívne znaky

Hodnoty sú vyjadrené číslami (napr. výška, hmotnosť, vek)

#### Kvalitatávne znaky

Hodnoty sú vyjadrené číslami (napr. pohlavie, znalosť cudzieho jazyka, národnosť)

### Početnosť

#### Absolútna početnosť

hodnota znaku xi - číslo ktoré udáva, koľkokrát sa v danom súbore vyskytuje hodnota xi (začíname ni)

#### Relatívna početnosť

pi = ni/n (n je rozsah súboru), zvyčajne sa udáva v percentách. Platí, že súčet všetkých pi = 1

#### Intervalové (skupinové)

Zjednodušenie rozdelenia početnosti zámerným zanedbaním malých rozdielov medzi hodnotami znaku:

- Pozorované hodnoty sa zaradia do intervalov

- Hodnoty patriace do rovnakého intervalu sa považujú za rovnocenné a reprezentuje ich stred intervalu

##### Triedne intervaly

- Spravidla sú rovnakej dĺžky

- Ich počet (k) sa určí pomocou Sturgesovho (k = 1 + 3,3logn (n je rozsah sboru)) pravidla alebo svolením intervalu (v závislosti od rozsahu súboru a povahy znaku).

#### Grafické znáxornenia početností

##### Histogram

Stĺpcový diagram, na x sú triedne početnosti a nad každým je zostrojený obdĺžnik, ktorého výška sa rovná početnosti.

##### Polygón početnosti

Spojnicový diagram zostrojený pospájaním stredov horných strán jednotlivých obdĺžnikov histogramu.

## Rozdelenie početnosti jedného kvantitatívneho znaku

Úprava (zjednodušenie) prvotnej tabuľky:

Neklesajúcu postupnosť hodnôt upraviť do tabuľky s dvomi riadkami

riadok 1 - príslušná hodnota znaku

riadok 2 - počet prípadov, v ktorých sa táto hodnota vyskytla

X x1 x2 x3 ... xk

nu n1 n2 n3 ... nk

### Charakteristiky štatistického súboru

- Číselné hodnoty, ktoré reprezentujú celý súbor

- Porovnanie skúmaného javu dvoch, alebo viac súborov

- Veľkosť "kolísania" hodnôt v danom súbore

#### Polohy (úrovne)

#### Variability (premenlivosti)

### Charakteristiky polohy

- Čísla, ktoré charakterizujú úroveň znaku v štatistickom súbore

- Stredné hodnoty

#### Priemery (aritmeticky, geometricky)

##### Aritmeický x'

Súčet všetkých hodnôt znaku delených ich počtom (rozsahom súboru)

X' = 1/n * Sigma (i=1) * xi

x = \frac{\sum_{i=1}^{m}*n_{i}*x_{i}}{n}

##### Geometrický

- Definovaný ako n-tá odmocnina súčinu hodnôt znaku 

- Používa sa ako charakteristika polohy znaku, ktorého hodnoty narastajú geometricky

- Vejadruje preiemernú hodnotu zmeny

### Modus

- Najčastejšie sa vyskytujúca hodnota sledovaného znaku X medzi hodnotami

### Medián

- Prostredná hodnota mezi číslami ak ich *usporidáme podľa velkosti*.

- Ak rozsah súboru n je párne číslo, potom sú prostredné hodnoty dve a medan sa vypočíta ako ich aritmetický priemer.

### Median

## Domáca úloha

| Žiak   	| 1 	| 2 	| 3 	| 4 	| 5 	| 6 	| 7 	| 8 	| 9 	| 10 	|
|--------	|---	|---	|---	|---	|---	|---	|---	|---	|---	|----	|
| Známka 	| 1 	| 1 	| 1 	| 2 	| 2 	| 3 	| 2 	| 1 	| 3 	| 2  	|

| Známka                       	|  1  	|  2  	|  3  	|
|------------------------------	|:---:	|:---:	|:---:	|
| Počet žiakov s takou známkou 	|  4  	|  4  	|  2  	|
| Percentuálne zastúpenie      	| 40% 	| 40% 	| 20% 	|

## Koeficient korelácie

- Vzájomný vsťah medzi dvomi predmetmi, javmi alebo pojmami.

- Po slovensky śuvsťažnosť

- Závislosť medzi dvomi alebo viacerými znakmi v štatistickom súbore.

- Značíme ho malým 'r'

![vzorec](https://github.com/simonSlamka/adlerka-poznamky/blob/master/MAT/4/Screenshot%20from%202021-02-01%2008-59-32.png)

![Vzorec s popisom]()

- Je to bezrozmerné číslo

- Je z intervalu <-1;1>

- Čím bližšie je číslo |R| k jednej, tým je závyslosť medzi X a Y väčšia.

- Ak sú znaky X a Y nezávislé, koeficient korelácie je nulový.
