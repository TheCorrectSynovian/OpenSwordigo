/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3878
 * Function: Caver::ElevatorControllerComponent::ElevatorControllerComponent
 * Signature: undefined __thiscall ElevatorControllerComponent(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::ElevatorControllerComponent() */

void __thiscall
Caver::ElevatorControllerComponent::ElevatorControllerComponent(ElevatorControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ElevatorControllerComponent *pEVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar9 = PTR_vtable_007e63b8;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_vtable_007e4db0;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e4db0 + 0x128;
  puVar2 = PTR_vtable_007e4db0 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ElevatorControllerComponent)0x0;
  pEVar10 = this + 0x48;
  *(undefined8 *)pEVar10 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar6 = DAT_00689bc8;
  *(ElevatorControllerComponent **)(this + 0x58) = pEVar10;
  *(ElevatorControllerComponent **)(this + 0x60) = pEVar10;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar9 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0x43340000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = uVar6;
  this[0xa0] = (ElevatorControllerComponent)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x7f7fffff;
  FUN_00666bb8(local_58,"elevationShape",auStack_60);
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
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


