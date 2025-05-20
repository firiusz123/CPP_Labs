#ifndef UI_H
#define UI_H

#include "observer.h"


    class UI : public Observer
    {
      protected:
        static int observer_number;
        public:
        void update() override;
        virtual ~UI();

    };



#endif // MAGE_H
