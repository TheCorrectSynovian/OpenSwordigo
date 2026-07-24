/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b9580
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, Caver::CharacterState::ItemState>,
   std::_Select1st<std::pair<std::string const, Caver::CharacterState::ItemState> >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   Caver::CharacterState::ItemState> > >::_M_erase(std::_Rb_tree_node<std::pair<std::string const,
   Caver::CharacterState::ItemState> >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           *this,_Rb_tree_node *param_1)

{
  long lVar1;
  _Rb_tree_node *p_Var2;
  new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>> anStack_40 [8];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b9330 with catch @ 004b9580
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b92c4 with catch @ 004b958c
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* try { // try from 004b95ac to 005b95d3 has its CatchHandler @ 004b95dc */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
    __gnu_cxx::new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>::destroy
              (anStack_40,(pair *)(param_1 + 0x20));
    operator_delete(param_1);
                    /* try { // try from 004b95d4 to 005b95df has its CatchHandler @ 004b9204 */
    param_1 = p_Var2;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b95ac with catch @ 004b95dc
                        */
                    /* try { // try from 004b95e0 to 005b963b has its CatchHandler @ 004b95e0
                       catch() { ... } // from try @ 004b95e0 with catch @ 004b95e0
                       catch() { ... } // from try @ 004b9938 with catch @ 004b95e0
                       catch() { ... } // from try @ 004b9a34 with catch @ 004b95e0 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


