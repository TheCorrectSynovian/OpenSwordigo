/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d198
 * Function: Caver::GUISlider::IndicatorSize
 * Signature: undefined __cdecl IndicatorSize(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::IndicatorSize() */

void Caver::GUISlider::IndicatorSize(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  if (*(long *)(in_x0 + 0x150) != 0) {
    *in_x8 = *(undefined8 *)(*(long *)(in_x0 + 0x150) + 0x54);
    return;
  }
  uVar1 = NEON_fmov(0x41200000,4);
  *in_x8 = uVar1;
  return;
}


