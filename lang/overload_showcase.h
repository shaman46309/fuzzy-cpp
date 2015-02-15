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

C operator+ (const C& c1, const C& c2) {
    C temp;
    temp.SetIvalue(c1.ivalue_ + c2.ivalue_);
    return temp;
}

C operator- (const C& c1, const C& c2) {
    C temp;
    temp.SetIvalue(c1.ivalue_ - c2.ivalue_);
    return temp;
}

bool operator< (const C& c1, const C& c2) {
    return c1.ivalue_ < c2.ivalue_;
}
bool operator> (const C& c1, const C& c2) {
    return c1.ivalue_ > c2.ivalue_;
}

} // namespace showcase

