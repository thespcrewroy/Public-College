mkdir dawgs
cd dawgs
touch DarrisSmith.txt SevaughnClark.txt SamShurtleff.txt KyronnJones.txt NazirStackhouse.txt BrockBowers.txt JavonBullard.txt BransonTobinson.txt TykeeSmith.txt ChrisPeal.txt LukeBennett.txt
touch WillMuschamp.txt DellMcGee.txt ToddHartley.txt
mkdir coaches; mkdir players
mv DarrisSmith.txt players; mv SevaughnClark.txt players; mv SamShurtleff.txt players
mv KyronnJones.txt players; mv NazirStackhouse.txt players; mv BrockBowers.txt players
mv JavonBullard.txt players; mv BransonTobinson.txt players; mv TykeeSmith.txt players
mv  ChrisPeal.txt players; mv LukeBennett.txt players
mv WillMuschamp.txt coaches; mv DellMcGee.txt coaches; mv ToddHartley.txt coaches
mv coaches coachesAndStaff
ls -pal
cd players
pwd
ls
cd ..
cd coachesAndStaff
ls
cd ..
mkdir rivals
cd rivals
touch tech.txt; touch olemiss.txt
cd ..
mkdir medals
cd medals
touch 2022.txt 2021.txt 1980.txt 1942.txt
cd ..
mkdir allFiles
cd coachesAndStaff
cp * ../allFiles 
cd ../medals 
cp * ../allFiles 
cd ../players 
cp * ../allFiles 
cd ../rivals 
cp * ../allFiles 
cd ..
rm -r rivals
cd ..
