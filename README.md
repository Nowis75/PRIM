   <div id="readme" class="readme blob instapaper_body">
    <article class="markdown-body entry-content" itemprop="text"><h1><a id="user-content-prim---robotika" class="anchor" aria-hidden="true" href="#prim---robotika"></a>PRIM - Robotika</h1>
<p>U�ebnice robotiky se skl�d� ze dvou ��st�. Ka�d� vyu�v� jinou technologii. Jedn� se o Arduino a Micro:Bit. Sta�� si jen vybrat, kterou technologii pro v�uku robotiky vyu�ijete. Struktura obou ��st� a pޒklad� je prakticky stejn�.</p>
<p><a href="#arduino">Arduino - obsah</a></p>
<p><a href="#microbit">Micro:Bit - obsah</a></p>
<p><a href="https://github.com/Nowis75/PRIM/archive/master.zip">U�ebnice ke sta�en� (ZIP - 1Gb)</a></p>       
 <h2>KR�TK� SEZN�MEN�, JAK PRACOVAT S U�EBNIC�</h2><p>
U�ebnice se skl�d� z jednotliv�ch kapitol, kter� obsahuj� konkr�tn� prob�ran� t�ma. Materi�ly pro ka�d� t�ma jsou rozd�leny do tޒ z�kladn�ch ��st� a dopln�ny o dal� podp�rn� materi�ly.</p>
<p>
Ka�d� slo�ka lekce je rozd�lena na d�l�� podslo�ky, kter� maj� n�sleduj�c� strukturu:<br>
01_Pro_ucitele<br>
02_Pro_zaky<br>
03_Samostudium<br>
04_Zdrojove_kody_prikladu<br>
05_Zaverecny_projekt<br>
06_Dalsi_materialy<br>
</p>
<h3>1.	PRO U�ITELE</h3>
<p>
Tato slo�ka obsahuje soubory ur�en� u�itel�m, kter� p�edstavuj� doporu�en� pr�chod hodinou. D�le jsou zde soubory uk�zkov� vy�e�en�ch samostatn�ch �loh, kter� maj� �ci �e�it v r�mci pracovn�ch list�.
D�le jsou zde prezentace k hodin� v MS PowerPoint (slo�ka PowerPoint_prezentace), kter� kop�ruj� pr�vodce hodinou a cel� lekce v jednom souboru se v�emi ��stmi (slo�ka Vse_v_jednom). </p>
<h3>2.	PRO ��KY</h3>
<p>Slo�ka obsahuje pracovn� listy, kter� kop�ruj� strukturu PODROBN�HO PR�VODCE HODINOU vyu�uj�c�ho. Soubory s pracovn�mi listy jsou samostatn� um�st�ny v pޒslu�n� slo�ce, aby bylo snadn� je vytisknout. Pracovn� listy lze rozeslat i elektronicky.
Spr�vn� �e�en� samostatn�ch �kol� jsou ve slo�ce PRO U�ITELE.</p>
<h3>3.	SAMOSTUDIUM</h3><p>
Slo�ka obsahuje materi�l, kter� m��e b�t studijn�m dopl�kem. Jsou zde podrobn� informace k prob�ran�mu t�matu. Lze jej vyu�t jako studijn� materi�l jak pro studenty, tak i pro vyu�uj�c�, kteޒ se s prob�ranou l�tkou seznamuj�. 
Jsou zde tak� podrobn� okomentov�ny sch�mata zapojen� a programov� k�dy v�ech pޒklad� pou�it�ch v pracovn�ch listech.
Sou��st� je i n�m�t na projekt, kter� vyu�v� nau�en�ch znalost� z hodiny.</p>
<h3>4.	ZDROJOV� K�DY</h3><p>
Slo�ka obsahuje soubory zdrojov�ch k�d�, kter� lze otevޒt v prost�ed� Arduino. Jsou zde uvedeny k�dy v�ech vzorov�ch pޒklad� i samostatn�ch �kol�.
Pokud je to nutn�, tak lze ve slo�ce nal�zt pot�ebn� knihovny pro prost�ed� Arduino.</p>
<h3>5.	Z�V�RE�N� PROJEKT</h3><p>
Slo�ka obsahuje soubor, ve kter�m je uveden postup konstrukce samostatn�ho projektu d�le podslo�ku s tiskov�mi �ablonami pro pޒpadnou konstrukci. �ablony jsou uvedeny ve zdrojov�ch souborech, nebo v PDF, kter� lze jednodu�e vytisknout </p>
<h3>6.	DAL�� MATERI�LY</h3><p>
Ve slo�ce se nach�z� zejm�na soubory sch�mat zapojen� v�ech obvod� uveden�ch v u�ebnici, vztahuj�c� se k dan� lekci.
</p>
<h1><a id="user-content-arduino" class="anchor" aria-hidden="true" href="#arduino"></a>Arduino</h1>
       
