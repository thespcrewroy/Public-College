#!/bin/bash
mkdir dawgs 
cd dawgs 
touch TroyBowles.txt RoderickRobinsonII.txt NylandGreen.txt MarcusRosemy-Jacksaint.txt KendallMilton.txt SmaelMondonJr.txt KamariLassiter.txt AndrewPaul.txt OscarDelp.txt AJHarris.txt RaraThomas.txt KirbySmart.txt MikeBobo.txt WillMuschamp.txt 
mkdir players coaches 
mv KirbySmart.txt MikeBobo.txt WillMuschamp.txt coaches
mv *.txt players
mv coaches coachesAndStaff
ls -pal
cd players
pwd
ls 
cd ../coachesAndStaff
ls 
cd ..
mkdir rivals
cd rivals
touch Alabama.txt Florida.txt GeorgiaTech.txt
cd ..
mkdir medals
cd medals
touch 2022.txt 2021.txt 1980.txt 1942.txt
cd ..
mkdir allFiles
cp players/*.txt allFiles; cp coachesAndStaff/*.txt allFiles; cp medals/*.txt allFiles; cp rivals/*.txt allFiles
rm -r rivals
cd ..



