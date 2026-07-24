/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c50a8
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::Font> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::Font> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const, boost::weak_ptr<Caver::Font>
   > > >::_M_create_node(std::pair<std::string const, boost::weak_ptr<Caver::Font> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x38);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
                    /* try { // try from 005c50d4 to 006c50e3 has its CatchHandler @ 005c52c8 */
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)((long)pvVar1 + 0x30) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
                    /* try { // try from 005c50f8 to 006c5103 has its CatchHandler @ 005c52c4 */
  return pvVar1;
}


