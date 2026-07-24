/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056a20c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> >, std::_Select1st<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::intrusive_ptr<Caver::SceneObjectGroup> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
           *this,_Rb_tree_node *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  _Rb_tree_node *p_Var11;
  
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00569c58 with catch @ 0056a20c */
  puVar4 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0056a234 to 0066a297 has its CatchHandler @ 00569ad0 */
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* catch() { ... } // from try @ 0056a1e0 with catch @ 0056a294 */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar6 = *(long **)(param_1 + 0x28);
    p_Var11 = *(_Rb_tree_node **)(param_1 + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    puVar7 = (undefined *)(*(long *)(param_1 + 0x20) + -0x18);
    if (puVar7 != puVar5) {
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar7);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var11;
  }
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


