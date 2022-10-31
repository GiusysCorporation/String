/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 30.X.2022                 *
 *  - Name: String.hpp                *
 *  - Notes: The header file for the  *
 *     class String.                  *
\*                                    */

#ifndef StringDefined
    #define StringDefined
    #include "../Libs/Headers/DynamicArray.hpp"

    using namespace Org::Gius;

    namespace Org {
        namespace Gius {
            namespace Strings {
                class String: public Object {
                    private:
                        Arrays::DynamicArray* _a; // _array
                    
                    public:
                        String(Arrays::DynamicArray* charsBuffer);
                        String(char* charsBuffer, int length);
                        String();

                        bool isObject();
                        bool isNotPrimitive();

                        int length();
                        char at(int index);
                        Arrays::DynamicArray* getBuffer();
                        
                        char& operator[](int index);
                };
            }
        }
    }
#endif