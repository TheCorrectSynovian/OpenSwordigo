/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00533d1c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::GUILabel> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::GUILabel> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::GUILabel> > > >::_M_create_node(std::pair<std::string const,
   boost::shared_ptr<Caver::GUILabel> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00533d54 with catch @ 00533d24 */
  pvVar1 = operator_new(0x38);
                    /* try { // try from 00533d40 to 00633d53 has its CatchHandler @ 00533d78 */
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)((long)pvVar1 + 0x30) = lVar2;
                    /* try { // try from 00533d54 to 00633d7b has its CatchHandler @ 00533d24 */
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return pvVar1;
}


