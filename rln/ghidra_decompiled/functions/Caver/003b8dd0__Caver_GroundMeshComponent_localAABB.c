/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8dd0
 * Function: Caver::GroundMeshComponent::localAABB
 * Signature: undefined __cdecl localAABB(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::localAABB() const */

void Caver::GroundMeshComponent::localAABB(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x0 + 0xa0);
  in_x8[1] = *(undefined8 *)(in_x0 + 0xa8);
  *in_x8 = uVar1;
  return;
}


