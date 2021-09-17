/* nap.h */
#undef NAP_EFIARM
#if defined ( __arm__ ) || defined ( __aarch64__ )
#define NAP_NULL
#endif
