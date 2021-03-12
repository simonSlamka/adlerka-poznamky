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

- Služby kernelu sú nasledne využívané nadstavbami OS a aplikáciami spúštanými pod OS. Častokrát je používateľské prostredie realizované nadstavbou na OS.

- Monitor OS je častokrát nazývaný interpreter príkazov, zabezpečuje prístup používateľa s OS.

- Ovládače alebo drajvre sú obslužné programy zariadení.

## Funkcie OS

OS je skupina programov, ktorá zabezpečuje čiastočne ale úplne tieto funkcie:

- Správu procesov (process management)

- Správu a pridelovanie pamäte (memmory management)

- Správu súborov uložených na disku (storage management)

- Správa periférnych zariadení

- Komunikácia s uživateľom prostredníctvom periférnych zariadení (buď cez CLI alebo GUI)

- Prideľovanie prostriedkov systému užívateľom alebo aplikáciam

- Prideľovanie času užívateľom (tzv time sharing), alebo appkám (multitasking)

- Zabezpečuje komunikáciu medzi aplikáciami

- Vytváranie a spúštanie používateľských programov

- Komunikácia s inými počítačmi v sieti

- Diagnostické funkcie (autokontrola systému)

- Možnosť analyzovať a odstránenia chýb

- Zabezpečovacie funkcie

- Ochraňana systému prosti strate údajov (napr pri výpadku napätia)

- Ochrana pred neoprávneným manipulovaním

Tieto funkcie sú zabezpečené programovímy modulmy (dajú sa kombinovať navzájom).

# Správa procesov

Požiadávky kladené na moderný OS sú vysoké. Z tohto dôvodu môže byť program príliš veľkou jednotkou na spracovávanie a je nevyhnutné, aby spustený program bol rozdelené na menšie vykonávané jednotky - procesy.

**Proces** je elementárna jednotka vykonávania úlohy.

Samotné vykonávanie úlohy alebo programu môže zahŕňať množstvo elementárnych úloh, ktoré môžu vzájomne od seba závisieť, ale môžu byť aj nezávislé a vykonávané súbežne. Ako sme si povedali, vykonávanie viacerých procesov naraz sa realizuje vďaka multitaskingu a multiprocesingu.

## Multitasking

### Kooperatívny

Spustený proces preberá úlohu nad systémovýmy prostredkami a sám rozhoduje o tom, kedy ukončí svoj beh a odovzdá systémové prostriedky späť systému.

### Preemptívny

O pridelení prostriedkov sýstému jednotlivých procesov rozhoduje OS, ten rozhoduje o tom, ktorý proces a ako dlho bude využívať systémové prostriedky.

## Vlastnosti procesov

- Všetky procesi bežia zdanlivo súčasne, čiže CPU ich strieda, prepína medzi nimi. 

- Proces nemusí byť totožný s programom ani nieje časť programu ako taká, ale program, alebo časť programu v s tave vykonávania.

- Proces nie je tvorený len inštrukciami programu, ale obahuje v sebe aj všetky aktivity vyvolané programom. Napríklad obsahy registrov procesora súvisiace s procesom, návratovými adresami, dočasnými premennými a hodnotami, ktoré reprezentujú aktuálny stav vykonávania procesu.

- S jedným programom môže byť zviazaných viacero procesov. Napríklad viac kariet v Chromiu, viac procesov v Electrone.

- Na riadenie procesov sa používa dispatcher a plánovač.

- Systém prerušení pomáha systému koordinovať paralerne prebiehajúce procesy.

### Dispatcher

Stráži stav využitia technických prostriedkov.

### Plánovač (scheduler)

Má za úlohu vybrať, ktorý proces sa vyberie na vykonávanie.

## Mechanizmus obsahu prerušení

Vykonávanie služieb OS a prapínanie medzi nimi je realizované mechanizmom prerušení.

Prerušovanie môže byť inicializované hardwareovo, napríklad stlačením klávesy, požiadavkou sieťovky na komunikáciu, požiadavkou sieťovej linky.
Signál o prerušena IRQ interrup request odovzdaný OS, ktorý spustí proces na vykonanie tejto požiadávky.

Prerušenie môže byť vykonávané softwareovo. Požiadávka inicializovaná príslušnou hodnotou registrov. Toto prerušenie môže vykonať appka alebo OS.

## Stavy procesov

Každý proces sa môže nachádzť v jednom z následujúcich stavov:

- Nový (new), proces bol práve vytvorený

- Prebiehajucí (runnig), inštrukcie procesu sa vykonávajú

- Čakajúci  (waiting), proces čaká na udalosť, napríklad I/O operácaía

- Pripravený (ready), proces čaká na pridelenie procesora

- Ukončený (terminated), proces skončil vykonávanie

Názvy jednotlivých stavov sa môžu inak volať v iných systémoch.

