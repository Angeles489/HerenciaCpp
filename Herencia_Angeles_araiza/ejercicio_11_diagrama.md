@startuml
class Dispositivo {
    +string marca
}

class Tablet
class Telefono
class Smartphone

Tablet  -[hidden]-> Dispositivo
Telefono -[hidden]-> Dispositivo

Tablet  ..|> Dispositivo : virtual
Telefono ..|> Dispositivo : virtual
Smartphone --|> Tablet
Smartphone --|> Telefono

@enduml
