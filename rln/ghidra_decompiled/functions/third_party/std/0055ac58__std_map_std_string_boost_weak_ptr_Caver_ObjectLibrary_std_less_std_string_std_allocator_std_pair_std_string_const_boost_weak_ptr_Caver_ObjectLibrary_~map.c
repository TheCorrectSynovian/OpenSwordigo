/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055ac58
 * Function: std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>::~map
 * Signature: undefined __thiscall ~map(map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::weak_ptr<Caver::ObjectLibrary>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> > > >::~map()
    */

void __thiscall
std::
map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
::~map(map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
       *this)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  return;
}


