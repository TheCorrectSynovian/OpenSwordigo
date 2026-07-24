/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323790
 * Function: Caver::LightComponent::localAABB
 * Signature: undefined __cdecl localAABB(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::localAABB() const */

void Caver::LightComponent::localAABB(void)

{
  long in_x0;
  float *in_x8;
  float fVar1;
  
  fVar1 = *(float *)(in_x0 + 0x9c) + DAT_00683f70;
  if (fVar1 <= DAT_00683480) {
    fVar1 = DAT_00683480;
  }
  *in_x8 = -fVar1;
  in_x8[1] = -fVar1;
  in_x8[2] = fVar1 + fVar1;
  in_x8[3] = fVar1 + fVar1;
  return;
}


