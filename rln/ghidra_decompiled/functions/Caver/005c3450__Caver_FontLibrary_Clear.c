/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c3450
 * Function: Caver::FontLibrary::Clear
 * Signature: undefined __thiscall Clear(FontLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::Clear() */

void __thiscall Caver::FontLibrary::Clear(FontLibrary *this)

{
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  *(FontLibrary **)(this + 0x18) = this + 8;
  *(FontLibrary **)(this + 0x20) = this + 8;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


