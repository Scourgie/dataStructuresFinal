#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "animals.h"
#include "amphibian.h"
#include "bird.h"
#include "fish.h"
#include "mammal.h"
#include "reptile.h"
#include <list>
#include <fstream>
#include <sstream>
#include <vector>


// lists
std::list <std::unique_ptr<Animal>> petInfo;
std::list <std::unique_ptr<Animal>> sorted;

// queues
std::list <std::unique_ptr<Animal>> quarantine;
std::list <std::unique_ptr<Animal>> queSorted;

// csv things


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// main menu

void MainWindow::on_savePetsPiBtn_clicked() {

    std::fstream csvFile;
    csvFile.open("petInfo.txt", std::ios::out);

    for (auto const &i: petInfo) {

        csvFile << i->getTypeNum() << "," << i->getIndex() << "," << i->getClass() << "," << i->getFamily() << "," << i->getSpecies() << "," << i->getName() << "," << i->getAge() << "," << i->getColor() << "," << i->getEyeColor() << "," << i->getNocturnal() << "," << i->distinct() << std::endl;

    }

}

void MainWindow::on_loadPetsPiBtn_clicked() {

    std::string line;
    std::fstream readFile;
    //readFile.open("E:/College_Homework/Homework/Coding/Assignments_DataStructures/build-dataStructuresFinal-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/petInfo.txt", std::ios::in);
    readFile.open("petInfo.txt", std::ios::in);

    while (std::getline(readFile, line)) {

        std::string type;
        std::string tempString;
        std::stringstream inputString(line);

        getline(inputString, type, ',');

        if (type == "1") {
            int typeNum = stoi(type);
            Amphibian a;
            a.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            a.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            a.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            a.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            a.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            a.setName(name);

            std::string age;
            getline(inputString, age, ',');
            a.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            a.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            a.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            a.setNocturnal(noct);

            std::string tail;
            getline(inputString, tail, ',');
            a.setTail(tail);

            petInfo.emplace_back(std::make_unique<Amphibian>(a));
            sorted.emplace_back(std::make_unique<Amphibian>(a));

        }
        else if (type == "2") {

            int typeNum = stoi(type);
            Bird b;
            b.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            b.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            b.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            b.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            b.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            b.setName(name);

            std::string age;
            getline(inputString, age, ',');
            b.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            b.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            b.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            b.setNocturnal(noct);

            std::string beakColor;
            getline(inputString, beakColor, ',');
            b.setBeakColor(beakColor);

            petInfo.emplace_back(std::make_unique<Bird>(b));
            sorted.emplace_back(std::make_unique<Bird>(b));

        }
        else if (type == "3") {

            int typeNum = stoi(type);
            Fish f;
            f.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            f.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            f.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            f.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            f.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            f.setName(name);

            std::string age;
            getline(inputString, age, ',');
            f.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            f.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            f.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            f.setNocturnal(noct);

            std::string water;
            getline(inputString, water, ',');
            f.setWaterType(water);

            petInfo.emplace_back(std::make_unique<Fish>(f));
            sorted.emplace_back(std::make_unique<Fish>(f));

        }
        else if (type == "4") {

            int typeNum = stoi(type);
            Mammal m;
            m.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            m.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            m.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            m.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            m.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            m.setName(name);

            std::string age;
            getline(inputString, age, ',');
            m.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            m.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            m.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            m.setNocturnal(noct);

            std::string fur;
            getline(inputString, fur, ',');
            m.setFurColor(fur);

            petInfo.emplace_back(std::make_unique<Mammal>(m));
            sorted.emplace_back(std::make_unique<Mammal>(m));

        }
        else {

            int typeNum = stoi(type);
            Reptile r;
            r.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            r.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            r.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            r.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            r.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            r.setName(name);

            std::string age;
            getline(inputString, age, ',');
            r.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            r.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            r.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            r.setNocturnal(noct);

            std::string tongue;
            getline(inputString, tongue, ',');
            r.setTongueType(tongue);

            petInfo.emplace_back(std::make_unique<Reptile>(r));
            sorted.emplace_back(std::make_unique<Reptile>(r));

        }

    }

}

