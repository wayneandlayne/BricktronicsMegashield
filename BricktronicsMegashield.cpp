/*
   BricktronicsMegashield v1.2 - A software library for Bricktronics Megashield.
   This library is only needed if you are using a Bricktronics Megashield.
   If you are using a break-out board or a motor driver board,
   you can just directly use the motor and sensor libraries.

   Copyright (C) 2015 Adam Wolf, Matthew Beckler, John Baichtal

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

   Wayne and Layne invests time and resources providing this open-source
   code, please support W&L and open-source hardware by purchasing products
   from https://store.wayneandlayne.com/ - Thanks!

   Wayne and Layne, LLC and our products are not connected to or endorsed by the LEGO Group.
   LEGO, Mindstorms, and NXT are trademarks of the LEGO Group.
*/

#include "BricktronicsMegashield.h"

// Motor settings
const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_1 = {
    55, // enPin
    54, // dirPin
    11, // pwmPin
    3,  // encoderPin1
    12, // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_2 = {
    56, // enPin
    57, // dirPin
    9,  // pwmPin
    2,  // encoderPin1
    10, // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};
const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_3 = {
    59, // enPin
    58, // dirPin
    8,  // pwmPin
    18, // encoderPin1
    7,  // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_4 = {
    61, // enPin
    60, // dirPin
    6,  // pwmPin
    19, // encoderPin1
    14, // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_5 = {
    63, // enPin
    62, // dirPin
    5,  // pwmPin
    20, // encoderPin1
    15, // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsMotorSettings BricktronicsMegashield::MOTOR_6 = {
    65, // enPin
    64, // dirPin
    4,  // pwmPin
    21, // encoderPin1
    16, // encoderPin2
    false, // reversedMotorDrive
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};


// Sensor settings
const BricktronicsSensorSettings BricktronicsMegashield::SENSOR_1 = {
    66, // ANA
    25, // DA
    29, // DB
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsSensorSettings BricktronicsMegashield::SENSOR_2 = {
    67, // ANA
    37, // DA
    39, // DB
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsSensorSettings BricktronicsMegashield::SENSOR_3 = {
    68, // ANA
    47, // DA
    49, // DB
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

const BricktronicsSensorSettings BricktronicsMegashield::SENSOR_4 = {
    69, // ANA
    51, // DA
    53, // DB
    &::pinMode,
    &::digitalWrite,
    &::digitalRead,
};