<p>U�ebnice ARDUINO obsahuje sadu metodick�ch materi�l� pro u�itele se zam��en�m na programov�n�, odr�� zrevidovan� r�mcov� vzd�l�vac� pl�n z informatiky a napl�uje n�kter� z kompetenc�, kter� jsou v n�m za�azen�.</p>
<p>Term�n �Arduino� v sob� obsahuje jak hardware, tak i software. Arduino je prototypovou a otev�enou platformou zalo�enou na snadno pou�iteln�m hardwaru a softwaru. Programovateln� desky Arduino zpracov�vaj� vstupy a s pou�it�m programov�ho k�du vytvoޒ v�stup. K desce Arduino lze p�idat �adu dal�ch hardwarov�ch komponent. S vyu�it�m open source knihoven dostupn�ch na webu lze Arduino vyu�t pro �irokou �k�lu projekt�, od extr�mn� jednoduch�ch a� po vysoce komplexn�. T�m je tato platforma velice flexibiln�.</p>
<p>Program�to�i vytv��ej� roboty, d�lkov� ޒzen� vozidla, dom�c� automatiza�n� zaޒzen� atd. Arduino z�skalo popularitu d�ky sv� jednoduchosti a cenov� dostupnosti. Pro za��te�n�ka, v�etn� d�t�te, je relativn� snadn� s programov�n�m na platform� Arduino za��t. V�ukov� potenci�l lze spat�ovat v pokryt� n�kolika oblast� jako design, elektronika, embedded syst�my a v neposledn� �ad� programov�n�. Tyto oblasti se navz�jem prol�naj� a dopl�uj�.</p>
<p>Pro pr�ci s Arduino pomoc� t�to u�ebnice se nevy�aduj� �dn� p�edchoz� zku�enosti, ani pochopen� z�klad� elektroniky. U�ebnice je rozd�lena do kapitol, kter� obsahuj� pޒklady odstup�ovan� podle n�ro�nosti. Ka�d� kapitola obsahuje materi�ly pro u�itele v podob� podrobn�ch pr�vodc� hodinami, pracovn�mi listy pro �ky a podrobn�mi pr�vodci teori�, vztahuj�c� se k prob�ran�mu t�matu. V cel� u�ebnici je kladen d�raz na samostatn� pln�n� �kol�, kter� postupn� odhaluj� mo�nosti platformy Arduino.</p>
  
<h2><a id="user-content-obsah" class="anchor" aria-hidden="true" href="#obsah"></a>OBSAH</h2>
<ol>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/00_Uvod">�vod</a> </li>
</ol>
<ul>
<li>Doporu�en�, jak pracovat s u�ebnic�.</li>
<li>Popis jednotliv�ch komponent v sad� ARDUINO.</li>
<li>Popis z�kladn� desky ARDUINO a programovac�ho rozhran�.</li>
<li>Prvn� nastaven� programovac�ho rozhran�.</li>
<li>�e�en� probl�m�.</li>
<li>Nutn� z�klady pro prvn� program - kontaktn� pole, ohm�v z�kon, tla��tka, LED.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/00_Uvod">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="2">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/01_PRVNI_PROGRAM">Prvn� program</a> </li>
   
