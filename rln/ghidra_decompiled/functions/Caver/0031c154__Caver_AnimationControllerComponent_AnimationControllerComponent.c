/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c154
 * Function: Caver::AnimationControllerComponent::AnimationControllerComponent
 * Signature: undefined __thiscall AnimationControllerComponent(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::AnimationControllerComponent() */

void __thiscall
Caver::AnimationControllerComponent::AnimationControllerComponent
          (AnimationControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  AnimationControllerComponent *pAVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  puVar7 = PTR_vtable_007e5ec8;
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_vtable_007e50d0;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e4c00;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (AnimationControllerComponent)0x0;
  pAVar8 = this + 0x48;
  *(undefined8 *)pAVar8 = 0;
  *(AnimationControllerComponent **)(this + 0x58) = pAVar8;
  *(AnimationControllerComponent **)(this + 0x60) = pAVar8;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar7 + 0x170;
  *(undefined **)(this + 0x10) = puVar7 + 0x130;
  *(undefined **)(this + 0x70) = puVar5 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar4 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xa8] = (AnimationControllerComponent)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  FUN_00666bb8(local_68,"model",auStack_70);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_68,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar6) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
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
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"defaultAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_68,(ComponentOutletBase *)(this + 0x88),false);
  if ((undefined *)(local_68[0] + -0x18) != puVar6) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
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
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


