#include "qtdraw.h"
#include "ui_qtdraw.h"

qtdraw::qtdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qtdraw)
{
    ui->setupUi(this);
}

qtdraw::~qtdraw()
{
    delete ui;
}

// This function listens for keys being pressed, listens for C-o (open) and C-s (save)
// Input: QKeyEvent* e
// Output: Sends opened file to textEdit, saves converted HTML to file
void qtmarkup::keyPressEvent(QKeyEvent* e)
{
    // This is for any error messages to be displayed
    QMessageBox* box = new QMessageBox();

    // Check if CTRL was pressed
    if (e->key() == Qt::Key_x)
    {

    }
//        // Check if O was pressed as well
//        if(e->key() == Qt::Key_O)
//        {
//            // Show a file dialog box
//            QString filename = QFileDialog::getOpenFileName(this, tr("Open Simple Markdown File"), "", "All files (*.*);;Simple Mardown (*.sm)");
//            QFile file(filename);

//            QString line;

//            // Open the file as read only and as text
//            if (file.open(QIODevice::ReadOnly | QIODevice::Text))
//            {
//                // Clear out the markupEdit box since we are loading a file
//                ui->markupEdit->clear();

//                // Write every line to the markupEdit box
//                QTextStream stream(&file);
//                while (!stream.atEnd())
//                {
//                    line = stream.readLine();
//                    ui->markupEdit->setText(ui->markupEdit->toPlainText()+line+"\n");
//                }
//            }
//            // There was an issue so show an error
//            else
//            {
//                box->setText(QString("Error: No file selected to open, try again"));
//                box->show();
//            }
//            file.close();
//        }
//        // Check if S was pressed as well
//        else if(e->key() == Qt::Key_S)
//        {
//            // Show a file dialog box
//            QString filenamehtml = QFileDialog::getSaveFileName(this, tr("Save HTML File"), "", "HTML File (*.html)");
//            QFile filehtml(filenamehtml);

//            // Open the file only as writeable and as text
//            if(filehtml.open(QIODevice::WriteOnly | QIODevice::Text))
//            {
//                // Write the contents of htmlEdit to the file
//                QTextStream stream(&filehtml);
//                stream << htmlstr;
//                filehtml.flush();
//            }
//            // There was an issue so show an error
//            else
//            {
//                box->setText(QString("Error: No valid save file selected, try again"));
//                box->show();
//            }
//            filehtml.close();
//        }
}
