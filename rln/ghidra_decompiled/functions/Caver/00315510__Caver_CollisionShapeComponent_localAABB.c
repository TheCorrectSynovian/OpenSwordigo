/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315510
 * Function: Caver::CollisionShapeComponent::localAABB
 * Signature: undefined __cdecl localAABB(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::localAABB() const */

void Caver::CollisionShapeComponent::localAABB(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x0 + 0x158);
  in_x8[1] = *(undefined8 *)(in_x0 + 0x160);
  *in_x8 = uVar1;
  return;
}


