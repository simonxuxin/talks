struct object {
    char name[32];
    int size;
};

int main()
{
    struct object *o = (struct object *)malloc(sizeof(struct object));
}
