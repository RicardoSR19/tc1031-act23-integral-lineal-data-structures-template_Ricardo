![Tec de Monterrey](images/logotecmty.png)
# Act 2.3 - Actividad Integral estructura de datos lineales (Evidencia Competencia)

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
En este repositorio encontrarás los archivos de entrada, así como las salidas esperadas que podrás usar para probar tu implementación. También encontrarás un archivo "main.cpp". Ahí deberás implementar tu solución. En el archivo deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">De manera individual</span>, desarrolla la solución del siguiente problema:

El historiador Flavio Josefo relata cómo, en el conflicto romano-judío del año 67 d.C., los romanos tomaron el pueblo de Jotapata que él comandaba. Al escapar, Josefo se encontró atrapado en una cueva con 40 compañeros. Los romanos descubrieron su paradero y lo invitaron a rendirse, pero sus compañeros se negaron a permitírselo. Por lo tanto, sugirió que se mataran entre sí, uno por uno, el orden se decidiría por sorteo. La tradición dice que el medio para efectuar el sorteo era ponerse de pie en un círculo y, comenzando en algún punto, contar alrededor, matando a cada tercera persona por turno. El único sobreviviente de este proceso fue Josefo, quien luego se rindió a los romanos. Lo que plantea la pregunta: ¿Josefo había practicado previamente en silencio con 41 piedras en un rincón oscuro, o había calculado matemáticamente que debería adoptar la posición 31 para sobrevivir?

Después de leer un relato de este espantoso evento, te has obsesionado con el temor de encontrarte en una situación similar en algún momento en el futuro. Para prepararte para tal eventualidad, decides escribir un programa que determinará la posición en la que debe comenzar el proceso de conteo para asegurar que tú sea el único sobreviviente.

En particular, tu programa debería poder manejar la siguiente variación de los procesos descritos por Josefo. *n* > 0 personas se disponen inicialmente en círculo, mirando hacia dentro, y numeradas del 1 al n en el sentido de las agujas del reloj. Tu número asignado es 1. Comenzando con la persona número *i*, el conteo comienza en el sentido de las agujas del reloj, hasta que llegamos a la persona número *k* (*k* > 0), que muere rápidamente. Luego procedemos a contar otras *k* personas en el sentido de las agujas del reloj, comenzando con la persona inmediatamente a la izquierda de la víctima. La persona número *k* así seleccionada tiene el trabajo de enterrar a la víctima, y luego regresar a la posición en el círculo que la víctima había ocupado previamente. Luego, el conteo continúa desde la persona a su izquierda inmediata, con la *k*-ésima persona siendo asesinada, y así sucesivamente, hasta que solo quede una persona.

Por ejemplo, cuando *n* = 5, *k* = 2 e *i* = 1, el orden de ejecución es 2, 5, 3 y 1. El sobreviviente es 4.

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
Tu programa debe leer líneas de entrada que contengan valores para *n* y *k* (en ese orden). Tu programa puede asumir un máximo de 100 personas participando en este evento.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
 Despliega el número de la persona con la que debe comenzar el conteo para asegurarse de que seas el único sobreviviente. Por ejemplo, en el caso anterior, la posición de inicio segura es 3.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada**</span>
```
1 5
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida**</span>
```
1
```

Para probar tu implementación, compila tu programa con el comando:
```
g++ -std=c++11 main.cpp -o app
```
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados output1.txt, output1.txt, output1.txt y output1.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
Si el segundo comando no tenga ninguna salida, sabrás que los resultados que obtuviste son los esperados. 

Por último, realiza una investigación y reflexión en forma individual de la importancia y eficiencia del uso de los diferentes algoritmos de ordenamiento y búsqueda en una situación problema de esta naturaleza, generando un documento llamado **"ReflexAct2.3.pdf"**

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Esta actividad forma parte tanto de tu calificación final del curso, así como del portafolio de evidencias de las competencias a desarrollar del curso, por lo que se te pide que en forma individual:
* Realices una entrega de  los archivos correspondientes de los algoritmos de ordenamiento y búsqueda, en la sección correspondiente dentro de esta plataforma, así como el documento de reflexión individual (**ReflexAct2.3.pdf**).
* Generes una carpeta en forma personal llamada **TC1031(Portafolio_Final)** que servirá como preparación para la entrega del portafolio de competencias que se realizará al final del curso, esta carpeta debe contener 5 carpetas:
    * Act1.3
    * **Act2.3** - coloca aquí tus archivos que solucionaron la <span style="text-decoration: underline;">actividad 2.3</span> así como el documento de reflexión individual (**ReflexAct2.3.pdf**).
    * Act3.4
    * Act4.3
    * Act5.2
