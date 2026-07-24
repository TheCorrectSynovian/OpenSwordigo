/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3e28
 * Function: Caver::StateProperties::StateProperties
 * Signature: undefined __thiscall StateProperties(StateProperties * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StateProperties::StateProperties() */

void __thiscall Caver::StateProperties::StateProperties(StateProperties *this)

{
  StateProperties *pSVar1;
  
                    /* try { // try from 004c3e28 to 005c3e33 has its CatchHandler @ 004c3464 */
  pSVar1 = this + 8;
  *(undefined8 *)pSVar1 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(StateProperties **)(this + 0x18) = pSVar1;
                    /* catch() { ... } // from try @ 004c3c48 with catch @ 004c3e30 */
  *(StateProperties **)(this + 0x20) = pSVar1;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


