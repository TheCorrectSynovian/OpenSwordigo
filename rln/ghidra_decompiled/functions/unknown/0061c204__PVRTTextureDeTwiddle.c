/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c204
 * Function: PVRTTextureDeTwiddle
 * Signature: undefined __cdecl PVRTTextureDeTwiddle(uint * param_1, uint * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureDeTwiddle(unsigned int&, unsigned int&, unsigned int) */

void PVRTTextureDeTwiddle(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *param_1 = 0;
  *param_2 = 0;
  uVar3 = 0;
  do {
                    /* catch() { ... } // from try @ 0061b880 with catch @ 0061c218 */
    uVar1 = uVar3 + 1;
    *param_1 = *param_1 | (1 << (ulong)(uVar2 + 1 & 0x1f) & param_3) >> (ulong)(uVar1 & 0x1f);
    *param_2 = *param_2 | (1 << (ulong)(uVar2 & 0x1f) & param_3) >> (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 + 2;
    uVar3 = uVar1;
  } while (uVar1 != 0x10);
  return;
}


