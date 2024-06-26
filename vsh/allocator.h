#ifndef __ALLOCATOR_H__
#define __ALLOCATOR_H__


// allocator_045E124A  // _ZdaPv operator delete[](void *)
// allocator_0871FFB0  // mspace_malloc_usable_size
// allocator_2356EF16  // _ZnajRKSt9nothrow_t operator new[](uint, std::nothrow_t const&)
// void* allocator_58B43627(size_t size);  // sce_paf_private_heapmemory
// #define sce_paf_private_heapmemory allocator_58B43627

extern void *allocator_6137D196(size_t alignment, size_t size);  // memalign()
#define memalign allocator_6137D196

// void* allocator_679E8CAF(void* ptr, size_t size);  // sce_paf_private_realloc
// #define sce_paf_private_realloc allocator_679E8CAF

// void allocator_6997B837(void* ptr);  // sce_paf_private_free
// #define sce_paf_private_free allocator_6997B837

extern void *allocator_759E0635(size_t size);  // malloc()
#define malloc allocator_759E0635

extern void allocator_77A602DD(void *ptr);  // free()
#define free allocator_77A602DD

// void* allocator_799473AE(size_t alignment, size_t size);  // sce_paf_private_memalign
// #define sce_paf_private_memalign allocator_799473AE

// allocator_79EADF05  // malloc_usable_size
// allocator_83B2CC6F  // _Znwj operator new(uint)
// allocator_96BC2578  // _Znajj operator new[](uint, uint)
// void allocator_97C02090();  // sce_paf_private_dump_heap_info
// #define sce_paf_private_dump_heap_info allocator_97C02090

extern void *allocator_A72A7595(size_t nitems, size_t size);  // calloc()
#define calloc allocator_A72A7595

// void* allocator_A830FDD8(size_t size);  // sce_paf_private_calloc
// #define sce_paf_private_calloc allocator_A830FDD8

// allocator_AD382A99  // _ZdlPvRKSt9nothrow_t operator delete(void *, std::nothrow_t const&)
// allocator_BB712718  // _ZnwjRKSt9nothrow_t operator new(uint, std::nothrow_t  const&)
// void allocator_D2B978F5();  // sce_paf_private_report_memblk
// #define sce_paf_private_report_memblk allocator_D2B978F5

// allocator_D84B3689  // _ZdlPv operator delete(void *)
// void* allocator_E27B3C01(size_t size);  // sce_paf_private_malloc
// #define sce_paf_private_malloc allocator_E27B3C01

// allocator_ED3DA02B  // _Znwjj operator new(uint, uint)
// allocator_F58E83A5  // _Znaj  operator new[](uint)

extern void *allocator_F7A14A22(void *ptr, size_t size);  // realloc()
#define realloc allocator_F7A14A22


#endif // __ALLOCATOR_H__