void MainWindow::on_savePetsQueBtn_clicked() {

    std::fstream csvFile;
    csvFile.open("quarantine.txt", std::ios::out);

    for (auto const &i: quarantine) {

        csvFile << i->getTypeNum() << "," << i->getIndex() << "," << i->getClass() << "," << i->getFamily() << "," << i->getSpecies() << "," << i->getName() << "," << i->getAge() << "," << i->getColor() << "," << i->getEyeColor() << "," << i->getNocturnal() << "," << i->distinct() << std::endl;

    }

}

void MainWindow::on_loadPetsQueBtn_clicked() {

    std::string line;
    std::fstream readFile;
    // readFile.open("E:/College_Homework/Homework/Coding/Assignments_DataStructures/build-dataStructuresFinal-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/quarantine.txt", std::ios::in);
    readFile.open("quarantine.txt", std::ios::in);

    while (std::getline(readFile, line)) {

        std::string type;
        std::string tempString;
        std::stringstream inputString(line);

        getline(inputString, type, ',');

        if (type == "1") {
            int typeNum = stoi(type);
            Amphibian a;
            a.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            a.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            a.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            a.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            a.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            a.setName(name);

            std::string age;
            getline(inputString, age, ',');
            a.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            a.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            a.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            a.setNocturnal(noct);

            std::string tail;
            getline(inputString, tail, ',');
            a.setTail(tail);

            quarantine.emplace_back(std::make_unique<Amphibian>(a));
            queSorted.emplace_back(std::make_unique<Amphibian>(a));

        }
        else if (type == "2") {

            int typeNum = stoi(type);
            Bird b;
            b.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            b.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            b.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            b.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            b.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            b.setName(name);

            std::string age;
            getline(inputString, age, ',');
            b.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            b.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            b.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            b.setNocturnal(noct);

            std::string beakColor;
            getline(inputString, beakColor, ',');
            b.setBeakColor(beakColor);

            quarantine.emplace_back(std::make_unique<Bird>(b));
            queSorted.emplace_back(std::make_unique<Bird>(b));

        }
        else if (type == "3") {

            int typeNum = stoi(type);
            Fish f;
            f.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            f.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            f.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            f.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            f.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            f.setName(name);

            std::string age;
            getline(inputString, age, ',');
            f.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            f.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            f.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            f.setNocturnal(noct);

            std::string water;
            getline(inputString, water, ',');
            f.setWaterType(water);

            quarantine.emplace_back(std::make_unique<Fish>(f));
            queSorted.emplace_back(std::make_unique<Fish>(f));

        }
        else if (type == "4") {

            int typeNum = stoi(type);
            Mammal m;
            m.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            m.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            m.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            m.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            m.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            m.setName(name);

            std::string age;
            getline(inputString, age, ',');
            m.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            m.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            m.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            m.setNocturnal(noct);

            std::string fur;
            getline(inputString, fur, ',');
            m.setFurColor(fur);

            quarantine.emplace_back(std::make_unique<Mammal>(m));
            queSorted.emplace_back(std::make_unique<Mammal>(m));

        }
        else {

            int typeNum = stoi(type);
            Reptile r;
            r.setTypeNum(typeNum);

            getline(inputString, tempString, ',');
            int index = stoi(tempString);
            r.setIndex(index);

            std::string aClass;
            getline(inputString, aClass, ',');
            r.setClass(aClass);

            std::string family;
            getline(inputString, family, ',');
            r.setFamily(family);

            std::string species;
            getline(inputString, species, ',');
            r.setSpecies(species);

            std::string name;
            getline(inputString, name, ',');
            r.setName(name);

            std::string age;
            getline(inputString, age, ',');
            r.setAge(age);

            std::string color;
            getline(inputString, color, ',');
            r.setColor(color);

            std::string eyeColor;
            getline(inputString, eyeColor, ',');
            r.setEyeColor(eyeColor);

            std::string noct;
            getline(inputString, noct, ',');
            r.setNocturnal(noct);

            std::string tongue;
            getline(inputString, tongue, ',');
            r.setTongueType(tongue);

            quarantine.emplace_back(std::make_unique<Reptile>(r));
            queSorted.emplace_back(std::make_unique<Reptile>(r));

        }

    }

}

