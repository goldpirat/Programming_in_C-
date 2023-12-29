/*
CH-230-A
a11 p3.h
Flori Kusari
fkusari@jacobs-university.de
*/

// Define the Creature class
class Creature {
    public:
        Creature();  
        void run() const;
        ~Creature();
 
    protected:
        int distance;
};

// Define the Wizard class, which inherits from Creature
class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
        ~Wizard();
 
    private:
        int distFactor;
};

// Define the Dragon class, which inherits from Creature
class Dragon : public Creature {
    public:
        Dragon();
        void fly() const;
        ~Dragon();
 
    private:
        int HeightFactor;
};

// Define the Elf class, which inherits from Creature
class Elf : public Creature {
    public:
        Elf();
        void dig() const;
        ~Elf();
 
    private:
        int DepthFactor;
};