/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum CarType {AIXAM, JEEP, FIAT_MULTIPLA};
enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarImplementation* Car;

Car get_car(enum CarType);
enum CarType get_type(Car car);
enum Color get_color(Car car);
int get_fill_level(Car car);
double get_acceleration_rate(Car car);
int get_speed(Car car);
void set_acceleration_rate(Car car,int rate);
void accelerate(Car car);
void init();

#endif
