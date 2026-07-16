# STM32F411CEU6

## Introdução

O *STM32F411CEU6* é um microcontrolador de *32 bits* baseado no núcleo *Arm Cortex-M4* com *FPU (Floating Point Unit), operando em frequências de até **100 MHz* (125 DMIPS). Ele oferece alto desempenho com baixo consumo de energia, destacando-se pelo *Batch Acquisition Mode (BAM)*, que permite adquirir e processar dados de sensores com maior eficiência energética.
## Principais Características

- Núcleo *Arm Cortex-M4* com *FPU* operando em até *100 MHz*.
- Até *512 KB de memória Flash* e *128 KB de SRAM*.
- Até *11 temporizadores, incluindo temporizadores de **16 bits* e *32 bits, além de watchdogs e timer **SysTick*.
- *ART Accelerator*, permitindo execução da memória Flash sem estados de espera (0-wait state).
- Suporte ao *Batch Acquisition Mode (BAM)* para reduzir o consumo de energia durante aquisição de dados.
- *2 controladores DMA* com *8 streams* cada, suporte a *FIFO* e transferências em rajada (burst).
- *ADC de 12 bits* com taxa de até *2,4 MSPS* e até *16 canais*.
- Interfaces de comunicação:
  - Até *3 I²C*;
  - *3 USARTs* (até *12,5 Mbit/s*);
  - *5 SPI/I²S*;
  - *1 SDIO* para cartões SD/MMC;
  - *USB 2.0 OTG Full-Speed* com PHY integrado.

## Características Elétricas

| Parâmetro | Valor |
|-----------|--------|
| Tensão de alimentação | *1,7 V a 3,6 V* |
| Frequência máxima | *100 MHz* |
| Consumo típico em operação | *100 µA/MHz* |
| Consumo em modo Stop | *42 µA* (25 °C) |
| Consumo em Deep Power Down | *9 µA* (25 °C) |
| Consumo em Standby | *1,8 µA* (25 °C) |
| Alimentação do RTC (VBAT) | *1,65 V a 3,6 V* |
| Oscilador interno | *RC de 16 MHz* |
| Oscilador externo | *Cristal de 4 a 26 MHz* |
| RTC | *Oscilador de 32 kHz* |
| Faixa de temperatura | *-40 °C a 85 °C / 105 °C / 125 °C* (dependendo da versão) |

## Resumo

O *STM32F411CEU6* é um microcontrolador de alto desempenho e baixo consumo, ideal para aplicações embarcadas que exigem grande capacidade de processamento, interfaces de comunicação variadas e eficiência energética. Seu núcleo *Cortex-M4 com FPU, aliado ao **DMA, **ADC de alta velocidade, **USB OTG* e diversos periféricos, torna-o uma excelente escolha para projetos de automação, instrumentação, IoT e sistemas de aquisição de dados.
