/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053361c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::GUILabel> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::GUILabel> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::GUILabel> > > >::_M_erase(std::_Rb_tree_node<std::pair<std::string
   const, boost::shared_ptr<Caver::GUILabel> > >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>> anStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00533644 to 00633647 has its CatchHandler @ 00533660 */
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* try { // try from 00533648 to 0063364f has its CatchHandler @ 00533674 */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00533644 with catch @ 00533660 */
    __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>::
    destroy(anStack_40,(pair *)(param_1 + 0x20));
                    /* try { // try from 00533664 to 0063366b has its CatchHandler @ 00533670 */
    operator_delete(param_1);
                    /* try { // try from 0053366c to 00633687 has its CatchHandler @ 00533600 */
                    /* catch() { ... } // from try @ 00533664 with catch @ 00533670 */
    param_1 = p_Var2;
  }
                    /* catch() { ... } // from try @ 00533648 with catch @ 00533674 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