</ol>
<ul>
<li>Digit�ln� vstup a v�stup s popisem funkc� pro jejich ovl�d�n�.</li>
<li>Podrobn� popis zapojen� obvodu s LED diodu.</li>
<li>Z�kladn� sezn�men� s jazykem Wiring.</li>
<li>Popis rozhran� Arduino IDE pro nahr�n� k�du do desky.</li>
<li>�e�en� probl�my p�i zapojen� LED diody.</li>
<li>Sezn�men� s programem Arduino IDE pro nahr�v�n� k�du do desky.</li>
<li>Princip a zapojen� piezzo bzu��ku s podrobn�m vysv�tlen�m.</li>
<li>Programov� k�d pro ovl�d�n� obvodu s bzu��kem.</li>
<li>Technick� ��st pro z�v�re�n� projekt � Mluv�c� robot.</li>
<li>Vysv�tlen� �e�en� samostatn�ch �kol�.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/01_PRVNI_PROGRAM">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="3">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/02_LED_ANIMATION">LED Animace</a> </li>
</ol>
<ul>
<li>Deklarace a pou�v�n� vlastn�ch funkc�.</li>
<li>Definice pol� v Arduinu.</li>
<li>Pou�it� pޒkazu cyklu for.</li>
<li>Programov� k�dy pro vysv�tlen� pou�v�n� pol� a cyklu.</li>
<li>�e�en� probl�my p�i zapojen� sestavy LED diod.</li>
<li>Technick� ��st pro z�v�re�n� projekt � stojan na diody.</li>
<li>Vysv�tlen� �e�en� samostatn�ch �kol�.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/02_LED_ANIMATION">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="4">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/03_SERVO">Programujeme ovl�d�n� servo motor�</a> </li>
</ol>
<ul>
<li>Princip servomotor�.</li>
<li>Vysv�tlen� podm�nkov�ho pޒkazu if..else.</li>
<li>Pޒklad zapojen� servomotoru.</li>
<li>Princip a zapojen� potenciometru v Arduino pro ovl�d�n� servomotoru.</li>
<li>Programov� k�dy pro vysv�tlen� pou�v�n� podm�nkov�ho pޒkazu if..else..</li>
<li>�e�en� probl�my p�i zapojen� servomotoru.</li>
<li>Technick� ��st pro z�v�re�n� projekt � slune�nice.</li>
<li>Vysv�tlen� �e�en� samostatn�ch �kol�.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/03_SERVO">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="5">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/04_RGB_LED">Programujeme RGB diody</a> </li>
</ol>
<ul>
<li>Sezn�men� se s RGB diodou a jej� funk�nost�.</li>
<li>Princip skl�d�n� barev a PWM.</li>
<li>Spr�vn� zapojen� RGB diody s vyu�it�m zku�enost� z p�edchoz�ch pޒklad�. Zejm�na
se jedn� o volbu rezistor� a jejich zapojen�.</li>
<li>Zaveden� pojm� a znalost� t�kaj�c� se analogov�ch v�stup� a mapov�n� hodnot.</li>
<li>Vyu�it� ji� zaveden�ho podm�nkov�ho pޒkazu if.</li>
<li>Zaveden� vlastn� funkce v programov�m k�du.</li>
<li>Pou�it� pޒkazu cyklu for.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/04_RGB_LED">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="6">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/05_MOTOR_DC">Programujeme ovl�d�n� DC motor�</a> </li>
</ol>
<ul>
<li>Pochopen� principu stejnosm�rn�ho motoru.</li>
<li>Sezn�men� s principy tranzistoru.</li>
<li>Zapojen� tranzistoru pro regulaci ot��ek motoru.</li>
<li>Zapojen� extern�ho nap�jen� motoru.</li>
<li>Vyu�it� potenciometru pro regulaci motoru.</li>
<li>Projekt v�tr�ku.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/05_MOTOR_DC">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="7">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/06_THERMO_DISPLAY">M�ޒme fyzik�ln� veli�iny</a> </li>
</ol>
<ul>
<li>Z�sk�n� dovednost� p�i zapojov�n� senzoru teploty.</li>
<li>Nau�en� se pracovat se s�riov�m monitorem.</li>
<li>Nau�it se zapojit LCD display a zobrazovat hodnoty.</li>
<li>P�ipojov�n� extern�ch knihoven pro snaz� programov�n�.</li>
<li>Nau�it se zobrazovat hodnoty na LCD displeji.</li>
<li>Projekt sklen�ku.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/06_THERMO_DISPLAY">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="8">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/07_LED_MATRIX_ACCELEROMETER">Programujeme Akcelerometr</a> </li>
</ol>
<ul>
<li>Z�sk�n� dovednost� p�i zapojovov�n� a ovl�d�n� maticov�ho displeje.</li>
<li>Ovl�d�n� displje prost�ednictv�m v�cerozm�rn�ch pol�.</li>
   <li>Propojen� s potenciometry (hra Ping Pong).</li>
   <li>Z�sk�n� znalost� p�i pr�ci s akcelerometrem (princip, zapojen�).</li>
   <li>Propojen� akcelerometru a maticov�ho displeje.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/07_LED_MATRIX_ACCELEROMETER">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="9">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/08_JOYSTICK">Programujeme ovl�d�n� joystickem</a> </li>
