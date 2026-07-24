/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f73c
 * Function: Caver::PhysicsObjectComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(PhysicsObjectComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::PhysicsObjectComponent::HandleMessage(PhysicsObjectComponent *this,int param_1,void *param_2)

{
  long lVar1;
  float fVar2;
  CollisionShape *this_00;
  CollisionShape *pCVar3;
  ulong uVar4;
  CollisionShapeComponent *this_01;
  CollisionShapeComponent *this_02;
  uint uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  fVar2 = DAT_0068493c;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 7:
    if ((this[0x114] == (PhysicsObjectComponent)0x0) ||
       (*(SceneObject **)(*(long *)(this + 0x28) + 0x30) == (SceneObject *)0x0)) {
      uStack_88 = *(undefined8 *)((long)param_2 + 0x18);
      local_90 = *(undefined8 *)((long)param_2 + 0x10);
      uStack_78 = *(undefined8 *)((long)param_2 + 0x28);
      local_80 = *(undefined8 *)((long)param_2 + 0x20);
      local_6c = *(undefined1 *)((long)param_2 + 0x34);
      local_70 = *(undefined4 *)((long)param_2 + 0x30);
      this_01 = *(CollisionShapeComponent **)param_2;
      if ((this_01[0x17b] != (CollisionShapeComponent)0x0) &&
         ((this_02 = *(CollisionShapeComponent **)((long)param_2 + 8),
          this_02[0x17a] != (CollisionShapeComponent)0x0 ||
          (((this_01[0x17a] != (CollisionShapeComponent)0x0 &&
            (this_02[0x17b] != (CollisionShapeComponent)0x0)) &&
           (DAT_0068493c < (float)((ulong)uStack_78 >> 0x20))))))) {
        uVar5 = 0;
        do {
          if ((((this_01[0x17a] != (CollisionShapeComponent)0x0) &&
               (this[0xdc] != (PhysicsObjectComponent)0x0)) && (uStack_78._4_4_ < -0.5)) ||
             ((*(long *)(*(long *)(this_02 + 0x28) + 0x30) != 0 && (uStack_78._4_4_ < fVar2))))
          break;
          PhysicsObjectState::HandleGroundCollision((PhysicsObjectState *)(this + 0x78),param_2);
          uVar5 = uVar5 + 1;
          if (2 < uVar5) break;
          this_00 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_01);
          pCVar3 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_02);
          uVar4 = CollisionShape::CollidesWithShape(this_00,pCVar3,0.0,(CollisionInfo *)&local_90);
        } while ((uVar4 & 1) != 0);
      }
    }
    else {
      SceneObject::HandleMessage(*(SceneObject **)(*(long *)(this + 0x28) + 0x30),9,param_2);
    }
    break;
  case 0x10:
    this[0x114] = (PhysicsObjectComponent)0x1;
    break;
  case 0x11:
  case 0x13:
    this[0x114] = (PhysicsObjectComponent)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


