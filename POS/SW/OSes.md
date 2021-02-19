# Operačné systémy

Je to súbor programov, ktoré slúžia na uľahčenie práce s počítačom. Je to označenie per SW, ktorý riadi a kontroluje činnosť HW, ako aj systémového a užívateľského prostredia na PC. Stará sa o efektívne využitie operačnej pamäte a procesora, o komunikáciu medzi všetkými používanými technickými a programovími prostriedkami. Zabezpečuje komunikáciu s užívateľom. OS je nutnou súčasťou počítača.

## Delenie

### Podľa počtu používateľov

#### Jednoužívateľské

#### Viacužívateľské

Tie sú len také, na ktorých majú iný používatelia iné právomoci, vlastné súbory. Po prihlásení relevantným loginam majú používatelia prístup len k vymedzeným prostriedkom.


### Podľa počtu úloh

#### Jednoúlohové

#### Viacúlohové

Môžeme používať viac programov súčasne. Tieto programy môžu navzájom spolupracovať a vymieňať si data.
Využívajú sa 2 metódy multitaskingu, **kooperatívny** a **preemptívny**.

### Podľa počtu súčasne spracovávaných vlákien v úlohe

#### Jedno-vláknové

#### Viac-vláknové

### Podľa účelu použitia

#### Univerzálne

#### Špecializované

Určené na konkrétny účel. Vývojové, riadiacé a komunikačné.

### Podľa spôsobu uloženia v pamäti

#### Pamäťovo rezidentné

Celá výkonná časť je uložená v pamäti (ROM). Používa sa pre výkonné mikropočítače.

#### Diskovo orientované

Systém je uložený na disku, na operačnej pamäti má len kernel a čo potrebuje, tak to si dodatočne načíta do operačnej pamäte.

### Podľa typu používateľského rozhrania

#### CLI

Rozhranie príkazového riadku.

#### GUI

Grafické použivateľské rozhranie.


#### GUI (dotykove)

Grafické rozhranie so vstupom na základe dotykov.

### Podľa prístupností k zdrojovému kódu

#### Open source

Napríklad Linux, kde sa podielajú tisíce developerov na vytvorenie dokonalého systému.

#### Closed source (proprietary)

Nejaká hovadina, čo vyvíjajú ľudia platený Billom Gaycom, je to nestabilné, padá to.

## Architektúra operačných systémov

- Vrstva na najnižšejúrovni zabezpečuje priamy styk s HW počítača a táto vrstva sa nazýva BIOS (BasicInputOutputSysstem) - táto vrstva je technicky závislá na HW.
- BIOS - Skladá sa z dvoch častí, fyzická a softwareova. Robí testy počítača (kontroluje pamať ram, prístup na pevné disky a spustí program na zavedenie OS z disku do pamäte), okrem uvedených záležitostí je možne aj nakonfigurovať BIOS, možnosť nastaviť pevné disky, nastavenie ovládania chipsetu, ovládanie plug'n'play, power manegement, možnosť nastavenia ovládania portov, nastavenie dátumu a času, nastavenie bootovania. Keď bios dotestuje HW spustí zavádzací modul a jej úlohou je zaviesť kernel z disku do operačnej pamäte a odovzdať mu riadenie.
Určenie miesta z ktorých bude OS zavádzaný a poradie prehliadávanie týchto miest sa nastavuje v konfigurácii biosu.

- Táto zložka obsahu 

- Jadro OS je vrstva, ktorá je nezávislá na HW a je rezidentne uložená v pamäti. Keď kernel potrebuje niečo importovať, tak si to načíta z disku do operačnej pamäti. Ovláda riadenie prostriedkov (nemusí to byť priamo, može aj pomocov nástrojov) počítača, ktorými je vybavený (procesormi, ram, vonkajšie pamäte, I/O, súbory).

- V prípade, že viaceré bežiacé úlohy súčasne požadujú využitie toho istého HW, je úlohou kernelu pridelovať HW prostriedky systému tak, aby jednotlivé časti systému boli efektívne využívané a súčesne sa maximalizoval výkon. Kernel môže predstavovať 1 alebo vic súborov.

- Služby kernelu sú nasledne využívané nadstavbami OS a aplikáciami spúštanými pod OS.
