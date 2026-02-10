# Mindcontroller
# INTRODUCTION

The research project involves biomedical and computer systems knowledge to use the brain wave signals to control DC motors. This project can help people with disabilities who have limited physical movement. The mind-control project sensors are put on the head of a person to help them easily control various devices. Therefore, this project combines biomedical and computer knowledge. It makes it convenient for a person with a physical disability to use the EEG brain signals to control a machine,  a robot arm, or a wheelchair, etc.

 <img width="400" height="475" alt="GHBanner" src="https://github.com/Cornelia-Chen/Mindcontroller/blob/main/Block%20Diagram.png?raw=true" />
 <img width="700" height="675" alt="GHBanner" src="https://github.com/Cornelia-Chen/Mindcontroller/blob/main/DC%20motor.png?raw=true" />


# HARDWARE & SOFTWARE
First of all, we connect Arduino to the mindflex device to test and check the data. We get eleven data values on one line, the first value measures Attention, second to last values are Meditation, Delta, Theta, Low Alpha, High Alpha, Low Beta, High Beta, Low Gamma, High Gamma. Next, we check brain-graph of the mindflex device in order to test good connection of the wires by using Processing program running on a PC. As a last step,  we connect bluetooth module to mindflex device. There are two reasons why we want to use Bluetooth connection with mindflex. One is that it looks better, other is that Bluetooth serves as an excellent protocol for wirelessly transmitting relatively small amounts of data over a short range (<100m), and it allows wireless connection to Arduino to modify the code. 

# REFERENCES
https://www.medicine.mcgill.ca/physio/vlab/biomed_signals/eeg_n.htm                      (detailed knowledge about EEG)
https://github.com/kitschpatrol/BrainGrapher  (github code library)

https://www.electrical4u.com/eeg-measurement/ (EEG recording setup)
