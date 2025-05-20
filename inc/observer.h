#ifndef OBSERVER_H
#define OBSERVER_H




    class Observer
    {
        protected:
        static int observer_number;
        public:
            virtual void update();
        virtual ~Observer();

    };



#endif // MAGE_H
