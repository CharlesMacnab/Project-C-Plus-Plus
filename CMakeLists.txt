cmake_minimum_required(VERSION 3.7)
project(gross)

set(CMAKE_CXX_STANDARD 17)

add_executable(gross main.cpp Groupe_Ecoles.cpp Groupe_Ecoles.h Salarie.cpp Salarie.h Directeur.cpp Directeur.h Permanent.cpp Permanent.h Adiministratif.cpp Adiministratif.h Intervenant.cpp Intervenant.h Enseignant_Chercheur.cpp Enseignant_Chercheur.h Enseignant.cpp Enseignant.h Ecole.cpp Ecole.h)