</ol>
<ul>
<li>Pochopit princip joysticku a jeho vyu�it� jako vstupn� zaޒzen� pro konstrukce na
b�zi Arduina.</li>
<li>Sestrojit jednoduchou robotickou ruku za pomoci krokov�ho motorku, servo motorku a
d�l� vyti�t�n�ch na 3D tisk�rn�.</li>
<li>Tuto ruku naprogramovat a nastavit tak, aby um�la vym�chat pytl�k �aje v p�ipraven�m
hrn��ku s vodou o po�adovan� teplot�.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/08_JOYSTICK">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="10">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/09_IR_REMOTE_CONTROL">D�lkov� ovl�d�n�</a> </li>
</ol>
<ul>
<li>Princip IR ovl�d�n�.</li>
<li>Podrobn� popis zapojen� obvodu s IR diodu.</li>
<li>Zdrojov� k�d programu pro IR ovl�d�n�</li>
<li>Podrobn� popis zapojen� obvodu pro IR ovl�d�n� DC a servo motoru</li>
<li>Zdrojov� k�d tohot zapojen�</li>
<li>�e�en� mo�n�ch pot��</li>
<li>Dal� �koly pro samostatnou pr�ci</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/09_IR_REMOTE_CONTROL">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="11">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/10_SEMAPHORE">Semafor</a>  </li>
</ol>
<ul>
<li>Popis p�eru�en�.</li>
<li>Tla��tko a jeho zapojen�</li>
<li>Zapojen� obvodu pro jednoduch� semafor</li>
<li>Zdrojov� k�d pro jednoduch� semafor</li>
<li>�e�en� mo�n�ch pot��</li>
<li>Slo�it�j� �lohy pro semafor, v�etn� zapojen� a zdrojov�ho k�dy</li>
<li>Dal� �lohy pro samostatnou pr�ci</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/10_SEMAPHORE">(Lekce ke sta�en�)</a></li>
</ul>
<ol start="12">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/Wiring%20-%20refere%C4%8Dn%C3%AD%20p%C5%99%C3%ADru%C4%8Dka">Wiring - referen�n� pޒru�ka</a> <a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/Wiring%20-%20refere%C4%8Dn%C3%AD%20p%C5%99%C3%ADru%C4%8Dka">(Lekce ke sta�en�)</a></li>
</ol>
<h1><a id="user-content-microbit" class="anchor" aria-hidden="true" href="#microbit"></a>MicroBit</h1>
<p>U�ebnice MicroBit je zam��ena na v�uku programov�n� MicroPythonu za pomoc� v�vojov� desky Microbit.</p>
<p>Je ur�ena pro pokro�ilej� �ky 7. a� 9. tޒd z�kladn�ch �kol a pro neelektrotechnicky zam��en� �koly st�edn�.</p>
<h2>Obsah</h2>
<ol>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/00-Uvod"> �vod</a>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/01-LED"> Pr�ce s vestav�n�m LED displejem</a>
<ul>
<li>Zobrazov�n� textu
<li>Zobrazen� obr�zk� vestav�n�ch i vlastn�ch
<li>Animace
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/02-Button"> Pou�it� vestav�n�ch tla��tek</a>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/03-Sound">Pr�ce se zvukem</a>
<ul>
<li>P�ehr�n� vestav�n�ch melodi�
<li>Tvorba vlastn�ch melodi�
<li>Generov�n� �e�i
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/04-Poloha">Orientace micro:bitu v prostoru</a>
<ul>
<li>Pou�it� vestav�n�ho akcelerometru
<li>Vyu�it� gest
<li>Pou�it� vestav�n�ho kompasu
<li>M��en� magnetick�ho pole
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/05-Sit">Propojen� micro:bit� v s�ti</a>
<ul>
<li>Pޒm� propojen� pomoc� kabelu
<li>Bezdr�tov� propojen� pomoc� r�dia
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/06-Periferie">Pr�ce s perif�riemi</a>
<ul>
<li>Ovl�d�n� trojbarevn� diody
<li>M��en� teploty pomoc� extern�ho �idla
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/07-Zaver">Z�v�re�n� pޒklad</a>
</ul>
</ol>
</article>

