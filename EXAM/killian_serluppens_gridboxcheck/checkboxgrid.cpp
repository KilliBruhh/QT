#include "checkboxgrid.h"


CheckBoxGrid::CheckBoxGrid(int colums, int rows, QWidget *parent)
    : QWidget{parent}
{
    QGridLayout * lay = new QGridLayout(this);

    for(int i=0; i<rows; i++) {
        for(int j=0; j<colums; j++) {
            QCheckBox * checkBox = new QCheckBox(this);
            lay->addWidget(checkBox,i,j);
            m_checBoxes.append(checkBox);
            totalBoxes++;
            connect(checkBox, SIGNAL(stateChanged(int)),this, SLOT(checBoxChange(/* checkBox*/)));
        }
    }

}

void CheckBoxGrid::checBoxChange( /* QCheckBox cb*/) {
    qDebug() << "Changed";
    /*
    if(cb.checkState()) {
        countChecked++;
    } else {
        countChecked--;
    }
*/


}
