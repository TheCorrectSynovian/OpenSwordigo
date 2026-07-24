/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d150
 * Function: Caver::GUISlider::IndicatorCenter
 * Signature: undefined __cdecl IndicatorCenter(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::IndicatorCenter() */

void Caver::GUISlider::IndicatorCenter(void)

{
  long in_x0;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 0059d158 to 0069d17b has its CatchHandler @ 0059ce68 */
  fVar2 = *(float *)(in_x0 + 0x90);
  fVar1 = *(float *)(in_x0 + 0x84);
  fVar3 = *(float *)(in_x0 + 0x88);
                    /* catch() { ... } // from try @ 0059d0e8 with catch @ 0059d178 */
                    /* catch() { ... } // from try @ 0059d288 with catch @ 0059d17c
                       catch() { ... } // from try @ 0059d450 with catch @ 0059d17c */
  *in_x8 = fVar1 + ((fVar1 + *(float *)(in_x0 + 0x8c)) - fVar1) *
                   ((*(float *)(in_x0 + 0x128) - *(float *)(in_x0 + 0x134)) /
                   (*(float *)(in_x0 + 0x138) - *(float *)(in_x0 + 0x134)));
  in_x8[1] = fVar3 + fVar2 * 0.5;
  return;
}


