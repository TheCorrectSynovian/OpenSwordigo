/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f9d8
 * Function: Caver::KeyframeAnimationComponent::KeyframeAnimationComponent
 * Signature: undefined __thiscall KeyframeAnimationComponent(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::KeyframeAnimationComponent() */

void __thiscall
Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(KeyframeAnimationComponent *this)

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
  AnimKeysNode *this_00;
  long *plVar10;
  KeyframeAnimationComponent *pKVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_vtable_007e50d0;
  puVar7 = PTR_vtable_007e50a8;
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e50a8 + 0x130;
  puVar2 = PTR_vtable_007e50a8 + 0x170;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (KeyframeAnimationComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pKVar11 = this + 0x48;
  *(undefined8 *)pKVar11 = 0;
  *(KeyframeAnimationComponent **)(this + 0x58) = pKVar11;
  *(KeyframeAnimationComponent **)(this + 0x60) = pKVar11;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar8 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar3;
  *(undefined8 *)(this + 0x90) = 0;
  FUN_00666bb8(local_58,"model",auStack_60);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_58,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar9) {
    piVar12 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  this_00 = operator_new(0x50);
  AnimKeysNode::AnimKeysNode(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar10 = *(long **)(this + 0x90);
  *(AnimKeysNode **)(this + 0x90) = this_00;
  if ((plVar10 != (long *)0x0) &&
     (iVar13 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*plVar10 + 8))();
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


