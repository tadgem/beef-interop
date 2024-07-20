#include <iostream>


extern "C" {

    typedef struct
    {
        void* (*    type_create)();
        void(*      type_free)(void*);
        const char* type_name;
        size_t      type_size;
        bool        has_update;
        bool        has_init;
        bool        has_cleanup;

        // foreign callbacks that pass in the created instance in C
        void (*     component_init)(void*)       = nullptr;
        void (*     component_update)(void*)     = nullptr;
        void (*     component_cleanup)(void*)    = nullptr;
    }   foreign_component_type_data;

    typedef struct
    {
        void*       type_instance;
        const char* type_name;
        size_t      type_size;
    }   foreign_component_type_instance;

    
    extern void AddComponentData(foreign_component_type_data* component_data);

    extern void PrintHello();
}