/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394a2c
 * Function: Caver::BouncingMonsterControllerComponent::Jump
 * Signature: undefined __thiscall Jump(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::Jump() */

void __thiscall
Caver::BouncingMonsterControllerComponent::Jump(BouncingMonsterControllerComponent *this)

{
  long lVar1;
  long *plVar2;
  Vector2 *this_00;
  long lVar3;
  float fVar4;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x101;
  plVar2 = *(long **)(this + 0xe0);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar2 = *(long **)(this + 0xe0);
  }
  this_00 = (Vector2 *)(**(code **)(*plVar2 + 0x108))();
  *(undefined4 *)(this_00 + 0xc) = 0;
  Vector2::FromAngle(this_00,*(float *)(this + 0x108));
  fVar4 = (float)local_38 * *(float *)(this + 0x10c);
  if (*(int *)(this + 0x110) < 0) {
    fVar4 = -fVar4;
  }
  _local_30 = CONCAT44((float)((ulong)local_38 >> 0x20) * *(float *)(this + 0x10c),fVar4);
  lVar3 = *(long *)(this + 0x80);
  *(float *)(this + 0x114) = fVar4;
  if (lVar3 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar3 = *(long *)(this + 0x80);
  }
  PhysicsObjectState::setVelocity((PhysicsObjectState *)(lVar3 + 0x78),(Vector2 *)&local_30);
  *(undefined2 *)(this + 0x118) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


