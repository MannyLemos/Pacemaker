# Pacemaker Design

### SFWRENG 3K04 Lab 4 Team 2
Group Members
- [Aaron Li](https://github.com/aaronhsli) (lia79)
- [Amos Yu](https://github.com/amosyu2000) (yua25)
- [Andy Pham](https://github.com/aonday) (phama8)
- [Fady Zekry Hanna](https://github.com/fzhanna) (zekryhf)
- [Manuel Lemos](https://github.com/MannyLemos) (lemosm1)

## About
The pacemaker design project is a term assignment which comprises the majority of the SFWRENG 3K04 Software Development course. This repository will host the Pacemaker Design  which is programmed using simulink and built on the FRDM-K64F ARM  development board.  The pacemaker's Device Controller-Monitor is built using Express, MongoDB, and Node and is hosted on Google App Engine along with MongoDB Atlas.
[More information on the Device  Control Monitor.](https://github.com/amosyu2000/pacemaker-api)

## Toolboxes Used
- MATLAB®
- Simulink®
- Embedded Coder®
- Fixed-Point DesignerTM MATLAB CoderTM
- Simulink® CheckTM
- Simulink CoderTM
- Simulink CoverageTM
- Simulink Design VerifierTM Simulink Desktop Real-TimeTM Simulink TestTM
- Stateflow®
- Simulink® Coder Support Package for NXP FRDM-K64F -> Segger’s J-Link OpenSDA V2 firmware
- DSP Toolbox

# The Model

![alt_text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%209.59.32%20AM.png)

## Monitored Layer
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%209.59.05%20AM.png)
### Initialization Stateflow 
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.00.17%20AM.png)
### Send Parameters to DCM Function
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.00.58%20AM.png)

## Stateflow Layer
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%209.59.43%20AM.png)
### Rate Adaptability Stateflow
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.01.56%20AM.png)
### Pacemaker Modes Stateflow
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.16.51%20AM.png)
#### DOOR Mode Implementation
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.17.35%20AM.png)

## Output Layer
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.18.02%20AM.png)
### Digital Write Blocks
![alt text](https://github.com/MannyLemos/Pacemaker/blob/main/screenshots/Screen%20Shot%202020-12-04%20at%2010.18.16%20AM.png)

