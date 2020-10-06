# made_hpc_hw2
<strong>Пункт 1. Реализовать на языке C/C++ классические операции перемножения квадратных матриц и умножения матрицы на вектор.</strong>
<br>
main.c - основная универсальная программа для перемножения матриц (указывается размерность матриц и количество итераций их перемножения для последующего усреднения результатов).
<br>
rand_matrix.c - модуль для заполнения матрицы случайными числами.
<br>
mult_matrix.c - модуль для перемножения матриц и замера скорости выполнения.
<br><br>
<strong>Пункт 2. Разделить программу на несколько модулей и провести сборку через статическую линковку.</strong>
<br>
Разделенную на модули программу собирал через статическую линковку:
<br>
gcc -c main.c<br>
gcc -c rand_matrix.c<br>
gcc -c mult_matrix.c<br>
ar rc minilib.a rand_matrix.o<br>
ar rc minilib2.a mult_matrix.o<br>
gcc main.c minilib.a minilib2.a -o EXAMPLE.EXE<br>
<br><br>
<strong>Пункт 3. Подготовьте две сборки с флагами -g и  -O3 и измерьте времена выполнения операций с N = 512, 1024..., 4096.</strong>
<br>
Аналогично пункту 2, только добавлял флаги -O3 и -g. Получил, соответственно, еще два исполняемых файла: EXAMPLE_O3.EXE и EXAMPLE_g.EXE.
<br><br>
<strong>Пункт 4. Измерить времена выполнения программ в виртуальной машине, реальной ОС и (опционально) в докере</strong>
<br>
В каждом случае перемножение выполнял по 20 раз и усреднял время выполнения.
<br><br>
<strong>Результаты:</strong>
<table>
<tr>
<th rowspan=2>N</th> <th colspan=3>Реальная ОС (Windows 10)</th> <th colspan=3>Виртуальная ОС (Debian)</th>
</tr>
<tr>
  <th>без флагов</th> <th>с флагом -g</th> <th>с флагом -O3</th>
  <th>без флагов</th> <th>с флагом -g</th> <th>с флагом -O3</th>
</tr>
<tr>
  <td>512</td>
  <td>0,7498</td>	<td>0,72555</td>	<td>0,13903</td>	<td>0,68316</td>	<td>0,68421</td>	<td>0,17586</td>

</tr>
 
<tr>
  <td>1024</td>
  <td>8,01203	<td>7,7125</td>	<td>1,72191</td>	<td>7,90679</td>	<td>7,58642</td>	<td>1,86524</td>
</tr>
</table>

<br><br>
<strong>Пункт 5. Реализовать базовые скрипты bash, перечисленные на лекции.</strong>
<br>
Базовые скрипты bash, перечисленные на лекции, реализованы в файлах:
<br>
script1 - Organize FOR loop printing the even numbers only from 100 to 1000.
<br>
script2 - Initialize the array of 10-20 elements and organize FOR loop printing the elements of array.
<br>
script3 - Compute 100 + 0.5 in bash.
<br>
script4 - Check if file "Linux" exists in present directory. If yes, print message "course". If no, print message "very easy" and create the "Linux" file with text "course is easy".
<br>
