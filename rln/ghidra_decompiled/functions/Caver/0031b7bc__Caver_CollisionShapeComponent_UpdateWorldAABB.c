/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b7bc
 * Function: Caver::CollisionShapeComponent::UpdateWorldAABB
 * Signature: undefined __thiscall UpdateWorldAABB(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::UpdateWorldAABB() */

void __thiscall Caver::CollisionShapeComponent::UpdateWorldAABB(CollisionShapeComponent *this)

{
  Rectangle *this_00;
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Rectangle *)(this + 0x168);
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(this + 0x160);
  *(undefined8 *)this_00 = *(undefined8 *)(this + 0x158);
  lVar2 = *(long *)(this + 0x28);
  if (*(char *)(lVar2 + 0x90) != '\0') {
    Rectangle::FlipHorizontally(this_00);
    lVar2 = *(long *)(this + 0x28);
  }
  local_40 = *(undefined4 *)(lVar2 + 0x8c);
  uStack_3c = local_40;
  Rectangle::Transform
            (this_00,(Vector2 *)(lVar2 + 0x70),*(float *)(lVar2 + 0x80),(Vector2 *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


