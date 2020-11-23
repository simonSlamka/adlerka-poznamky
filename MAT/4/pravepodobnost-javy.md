# Pravdepodobnosť

## Základné pojmy

### Náhodný pokus

Opakovaná činnosť, ktorá pri dodržaní predpísaných podmienok vedie k rôznym výsledkom.
Tieto nezávisia len od daných podmienok, ale aj od náhody. Napríklad hod kockou, žrebovanie, vývoj pandémie.

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
