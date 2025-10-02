# Challenge Opgave - Merlin

Magiske Merlin skal underholde børnene i en landsby med sit nye trylletrick.
Til dette har han nogle kort med cifre fra 1 til 9 (han har flere kort af hvert ciffer), 
og et stativ med plads til tre kort ved siden af hinanden, som dog starter med at være tomt. 
Hver gang Merlin vælger et kort, placerer han det længst til højre på stativet og flytter de andre kort én plads mod venstre. 
Hvis der ikke er flere pladser på stativet, ryger kortet længst mod venstre tilbage i bunken.

Børnene forstår ikke rigtig Merlin's trylletrick, så de finder på deres egen leg: 
1) Merlin må ikke trække to éns kort i træk, så stopper legen.
2) Tallet som kortene på stativet danner skal være nyt hver gang, ellers stopper legen.
3) Hver gang Merlin trækker et kort, får han point svarende til tallet på stativet.
4) Det ældste barn sidder og tæller hvor mange kort Merlin har trukket, men han kan til gengæld ikke se kortet til venstre. 
   Hvis tallet dannet af det midterste og det højre kort ikke er set før, given han bonus-point svarende til dette tal ganget med antal kort Merlin har trukket.   
5) Det yngste barn fortæller at hun kun er 4 år gammel og derfor ikke forstår tallene større end 4, så hun beder om at Merlin kun bruger kort med cifrene fra 1 til 4.

Hjælp Merlin med at vælge hvilke kort han skal trække, så han får flest muligt point (inklusiv bonus-point), når legen er slut. 

Hvis Merlin skal lege legen i en anden landsby, har det yngste barn måske en anden alder, 
så han vil forberede sig på at kunne bruge kortene fra 1 til `k`, hvor `k` kan være alt fra 2 til 9.

Implementér funktionen `int pick_a_card(int current_number, int cards_drawn, int k)` i [merlin.c](merlin.c), som hver gang skal fortælle Merlin hvilket kort han skal trække. 
Funktionen kender til det nuværende tal på stativet, hvor mange kort Merlin har trukket indtil nu, og det største kort `k` som Merlin må bruge.
Du kan teste din funktion, ved at køre programmet i [challenge.c](challenge.c).
Her er `k` sat til 4, men dit program skal virke med forskellige værdier af `k`.
Hvad bliver din highscore for hvert `k` fra 2 til 9?

Merlin må gerne spørge børnene, om et tal allerede er set. Det gør han med ved at kalde funktionen `int has_seen_number(int number)`.
