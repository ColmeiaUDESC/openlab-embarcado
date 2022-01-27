# Sistema de conexão ao servidor usando um ESP-12F
Este repositório contém a parte a ser carregada nos módulos NodeMCU para contato com o sistema de verificação.

Para utiliza-lo cabe apenas ao usuário configurar sua placa devidamente e carregar o arquivo principal nomeado ```openlab-nodemcu.ino``` e alterar os valores no arquivo ```Credentials.h``` para os valores de uma rede válida que o microcontrolador possa acessar.

## Especificações de Hardware
Foram utilizados para a aplicação até o momento:
* NodeMCU - ESP-12F

### Configurando a IDE do Arduino para trabalhar com o ESP-12F
Instale a [biblioteca](https://arduino-esp8266.readthedocs.io/en/3.0.2/installing.html) referente aos microcontroladores wifi. Após instalada selecione "NodeMCU 1.0 (ESP-12E Module)" na aba de Ferramentas->Placa 
