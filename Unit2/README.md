

## Условия на задачите

## task1.c 

Да се напише програма, която отпечатва на екрана числата до 30, които не се делят на 3
и тези, които не се делят на 5. Да се използва for цикъл.

## task2.c 

Да се напише програма, която пресмята остатък при целочислено деление, като се използва цикъл.

## task3.c

Да се напише програма, която отпечатва с думи ученическите оценки. Напимер 6 е „еxcellent“, 5 е „very good“, 
4 е „good“ и тн. Да се използва „switch/case“. Ако оценката е невалидна да се изведе подходящо съобщение.

## task4.c

Да се напише програма, която пресмята най-големия общ делител на 2 цели числа по алгоритъма на Евклид.

Алгоритъм на Евклид: <br />
	Дадени са a и b  <br />
			while b ≠ 0	 <br />
			t = b 	 <br />
			b = a mod b <br />
			a = t <br />

Резултатът е записан в "a".

## task5.c

Да се напише програма, която пресмята числото Pi с ред на Лайбниц със зададена точност 6 знака след десетичната запетая.
Помощ: ще потябва fabs() от math.h.

1 - 1/3 + 1/5 - 1/7 + 1/9 - ... = pi/4

## task6.c

Да се напише програма, която кодира 8 битово цяло число в Binary-coded Decimal формат. <br />
BCD(72) == 114 == 0x72

## task7.c

Да се напише програма, която преобразува 32-битово цяло число от Little Endian в Big Endian и обратно.

LE(0x01020304) == BE(0x04030201)

## task8.c

Да се напише програма, която преброява установените битове (битовете със стойност 1) в цяло 32-битово число и да изпечата на екрана резултата.