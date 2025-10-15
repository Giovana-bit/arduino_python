import serial

arduino = serial.Serial('COM6', 9600)  

while True:
    try:
        leitura = arduino.readline().decode.strip()
        if leitura:
            temperatura = float(leitura)
            if temperatura < 100:
                arduino.write(b'B') # Acende o LED Branco
                print(f"Temperatura: {temperatura}, está abaixo de esperado")
            elif temperatura >= 100 and temperatura < 200:
                arduino.write(b'V') # Acende o LED Verde
                print(f"Temperatura: {temperatura}, está na faixa ideal")
            else:
                arduino.write(b'R') # Acende o LED Vermelho
                print(f"Temperatura: {temperatura}, está acima do esperado")
    except KeyboardInterrupt:
        print("Programa encerrado pelo usuário.")
        break
    except Exception as e:
        print("Ocorreu um erro:", e)