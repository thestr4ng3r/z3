#ifndef __z3_in 
#define __z3_in 
#endif

#ifndef __z3_out 
#define __z3_out 
#endif

#ifndef __out_opt
#define __out_opt __z3_out 
#endif

#ifndef __ecount
#define __ecount(num_args)
#endif 

#ifndef __in_ecount
#define __in_ecount(num_args) __z3_in __ecount(num_args)
#endif 

#ifndef __out_ecount
#define __out_ecount(num_args) __z3_out __ecount(num_args)
#endif 

#ifndef __inout_ecount
#define __inout_ecount(num_args) __z3_in __z3_out __ecount(num_args)
#endif 

#ifndef __inout
#define __inout __z3_in __z3_out 
#endif

#ifndef Z3_bool_opt
#define Z3_bool_opt Z3_bool
#endif

#ifndef Z3_API
# ifdef __GNUC__
#  define Z3_API __attribute__ ((visibility ("default")))
# else
#  define Z3_API
# endif
#endif 

#ifndef DEFINE_TYPE
#define DEFINE_TYPE(T) typedef struct _ ## T *T
#endif

#ifndef DEFINE_VOID
#define DEFINE_VOID(T) typedef void* T
#endif

#ifndef BEGIN_MLAPI_EXCLUDE
#define BEGIN_MLAPI_EXCLUDE
#endif
#ifndef END_MLAPI_EXCLUDE
#define END_MLAPI_EXCLUDE
#endif
