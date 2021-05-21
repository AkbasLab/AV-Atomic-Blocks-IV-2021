# TalTech-AV-with-Foretify
A collaboration between Embry-Riddle Aeronautical University and Tal-Tech University to integrate Foretify&trade; by Foretellix into the autonomous vehicle testing pipeline.

<a href="https://github.com/AkbasLab/TalTech-AV-with-Foretify/">Github repo link.</a><br>
<a href="https://taltech.ee/en">Tal-tech website link.</a>

<hr>

**Project Advisor:**<br>
Dr. Mustafa Ilhan Akbas `akbasm@erau.edu`<sup>1</sup><br>
<!--Dr. Ravio Sell `ravio.sell@taltech.ee`<sup>2</sup> -->


**Phd. Students:**<br>
Quentin Goss `gossq@my.erau.edu`<sup>1</sup><br>
Mohsen Malayjerdi `momala@taltech.ee`<sup>2</sup>

<sup>1</sup>Department of Electrical Engineering and Computer Science, Embry-Riddle Aeronautical University <br>
<sup>2</sup>Department of mechanical and Industrial Engineering, Tallin University of Technology

<hr>

Our goal is to run low-fidelity simulations using Foretify, then select the 5% most interesting scenarios to forward to the higher fidelity autoware simulations.
This repo contains MSDL and R code for MSDL experiments related to our goal. Notable directories in this repo are `overtake`, where a DUT overtakes a slower/stopped NPC, and `R` which contains R scripts for processing overtake scenario traces collected during Foretify simulations.
