/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aba30
 * Function: Caver::FWTouch::operator=
 * Signature: undefined __thiscall operator=(FWTouch * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWTouch::TEMPNAMEPLACEHOLDERVALUE(Caver::FWTouch const&) */

void __thiscall Caver::FWTouch::operator=(FWTouch *this,FWTouch *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 005ab534 with catch @ 005aba3c */
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  return;
}


