#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // main menu
    void on_savePetsPiBtn_clicked();
    void on_loadPetsPiBtn_clicked();
    void on_savePetsQueBtn_clicked();
    void on_loadPetsQueBtn_clicked();
    void on_viewPetInfoBtn_clicked();
    void on_sortPetAescBtn_clicked();
    void on_sortPetDescBtn_clicked();
    void on_viewQuarantineBtn_clicked();
    void on_sortQueAescBtn_clicked();
    void on_sortQueDescBtn_clicked();
    void on_addPetBtn_clicked();
    void on_movePetBtn_clicked();
    void on_removePetBtn_clicked();

    // pet information
    void on_piAescBtn_clicked();
    void on_piDescBtn_clicked();
    void on_piReturnBtn_clicked();

    // quarantine
    void on_queAescBtn_clicked();
    void on_queDescBtn_clicked();
    void on_queReturnBtn_clicked();

    // add pets menu
    void on_addAmphBtn_clicked();
    void on_addBirdBtn_clicked();
    void on_addFishBtn_clicked();
    void on_addMammalBtn_clicked();
    void on_addReptileBtn_clicked();
    void on_addReturnBtn_clicked();

    // add amphibians
    void on_subAmphToPiBtn_clicked();
    void on_subAmphToQueBtn_clicked();
    void on_amReturnBtn_clicked();

    // add birds
    void on_subBirdToPiBtn_clicked();
    void on_subBirdToQueBtn_clicked();
    void on_birdReturnBtn_clicked();

    // add fish
    void on_subFishToPiBtn_clicked();
    void on_subFishToQueBtn_clicked();
    void on_fishReturnBtn_clicked();

    // add mammals
    void on_subMamToPiBtn_clicked();
    void on_subMamToQueBtn_clicked();
    void on_mamReturnBtn_clicked();

    // add reptiles
    void on_subRepToPiBtn_clicked();
    void on_subRepToQueBtn_clicked();
    void on_repReturnBtn_clicked();

    // move pets from quarantine
    void on_moveSubmitBtn_clicked();
    void on_moveReturnBtn_clicked();

    // remove pets menu
    void on_removePiBtn_clicked();
    void on_removeQueBtn_clicked();

    // remove pet information
    void on_submitPiRemoveBtn_clicked();
    void on_removePiReturnBtn_clicked();

    // remove pet from quarantine
    void on_submitQueRemoveBtn_clicked();
    void on_removeQueReturnBtn_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
