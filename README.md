# 🔥 Controle de LEDs e Monitoramento de Temperatura com TMP36

Este projeto utiliza um sensor **TMP36** para medir a temperatura ambiente e controlar **LEDs de diferentes cores** (branco, verde e vermelho), além de um **buzzer** para sinalização sonora.  
A comunicação é feita via **Serial Monitor**, onde o usuário pode enviar comandos para acender os LEDs correspondentes.

---

## ⚙️ Componentes Utilizados

| Componente        | Descrição                                 | Pino Arduino |
|-------------------|-------------------------------------------|--------------|
| **TMP36**         | Sensor de temperatura analógico            | A0           |
| **LED Branco**    | Indica modo branco                        | 2            |
| **LED Verde**     | Indica modo verde                         | 3            |
| **LED Vermelho**  | Indica modo vermelho                      | 4            |
| **Buzzer**        | Emite som em condições específicas         | 5            |

---

## 🧠 Funcionamento

1. O Arduino lê a temperatura ambiente através do **sensor TMP36**.  
2. O usuário pode enviar comandos pelo **Serial Monitor**:  
   - `B` → Acende o **LED Branco**  
   - `V` → Acende o **LED Verde**  
   - `R` → Acende o **LED Vermelho**  
3. Após o comando, o Arduino imprime no Serial Monitor a **temperatura atual em Celsius**.  