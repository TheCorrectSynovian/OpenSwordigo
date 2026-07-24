/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c76b8
 * Function: Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent
 * Signature: undefined __thiscall SwingableWeaponControllerComponent(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent() */

void __thiscall
Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent
          (SwingableWeaponControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  SwingableWeaponControllerComponent *pSVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar9 = PTR_vtable_007e6c50;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_vtable_007e50d0;
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e6c50 + 0x128;
  puVar2 = PTR_vtable_007e6c50 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SwingableWeaponControllerComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pSVar10 = this + 0x48;
  *(undefined8 *)pSVar10 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(SwingableWeaponControllerComponent **)(this + 0x58) = pSVar10;
  *(SwingableWeaponControllerComponent **)(this + 0x60) = pSVar10;
  *(undefined **)this = puVar9 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x90) = puVar3;
  *(undefined **)(this + 0x88) = puVar3;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa5) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  FUN_00666bb8(local_58,"controllingModel",auStack_60);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_58,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar8) {
    piVar11 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


