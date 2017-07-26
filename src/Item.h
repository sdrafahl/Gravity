#ifndef ITEM
# define ITEM

class Item {
    public:
        Item(unsigned int x, unsigned int y);
        ~Item() {}
        void handle();
        void jump(float height);
        unsigned int x;
        unsigned int y;
        float velocity;
        float gravity;
};

#endif
