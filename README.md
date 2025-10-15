# 🔥 Controle de LEDs e Monitoramento de Temperatura com TMP36

Este projeto integra **Arduino** e **Python** para monitorar a temperatura ambiente usando o sensor **TMP36** e controlar LEDs de diferentes cores com base na leitura de temperatura.  
O Arduino coleta os dados e o Python faz o controle lógico de acordo com os valores recebidos via porta serial.

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
2. O **Python** recebe a leitura via comunicação serial.  
3. De acordo com o valor da temperatura, o Python envia comandos para o Arduino:  
   - `B` → Acende o **LED Branco** (temperatura abaixo do esperado)  
   - `V` → Acende o **LED Verde** (temperatura na faixa ideal)  
   - `R` → Acende o **LED Vermelho** (temperatura acima do esperado)  
4. O Arduino exibe a temperatura atual no **Serial Monitor**.  