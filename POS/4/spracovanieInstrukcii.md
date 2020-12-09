# Spracovanie inštrukcii v mikroprocesore

## Sériové spracovanie

## Zreťazené spracovanie

## Paralelné spracovanie

# Inštrukčný cyklus

### Načítanie inštrukcie z OP do IR

### Dekódovanie inštrukcie

### načítanie údajov z OP

### Vykonanie inštrukcie

### Zápis výsledku do OP

V prípade, že údaje a výsledok načitám a zapisujem do registrov CPU, môžem krok 3 a krok 5 vynechať.

## Sériové spracovanie inštrukcií

-> Načítanie -> Dekódovanie -> Vykonanie ->

Predpoklad: Vykonanie 1 inštrukcie trvá 1 sekundu v každom kroku (etape).

Takže: Vykonanie 3 inštrukcii trvá 9 sekúnd.

## Zreťazené spracovanie inštrukcií

-> Načítanie -> Dekódovanie -> Vykonanie ->

Všetky tieto fázy vykonáva naraz.

Pajplajn.

## Paralelné spracovanie inštrukcii

-> Načítanie -> Dekódovanie -> Vykonanie ->
-> Načítanie -> Dekódovanie -> Vykonanie ->

Tie pajplajny tam máme 2, procesor má 2 jadrá. Vykonávanie inštrukcii je údajovo nezávislé.