void MainWindow::on_viewPetInfoBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(1);

    ui->petInfoList->clear();

    QStringList pInfo = QStringList();

    for (auto const &i: petInfo) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList->addItems(pInfo);

}

void MainWindow::on_sortPetAescBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(1);

    ui->petInfoList->clear();

    QStringList pInfo = QStringList();
    sorted.sort();

    for (auto const &i: sorted) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList->addItems(pInfo);


}

void MainWindow::on_sortPetDescBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(1);

    ui->petInfoList->clear();

    QStringList pInfo = QStringList();
    sorted.reverse();

    for (auto const &i: sorted) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList->addItems(pInfo);

}

void MainWindow::on_viewQuarantineBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(2);

    ui->quarantineList->clear();

    QStringList que = QStringList();

    for (auto const &i: quarantine) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList->addItems(que);

}

void MainWindow::on_sortQueAescBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(2);

    ui->quarantineList->clear();

    QStringList que = QStringList();
    queSorted.sort();

    for (auto const &i: queSorted) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList->addItems(que);

}

void MainWindow::on_sortQueDescBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(2);

    ui->quarantineList->clear();

    QStringList que = QStringList();
    queSorted.reverse();

    for (auto const &i: queSorted) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList->addItems(que);

}

void MainWindow::on_addPetBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_movePetBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(9);

    ui->quarantineList_2->clear();

    QStringList que = QStringList();

    for (auto const &i: quarantine) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList_2->addItems(que);

}

void MainWindow::on_removePetBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(10);

}

// pet information

void MainWindow::on_piAescBtn_clicked() {

    ui->petInfoList->clear();

    QStringList pInfo = QStringList();
    sorted.sort();

    for (auto const &i: sorted) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList->addItems(pInfo);

}

void MainWindow::on_piDescBtn_clicked() {

    ui->petInfoList->clear();

    QStringList pInfo = QStringList();
    sorted.reverse();

    for (auto const &i: sorted) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList->addItems(pInfo);

}

void MainWindow::on_piReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

}

// quarantine

void MainWindow::on_queAescBtn_clicked() {

    ui->quarantineList->clear();

    QStringList que = QStringList();
    queSorted.sort();

    for (auto const &i: queSorted) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList->addItems(que);

}

void MainWindow::on_queDescBtn_clicked() {

    ui->quarantineList->clear();

    QStringList que = QStringList();
    queSorted.reverse();

    for (auto const &i: queSorted) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList->addItems(que);

}

void MainWindow::on_queReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

}

// add pets menu

void MainWindow::on_addAmphBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_addBirdBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_addFishBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_addMammalBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_addReptileBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(8);

}

void MainWindow::on_addReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

}

// add amphibians

void MainWindow::on_subAmphToPiBtn_clicked() {

    Amphibian am;

    QString amFamilyQ = ui->amFamilyTextEdit->toPlainText();
    QString amSpeciesQ = ui->amSpeciesTextEdit->toPlainText();
    QString amNameQ = ui->amNameTextEdit->toPlainText();
    QString amAgeQ = ui->amAgeTextEdit->toPlainText();
    QString amColorQ = ui->amColorTextEdit->toPlainText();
    QString amEyeColorQ = ui->amEyeColorTextEdit->toPlainText();
    QString amNoctQ = ui->amNoctTextEdit->toPlainText();
    QString amTailQ = ui->amTailTextEdit->toPlainText();

    std::string amFamily = amFamilyQ.toStdString();
    std::string amSpecies = amSpeciesQ.toStdString();
    std::string amName = amNameQ.toStdString();
    std::string amAge = amAgeQ.toStdString();
    std::string amColor = amColorQ.toStdString();
    std::string amEyeColor = amEyeColorQ.toStdString();
    std::string amNoct = amNoctQ.toStdString();
    std::string amTail = amTailQ.toStdString();



    am.setClass("Amphibian");
    am.setIndex(petInfo.size());
    am.setTypeNum(1);
    am.setFamily(amFamily);
    am.setSpecies(amSpecies);
    am.setName(amName);
    am.setAge(amAge);
    am.setColor(amColor);
    am.setEyeColor(amEyeColor);
    am.setNocturnal(amNoct);
    am.setTail(amTail);

    petInfo.emplace_back(std::make_unique<Amphibian>(am));
    sorted.emplace_back(std::make_unique<Amphibian>(am));

}

