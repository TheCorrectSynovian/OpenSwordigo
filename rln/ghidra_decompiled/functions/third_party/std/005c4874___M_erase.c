/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4874
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::Font> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::Font> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const, boost::weak_ptr<Caver::Font>
   > > >::_M_erase(std::_Rb_tree_node<std::pair<std::string const, boost::weak_ptr<Caver::Font> >
   >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
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
  long lVar10;
  int iVar11;
  _Rb_tree_node *p_Var12;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* catch() { ... } // from try @ 005c4364 with catch @ 005c48f4
                       catch() { ... } // from try @ 005c4390 with catch @ 005c48f4
                       catch() { ... } // from try @ 005c46ec with catch @ 005c48f4 */
                    /* catch() { ... } // from try @ 005c408c with catch @ 005c48f8
                       catch() { ... } // from try @ 005c4130 with catch @ 005c48f8 */
                    /* catch() { ... } // from try @ 005c4008 with catch @ 005c48fc
                       catch() { ... } // from try @ 005c401c with catch @ 005c48fc
                       catch() { ... } // from try @ 005c41b8 with catch @ 005c48fc */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar6 = *(long **)(param_1 + 0x30);
    p_Var12 = *(_Rb_tree_node **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005c43e4 with catch @ 005c490c
                       catch() { ... } // from try @ 005c4438 with catch @ 005c490c
                       catch() { ... } // from try @ 005c4458 with catch @ 005c490c
                       catch() { ... } // from try @ 005c46b8 with catch @ 005c490c */
    if ((plVar6 != (long *)0x0) && (lVar10 = plVar6[2], plVar6[2] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar7 = (undefined *)(*(long *)(param_1 + 0x20) + -0x18);
    if (puVar7 != puVar5) {
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar11 = *piVar9;
                    /* catch() { ... } // from try @ 005c459c with catch @ 005c48dc
                       catch() { ... } // from try @ 005c4630 with catch @ 005c48dc */
        *piVar9 = iVar11 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 005c420c with catch @ 005c48c0 */
          iVar11 = *piVar9;
                    /* catch() { ... } // from try @ 005c4014 with catch @ 005c48c4 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 005c44dc with catch @ 005c48e0
                       catch() { ... } // from try @ 005c4570 with catch @ 005c48e0 */
                    /* catch() { ... } // from try @ 005c4334 with catch @ 005c48e4 */
      if (iVar11 < 1) {
                    /* catch() { ... } // from try @ 005c4304 with catch @ 005c48e8 */
                    /* catch() { ... } // from try @ 005c42d0 with catch @ 005c48ec */
        operator_delete(puVar7);
                    /* catch() { ... } // from try @ 005c42a0 with catch @ 005c48f0 */
      }
    }
    operator_delete(param_1);
    param_1 = p_Var12;
  }
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


