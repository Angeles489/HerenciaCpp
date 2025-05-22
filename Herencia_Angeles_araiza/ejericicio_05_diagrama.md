
```mermaid
 classDiagram
  
    class Forma{
    +Figura
}
    Class Cuadrado{
      +Cuatro(): void 
}
    Class Circulo{
      +Una():void
}
    Forma <| -- Cuadrado
    Forma <| -- Circulo 
```