void MainWindow::on_subAmphToQueBtn_clicked() {

    Amphibian am;

    QString amFamilyQ = ui->amFamilyTextEdit->toPlainText();
    QString amSpeciesQ = ui->amSpeciesTextEdit->toPlainText();
    QString amNameQ = ui->amNameTextEdit->toPlainText();
    QString amAgeQ = ui->amAgeTextEdit->toPlainText();
    QString amColorQ = ui->amColorTextEdit->toPlainText();
    QString amEyeColorQ = ui->amEyeColorTextEdit->toPlainText();
    QString amNoctQ = ui->amNoctTextEdit->toPlainText();
    QString amTailQ = ui->amTailTextEdit->toPlainText();

    std::string amFamily = amFamilyQ.toStdString();
    std::string amSpecies = amSpeciesQ.toStdString();
    std::string amName = amNameQ.toStdString();
    std::string amAge = amAgeQ.toStdString();
    std::string amColor = amColorQ.toStdString();
    std::string amEyeColor = amEyeColorQ.toStdString();
    std::string amNoct = amNoctQ.toStdString();
    std::string amTail = amTailQ.toStdString();



    am.setClass("Amphibian");
    am.setIndex(quarantine.size());
    am.setTypeNum(1);
    am.setFamily(amFamily);
    am.setSpecies(amSpecies);
    am.setName(amName);
    am.setAge(amAge);
    am.setColor(amColor);
    am.setEyeColor(amEyeColor);
    am.setNocturnal(amNoct);
    am.setTail(amTail);

    quarantine.emplace_back(std::make_unique<Amphibian>(am));
    queSorted.emplace_back(std::make_unique<Amphibian>(am));

}

void MainWindow::on_amReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);\

    ui->amFamilyTextEdit->clear();
    ui->amSpeciesTextEdit->clear();
    ui->amNameTextEdit->clear();
    ui->amAgeTextEdit->clear();
    ui->amColorTextEdit->clear();
    ui->amEyeColorTextEdit->clear();
    ui->amNoctTextEdit->clear();
    ui->amTailTextEdit->clear();

}

// add birds

void MainWindow::on_subBirdToPiBtn_clicked() {

    Bird bi;

    QString biFamilyQ = ui->birdFamilyTextEdit->toPlainText();
    QString biSpeciesQ = ui->birdSpeciesTextEdit->toPlainText();
    QString biNameQ = ui->birdNameTextEdit->toPlainText();
    QString biAgeQ = ui->birdAgeTextEdit->toPlainText();
    QString biColorQ = ui->birdColorTextEdit->toPlainText();
    QString biEyeColorQ = ui->birdEyeColorTextEdit->toPlainText();
    QString biNoctQ = ui->birdNoctTextEdit->toPlainText();
    QString biBeakColorQ = ui->birdBeakColorTextEdit->toPlainText();

    std::string biFamily = biFamilyQ.toStdString();
    std::string biSpecies = biSpeciesQ.toStdString();
    std::string biName = biNameQ.toStdString();
    std::string biAge = biAgeQ.toStdString();
    std::string biColor = biColorQ.toStdString();
    std::string biEyeColor = biEyeColorQ.toStdString();
    std::string biNoct = biNoctQ.toStdString();
    std::string biBeakColor = biBeakColorQ.toStdString();



    bi.setClass("Bird");
    bi.setIndex(petInfo.size());
    bi.setTypeNum(2);
    bi.setFamily(biFamily);
    bi.setSpecies(biSpecies);
    bi.setName(biName);
    bi.setAge(biAge);
    bi.setColor(biColor);
    bi.setEyeColor(biEyeColor);
    bi.setNocturnal(biNoct);
    bi.setBeakColor(biBeakColor);

    petInfo.emplace_back(std::make_unique<Bird>(bi));
    sorted.emplace_back(std::make_unique<Bird>(bi));

}

