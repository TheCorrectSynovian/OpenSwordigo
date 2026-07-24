/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a8198
 * Function: Caver::GUIViewLayout::FrameForViewInBounds
 * Signature: undefined __cdecl FrameForViewInBounds(Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&) */

void Caver::GUIViewLayout::FrameForViewInBounds(Rectangle *param_1)

{
  uint uVar1;
  float *in_x1;
  float *in_x8;
  float fVar2;
  float fVar3;
  
  in_x8[0] = 0.0;
  in_x8[1] = 0.0;
  fVar2 = *(float *)(param_1 + 100);
  fVar3 = *(float *)(param_1 + 0x68);
  in_x8[2] = fVar2;
  in_x8[3] = fVar3;
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) goto LAB_005a81f0;
    fVar2 = ((*in_x1 + in_x1[2]) - *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x6c)) - fVar2;
  }
  else {
                    /* try { // try from 005a81d8 to 006a81eb has its CatchHandler @ 005a8688 */
    fVar2 = *in_x1 + *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x6c);
  }
  *in_x8 = fVar2;
LAB_005a81f0:
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      return;
    }
                    /* try { // try from 005a8218 to 006a8227 has its CatchHandler @ 005a8738 */
    fVar3 = ((in_x1[1] + in_x1[3]) - *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x6c)) -
            fVar3;
  }
  else {
    fVar3 = in_x1[1] + *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x6c);
  }
  in_x8[1] = fVar3;
  return;
}


