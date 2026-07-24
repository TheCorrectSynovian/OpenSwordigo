/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003157c4
 * Function: std::_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, Caver::Component::OutletBinding>,
   std::_Select1st<std::pair<int const, Caver::Component::OutletBinding> >, std::less<int>,
   std::allocator<std::pair<int const, Caver::Component::OutletBinding> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, Caver::Component::OutletBinding> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
           *this,_Rb_tree_node *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  _Rb_tree_node *p_Var10;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var10 = *(_Rb_tree_node **)(param_1 + 0x10);
    puVar6 = (undefined *)(*(long *)(param_1 + 0x30) + -0x18);
    if (puVar6 != puVar5) {
      piVar8 = (int *)(*(long *)(param_1 + 0x30) + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(puVar6);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var10;
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


