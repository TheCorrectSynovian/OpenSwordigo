/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356100
 * Function: Caver::CharAnimControllerComponent::CharAnimControllerComponent
 * Signature: undefined __thiscall CharAnimControllerComponent(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::CharAnimControllerComponent() */

void __thiscall
Caver::CharAnimControllerComponent::CharAnimControllerComponent(CharAnimControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  AnimationControllerComponent::AnimationControllerComponent((AnimationControllerComponent *)this);
  puVar3 = PTR_vtable_007e5548;
  puVar1 = PTR_vtable_007e7058 + 0x130;
  puVar2 = PTR_vtable_007e7058 + 0x170;
  *(undefined **)this = PTR_vtable_007e7058 + 0x10;
  puVar3 = puVar3 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xb8) = puVar3;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0xd0) = puVar3;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x100) = puVar3;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)(this + 0x118) = puVar3;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined **)(this + 0x130) = puVar3;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x160] = (CharAnimControllerComponent)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  FUN_00666bb8(local_68,"standAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xb8),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"walkAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xd0),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"jumpAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_68,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"airJumpAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x67,(string *)local_68,(ComponentOutletBase *)(this + 0x100),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"fallAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x68,(string *)local_68,(ComponentOutletBase *)(this + 0x118),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"castAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x69,(string *)local_68,(ComponentOutletBase *)(this + 0x130),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


