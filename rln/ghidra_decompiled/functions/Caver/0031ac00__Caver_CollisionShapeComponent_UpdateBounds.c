/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ac00
 * Function: Caver::CollisionShapeComponent::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::UpdateBounds() */

void __thiscall Caver::CollisionShapeComponent::UpdateBounds(CollisionShapeComponent *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (this[0x179] == (CollisionShapeComponent)0x0) {
    Shape::Bounds();
    *(undefined8 *)(this + 0x160) = uStack_30;
    *(undefined8 *)(this + 0x158) = local_38;
    Component::UpdateObjectBounds((Component *)this);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


