/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00447ea4
 * Function: Caver::GameOverViewController::Update
 * Signature: undefined __thiscall Update(GameOverViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::Update(float) */

void __thiscall Caver::GameOverViewController::Update(GameOverViewController *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x78);
                    /* try { // try from 00447ec4 to 00547ed3 has its CatchHandler @ 0044cf98 */
  *(float *)(this + 0x78) = fVar1 + param_1;
  if ((4.5 < fVar1 + param_1) && (this[0x50] == (GameOverViewController)0x0)) {
    ShowAdMaybe(this);
  }
                    /* try { // try from 00447ee8 to 00547efb has its CatchHandler @ 0044f330 */
  GUIViewController::Update(param_1);
  return;
}


