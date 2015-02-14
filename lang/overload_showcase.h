/* Overloadable operators:
 * +    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
 * <<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
 * ~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
 * delete    new[]     delete[]
 */
namespace showcase { 
    class C { 
        public:
            int ivalue_;
            void SetIvalue(const int& ivalue) {
                ivalue_ = ivalue;
            }
   };

}

