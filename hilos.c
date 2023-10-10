#include <pthread.h>
#include <stdio.h>

int saldo = 0;

void * holaHilo() {
    printf("Hola desde un hilo\n");
}

void * incrementaSaldo() {
    printf("El saldo actual es: %d\n", saldo);
    saldo += 100;
}

int main() {
    pthread_t t;
    for (int i = 0; i < 100; i++) {
        pthread_create(&t, NULL, incrementaSaldo, NULL);
    }
    pthread_exit(NULL);
}