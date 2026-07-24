/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056a060
 * Function: std::_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<long, std::pair<long const, boost::shared_ptr<Caver::ComponentCollection> >,
   std::_Select1st<std::pair<long const, boost::shared_ptr<Caver::ComponentCollection> > >,
   std::less<long>, std::allocator<std::pair<long const,
   boost::shared_ptr<Caver::ComponentCollection> > > >::_M_erase(std::_Rb_tree_node<std::pair<long
   const, boost::shared_ptr<Caver::ComponentCollection> > >*) */

void __thiscall
std::
_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
::_M_erase(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  long *plVar3;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
                    /* catch() { ... } // from try @ 00569de4 with catch @ 0056a08c */
    plVar3 = *(long **)(param_1 + 0x30);
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
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


