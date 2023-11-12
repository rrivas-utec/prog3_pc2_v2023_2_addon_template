# PC2: Práctica Calificada - complemento  
**course:** Programación III  
**unit:** 5  
**cmake project:** prog3_pc2_v2023_2_addon
## Instructions

### Problema #1 - Producto mayor - Programación concurrente (4 pts)

Escribir la función template `find_max_product` que reciba un contenedor secuencial genérico que procese de forma concurrente utilizando la máxima cantidad de hilos de hardware.

La función debe retornar el máximo valor positivo obtenido del producto de 2 números en el contenedor, si hubiese menos de dos valores en el contenedor, el resultado será el único valor o **CERO** si no tuviera datos.

Si el contenedor tiene menos de 10,000 ítems o si es de los tipos: `std::list` o `std::forward_list`, el resultado se obtendrá utilizando el hilo principal (no generar nuevos hilos).  

**Caso de uso #1**
```cpp
    vector<int> v {-1000, -1, 2, 3, 4, 150, -900, 100};
    auto result = find_max_product(v);
    cout << result << endl; // 900000
```

**Caso de uso #2**
```cpp
    deque<double> d {1500, -1, 2, 3, 4, -100, 10, -900, 100};
    auto result = find_max_product(d);
    cout << fixed << setprecision(2) << result << endl; // 150000
```

