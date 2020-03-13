   <div id="readme" class="readme blob instapaper_body">
    <article class="markdown-body entry-content" itemprop="text"><h1><a id="user-content-prim---robotika" class="anchor" aria-hidden="true" href="#prim---robotika"></a>PRIM - Robotika</h1>
<p>U‹ebnice robotiky se skl‡d‡ ze dvou ‹‡st’. Kaìd‡ vyuì’v‡ jinou technologii. Jedn‡ se o Arduino a Micro:Bit. Sta‹’ si jen vybrat, kterou technologii pro vùuku robotiky vyuìijete. Struktura obou ‹‡st’ a pŞ’kladó je prakticky stejn‡.</p>
<p><a href="#arduino">Arduino - obsah</a></p>
<p><a href="#microbit">Micro:Bit - obsah</a></p>
<p><a href="https://github.com/Nowis75/PRIM/archive/master.zip">U‹ebnice ke staìen’ (ZIP - 1Gb)</a></p>       
 <h2>KRçTKƒ SEZNçMENê, JAK PRACOVAT S U‰EBNICê</h2><p>
U‹ebnice se skl‡d‡ z jednotlivùch kapitol, kter obsahuj’ konkrtn’ prob’ran tma. Materi‡ly pro kaìd tma jsou rozdleny do tŞ’ z‡kladn’ch ‹‡st’ a doplnny o dalä’ podpórn materi‡ly.</p>
<p>
Kaìd‡ sloìka lekce je rozdlena na d’l‹’ podsloìky, kter maj’ n‡sleduj’c’ strukturu:<br>
01_Pro_ucitele<br>
02_Pro_zaky<br>
03_Samostudium<br>
04_Zdrojove_kody_prikladu<br>
05_Zaverecny_projekt<br>
06_Dalsi_materialy<br>
</p>
<h3>1.	PRO U‰ITELE</h3>
<p>
Tato sloìka obsahuje soubory ur‹en u‹itelóm, kter pŞedstavuj’ doporu‹enù próchod hodinou. D‡le jsou zde soubory uk‡zkov vyŞeäenùch samostatnùch œloh, kter maj’ ì‡ci Şeäit v r‡mci pracovn’ch listó.
D‡le jsou zde prezentace k hodin v MS PowerPoint (sloìka PowerPoint_prezentace), kter kop’ruj’ próvodce hodinou a cel‡ lekce v jednom souboru se väemi ‹‡stmi (sloìka Vse_v_jednom). </p>
<h3>2.	PRO ëçKY</h3>
<p>Sloìka obsahuje pracovn’ listy, kter kop’ruj’ strukturu PODROBNƒHO PRñVODCE HODINOU vyu‹uj’c’ho. Soubory s pracovn’mi listy jsou samostatn um’stny v pŞ’sluän sloìce, aby bylo snadn je vytisknout. Pracovn’ listy lze rozeslat i elektronicky.
Spr‡vn‡ Şeäen’ samostatnùch œkoló jsou ve sloìce PRO U‰ITELE.</p>
<h3>3.	SAMOSTUDIUM</h3><p>
Sloìka obsahuje materi‡l, kterù móìe bùt studijn’m doplËkem. Jsou zde podrobn informace k prob’ranmu tmatu. Lze jej vyuì’t jako studijn’ materi‡l jak pro studenty, tak i pro vyu‹uj’c’, kteŞ’ se s prob’ranou l‡tkou seznamuj’. 
Jsou zde tak podrobn okomentov‡ny schmata zapojen’ a programov k—dy väech pŞ’kladó pouìitùch v pracovn’ch listech.
Sou‹‡st’ je i n‡mt na projekt, kterù vyuì’v‡ nau‹enùch znalost’ z hodiny.</p>
<h3>4.	ZDROJOVƒ KîDY</h3><p>
Sloìka obsahuje soubory zdrojovùch k—dó, kter lze otevŞ’t v prostŞed’ Arduino. Jsou zde uvedeny k—dy väech vzorovùch pŞ’kladó i samostatnùch œkoló.
Pokud je to nutn, tak lze ve sloìce nalzt potŞebn knihovny pro prostŞed’ Arduino.</p>
<h3>5.	ZçVRE‰Nø PROJEKT</h3><p>
Sloìka obsahuje soubor, ve kterm je uveden postup konstrukce samostatnho projektu d‡le podsloìku s tiskovùmi äablonami pro pŞ’padnou konstrukci. áablony jsou uvedeny ve zdrojovùch souborech, nebo v PDF, kter lze jednoduäe vytisknout </p>
<h3>6.	DALáê MATERIçLY</h3><p>
Ve sloìce se nach‡z’ zejmna soubory schmat zapojen’ väech obvodó uvedenùch v u‹ebnici, vztahuj’c’ se k dan lekci.
</p>
<h1><a id="user-content-arduino" class="anchor" aria-hidden="true" href="#arduino"></a>Arduino</h1>
       
