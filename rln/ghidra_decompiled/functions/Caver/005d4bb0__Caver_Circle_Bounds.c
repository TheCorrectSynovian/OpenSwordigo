/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4bb0
 * Function: Caver::Circle::Bounds
 * Signature: undefined __cdecl Bounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Circle::Bounds() const */

void Caver::Circle::Bounds(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  float fVar1;
  
  fVar1 = *(float *)(in_x0 + 1);
  *in_x8 = CONCAT44((float)((ulong)*in_x0 >> 0x20) - fVar1,(float)*in_x0 - fVar1);
  *(float *)(in_x8 + 1) = fVar1 + fVar1;
  *(float *)((long)in_x8 + 0xc) = fVar1 + fVar1;
  return;
}