void MainWindow::on_subBirdToQueBtn_clicked() {

    Bird bi;

    QString biFamilyQ = ui->birdFamilyTextEdit->toPlainText();
    QString biSpeciesQ = ui->birdSpeciesTextEdit->toPlainText();
    QString biNameQ = ui->birdNameTextEdit->toPlainText();
    QString biAgeQ = ui->birdAgeTextEdit->toPlainText();
    QString biColorQ = ui->birdColorTextEdit->toPlainText();
    QString biEyeColorQ = ui->birdEyeColorTextEdit->toPlainText();
    QString biNoctQ = ui->birdNoctTextEdit->toPlainText();
    QString biBeakColorQ = ui->birdBeakColorTextEdit->toPlainText();

    std::string biFamily = biFamilyQ.toStdString();
    std::string biSpecies = biSpeciesQ.toStdString();
    std::string biName = biNameQ.toStdString();
    std::string biAge = biAgeQ.toStdString();
    std::string biColor = biColorQ.toStdString();
    std::string biEyeColor = biEyeColorQ.toStdString();
    std::string biNoct = biNoctQ.toStdString();
    std::string biBeakColor = biBeakColorQ.toStdString();



    bi.setClass("Bird");
    bi.setIndex(quarantine.size());
    bi.setTypeNum(2);
    bi.setFamily(biFamily);
    bi.setSpecies(biSpecies);
    bi.setName(biName);
    bi.setAge(biAge);
    bi.setColor(biColor);
    bi.setEyeColor(biEyeColor);
    bi.setNocturnal(biNoct);
    bi.setBeakColor(biBeakColor);

    quarantine.emplace_back(std::make_unique<Bird>(bi));
    queSorted.emplace_back(std::make_unique<Bird>(bi));

}

void MainWindow::on_birdReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

    ui->birdFamilyTextEdit->clear();
    ui->birdSpeciesTextEdit->clear();
    ui->birdNameTextEdit->clear();
    ui->birdAgeTextEdit->clear();
    ui->birdColorTextEdit->clear();
    ui->birdEyeColorTextEdit->clear();
    ui->birdNoctTextEdit->clear();
    ui->birdBeakColorTextEdit->clear();

}

// add fish

void MainWindow::on_subFishToPiBtn_clicked() {

    Fish fi;

    QString fiFamilyQ = ui->fishFamilyTextEdit->toPlainText();
    QString fiSpeciesQ = ui->fishSpeciesTextEdit->toPlainText();
    QString fiNameQ = ui->fishNameTextEdit->toPlainText();
    QString fiAgeQ = ui->fishAgeTextEdit->toPlainText();
    QString fiColorQ = ui->fishColorTextEdit->toPlainText();
    QString fiEyeColorQ = ui->fishEyeColorTextEdit->toPlainText();
    QString fiNoctQ = ui->fishNoctTextEdit->toPlainText();
    QString fiWaterQ = ui->fishWaterTextEdit->toPlainText();

    std::string fiFamily = fiFamilyQ.toStdString();
    std::string fiSpecies = fiSpeciesQ.toStdString();
    std::string fiName = fiNameQ.toStdString();
    std::string fiAge = fiAgeQ.toStdString();
    std::string fiColor = fiColorQ.toStdString();
    std::string fiEyeColor = fiEyeColorQ.toStdString();
    std::string fiNoct = fiNoctQ.toStdString();
    std::string fiWater = fiWaterQ.toStdString();



    fi.setClass("Fish");
    fi.setIndex(petInfo.size());
    fi.setTypeNum(3);
    fi.setFamily(fiFamily);
    fi.setSpecies(fiSpecies);
    fi.setName(fiName);
    fi.setAge(fiAge);
    fi.setColor(fiColor);
    fi.setEyeColor(fiEyeColor);
    fi.setNocturnal(fiNoct);
    fi.setWaterType(fiWater);

    petInfo.emplace_back(std::make_unique<Fish>(fi));
    sorted.emplace_back(std::make_unique<Fish>(fi));

}

