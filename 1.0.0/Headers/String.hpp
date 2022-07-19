#ifndef StringDefined
    #define StringDefined
    #include "../Libs/Headers/DynamicArray.hpp"

    using namespace Org::Gius;

    namespace Org {
        namespace Gius {
            namespace Strings {
                class String {
                    private:
                        Arrays::DynamicArray* _a; // _array
                    
                    public:
                        String(Arrays::DynamicArray* charsBuffer);
                        String(char* charsBuffer, int length);
                        String();

                        int length();
                        char at(int index);
                        Arrays::DynamicArray* getBuffer();
                        
                        char& operator[](int index);
                };
            }
        }
    }
#endif