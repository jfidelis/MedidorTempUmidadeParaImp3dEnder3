# Medidor T.U para Impressora 3D Ender

Medidor de Temperatura e Umidade do Ar para Impressora 3d Ender 3 utilizando um kit embarcado MSP430G, LCD 1602 e um Sensor de temperatura e umidade DHT11.

# Introdução

Este projeto tem como objetivo a construção de um instrumento de medida e também como aprendizagem para os seguintes fundamentos:

* Modelagem para impressão 3D
* Usando Fatiador para geração de GCode
* Projetando Hardware Embarcado
* Desenvolvimento de Aplicações para Embarcado

Para isso utilizamos os seguintes softwares:

* SketchUp 2017
* Simplify3D 4.0.1
* Fritzing 0.9.3b
* Visual Studio Code 1.32.3 com a extensão PlatformIO

# Modelagem 3D e Fatiamento

Caixa simples com tampa com abertura para encaixe do LCD e caixa com camanho justo para acomodar o kit MSP430G e uma placa adaptada para as conexões com o LCD e o sensor DHT11.


## Imagens ilustrativas da modelagem e do resultado obtido:

* Modelagem da Tampa 1:

![Modelagem da Tampa 1](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/imgs/img12.jpg)

* Modelagem da Tampa 2:

![Modelagem da Tampa 2](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/imgs/img13.jpg)

* Resultado:

![Modelagem da Tampa 2](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/imgs/img18.jpg)


* Arquivos do SketchUp 2017:
### Caixa:
#### ![Caixa skb](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%202.skb)
#### ![Caixa skp](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%202.skp)
#### ![Caixa stl](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%202.stl)

### Tampa:
#### ![Tampa skb](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%20.skb)
#### ![Tampa skp](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%20.skp)
#### ![Tampa stl](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%20.stl)

##

* GCodes gerados no Simplify3D 4.0.1:
### Caixa:
#### ![Caixa gcode](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%202.gcode)

### Tampa:
#### ![Tampa gcode](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/files/Caixa%20Med%20Temp%20Umid%20.gcode)

# Hardwares usados
- Foi utilizando como MCU um microcontrolador de baixo custo da Texas Instrumento o  de 16bits.
Maiores detalhes consulte o link: http://www.ti.com/product/MSP430G2553

- LCD de duas linhas por 16 colunas LCD1602.
Maiores detalhes cosnulte o link: https://www.waveshare.com/lcd1602-blue.htm

- Sensor de temperatura e umidade DHT11.

## Esquema e coneções eletricas:

![Esquema](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Hardware/Esquema_Medidor_TU_Ender3_bb.jpg)

# Conclusão
- Ainda será preciso construir uma caixa para colocar a impressora 3D, executei alguns testes em ambiente e parece promissor.

![Medidor TU](https://github.com/jfidelis/MedidorTempUmidadeParaImp3dEnder3/raw/master/Modelagem%203D/imgs/img20.jpg)





