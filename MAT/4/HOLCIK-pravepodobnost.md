# Pravdepodobnosť

Filip Holčík, 4.C
Šimon Slamka, IV.C

## Základné pojmy

### Náhodný pokus

- Opakovaná činnosť, ktorá pri dodržaní predpísaných podmienok vedie k rôznym výsledkom.

- Tieto nezávisia len od daných podmienok, ale aj od náhody. Napríklad hod kockou, žrebovanie, vývoj pandémie.

### Istý jav

- jav, ktorý pri daných podmienkach nastane vždy (𝛀).

### Nemožný jav

- jav, ktorý pri daných podmienkach nikdy nenastane (∅)

### Náhodný jav (náhodná udalosť)

- Je to podmnožina množiny 𝛀.

- Každý výsledok, alebo skupina výsledkov náhodného pokusu.

- Označenie javov - A, B, C, ...

Príklad:

Náhodný pokus: Hod kockou

A: Padne párne číslo. A = {2;4;6}

B: Padne číslo menšie ako 3. A = {1;2}

## Domáca úloha

## Vymyslieť príklad na jav istý, nemoźný a náhodný

Náhodný pokus: Stlačenie klávesy klávesnice (medzinárodná)

Jav istý - bude stlačený znak vyskytujúci sa na medzinárodnej klávesnici

Jav nemožný - bude stlačený znak "dz", toto nikdy nenastane, pretože "dz" nieje klávesa, je to kombinácia dvoch kláves

Náhodný jav - bude stlačená klávesa "Super"

# Vsťahy medzi náhodnými javmi

## Podjav

- A ⊂ B  - jav A je *podjavom* javu B

Príklad: Hod kockou


A: Pande číslo 1 alebo 5. A = {1;5}

B: Padne nepárne číslo. B = {1;3;5}

## Rovnocennosť

- A = B - jav A sa rovná javu B

Príklad: Hod kockou


A: Pande párne prvočíslo. A = {2}

B: Padne číslo 2. B = {2}

## Zjednotenie

- A ⋃ B - Zjednotenie javov je jav, ktorý nastane práve vtedy, ak nastane aspoň jeden z javov A alebo B.

Príklad: Hod kockou


A: Padne nepárne číslo. A = {1;3;5}

B: Pande párne prvočíslo. B = {2}

A ⋃ B: Padne niektoré z čísel 1, 2, 3, 5. A ⋃ B = {1;2;3;5}

## Prienik

- A ⋂ B - prienik javov je jav, ktorý nastane, ak nastanú súčasne oba javy A *a(súčasne)* B

Príklad: Hod kockou


A: Padne číslo menšie ako 5. A = {1;2;3;4}

B: Pande číslo väčšie ako 2. B = {3;4;5;6}

A ⋂ B: Padne číslo 3, 4. A ⋂ B = {3;4}

---

- Ak je A ⋂ B jav nemožný (A ⋂ B = ∅), potom sú javy A a B nezlúčiteľné, alebo navzájom sa vylučujúce javy (disjunktné)

Príklad: Hod kockou


A: Pande párne číslo.

B: Pande nepárne číslo.

## Doplnok

