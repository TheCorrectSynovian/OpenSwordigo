/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054cb50
 * Function: std::_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::Model const*, std::pair<Caver::Model const* const,
   boost::shared_ptr<Caver::PODLoader> >, std::_Select1st<std::pair<Caver::Model const* const,
   boost::shared_ptr<Caver::PODLoader> > >, std::less<Caver::Model const*>,
   std::allocator<std::pair<Caver::Model const* const, boost::shared_ptr<Caver::PODLoader> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,
   boost::shared_ptr<Caver::PODLoader> > >*) */

void __thiscall
std::
_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
::_M_erase(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  long *plVar3;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar3 = *(long **)(param_1 + 0x30);
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0054c0dc with catch @ 0054cb88 */
    if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 0054c0d4 with catch @ 0054cbc0 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* catch() { ... } // from try @ 0054c730 with catch @ 0054cbc8 */
    operator_delete(param_1);
                    /* catch() { ... } // from try @ 0054c3d8 with catch @ 0054cbd0 */
    param_1 = p_Var2;
  }
  return;
}


