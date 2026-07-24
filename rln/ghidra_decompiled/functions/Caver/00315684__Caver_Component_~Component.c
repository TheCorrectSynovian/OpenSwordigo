/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315684
 * Function: Caver::Component::~Component
 * Signature: undefined __thiscall ~Component(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::~Component() */

void __thiscall Caver::Component::~Component(Component *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar5 = PTR_vtable_007e6ce8 + 0x128;
  puVar1 = PTR_vtable_007e6ce8 + 0x168;
  *(undefined **)this = PTR_vtable_007e6ce8 + 0x10;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar5;
  std::
  _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)(this + 0x40),*(_Rb_tree_node **)(this + 0x50));
  puVar5 = (undefined *)(*(long *)(this + 0x38) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 0x38) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


