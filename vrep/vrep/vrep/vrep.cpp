#define PI 3.14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
#include "extApi.h"
}

//declara os valores dos handlers

simxChar handlerName1[150] = "/base_link_respondable[0]/joint_1/";
simxChar handlerName2[150] = "/base_link_respondable[0]/joint_1/NiryoOneLink1/joint_2";
simxChar handlerName3[150] = "/base_link_respondable[0]/joint_1/NiryoOneLink1/joint_2/NiryoOneLink2/joint_3";
simxChar handlerName4[150] = "/base_link_respondable[0]/joint_1/NiryoOneLink1/joint_2/NiryoOneLink2/joint_3/NiryoOneLink3/joint_4";
simxChar handlerName5[150] = "/base_link_respondable[0]/joint_1/NiryoOneLink1/joint_2/NiryoOneLink2/joint_3/NiryoOneLink3/joint_4/NiryoOneLink4/joint_5";
simxChar handlerName6[150] = "/base_link_respondable[0]/joint_1/NiryoOneLink1/joint_2/NiryoOneLink2/joint_3/NiryoOneLink3/joint_4/NiryoOneLink4/joint_5/NiryoOneLink5/joint_6";

void InitialPos(int clientID, int handler) {

    //retorna o braco para a posicao inicial

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    
     
}

void Number1(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.197, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.80, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.099, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName4, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.000952, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.835, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number2(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.265864, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.848963, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.149533, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.868963, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number3(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.322, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.167, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.87, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.2, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.9, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number4(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.202, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.0106, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.8, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.02, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.825, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number5(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.270, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.84, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.04, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.83, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);


}

void Number6(int clientID, int handler) {
    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.336, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.075, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.880, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName4, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.00467, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName5, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.078, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
}

void Number7(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.205, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.02, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.8, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat) -0.06, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    
    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.82, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number8(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.279, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.00647, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.82, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.00647, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.84, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number9(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.34, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.034, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.86, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0.0341, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.87, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

}

void Number0(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.293, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.062, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.82, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.061, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.855, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
}

void Enter(int clientID, int handler) {

    simxGetObjectHandle(clientID, handlerName1, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.404, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.047, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.7, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.046, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.88, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName3, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.0461, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);

    simxGetObjectHandle(clientID, handlerName2, &handler, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)-0.9, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
}

int main(int argc, char* argv[])
{

    //variavei para handler das juntas
    int handler = 0;

    //conecta com o coppelia
    int clientID = simxStart((simxChar*) "127.0.0.1", 19999, true, true, 2000, 5);

    extApi_sleepMs(500);

    //verifica conexao com simulador
    if (clientID == -1) {
        printf("Erro conectando ao Coppelia!\n");
        return 0;
    } else {
        printf("Conectado ao Coppelia!\n");
    }

    FILE *file = fopen("Entrada.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o programa!");
        return 0;
    }

    char entrada[100];
    int num1, num2, i=0;

    printf("Iniciando loop!\n");

    while (fgets(entrada, 100, file) != NULL) {

        printf("Loop %d\n", i);

        sscanf(entrada, "%d %d", &num1, &num2);

        printf("%d %d\n", num1, num2);

        switch (num1) {
            case 0:
                Number0(clientID, handler);
                break;
            case 1:
                Number1(clientID, handler);
                break;
            case 2:
                Number2(clientID, handler);
                break;
            case 3:
                Number3(clientID, handler);
                break;
            case 4:
                Number4(clientID, handler);
                break;
            case 5:
                Number5(clientID, handler);
                break;
            case 6:
                Number6(clientID, handler);
                break;
            case 7:
                Number7(clientID, handler);
                break;
            case 8:
                Number8(clientID, handler);
                break;
            case 9:
                Number9(clientID, handler);
                break;
        }

        InitialPos(clientID, handler);

        switch (num2) {
        case 0:
            Number0(clientID, handler);
            break;
        case 1:
            Number1(clientID, handler);
            break;
        case 2:
            Number2(clientID, handler);
            break;
        case 3:
            Number3(clientID, handler);
            break;
        case 4:
            Number4(clientID, handler);
            break;
        case 5:
            Number5(clientID, handler);
            break;
        case 6:
            Number6(clientID, handler);
            break;
        case 7:
            Number7(clientID, handler);
            break;
        case 8:
            Number8(clientID, handler);
            break;
        case 9:
            Number9(clientID, handler);
            break;
        }

        InitialPos(clientID, handler);

        Enter(clientID, handler);

        InitialPos(clientID, handler);

        i++;
    }

    fclose(file);

    printf("Fim do loop!\n");

    simxFinish(clientID);

    return(0);
}