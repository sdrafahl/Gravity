#ifndef ITEM
# define ITEM

class Item {
    public:
        Item(float x, float y);
        ~Item() {}
        void handle();
        void jump(float height);
        void moveLeft();
        void moveRight();
        float x;
        float y;
        float velocity;
        float gravity;
};

#endif