<p>U‹ebnice ARDUINO obsahuje sadu metodickùch materi‡ló pro u‹itele se zamŞen’m na programov‡n’, odr‡ì’ zrevidovanù r‡mcovù vzdl‡vac’ pl‡n z informatiky a naplËuje nkter z kompetenc’, kter jsou v nm zaŞazen.</p>
<p>Term’n ãArduinoÒ v sob obsahuje jak hardware, tak i software. Arduino je prototypovou a otevŞenou platformou zaloìenou na snadno pouìitelnm hardwaru a softwaru. Programovateln desky Arduino zpracov‡vaj’ vstupy a s pouìit’m programovho k—du vytvoŞ’ vùstup. K desce Arduino lze pŞidat Şadu dalä’ch hardwarovùch komponent. S vyuìit’m open source knihoven dostupnùch na webu lze Arduino vyuì’t pro äirokou äk‡lu projektó, od extrmn jednoduchùch aì po vysoce komplexn’. T’m je tato platforma velice flexibiln’.</p>
<p>Program‡toŞi vytv‡Şej’ roboty, d‡lkov Ş’zen‡ vozidla, dom‡c’ automatiza‹n’ zaŞ’zen’ atd. Arduino z’skalo popularitu d’ky sv jednoduchosti a cenov dostupnosti. Pro za‹‡te‹n’ka, v‹etn d’tte, je relativn snadn s programov‡n’m na platform Arduino za‹’t. Vùukovù potenci‡l lze spatŞovat v pokryt’ nkolika oblast’ jako design, elektronika, embedded systmy a v neposledn’ Şad programov‡n’. Tyto oblasti se navz‡jem prol’naj’ a doplËuj’.</p>
<p>Pro pr‡ci s Arduino pomoc’ tto u‹ebnice se nevyìaduj’ ì‡dn pŞedchoz’ zkuäenosti, ani pochopen’ z‡kladó elektroniky. U‹ebnice je rozdlena do kapitol, kter obsahuj’ pŞ’klady odstupËovan podle n‡ro‹nosti. Kaìd‡ kapitola obsahuje materi‡ly pro u‹itele v podob podrobnùch próvodcó hodinami, pracovn’mi listy pro ì‡ky a podrobnùmi próvodci teori’, vztahuj’c’ se k prob’ranmu tmatu. V cel u‹ebnici je kladen dóraz na samostatn plnn’ œkoló, kter postupn odhaluj’ moìnosti platformy Arduino.</p>
  
<h2><a id="user-content-obsah" class="anchor" aria-hidden="true" href="#obsah"></a>OBSAH</h2>
<ol>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/00_Uvod">òvod</a> </li>
</ol>
<ul>
<li>Doporu‹en’, jak pracovat s u‹ebnic’.</li>
<li>Popis jednotlivùch komponent v sad ARDUINO.</li>
<li>Popis z‡kladn’ desky ARDUINO a programovac’ho rozhran’.</li>
<li>Prvn’ nastaven’ programovac’ho rozhran’.</li>
<li>Ûeäen’ problmó.</li>
<li>Nutn z‡klady pro prvn’ program - kontaktn’ pole, ohmóv z‡kon, tla‹’tka, LED.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/00_Uvod">(Lekce ke staìen’)</a></li>
</ul>
<ol start="2">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/01_PRVNI_PROGRAM">Prvn’ program</a> </li>
   