void MainWindow::on_subFishToQueBtn_clicked() {

    Fish fi;

    QString fiFamilyQ = ui->fishFamilyTextEdit->toPlainText();
    QString fiSpeciesQ = ui->fishSpeciesTextEdit->toPlainText();
    QString fiNameQ = ui->fishNameTextEdit->toPlainText();
    QString fiAgeQ = ui->fishAgeTextEdit->toPlainText();
    QString fiColorQ = ui->fishColorTextEdit->toPlainText();
    QString fiEyeColorQ = ui->fishEyeColorTextEdit->toPlainText();
    QString fiNoctQ = ui->fishNoctTextEdit->toPlainText();
    QString fiWaterQ = ui->fishWaterTextEdit->toPlainText();

    std::string fiFamily = fiFamilyQ.toStdString();
    std::string fiSpecies = fiSpeciesQ.toStdString();
    std::string fiName = fiNameQ.toStdString();
    std::string fiAge = fiAgeQ.toStdString();
    std::string fiColor = fiColorQ.toStdString();
    std::string fiEyeColor = fiEyeColorQ.toStdString();
    std::string fiNoct = fiNoctQ.toStdString();
    std::string fiWater = fiWaterQ.toStdString();



    fi.setClass("Fish");
    fi.setIndex(quarantine.size());
    fi.setTypeNum(3);
    fi.setFamily(fiFamily);
    fi.setSpecies(fiSpecies);
    fi.setName(fiName);
    fi.setAge(fiAge);
    fi.setColor(fiColor);
    fi.setEyeColor(fiEyeColor);
    fi.setNocturnal(fiNoct);
    fi.setWaterType(fiWater);

    quarantine.emplace_back(std::make_unique<Fish>(fi));
    queSorted.emplace_back(std::make_unique<Fish>(fi));

}

void MainWindow::on_fishReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

    ui->fishFamilyTextEdit->clear();
    ui->fishSpeciesTextEdit->clear();
    ui->fishNameTextEdit->clear();
    ui->fishAgeTextEdit->clear();
    ui->fishColorTextEdit->clear();
    ui->fishEyeColorTextEdit->clear();
    ui->fishNoctTextEdit->clear();
    ui->fishWaterTextEdit->clear();

}

// add mammals

void MainWindow::on_subMamToPiBtn_clicked() {

    Mammal ma;

    QString maFamilyQ = ui->mamFamilyTextEdit->toPlainText();
    QString maSpeciesQ = ui->mamSpeciesTextEdit->toPlainText();
    QString maNameQ = ui->mamNameTextEdit->toPlainText();
    QString maAgeQ = ui->mamAgeTextEdit->toPlainText();
    QString maColorQ = ui->mamColorTextEdit->toPlainText();
    QString maEyeColorQ = ui->mamEyeColorTextEdit->toPlainText();
    QString maNoctQ = ui->mamNoctTextEdit->toPlainText();
    QString maFurQ = ui->mamFurColorTextEdit->toPlainText();

    std::string maFamily = maFamilyQ.toStdString();
    std::string maSpecies = maSpeciesQ.toStdString();
    std::string maName = maNameQ.toStdString();
    std::string maAge = maAgeQ.toStdString();
    std::string maColor = maColorQ.toStdString();
    std::string maEyeColor = maEyeColorQ.toStdString();
    std::string maNoct = maNoctQ.toStdString();
    std::string maFur = maFurQ.toStdString();



    ma.setClass("Mammal");
    ma.setIndex(petInfo.size());
    ma.setTypeNum(4);
    ma.setFamily(maFamily);
    ma.setSpecies(maSpecies);
    ma.setName(maName);
    ma.setAge(maAge);
    ma.setColor(maColor);
    ma.setEyeColor(maEyeColor);
    ma.setNocturnal(maNoct);
    ma.setFurColor(maFur);

    petInfo.emplace_back(std::make_unique<Mammal>(ma));
    sorted.emplace_back(std::make_unique<Mammal>(ma));

}

