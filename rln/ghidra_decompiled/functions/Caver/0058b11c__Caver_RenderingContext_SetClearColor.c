/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b11c
 * Function: Caver::RenderingContext::SetClearColor
 * Signature: undefined __thiscall SetClearColor(RenderingContext * this, Color * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetClearColor(Caver::Color const&) */

void __thiscall Caver::RenderingContext::SetClearColor(RenderingContext *this,Color *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  fVar2 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
                    /* catch() { ... } // from try @ 0058a650 with catch @ 0058b148 */
                    /* catch() { ... } // from try @ 0058a648 with catch @ 0058b14c */
                    /* catch() { ... } // from try @ 0058a53c with catch @ 0058b150 */
                    /* catch() { ... } // from try @ 0058a428 with catch @ 0058b154 */
  glClearColor(fVar1 / DAT_00683ffc,fVar2 / DAT_00683ffc,fVar3 / DAT_00683ffc,fVar4 / DAT_00683ffc);
  return;
}


