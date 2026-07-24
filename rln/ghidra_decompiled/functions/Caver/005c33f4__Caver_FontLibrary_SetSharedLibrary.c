/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c33f4
 * Function: Caver::FontLibrary::SetSharedLibrary
 * Signature: undefined __cdecl SetSharedLibrary(FontLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*) */

void Caver::FontLibrary::SetSharedLibrary(FontLibrary *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
  *p_Var1;
  
  p_Var1 = DAT_007e9fa8;
                    /* catch() { ... } // from try @ 005c2fec with catch @ 005c33f8 */
  if (DAT_007e9fa8 !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
       *)0x0) {
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
    ::_M_erase(DAT_007e9fa8,*(_Rb_tree_node **)(DAT_007e9fa8 + 0x10));
    operator_delete(p_Var1);
  }
  DAT_007e9fa8 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
                  *)param_1;
  return;
}


