/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *  
 *  - Author: Giulio Salvi            *
 *  - Date: 05.VII.2022               *
 *  - Name: DynamicArray.hpp          *
 *  - Notes: The header file for the  *
 *     class DynamicArray.            *
\*                                    */

#ifndef DynamicArrayDefined
    #define DynamicArrayDefined
    #include "FixedArray.hpp"
    #include "Object.hpp"
    
    using namespace Org::Gius::Types;
    
    namespace Org {
        namespace Gius {
            namespace Arrays {
                class DynamicArray: public FixedArray {
                    public:
                        DynamicArray();
                        void grow();
                        void ungrow();
                        void growAndCopy();
                        void add(Object* value);
                        void remove(Object* value);
                        DynamicArray copy();
                };
        }
    }
}
#endif