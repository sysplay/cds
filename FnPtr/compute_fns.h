#ifndef COMPUTE_FNS_H

#define COMPUTE_FNS_H

typedef double Real;
typedef Real Complex[2];

typedef void (*AddFnPtr)(void *, void *, void *);
typedef void (*DivFnPtr)(void *, int, void *);
typedef void (*IoFnPtr)(void *);
typedef void *(*IndexFnPtr)(void *, int);

void add_real(void *a, void *b, void *res);
void div_real(void *a, int b, void *res);
void read_real(void *a);
void print_real(void *a);
void *index_real(void *a, int i);

void add_complex(void *a, void *b, void *res);
void div_complex(void *a, int b, void *res);
void read_complex(void *a);
void print_complex(void *a);
void *index_complex(void *a, int i);

#endif
