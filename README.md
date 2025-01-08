# Olio-ohjelmointi ja Oliopohjainen suunnittelu -kurssin viikkotehtävät

## Tehtävä 1 - Arvauspeli (funktionaalinen toteutus)

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
  - **Konstruktori**: Alustaa peli-olion määrittäen pelaajan syötetyllä äsuurimman arvottaman luvun.
  - **Destruktori**: Poistaa `Game`-olion.
  - **`void play()`**: Pelin toteutus, missä käyttäjää pyydetään arvaamaan luku, ja vertaillaan tätä oikean kanssa.
  - **`void printGameResult()`**: Yksityinen funktio, joka tulostaa oikean luvun ja pelaajan arvausten määrä.
