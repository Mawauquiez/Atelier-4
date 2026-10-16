void afficher_ligne_histov(int valeurs[], int taille, float y)
{
    printf("| ");
    for (int k = 0; k < taille; k++) {
        if (valeurs[k] >= y) {
            printf("xxx ");
        } else {
            printf("    ");
        }
    }
    printf("\n");
}