/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003449e4
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::function<Caver::Component* ()> >,
   std::_Select1st<std::pair<std::string const, boost::function<Caver::Component* ()> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::function<Caver::Component* ()> > > >::_M_erase(std::_Rb_tree_node<std::pair<std::string
   const, boost::function<Caver::Component* ()> > >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>> anStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
    __gnu_cxx::new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>::
    destroy(anStack_40,(pair *)(param_1 + 0x20));
    operator_delete(param_1);
    param_1 = p_Var2;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


