/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338d7c
 * Function: Caver::ShapeComponent::ContainsWorldPoint
 * Signature: undefined __cdecl ContainsWorldPoint(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::ContainsWorldPoint(Caver::Vector2 const&) */

uint Caver::ShapeComponent::ContainsWorldPoint(Vector2 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  Vector2 aVStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  SceneObject::LocalPointFromWorldPoint(*(Vector2 **)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x70) == 1) {
    uStack_38 = (*(undefined8 **)(param_1 + 0x78))[1];
    local_40 = **(undefined8 **)(param_1 + 0x78);
    uVar2 = Rectangle::PointInside((Rectangle *)&local_40,aVStack_30);
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


