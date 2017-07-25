#ifndef ITEM
# define ITEM

class Item {
    public:
        Item(unsigned int x, unsigned int y);
        ~Item() {}
        void handle();
        unsigned int x;
        unsigned int y;
    private:
        float gravity;
        float velocity;
};

#endif
