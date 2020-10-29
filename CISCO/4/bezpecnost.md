  # Bezpečnosť sieti
  
  Sieť musí byť bezpečná
  
  ## Typy narušenia bezpečnosti
  
  > ### Social engineering
  >
  > Najnebezpečnejšia zraniteľnosť, je to útok na personál, ktorý je menej "odolný" voči hackerom 
  > (vydávanie sa zaniekoho inýho, dostať sa blízko k cieľovej osobe, ...).
  >
  > ### DoS (stress)
  >
  > Preťaženie online služby veľa pripojeniami, v preklade je to zrušenie služby (Denial of Servie).
  >
  > ### DDoS (distribuovaný stress)
  >
  > DoS s viacerými zariadeniami, v preklade je to distribuované zrušenie služby (Distributed Denial of Servie).
  >
  > ### Data breech
  >
  > Narušenie serverov organizácii za účelom krádeže dát
  >
  > ### Malware
  >
  > "Zákerný software", software, ktorý je určený na nekalé činosti na cieli.
  >
  > ### Rootkit
  >
  > Úplná vzdialená kontrola nad cieľovým zariadením (server, PC, mobil), ak držieľ tohoto zariadenia s kontolou nesúhlasil.
  >
  > ### MitM
  >
  > "Muž v strede", hacker je uprostred komunikácie medzi dvoma zariadeniami, hacker môže túto komunikáciu ovplyvňovať.
  >
  > ### XSS
  >
  > "Skrz stránkové skriptovanie", vloženie skriptu (vačšinou JS) na fornt-end stránky, ktorú použivajú užívatelia.
  >
  > ### A mnohé iné
  
## Prevencia pred narušením bezpečnosti

- VPN/Proxy

- Firewall/NGFW

- NAC

- ADBlock (môže zabrániť XSS útoku)

- Up to date software

- SSH, nie telnet

- Personálne audity

- Minimalozovanie výskytu zariadení so systémom Microsoft Windows na sieti

# Zabezpečenie koncových zariadení

## Cisco Email Security Appliance

The Cisco ESA zariadenie je navrhnuté aby monitorovalo SMTP.

Toto sú niektoré z funkcií produktu Cisco ESA:

- Blokovať známe hrozby

- Opravte škodlivý softvér, ktorý sa vyhol prvotnej detekcii

- Zlikvidujte e-mailové adresy so zlými odkazmi

- Blokovať prístup k novo infikovaným stránkam.

- Šifrujte obsah odchádzajúcich e-mailov, aby ste zabránili strate údajov.

## Cisco Web Security Appliance

- Zmierňuje webové hrozby. Pomáha organizáciám riešiť problémy so zabezpečením a riadením webového prenosu.

- Kombinuje pokročilú ochranu pred malvérom, viditeľnosť a kontrolu aplikácií, prijateľné kontroly politík používania a vytváranie prehľadov.

- Poskytuje úplnú kontrolu nad tým, ako používatelia pristupujú k internetu. Niektoré funkcie a aplikácie, ako napríklad čet, správy, video a zvuk, je možné povoliť, obmedziť časovými limitmi a šírkou pásma alebo zablokovať podľa požiadaviek organizácie.

- Môže vykonávať zoznam zakázaných adries URL, filtrovanie adries URL, skenovanie škodlivého softvéru, kategorizáciu adries URL, filtrovanie webových aplikácií a šifrovanie a dešifrovanie prenosu z webu.

# Regulácia prístupu

## Autentifikácia pomocou lokálneho hesla

- Najjednoduchšou metódou overovania vzdialeného prístupu je konfigurácia kombinácie prihlásenia a hesla na konzole, vty lines a aux portoch.

## AAA súčasti

- AAA je skratka pre autentizáciu, autorizáciu a zúčtovanie a poskytuje primárny rámec pre nastavenie riadenia prístupu na sieťovom zariadení.

- AAA je spôsob kontroly toho, kto má povolenie na prístup do siete (autentifikáciu), čo môže robiť, keď je v nej (autorizácia), a na auditovanie toho, aké činnosti vykonali pri prístupe do siete (zúčtovanie).

### Authentication

Lokálne a serverové sú dve bežné metódy implementácie AAA autentifikácie.

**Lokálna autentifikácia AAA:**

- Metóda ukladá používateľské mená a heslá lokálne v sieťovom zariadení (napr. Router Cisco).

- Používatelia sa autentifikujú podľa miestnej databázy.

- Lokálna AAA je ideálna pre malé siete.

**Serverové overenie AAA:**

- Pri serverovej metóde smerovač pristupuje k centrálnemu serveru AAA.

- Server AAA obsahuje používateľské mená a heslo pre všetkých používateľov.

- Router používa na komunikáciu so serverom AAA protokoly Remote Authentication Dial-In User Service (RADIUS) alebo Terminal Access Controller Access Control System (TACACS +).

- Ak je k dispozícii viac routerov a switchov, je vhodnejšie serverové AAA.

### Authorization

- Autorizácia AAA je automatická a nevyžaduje od používateľov, aby po overení vykonali ďalšie kroky.

- Autorizácia určuje, čo môžu a nemôžu používatelia v sieti robiť po overení.

- Autorizácia používa množinu atribútov, ktorá popisuje prístup používateľa do siete. Tieto atribúty používa server AAA na určenie oprávnení a obmedzení pre daného používateľa.

### Accounting

Účtovníctvo AAA zhromažďuje a hlási údaje o použití. Tieto údaje môžu byť použité na také účely, ako je audit alebo fakturácia. Zhromaždené údaje môžu zahŕňať časy začatia a ukončenia pripojenia, vykonané príkazy, počet paketov a počet bajtov.

**Účtovníctvo sa primárne využíva na kombináciu s autentifikáciou AAA.**

- Server AAA vedie podrobný protokol o tom, čo presne autentifikovaný užívateľ v zariadení robí, ako je to znázornené na obrázku. Zahŕňa to všetky EXEC a konfiguračné príkazy vydané používateľom.

- Denník obsahuje početné údajové polia vrátane používateľského mena, dátumu a času a skutočného príkazu, ktorý zadal používateľ. Tieto informácie sú užitočné pri riešení problémov so zariadeniami. Poskytuje tiež dôkazy o tom, kedy jednotlivci páchajú škodlivé činy.

# Nebezpečia layeru 2

# Útok na tabuľku MAC adries

# LAN útoky
