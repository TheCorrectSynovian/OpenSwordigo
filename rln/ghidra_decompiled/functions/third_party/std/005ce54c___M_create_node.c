/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ce54c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> >,
   std::_Select1st<std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::Texture> > > >::_M_create_node(std::pair<std::string const,
   boost::intrusive_ptr<Caver::Texture> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
                    /* try { // try from 005ce554 to 006ce617 has its CatchHandler @ 005ce554
                       catch() { ... } // from try @ 005ce554 with catch @ 005ce554
                       catch() { ... } // from try @ 005ce678 with catch @ 005ce554
                       catch() { ... } // from try @ 005ce724 with catch @ 005ce554
                       catch() { ... } // from try @ 005ce800 with catch @ 005ce554
                       catch() { ... } // from try @ 005ce940 with catch @ 005ce554
                       catch() { ... } // from try @ 005ceac4 with catch @ 005ce554
                       catch() { ... } // from try @ 005cec6c with catch @ 005ce554
                       catch() { ... } // from try @ 005cf18c with catch @ 005ce554 */
  pvVar1 = operator_new(0x30);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  lVar2 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  return pvVar1;
}


