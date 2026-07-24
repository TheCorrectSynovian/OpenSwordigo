/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c528c
 * Function: Caver::SwingableWeaponComponent::Prepare
 * Signature: undefined __thiscall Prepare(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::Prepare() */

void __thiscall Caver::SwingableWeaponComponent::Prepare(SwingableWeaponComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  CollisionShapeComponent *this_00;
  string *psVar6;
  Matrix4 *this_01;
  int *piVar7;
  int iVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  long local_108 [8];
  float afStack_c8 [16];
  long *local_88 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6220);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x158);
  *(long *)(this + 0x158) = lVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar4 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6cd0);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x160);
  *(long *)(this + 0x160) = lVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar4 = *(long *)(this + 0x160);
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xbc) != '\0')) {
    *(undefined1 *)(lVar4 + 0xbc) = 0;
    this_00 = *(CollisionShapeComponent **)(this + 0xa0);
    if (this_00 == (CollisionShapeComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
      this_00 = *(CollisionShapeComponent **)(this + 0xa0);
      if (this_00 == (CollisionShapeComponent *)0x0) goto LAB_003c5384;
    }
    CollisionShapeComponent::SetEnabled(this_00,false);
  }
LAB_003c5384:
  lVar4 = *(long *)(this + 0xd8);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    lVar4 = *(long *)(this + 0xd8);
    if (lVar4 == 0) goto LAB_003c5454;
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_108,&DAT_0068a0f9,auStack_118);
  TextureLibrary::TextureForName(psVar6,SUB81(local_108,0));
  if (local_88[0] != (long *)0x0) {
    *(int *)(local_88[0] + 1) = (int)local_88[0][1] + 1;
  }
  plVar5 = *(long **)(lVar4 + 0x80);
  *(long **)(lVar4 + 0x80) = local_88[0];
  if ((plVar5 != (long *)0x0) &&
     (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((local_88[0] != (long *)0x0) &&
     (iVar8 = (int)local_88[0][1] + -1, *(int *)(local_88[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_88[0] + 8))();
  }
  if ((undefined *)(local_108[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_108[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_108[0] + -0x18));
    }
  }
LAB_003c5454:
  uStack_128 = *(undefined8 *)(this + 0x1b0);
  local_130 = *(undefined8 *)(this + 0x1a8);
  SetGlowColor(this,&local_130);
  SetGlowIntensity(this,*(float *)(this + 0x1a4));
  this_01 = (Matrix4 *)SceneObject::WorldMatrix();
  Matrix4::RotationX(this_01,DAT_006896e4);
  C_Matrix4Mul(afStack_c8,(float *)local_108,(float *)local_88);
  UpdateTransform(this,(Matrix4 *)local_88);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