</ol>
<ul>
<li>Digit‡ln’ vstup a vùstup s popisem funkc’ pro jejich ovl‡d‡n’.</li>
<li>Podrobnù popis zapojen’ obvodu s LED diodu.</li>
<li>Z‡kladn’ sezn‡men’ s jazykem Wiring.</li>
<li>Popis rozhran’ Arduino IDE pro nahr‡n’ k—du do desky.</li>
<li>Ûeäen problmy pŞi zapojen’ LED diody.</li>
<li>Sezn‡men’ s programem Arduino IDE pro nahr‡v‡n’ k—du do desky.</li>
<li>Princip a zapojen’ piezzo bzu‹‡ku s podrobnùm vysvtlen’m.</li>
<li>Programovù k—d pro ovl‡d‡n’ obvodu s bzu‹‡kem.</li>
<li>Technick‡ ‹‡st pro z‡vre‹nù projekt Ğ Mluv’c’ robot.</li>
<li>Vysvtlen’ Şeäen’ samostatnùch œkoló.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/01_PRVNI_PROGRAM">(Lekce ke staìen’)</a></li>
</ul>
<ol start="3">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/02_LED_ANIMATION">LED Animace</a> </li>
</ol>
<ul>
<li>Deklarace a pouì’v‡n’ vlastn’ch funkc’.</li>
<li>Definice pol’ v Arduinu.</li>
<li>Pouìit’ pŞ’kazu cyklu for.</li>
<li>Programov k—dy pro vysvtlen’ pouì’v‡n’ pol’ a cyklu.</li>
<li>Ûeäen problmy pŞi zapojen’ sestavy LED diod.</li>
<li>Technick‡ ‹‡st pro z‡vre‹nù projekt Ğ stojan na diody.</li>
<li>Vysvtlen’ Şeäen’ samostatnùch œkoló.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/02_LED_ANIMATION">(Lekce ke staìen’)</a></li>
</ul>
<ol start="4">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/03_SERVO">Programujeme ovl‡d‡n’ servo motoró</a> </li>
</ol>
<ul>
<li>Princip servomotoró.</li>
<li>Vysvtlen’ podm’nkovho pŞ’kazu if..else.</li>
<li>PŞ’klad zapojen’ servomotoru.</li>
<li>Princip a zapojen’ potenciometru v Arduino pro ovl‡d‡n’ servomotoru.</li>
<li>Programov k—dy pro vysvtlen’ pouì’v‡n’ podm’nkovho pŞ’kazu if..else..</li>
<li>Ûeäen problmy pŞi zapojen’ servomotoru.</li>
<li>Technick‡ ‹‡st pro z‡vre‹nù projekt Ğ slune‹nice.</li>
<li>Vysvtlen’ Şeäen’ samostatnùch œkoló.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/03_SERVO">(Lekce ke staìen’)</a></li>
</ul>
<ol start="5">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/04_RGB_LED">Programujeme RGB diody</a> </li>
</ol>
<ul>
<li>Sezn‡men’ se s RGB diodou a jej’ funk‹nost’.</li>
<li>Princip skl‡d‡n’ barev a PWM.</li>
<li>Spr‡vn zapojen’ RGB diody s vyuìit’m zkuäenost’ z pŞedchoz’ch pŞ’kladó. Zejmna
se jedn‡ o volbu rezistoró a jejich zapojen’.</li>
<li>Zaveden’ pojmó a znalost’ tùkaj’c’ se analogovùch vùstupó a mapov‡n’ hodnot.</li>
<li>Vyuìit’ jiì zavedenho podm’nkovho pŞ’kazu if.</li>
<li>Zaveden’ vlastn’ funkce v programovm k—du.</li>
<li>Pouìit’ pŞ’kazu cyklu for.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/04_RGB_LED">(Lekce ke staìen’)</a></li>
</ul>
<ol start="6">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/05_MOTOR_DC">Programujeme ovl‡d‡n’ DC motoró</a> </li>
</ol>
<ul>
<li>Pochopen’ principu stejnosmrnho motoru.</li>
<li>Sezn‡men’ s principy tranzistoru.</li>
<li>Zapojen’ tranzistoru pro regulaci ot‡‹ek motoru.</li>
<li>Zapojen’ extern’ho nap‡jen’ motoru.</li>
<li>Vyuìit’ potenciometru pro regulaci motoru.</li>
<li>Projekt vtr‡ku.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/05_MOTOR_DC">(Lekce ke staìen’)</a></li>
</ul>
<ol start="7">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/06_THERMO_DISPLAY">MŞ’me fyzik‡ln’ veli‹iny</a> </li>
</ol>
<ul>
<li>Z’sk‡n’ dovednost’ pŞi zapojov‡n’ senzoru teploty.</li>
<li>Nau‹en’ se pracovat se sriovùm monitorem.</li>
<li>Nau‹it se zapojit LCD display a zobrazovat hodnoty.</li>
<li>PŞipojov‡n’ extern’ch knihoven pro snazä’ programov‡n’.</li>
<li>Nau‹it se zobrazovat hodnoty na LCD displeji.</li>
<li>Projekt sklen’ku.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/06_THERMO_DISPLAY">(Lekce ke staìen’)</a></li>
</ul>
<ol start="8">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/07_LED_MATRIX_ACCELEROMETER">Programujeme Akcelerometr</a> </li>
</ol>
<ul>
<li>Z’sk‡n’ dovednost’ pŞi zapojovov‡n’ a ovl‡d‡n’ maticovho displeje.</li>
<li>Ovl‡d‡n’ displje prostŞednictv’m v’cerozmrnùch pol’.</li>
   <li>Propojen’ s potenciometry (hra Ping Pong).</li>
   <li>Z’sk‡n’ znalost’ pŞi pr‡ci s akcelerometrem (princip, zapojen’).</li>
   <li>Propojen’ akcelerometru a maticovho displeje.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/07_LED_MATRIX_ACCELEROMETER">(Lekce ke staìen’)</a></li>
