1. **Konwersja walut (PLN → USD)** – przelicza podaną kwotę w złotówkach na dolary według kursu z danego dnia.  
2. **Marża (obliczenie ceny sprzedaży)** – oblicza cenę sprzedaży na podstawie ceny zakupu netto i marży procentowej.

## Kompilacja
### PowerShell (Windows)
powershell
gcc -Wall src\marza.c -o src\marza.exe
gcc -Wall src\konwersja_walut.c -o src\konwersja_walut.exe
