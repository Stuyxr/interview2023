#include <cstdio>
class parent {
   public:
    int* p;
    parent() { printf("constructing parent\n"); }
    parent(const parent& other) { printf("copying parent\n"); }
    virtual void print() {
        printf("parent\n");
    }
    ~parent() { printf("deleting parent\n"); }
};
class child : public parent {
   public:
    child() { printf("constructing child\n"); }
    child(const child& other) { printf("copying child\n"); }
    ~child() { printf("deleting child\n"); }
    virtual void print() {
        printf("child\n");
    }
};
int main() {
    // child* p = new child();
    // delete p;
    parent* p = new parent();
    p->print();
    delete p;
    /*
    constructing parent
    constructing child
    constructing parent
    copying child
    */
}