</ul>
<ol start="9">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/08_JOYSTICK">Programujeme ovl‡d‡n’ joystickem</a> </li>
</ol>
<ul>
<li>Pochopit princip joysticku a jeho vyuìit’ jako vstupn’ zaŞ’zen’ pro konstrukce na
b‡zi Arduina.</li>
<li>Sestrojit jednoduchou robotickou ruku za pomoci krokovho motorku, servo motorku a
d’ló vytiätnùch na 3D tisk‡rn.</li>
<li>Tuto ruku naprogramovat a nastavit tak, aby umla vym‡chat pytl’k ‹aje v pŞipravenm
hrn’‹ku s vodou o poìadovan teplot.</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/08_JOYSTICK">(Lekce ke staìen’)</a></li>
</ul>
<ol start="10">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/09_IR_REMOTE_CONTROL">D‡lkov ovl‡d‡n’</a> </li>
</ol>
<ul>
<li>Princip IR ovl‡d‡n’.</li>
<li>Podrobnù popis zapojen’ obvodu s IR diodu.</li>
<li>Zdrojovù k—d programu pro IR ovl‡d‡n’</li>
<li>Podrobnù popis zapojen’ obvodu pro IR ovl‡d‡n’ DC a servo motoru</li>
<li>Zdrojovù k—d tohot zapojen’</li>
<li>Ûeäen’ moìnùch pot’ì’</li>
<li>Dalä’ œkoly pro samostatnou pr‡ci</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/09_IR_REMOTE_CONTROL">(Lekce ke staìen’)</a></li>
</ul>
<ol start="11">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/10_SEMAPHORE">Semafor</a>  </li>
</ol>
<ul>
<li>Popis pŞeruäen’.</li>
<li>Tla‹’tko a jeho zapojen’</li>
<li>Zapojen’ obvodu pro jednoduchù semafor</li>
<li>Zdrojovù k—d pro jednoduchù semafor</li>
<li>Ûeäen’ moìnùch pot’ì’</li>
<li>Sloìitjä’ œlohy pro semafor, v‹etn zapojen’ a zdrojovho k—dy</li>
<li>Dalä’ œlohy pro samostatnou pr‡ci</li>
   <li><a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/10_SEMAPHORE">(Lekce ke staìen’)</a></li>
</ul>
<ol start="12">
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/Wiring%20-%20refere%C4%8Dn%C3%AD%20p%C5%99%C3%ADru%C4%8Dka">Wiring - referen‹n’ pŞ’ru‹ka</a> <a href="https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/Wiring%20-%20refere%C4%8Dn%C3%AD%20p%C5%99%C3%ADru%C4%8Dka">(Lekce ke staìen’)</a></li>
</ol>
<h1><a id="user-content-microbit" class="anchor" aria-hidden="true" href="#microbit"></a>MicroBit</h1>
<p>U‹ebnice MicroBit je zamŞena na vùuku programov‡n’ MicroPythonu za pomoc’ vùvojov desky Microbit.</p>
<p>Je ur‹ena pro pokro‹ilejä’ ì‡ky 7. aì 9. tŞ’d z‡kladn’ch äkol a pro neelektrotechnicky zamŞen äkoly stŞedn’.</p>
<h2>Obsah</h2>
<ol>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/00-Uvod"> òvod</a>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/01-LED"> Pr‡ce s vestavnùm LED displejem</a>
<ul>
<li>Zobrazov‡n’ textu
<li>Zobrazen’ obr‡zkó vestavnùch i vlastn’ch
<li>Animace
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/02-Button"> Pouìit’ vestavnùch tla‹’tek</a>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/03-Sound">Pr‡ce se zvukem</a>
<ul>
<li>PŞehr‡n’ vestavnùch melodi’
<li>Tvorba vlastn’ch melodi’
<li>Generov‡n’ Şe‹i
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/04-Poloha">Orientace micro:bitu v prostoru</a>
<ul>
<li>Pouìit’ vestavnho akcelerometru
<li>Vyuìit’ gest
<li>Pouìit’ vestavnho kompasu
<li>MŞen’ magnetickho pole
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/05-Sit">Propojen’ micro:bitó v s’ti</a>
<ul>
<li>PŞ’m propojen’ pomoc’ kabelu
<li>Bezdr‡tov propojen’ pomoc’ r‡dia
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/06-Periferie">Pr‡ce s perifriemi</a>
<ul>
<li>Ovl‡d‡n’ trojbarevn diody
<li>MŞen’ teploty pomoc’ extern’ho ‹idla
</ul>
<li><a href="https://github.com/Nowis75/PRIM/tree/master/Experiments/MicroBit/07-Zaver">Z‡vre‹nù pŞ’klad</a>
</ul>
</ol>
</article>

