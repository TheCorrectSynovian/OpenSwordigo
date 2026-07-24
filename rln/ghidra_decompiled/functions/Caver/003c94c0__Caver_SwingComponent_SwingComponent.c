/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c94c0
 * Function: Caver::SwingComponent::SwingComponent
 * Signature: undefined __thiscall SwingComponent(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::SwingComponent() */

void __thiscall Caver::SwingComponent::SwingComponent(SwingComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  SwingComponent *pSVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_vtable_007e5548;
  puVar6 = PTR_vtable_007e5118;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e5118 + 0x128;
  puVar2 = PTR_vtable_007e5118 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SwingComponent)0x0;
  pSVar9 = this + 0x48;
  *(undefined8 *)pSVar9 = 0;
  *(SwingComponent **)(this + 0x58) = pSVar9;
  *(SwingComponent **)(this + 0x60) = pSVar9;
  *(undefined **)this = puVar6 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined2 *)(this + 0x90) = 0x101;
  FUN_00666bb8(local_58,"animation",auStack_60);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_58,(ComponentOutletBase *)(this + 0x70),false);
  if ((undefined *)(local_58[0] + -0x18) != puVar8) {
    piVar10 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


