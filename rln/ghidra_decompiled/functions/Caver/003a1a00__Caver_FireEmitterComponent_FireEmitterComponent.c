/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1a00
 * Function: Caver::FireEmitterComponent::FireEmitterComponent
 * Signature: undefined __thiscall FireEmitterComponent(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FireEmitterComponent::FireEmitterComponent() */

void __thiscall Caver::FireEmitterComponent::FireEmitterComponent(FireEmitterComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  FireEmitterComponent *pFVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  puVar10 = PTR_vtable_007e74d8;
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_vtable_007e4968;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e4968 + 0x128;
  puVar2 = PTR_vtable_007e4968 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (FireEmitterComponent)0x0;
  pFVar11 = this + 0x48;
  *(undefined8 *)pFVar11 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  puVar1 = PTR_vtable_007e76d0;
  uVar6 = DAT_00689510;
  *(FireEmitterComponent **)(this + 0x58) = pFVar11;
  *(FireEmitterComponent **)(this + 0x60) = pFVar11;
  *(undefined **)this = puVar8 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar10 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar1 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0x40000000;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = uVar6;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  FloatColor::FromHSLA((FloatColor *)this,_DAT_00683c38,1.0,0.5,0.0);
  uVar7 = _UNK_00689528;
  uVar6 = _DAT_00689520;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xe4) = uVar7;
  *(undefined8 *)(this + 0xdc) = uVar6;
  FUN_00666bb8(local_68,"particleEmitter",auStack_70);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_68,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar9) {
    piVar12 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"light",auStack_70);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_68,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar9) {
    piVar12 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


