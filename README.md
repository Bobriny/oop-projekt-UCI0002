# projekt-OOP---zavody

PODROBNOSTI:

- Spuštění programu
  
g++ mainRaces.cpp stat.cpp race.cpp racer.cpp dakarCar.cpp moto.cpp rallyCar.cpp F1Car.cpp vehicle.cpp raceTeam.cpp -o main


- RaceTeam – Správa závodního týmu

Uchovává informace o závodním týmu, včetně názvu, seznamu jezdců a seznamu vozidel

Umožňuje přidávání jezdců metodou AddRacer a vozidel metodou AddVehicle

Metoda ShowTeamInfo vypisuje podrobné informace o týmu

DeleteTeam uvolňuje paměť a maže objekty při ukončení závodu

Používá vektor ukazatelů std::vector<Racer *> racers; a std::vector<Vehicle *> vehicles; což umožňuje polymorfní strukturu

Splňuje zadání - kompozice objektů, polymorfismu a správy paměti


- Racer – Závodník

Uchovává jméno jezdce, zkušenosti a počet vítězství

Metoda ShowInfo vypisuje základní informace o jezdci

Přetížená metoda ShowInfo(bool detailed) umožňuje zobrazit podrobné informace včetně zkušeností

Splňuje zadání - přetížených metod a kompozice objektů


- Race – Simulace konkrétního závodu

Uchovává seznam účastníků závodu v atributu vector<Racer> participants

Obsahuje informaci o podmínkách trati v trackCondition

Konstruktor Race(vector<Racer> r, string condition) inicializuje závodníky a stav trati

Metoda StartRace() simuluje průběh závodu

Metoda GetWinner() určuje vítěze na základě zkušeností a výkonu

Splňuje zadání - práce s datovou strukturou závodníků


- AbstractVehicle – Čistě abstraktní třída pro vozidla

Slouží jako základní abstraktní třída, ze které dědí všechny typy vozidel

Obsahuje pouze virtuální metody ShowInfo() a GetMaxSpeed()

Splňuje zadání - čistě abstraktní třídy, dědičnosti 


- Vehicle a jeho potomci – Hierarchie vozidel

Vehicle je základní třída reprezentující vozidlo, obsahuje atributy model a maximální rychlost

Metody ShowInfo a GetMaxSpeed jsou virtuální, což umožňuje pozdní vazbu overriding

F1Car, RallyeCar, Motorcycle, DakarCar jsou odvozené třídy, které rozšiřují Vehicle o specifické atributy jako aerodynamika, off-road schopnosti

Splňuje zadání - dědičnosti, pozdní vazby overriding


- RaceEvent – Reprezentace závodu

Uchovává informace o závodu, jako je místo, typ závodu a datum

Metoda ShowInfo vypisuje informace o konkrétním závodě

Splňuje zadání - kompozice objektů a polymorfismu v datových strukturách


- Statistics – Správa statistik týmu

Uchovává celkové statistiky týmu, jako je počet závodů a počet vítězství

Metoda AddWin přidává vítězství, metoda AddRace přidává závod

Metoda ShowStats zobrazí celkové statistiky týmu

Splňuje zadání - static metod a atributů a třídy v roli objektu


- mainRaces.cpp – Hlavní program pro běh závodu

Vytváří závodní tým RaceTeam

Přidává jezdce Racer a vozidla Vehicle včetně podtříd

Spouští jedno kolo závodů, vypisuje výsledky a statistiky

Vyhledává nejrychlejší vozidlo v týmu pomocí std::max_element

Po závodě se volá DeleteTeam, aby se správně odstranily všechny objekty

Splňuje zadání - vytváření desítek objektů, polymorfismus, správného mazání paměti
