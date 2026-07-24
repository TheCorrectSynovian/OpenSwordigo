/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b12a4
 * Function: Caver::SimpleGlowComponent::localAABB
 * Signature: undefined __cdecl localAABB(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::localAABB() const */

void Caver::SimpleGlowComponent::localAABB(void)

{
  long in_x0;
  float *in_x8;
  float fVar1;
  
  fVar1 = *(float *)(in_x0 + 0xb4);
  *in_x8 = -fVar1;
  in_x8[1] = -fVar1;
  in_x8[2] = fVar1 + fVar1;
  in_x8[3] = fVar1 + fVar1;
  return;
}