- Ā (alebo A') - opačný (doplnkový) jav k javu A je jav, ktorý nastane práve vtedy, ak nenastane jav A.

Príklad: Hod kockou


A: Padne číslo 6.

Ā: Padne niektoré z čísel 1, 2, 3, 5 (nepadne číslo 6).

A ⋂ Ā = ∅

A ⋃ Ā = 𝛀

## Rozdiel

- A - B - rozdiel javov je jav, ktorý nastane práve vtedy, ak nastane jav A a súčasne nenastane jav B

Príklad: Hod kockou


A: Pande číslo väčšie ako 2. B = {3;4;5;6}

B: Padne číslo menšie ako 5. A = {1;2;3;4}

A - B: Padne číslo 5 alebo 6. A - B = {5;6}

---

## Príklad

Náhodne vybratý výrobok može byť buď prvej akosti (udalosť A), druhej (udalosť B) alebo tretej akosti (udalosť C). 
Vysvetlite význam udalostí:

A ⋃ B - Vybraný výrobok je buď prvej, alebo druhej akosti.

(A ⋃ C)' - Vybraný výrobok je druhej akosti

A ⋂ C = ∅ - Jav nemožný

(A ⋂ B) ⋃ C - Vybraný výrobok je tretej akosti

A ⋃ B ⋃ C - Vybraný výrobok je buď prvej, druhej alebo tretej akosti

## Vysveltenie pojmov

- Náhodný pokus - Vykonávanie činnosti s rôznymi výsledkami závisiacimi od náhody

- Náhodný jav - Výsledok náhodného pokusu

- Jav istý - Náhodný jav ktorý počas pokusu určite nastane

- Jav nemožný - Náhodný jav ktorý počas pokusu určite nenastane

- Podjav javu - Jav, ktorý je súčasťou iného nadradeného javu

- Rovnosť javov - Javy sú tie isté

- Zjednotenie javov - Výsledkom sú všetky javy oboch javov

- Prienik javov - Výsledkom sú len tie javy, ktoré vystupujú v zjednocovaných javoch súčasne

- Disjunktné javy - Javy sa vylučujú, keď nastane 1 nemôže nastať 2., napríklad padne číslo 3 a padne číslo 4

- Opačný jav - Negácia inak povedané doplnok, pokiaľ nastane jeden jav, tak jeho doplnok nenastane

- Rozdiel javov - Odčítavanie javov, napríklad A = {1;2;3;4;5} B = {2;4}, A - B = {1,3,5}

---

## Príklad: 

Príklad: Udalosť A znamená, že náhodne vybraté prirodzené číslo má na poslednom mieste  0,  udalosť B  znamená, že číslo je deliteľné piatimi. 
Vysvetlite význam udalostí:

A' - Vybraté číslo nemá na poslednom mieste nulu.

B' - Vybraté číslo nie je deliteľné piatimi.

A' ⋂ B - Vybraté číslo nemá na poslednom mieste nulu a je deliteľné piatimi, pretoze jeho posledná číslica je hodnoty 5.

A ⋃ B' - Vybraté číslo číslo má na poslednom mieste nulu alebo nie je deliteľné piatimi, lebo posledná čislica je 5.

A' ⋃ B - Vybraté číslo nemá na poslednom mieste nulu alebo je deliteľné piatimi, takže toto čislo môže byť ľubovólne, keďže "nepožaduje žiadne parametre", na základe týchto skutočností je tento jav ISTÝ.

# Teória pravdepodobnosti

## Pravdepodobnosť

Vyjadruje mieru očakávanie, že nastane daný výsledok. Ku každému náhodnému javu *A* možno priradiť číslo **P(A)**, nazvané pravdepodobnosť javu A, pre ktoré platí:

#### 0 <= P(A) <= 1

### Klasická (Laplaceová) definícia pravdepodobnosti

Pravdepodobnosť **P(a)** javu **A** je podielom počtu *m* výsledkov pokusu, s ktorých jav **A** nastane (priaznivých výsledkov) a počtu **n** všetkých možných výsledkov náhodného pokusu.

***P(A) = m/n***

#### Príklad: Aká je pravdepodobnosť, že pri hodení kocky padne stena s čislom 4?

Množina všetkých možných výsledkov

Omga = {1;2;3;4;5;6} ... n = 6

Priaznivý prípad, jav *A*

A = {4} ... m = 1

***P(a) = m/n = 1/6 (16,7%)***

#### Príklad: V urne je 10 červených, 5 modrých a 15 bielych gulôčok. Aká je pravdepodobnosť, že vytiahneme červenú?

A: Vyťiahnutie červenej gulôčky.

n = 30

m = 10

P(A) = m/n = 1/3 (33,3%)

#### Maturitný príklad: V klobúku sú 4 čierne a 4 biele guľký. Naraz vytiahneme 2 guľky. Aká je (s presnosťou dve desatiné miesta) pravdepodobnosť, že obe budú biele?

A: Vytiahnutie 2 bielych guličiek.

n = C2(8) = 28

m = C2(4) = 6

P(A) = m/n = 6/28 = 0,21

Pravdepodobnosť, že vytiahneme 2 biele guľky je cca 21%.

#### Príklad: V triede je 30 žiakov. Práve 5 z nich nemá DÚ. Učiteľ náhode kontroluje 6 žiakov. Aká je pravdepodobnosť, že 
A: Všetci kontrolovaní majú DÚ, 
B: Jeden z niech nemá DÚ?

##### A:

n = C6(30) = 593 775

m = C25(30) = 177 100

P(A) = m/n = 593 775/177 100 (0,298)

Pravdepodobnosť, že všetci kontrolovaný majú DÚ je 29,8%.

##### B:

n = C6(30)

m = C1(5)* C5(25)

P(B) = m/n = 0,447

Pravdepodobosť, že jeden žiak nemá DÚ je 44,7%.

#### Priklad: 20 vyrobkov, 1 nekvalitny, vyberame 5, pravdepodobnost vsetky kvalitne?

A: Nahonde vybranie 5 kvalitnych

n = C5(20) = 

m = C5(19) = 

P(A) = m/n = 3/4 = 0,75 (75%)

Pravdepodobnosť, že bude 5 kvalitných je 75%

#### Priklad: Žiak vyberá 3 z 21 otazok, 5  nich nevie, pravdepodobnosť vytiahnutia všetky čo vie?

A: Vyberie 3, na kt. je pripravený

n = C3(21)

m = C3(21-5) = C3(16) = 160

P(A) = m/n = 8/19 = 0,42 (42%)

#### Priklad: 32 kariet, vytiahneme 5

A: Všetky budú zelené

B: 3 zelené a 2 červené

a)

