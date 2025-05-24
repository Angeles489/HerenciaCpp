```mermaid
classDiagram
    class Dispositivo {
        string marca
    }
    class Tablet
    class Telefono
    class Smartphone

    Tablet ..|> Dispositivo : virtual
    Telefono ..|> Dispositivo : virtual
    Smartphone --|> Tablet
    Smartphone --|> Telefono
```