void MainWindow::on_subMamToQueBtn_clicked() {

    Mammal ma;

    QString maFamilyQ = ui->mamFamilyTextEdit->toPlainText();
    QString maSpeciesQ = ui->mamSpeciesTextEdit->toPlainText();
    QString maNameQ = ui->mamNameTextEdit->toPlainText();
    QString maAgeQ = ui->mamAgeTextEdit->toPlainText();
    QString maColorQ = ui->mamColorTextEdit->toPlainText();
    QString maEyeColorQ = ui->mamEyeColorTextEdit->toPlainText();
    QString maNoctQ = ui->mamNoctTextEdit->toPlainText();
    QString maFurQ = ui->mamFurColorTextEdit->toPlainText();

    std::string maFamily = maFamilyQ.toStdString();
    std::string maSpecies = maSpeciesQ.toStdString();
    std::string maName = maNameQ.toStdString();
    std::string maAge = maAgeQ.toStdString();
    std::string maColor = maColorQ.toStdString();
    std::string maEyeColor = maEyeColorQ.toStdString();
    std::string maNoct = maNoctQ.toStdString();
    std::string maFur = maFurQ.toStdString();



    ma.setClass("Mammal");
    ma.setIndex(quarantine.size());
    ma.setTypeNum(4);
    ma.setFamily(maFamily);
    ma.setSpecies(maSpecies);
    ma.setName(maName);
    ma.setAge(maAge);
    ma.setColor(maColor);
    ma.setEyeColor(maEyeColor);
    ma.setNocturnal(maNoct);
    ma.setFurColor(maFur);

    quarantine.emplace_back(std::make_unique<Mammal>(ma));
    queSorted.emplace_back(std::make_unique<Mammal>(ma));

}

void MainWindow::on_mamReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

    ui->mamFamilyTextEdit->clear();
    ui->mamSpeciesTextEdit->clear();
    ui->mamNameTextEdit->clear();
    ui->mamAgeTextEdit->clear();
    ui->mamColorTextEdit->clear();
    ui->mamEyeColorTextEdit->clear();
    ui->mamNoctTextEdit->clear();
    ui->mamFurColorTextEdit->clear();

}

// add reptiles

void MainWindow::on_subRepToPiBtn_clicked() {

    Reptile re;

    QString reFamilyQ = ui->repFamilyTextEdit->toPlainText();
    QString reSpeciesQ = ui->repSpeciesTextEdit->toPlainText();
    QString reNameQ = ui->repNameTextEdit->toPlainText();
    QString reAgeQ = ui->repAgeTextEdit->toPlainText();
    QString reColorQ = ui->repColorTextEdit->toPlainText();
    QString reEyeColorQ = ui->repEyeColorTextEdit->toPlainText();
    QString reNoctQ = ui->repNoctTextEdit->toPlainText();
    QString reTongueQ = ui->repTongueTextEdit->toPlainText();

    std::string reFamily = reFamilyQ.toStdString();
    std::string reSpecies = reSpeciesQ.toStdString();
    std::string reName = reNameQ.toStdString();
    std::string reAge = reAgeQ.toStdString();
    std::string reColor = reColorQ.toStdString();
    std::string reEyeColor = reEyeColorQ.toStdString();
    std::string reNoct = reNoctQ.toStdString();
    std::string reTongue = reTongueQ.toStdString();



    re.setClass("Reptile");
    re.setIndex(petInfo.size());
    re.setTypeNum(5);
    re.setFamily(reFamily);
    re.setSpecies(reSpecies);
    re.setName(reName);
    re.setAge(reAge);
    re.setColor(reColor);
    re.setEyeColor(reEyeColor);
    re.setNocturnal(reNoct);
    re.setTongueType(reTongue);

    petInfo.emplace_back(std::make_unique<Reptile>(re));
    sorted.emplace_back(std::make_unique<Reptile>(re));

}

