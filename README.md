# Olio-ohjelmointi ja Oliopohjainen suunnittelu -kurssin viikkotehtävät

## Tehtävä 1 - Arvauspeli (Funktionaalinen toteutus)

Ohjelman toiminta:

1. **Luvun arpominen**: Arvotaan luku 1 ja pelaajan itse syöttämän luvun väliltä.
2. **Pelaajan arvaukset**: Pelaajaa pyydetään arvaamaan luku, kunnes luku täsmää arvotun luvun kanssa.
3. **Vertailun palaute**: Tulostetaan pelaajalle, onko arvaus liian suuri, liian pieni, tai oikein.
4. **Tuloksen tulostus**: Peli pitää kirjaa arvausten määrästä, ja tulostaa sen yhdessä oikean luvun kanssa.

## Tehtävä 2 - Arvauspeli (Oliopohjainen toteutus)

Tehtävä 1 muokkaus siten että se on toteutettu oliopohjaisesti käyttäen Game-luokkaa. Sisältää ominaisuudet:

- **Luokan jäsenet**:
  - `maxNumber`: Suurin arvottava luku.
  - `playerGuess`: Pelaajan arvaama luku.
  - `randomNumber`: Pelin arpoma luku.
  - `numOfGuesses`: Pelaajan arvausten määrä.
- **Luokan funktiot**:
  - **Konstruktori**: Alustaa peli-olion satunnaislukugeneraattorin aikaleiman mukaan. Määrittää pelaajan syötetyllä suurimman arvottaman luvun (`maxNumber`). Lisäksi alustaa muuttujat `playerGuess` ja `numOfGuesses`.
  - **Destruktori**: Poistaa `Game`-olion.
  - **`void play()`**: Pelin toteutus, missä käyttäjää pyydetään arvaamaan luku, ja vertaillaan tätä oikean kanssa.
  - **`void printGameResult()`**: Yksityinen funktio, joka tulostaa oikean luvun ja pelaajan arvausten määrä.

## Tehtävä 3 - Italialainen kokki

Tässä tehtävässä harjoitellaan oliooiden perimisen käyttöä.

Projekti koostuu kahdesta luokasta:
- `Chef`: Pääluokka yleisen kokin toiminnalle
- `ItalianChef`: `Chef`-luokasta peritty aliluokka, joka lisää toiminnan kuten pizzan valmistuksen.

**Ohjelman Toiminta**
1. `Chef`-luokka
   - `makeSalad(int)`: Laskee annettujen raaka-aineiden määrän perusteella, montako salaattia voidaan valmistaa.
   - `makeSoup(int)`: Laskee annettujen raaka-aineiden määrän perusteella, montako keittoa voidaan valmistaa.
2. `ItalianChef` -luokka
   - Perii `Chef`-luokan ominaisuudet ja toiminnot.
   - `askSecret(string, int, int)`:
     - Tarkistaa salasanan ("pizza").
     - Jos salasana on oikea, kutsuu `makePizza`-funktiota.
     - Jos salasana on väärä, ei kutsu `makePizza`-funktiota.
   - `makePizza(int, int)`:
     - Laskee jauhojen ja veden perusteella, montako pizzaa voidaan valmistaa.
