# Simple Doorbell

## Overview
This project uses an Arduino UNO, a push button, and a buzzer. The buzzer sounds only while the button is pressed and stops when the button is released.

## Circuit Simulation
- Platform: Tinkercad
- Circuit link: https://www.tinkercad.com/things/gh727a2r8hE/editel?returnTo=%2Fdashboard&sharecode=ilH_HfrbOupVn0r4ciDdjmyO_IZdVeQ6N-Q21vOf27w

## Components
- Arduino UNO 
- Push button
- Buzzer
- Jumper wires

## Files
- `buzzer.ino` — Arduino code
- `screenshots/circuit.png` — Circuit connections
- `screenshots/simulation.png` — Simulation evidence

## Working
The ESP32 reads the button input and activates the buzzer while the button is pressed.