void MainWindow::on_subRepToQueBtn_clicked() {

    Reptile re;

    QString reFamilyQ = ui->repFamilyTextEdit->toPlainText();
    QString reSpeciesQ = ui->repSpeciesTextEdit->toPlainText();
    QString reNameQ = ui->repNameTextEdit->toPlainText();
    QString reAgeQ = ui->repAgeTextEdit->toPlainText();
    QString reColorQ = ui->repColorTextEdit->toPlainText();
    QString reEyeColorQ = ui->repEyeColorTextEdit->toPlainText();
    QString reNoctQ = ui->repNoctTextEdit->toPlainText();
    QString reTongueQ = ui->repTongueTextEdit->toPlainText();

    std::string reFamily = reFamilyQ.toStdString();
    std::string reSpecies = reSpeciesQ.toStdString();
    std::string reName = reNameQ.toStdString();
    std::string reAge = reAgeQ.toStdString();
    std::string reColor = reColorQ.toStdString();
    std::string reEyeColor = reEyeColorQ.toStdString();
    std::string reNoct = reNoctQ.toStdString();
    std::string reTongue = reTongueQ.toStdString();



    re.setClass("Reptile");
    re.setIndex(quarantine.size());
    re.setTypeNum(5);
    re.setFamily(reFamily);
    re.setSpecies(reSpecies);
    re.setName(reName);
    re.setAge(reAge);
    re.setColor(reColor);
    re.setEyeColor(reEyeColor);
    re.setNocturnal(reNoct);
    re.setTongueType(reTongue);

    quarantine.emplace_back(std::make_unique<Reptile>(re));
    queSorted.emplace_back(std::make_unique<Reptile>(re));

}

void MainWindow::on_repReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

    ui->repFamilyTextEdit->clear();
    ui->repSpeciesTextEdit->clear();
    ui->repNameTextEdit->clear();
    ui->repAgeTextEdit->clear();
    ui->repColorTextEdit->clear();
    ui->repEyeColorTextEdit->clear();
    ui->repNoctTextEdit->clear();
    ui->repTongueTextEdit->clear();

}

// move pets from quarantine

void MainWindow::on_moveSubmitBtn_clicked() {


    petInfo.emplace_back(std::move(*quarantine.begin()));

    quarantine.pop_front();

    int c = 0;
    for (auto const &i: quarantine) {
        i->setIndex(c);
        c++;
    }

    int o = 0;
    for (auto const &i: petInfo) {
        i->setIndex(o);
        o++;
    }

}

void MainWindow::on_moveReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

}

// remove pets menu

void MainWindow::on_removePiBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(11);

    ui->petInfoList_2->clear();

    QStringList pInfo = QStringList();

    for (auto const &i: petInfo) {
        pInfo << QString::fromStdString(i->Print()) << "\n";
    }

    ui->petInfoList_2->addItems(pInfo);

}

void MainWindow::on_removeQueBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(12);

    ui->quarantineList_3->clear();

    QStringList que = QStringList();

    for (auto const &i: quarantine) {
        que << QString::fromStdString(i->Print()) << "\n";
    }

    ui->quarantineList_3->addItems(que);

}

// remove pet information

void MainWindow::on_submitPiRemoveBtn_clicked() {

    QString inQ = ui->removePiTextEdit->toPlainText();
    std::string in = inQ.toStdString();
    int index = std::stoi(in);



    for (auto const &i: petInfo) {

        if (index == i->getIndex()) {

            if (index == 0) {
                petInfo.erase(petInfo.begin());
            }
            else {
                std::list<std::unique_ptr<Animal>>::iterator range_begin = petInfo.begin();
                std::list<std::unique_ptr<Animal>>::iterator range_end = petInfo.begin();

                std::advance(range_begin, index - 1);
                std::advance(range_end, index);

                petInfo.erase(range_begin, range_end);

            }

        }

    }

    int c = 0;
    for (auto const &i: petInfo) {
        i->setIndex(c);
        c++;
    }

}

void MainWindow::on_removePiReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

    ui->removePiTextEdit->clear();

}

// remove pet from quarantine

void MainWindow::on_submitQueRemoveBtn_clicked() {

    quarantine.erase(quarantine.begin());

    int c = 0;
    for (auto const &i: quarantine) {
        i->setIndex(c);
        c++;
    }

}

void MainWindow::on_removeQueReturnBtn_clicked() {

    ui->stackedWidget->setCurrentIndex(0);

}

