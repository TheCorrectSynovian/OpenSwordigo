/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c33ec
 * Function: Caver::WaterMeshComponent::localAABB
 * Signature: undefined __cdecl localAABB(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::localAABB() const */

void Caver::WaterMeshComponent::localAABB(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x0 + 0x88);
  in_x8[1] = *(undefined8 *)(in_x0 + 0x90);
  *in_x8 = uVar1;
  return;
}