n = C5(32) = 201 286

m = C5(8) = 56

P(A) = m/n = 1/3596 = 0,000278(0,0278%)

b)


n = C5(32) = 201 286

m = C3(8)*C2(8) = 1568

P(A) = m/n = 7/899 = 0,00779 (0,78%)

#### Priklad: Hod dvomi kockami

A: Padne na oboch jednotka

n = V'2(6)

m = 1

P(A) = m/n = 1/36 = 0,028 (2,8%)


n = C3(21)

m = C3(21-5) = C3(16) = 160

P(A) = m/n = 8/19 = 0,42 (42%)

## Pravdepodobnosť javu A:  P(a) = m/n

## Pravdepodobnosť javu istého:  P(a) = n/n = 1

## Pravdepodobnosť javu nemožného:  P(a) = 0/n = 0

## Pravdepodobnosť ľubovólneho javu A:  P(a) = m/n

## Pravdepodobnosť doplnku javov

### Priklad: Hod kockou

A: Padne na kocke jednotka

A = {1}

P(A) = 1/6

A': Nepadne jednotka

A' = {2,3,4,5,6}

P(A') = 5/6

P(A) + P(A') = 1

## Pravdepodobnosť zjednotenia javov

1. A ⋂ B = ∅, javy sú navzájom nezlučiteľné (disjunktné)
***P(A ⋃ B) = P(A) + P(B)***

2. A ⋂ B != ∅, javy sa nvzájom nevylučujú (nie sú disjunktné)
***P(A ⋃ B) = P(A) + P(B) - P(A ⋂ B)***

### Priklad: Hod kockou

A: Padne na kocke jednotka

A = {1}

P(A) = 1/6

A': Padne párne číslo

A' = {2,4,6}

P(A') = 3/6 = 1/2

C: Na kocke padne 1 alebo párne číslo C = {1,2,4,6}

C = P(A) + P(A') = 4/6 = 2/3

Pravdepodobnosť, že padne 1 alebo párne číslo je 0,67.


### Priklad: Hod kockou

A: Padne číslo delitelné 3 alebo nepárne

A = {1,3,5,6}

B: Padne číslo delitelné 3

B = {3,6}

P(B) = 2/6

C: Padne číslo nepárne

C = {1,3,5}

C = 3/6

D: Na kocke padne trojka A ⋂ B

P(A ⋂ B) = 

## Pravdepodobnosť prieniku dvoch nezávyslích javov

Dva javy sú *nezávislé*, keď jeden nemá vplyv na uskutočnenie druhého.

### Priklad: Hod dvomi kockami

Padne jednotka pri prvom hode a pri druhom padne iné číslo. Tieto javy sú nezávyslé.

n = V'2(6) = 36

m = 5

P = 5/36 = 0,139

A: Pri 1. hode padne 1

P(A) = 1/6

B: Prie 2. hode nepadne 1

P(A) = 5/6

***P(A ⋂ B) = P(A) * P(B)***

Pravdepodobnosť, že nastane sledovaný jav je 0,14.

### Príklad: Výber fliaš

16 fliaš, 10 budiš 6 salvatorka, keď vyberieme 3, aká je pravdepodobnosť, že vyberieme 2 budiš a 1 salvatorku?

A: Výber 2 Budiš a 1 Salvator

n = C3(16)

m = C2(10) * C1(6)

P(A) = m/n = 270/560 = 0,4821

### Príklad: hod dvomi kockami

A: Padne súčet rovný 5

B: Padne súčet rovný 5 alebo 6

A:

n = V'2(6) = 6 * 6 = 36

m = 4

P(A) = m/n = 1/9 = 0,11 (11%)

B:

C: Padne súčet 6

P(C) = 5/36

P(A ⋂ C) = Nemožné

P(B) = P(A ⋃ C) = P(A) + P(B) = 0,25


### Príklad: žolo

Z 52 žolíkových kariet vytiahneme 1. Pravdepodobnosť srdca alebo esa?

A: Vytiahnutá kara je eso

P(A) = 4/52


B: Vytiahnutá kara je srdce

P(B) = 13/52


A ⋃ B: Vytiahnutá kara je eso alebo srdce

A ⋂ B: Vytiahnutá kara je srdcové eso

P(A ⋂ B) = 1/52

P(A ⋃ B) = P(A) + P(B) - P(A ⋂ B) = 16/52 = 0,308

Pravdepodobnosť vytiahnutia esa alebo srdca je 30,8%.

# Bernoulliho schéma

Výpočet pravdepodobnosti počtu úspechov v sérii nezávislých pokusov.

## Nezávislé náhodné pokusy

Pravdepodobnosť výsledku ktoréhokoľvek pokusu nezávisí od výsledkov ostatných pokusov.


### Príklad: hodíme ý krát kocku

Pravdepodobnosť, že:

A: Prvý, tretí a štvrtýkrát padne 6, v ostatných hodoch nie.

B: Prvé 4 hody 6ka nepadne a posledné 3 áno.

C: 6tka padne práve 3 krát.

A: padne 6ka (1/6), nepadne 6ka (5/6), padne 6ka (1/6), padne 6ka (1/6), nepadne 6ka (5/6), nepadne 6ka (5/6), nepadne 6ka (5/6)

P(A) = 1/6 * 5/6 * 1/6 * 1/6 * 5/6 * 5/6 * 5/6 = 0,00223

Pravdepodobnosť daného javu je 0,223%.

B: 5/6, 5/6, 5/6, 5/6, 1/6, 1/6, 1/6

P(B) = 5/6 * 5/6 * 5/6 *  5/6 * 1/6 * 1/6 * 1/6 = (5/6)^4 * (1/6)^3 = 0,00223

Pravdepodobnosť daného javu je 0,223%.

C: C3(7) * (5/6)^4 * (1/6)^3 = 0,0781

Pravdepodobnosť, že 6ka padne práve 3krat je 7,81%.

## Vzorec

Nech A je udalosť s prevdepodobnosťou p. Pravdepodobnosť, že pri n- násobnom nezávislom opakovaní pokusu udalosť A nastane práve k-krát je

***Ck(n) * p^k * (1 -p)^(n-k)***

- n - počet opakovaní

- k - počet 'úspechov'

- n - k - počet 'neúspechov'

- p - pravdepodobnosť 'úspechu'

- 1 - p pravdepodobnosť 'neúspechu'

### Príklad: Sústruh vyrába súčiastku za minutu

Pravdepodobnosť vady je 0,05. Aká je pravdepodobnosť, že sústruh vyrobí za hodinu práve 5 vadných súčiastok.

A: Vyrobenie práve 5 chybných súčiastok za hodinu.

P(A) = Ck(n) * p^k * (1 -p)^(n-k)

n = 60

k = 5

n - k = 55

p = 0,05

1 - p = 0,95

P(A) = 0,1016

Pravdepodobnosť, že sústruh vyrobí za hodinu práve 5 chybných súčiastok je 10,16%.
