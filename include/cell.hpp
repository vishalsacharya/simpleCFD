#ifndef CELL_H
#define CELL_H

namespace simpleCFD {

    
    /*! grid Class.
    *
    */
    class cell
    {

        private:

        double dx_;
        double A_;

        double cellCentre_;
    

        public:

            cell();

            ~cell(){}

        inline const double& A() const {return A_;}

        inline const double& dx() const {return dx_;}

        inline const double& cellCentre() const {return cellCentre_;}

        inline void setCellCentre(const double& cellCentre) {cellCentre_ = cellCentre;}

    };

} // End namespace simpleCFD.

#endif // CELL_H
