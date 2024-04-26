#include <stdio.h>

int main() {
    double monto_mensual, total_meses, tasa_interes, impuesto_renta, nuevo_monto, suma_de_interes, final_suma, valor_nuevo_mes, pre_suma;
    int mes; 

    printf("Ingrese el monto mensual: \n");
    scanf("%lf", &monto_mensual);

    printf("Ingrese el total de meses: \n");
    scanf("%lf", &total_meses);

    printf("Ingrese el porcentaje de la tasa de interés: \n");
    scanf("%lf", &tasa_interes);

    printf("Ingrese el porcentaje de la tasa de impuesto a la renta: \n");
    scanf("%lf", &impuesto_renta);

    printf("\n| Mes | Monto Mensual | Interés | Nuevo Monto |\n");
    printf("|-----|---------------|---------|-------------|\n");

    for (mes = 1; mes <= total_meses; mes++) {
        nuevo_monto = tasa_interes / 12;
        suma_de_interes = nuevo_monto / 100;
        pre_suma = suma_de_interes * monto_mensual;
        valor_nuevo_mes = monto_mensual + pre_suma;

        printf("| %3d | %13.2lf | %7.2lf | %11.2lf |\n", mes, monto_mensual, pre_suma, valor_nuevo_mes);

        monto_mensual = valor_nuevo_mes;
    }

    return 0;
}