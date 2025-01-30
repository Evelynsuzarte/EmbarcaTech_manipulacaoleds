#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/timer.h"
#include "matriz_leds.h"
#include <stdio.h>
#include <stdlib.h>

const uint LED = 11;

void pisca_LED();
void acao(int numero, PIO pio, uint sm);
void numero_0(PIO pio, uint sm);
void numero_1(PIO pio, uint sm);
void numero_2(PIO pio, uint sm);
void numero_3(PIO pio, uint sm);
void numero_4(PIO pio, uint sm);
void numero_5(PIO pio, uint sm);
void numero_6(PIO pio, uint sm);
void numero_7(PIO pio, uint sm);
void numero_8(PIO pio, uint sm);
void numero_9(PIO pio, uint sm);

int main()
{
    PIO pio = pio0;
    uint sm = configurar_matriz(pio);
    int contador = 0;

    stdio_init_all();
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);

    while (true) {
        acao(contador, PIO pio, uint sm);


    }
}

void acao(int numero, PIO pio, uint sm){
    switch (numero){
        case 1:
            numero_1(pio, sm);
            break;
        case 2:
            numero_2(pio, sm);
            break;
        case 3:
            numero_3(pio, sm);
            break;
        case 4:
            numero_4(pio, sm);
            break;
        case 5:
            numero_5(pio, sm);
            break;
        case 6:
            numero_6(pio, sm);
            break;
        case 7:
            numero_7(pio, sm);
            break;
        case 8:
            numero_8(pio, sm);
            break;
        case 9:
            numero_9(pio, sm);
            break;
        case 0:
            numero_0(pio, sm);
            break;
        default:
            /* code for unknown key */
            break;
    }
}

void numero_0(PIO pio, uint sm){
    Matriz_leds_config zero = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(zero, pio, sm);
}

void numero_1(PIO pio, uint sm){
    Matriz_leds_config um = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(um, pio, sm);
}

void numero_2(PIO pio, uint sm){
    Matriz_leds_config dois = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(dois, pio, sm);
}

void numero_3(PIO pio, uint sm){
    Matriz_leds_config tres = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(tres, pio, sm);
}

void numero_4(PIO pio, uint sm){
    Matriz_leds_config quatro = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(quatro, pio, sm);
}

void numero_5(PIO pio, uint sm){
    Matriz_leds_config cinco = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(cinco, pio, sm);
}

void numero_6(PIO pio, uint sm){
    Matriz_leds_config seis = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(seis, pio, sm);
}

void numero_7(PIO pio, uint sm){
    Matriz_leds_config sete = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(sete, pio, sm);
}

void numero_8(PIO pio, uint sm){
    Matriz_leds_config oito = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(oito, pio, sm);
}

void numero_9(PIO pio, uint sm){
    Matriz_leds_config nove = {
        //  Coluna 0          Coluna 1          Coluna 2          Coluna 3          Coluna 4
        // R    G    B       R    G    B       R    G    B       R    G    B       R    G    B
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 0
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 1
        {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 2
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}, // Linha 3
        {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {0.0, 0.0, 0.0}}  // Linha 4
    };
    
   imprimir_desenho(nove, pio, sm);
}

