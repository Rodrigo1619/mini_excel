void mostrarGrid(){
    
    const int size = 5; // Tamaño de la cuadrícula
    
    // Bucle externo para las filas
    for (int i = 0; i < size; i++) {
        
        // Bucle interno para las columnas
        for (int j = 0; j < size; j++) {
            cout << "+---"; // Imprimir línea horizontal
            
            // Imprimir "+" adicional después de la última columna
            if (j == size - 1) {
                cout << "+";
            }
        }
        
        cout << endl; // Saltar a la siguiente línea
        
        // Bucle interno para las columnas
        for (int j = 0; j < size; j++) {
            cout << "|   "; // Imprimir celda vacía
            
            // Imprimir "|" adicional después de la última columna
            if (j == size - 1) {
                cout << "|";
            }
        }
        
        cout << endl; // Saltar a la siguiente línea
    }
    
    // Imprimir la línea horizontal inferior
    for (int j = 0; j < size; j++) {
        cout << "+---"; // Imprimir línea horizontal
        
        // Imprimir "+" adicional después de la última columna
        if (j == size - 1) {
            cout << "+";
        }
    }
    
    cout << endl; // Saltar a la siguiente línea
    
}
