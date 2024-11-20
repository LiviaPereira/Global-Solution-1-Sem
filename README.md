# Global Solution Edge Computing & Computer Systems 1º Semestre

**Integrantes do Projeto:**
- LÍVIA PEREIRA DIAS CORREA RM 559414
- ALEXANDRE COLVET DELFINO RM 560059
- ENZO LUCIANO BARROS DE OLIVEIRA RM 559557

## Introdução
Este projeto, denominado **Bike Generator Monitor (FitEnergy)**, faz parte da Global Solution de Edge Computing & Computer Systems do 1º semestre. O objetivo é desenvolver um sistema que meça e exiba a quantidade de energia gerada por uma bicicleta conectada a um dínamo, incentivando a conscientização sobre energia renovável enquanto as pessoas se exercitam. O sistema visa criar um monitor para verificar a corrente gerada pela bicicleta, utilizando um potenciômetro para simular o comportamento do dínamo, e um LED indicativo que acende ao atingir uma corrente específica. O display LCD mostra os valores em tempo real.

Link do projeto no Wokwi: [Clique aqui para acessar](https://wokwi.com/projects/414487950438686721)

## Descrição do Projeto
O projeto **Bike Generator Monitor (FitEnergy)** consiste em um Arduino Uno, um display LCD 1602 com comunicação I2C, um potenciômetro que simula a corrente gerada pelo dínamo, e um LED que indica quando uma meta de corrente é atingida.

### Componentes Utilizados
- **Arduino Uno**: Microcontrolador utilizado para ler os valores de corrente e controlar a exibição no LCD e a iluminação do LED.
- **LCD 1602 (I2C)**: Display utilizado para mostrar os valores de corrente gerados em tempo real.
- **Potenciômetro**: Simula a corrente gerada pelo dínamo da bicicleta.
- **LED Vermelho**: Acende ao atingir um valor de corrente determinado (3A).

### Funcionalidades
- Medir a corrente simulada através do potenciômetro.
- Exibir o valor da corrente no display LCD em tempo real.
- Acender o LED quando o valor da corrente for igual ou superior a 3A, indicando que a meta foi atingida.
- Monitorar e enviar dados via serial para propósitos de depuração.

## Instruções de Uso
1. **Montagem do Circuito**: Monte o circuito conforme indicado no [link do Wokwi](https://wokwi.com/projects/414487950438686721). Certifique-se de conectar corretamente todos os componentes ao Arduino.
2. **Carregamento do Código**: Utilize a IDE Arduino para carregar o código `sketch.ino` no Arduino Uno.
3. **Simulação no Wokwi**: Você também pode simular o circuito diretamente no Wokwi, acessando o link e pressionando o botão "Start Simulation".
4. **Interpretação dos Resultados**:
   - O display LCD mostrará a corrente gerada em tempo real.
   - O LED acenderá quando o valor da corrente for maior ou igual a 3A.
   - Os valores também serão exibidos no monitor serial da IDE Arduino para fins de depuração.

## Requisitos do Projeto
- **IDE Arduino**: Necessário para compilar e carregar o código no Arduino Uno.
- **Bibliotecas**:
  - `LiquidCrystal_I2C`: Biblioteca utilizada para controlar o display LCD I2C.
- **Hardware Necessário**:
  - Arduino Uno
  - LCD 1602 (com I2C)
  - Potenciômetro
  - LED Vermelho
  - Breadboard e fios para conexão

## Dependências
- A biblioteca `LiquidCrystal_I2C` deve ser instalada na IDE Arduino. Para isso, vá em **Sketch > Incluir Biblioteca > Gerenciar Bibliotecas...** e procure por `LiquidCrystal_I2C`. Instale a versão recomendada.

## Código Fonte
O código fonte do projeto está no arquivo `sketch.ino`. Ele é responsável por:
- Inicializar o display LCD e configurar o LED.
- Ler o valor analógico do potenciômetro.
- Converter o valor para uma corrente estimada e exibi-la no LCD.
- Acender o LED ao atingir o valor da corrente.

## Considerações Finais
Este projeto visa não apenas demonstrar conceitos de eletrônica e programação com microcontroladores, mas também conscientizar sobre a importância da geração de energia renovável. A ideia de monitorar a corrente gerada pela bicicleta incentiva a atividade física enquanto promove a conscientização ambiental.

Qualquer dúvida sobre o funcionamento ou implementação do projeto pode ser esclarecida durante a apresentação ou pelos contatos dos integrantes.

---

Link do Projeto Wokwi: [Clique aqui](https://wokwi.com/projects/414487950438686721)

**Integrantes:** LÍVIA PEREIRA DIAS CORREA RM 559414, 
ALEXANDRE COLVET DELFINO RM 560059, 
ENZO LUCIANO BARROS DE OLIVEIRA RM 559557.

