/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a504c
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, boost::shared_ptr<Caver::GUIView> >,
   std::_Select1st<std::pair<unsigned long const, boost::shared_ptr<Caver::GUIView> > >,
   std::less<unsigned long>, std::allocator<std::pair<unsigned long const,
   boost::shared_ptr<Caver::GUIView> > > >::_M_erase(std::_Rb_tree_node<std::pair<unsigned long
   const, boost::shared_ptr<Caver::GUIView> > >*) */

void __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
::_M_erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  long *plVar3;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar3 = *(long **)(param_1 + 0x30);
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
                    /* try { // try from 005a5090 to 006a50b7 has its CatchHandler @ 005a5954 */
    if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var2;
  }
  return;
}


