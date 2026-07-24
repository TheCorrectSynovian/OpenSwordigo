/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411e80
 * Function: Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent
 * Signature: undefined __thiscall CharAnimControllerComponent(CharAnimControllerComponent * this, CharAnimControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent(Caver::Proto::CharAnimControllerComponent
   const&) */

void __thiscall
Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent
          (CharAnimControllerComponent *this,CharAnimControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e61f0;
                    /* try { // try from 00411e84 to 00511e8f has its CatchHandler @ 00411d70 */
                    /* catch() { ... } // from try @ 00411e5c with catch @ 00411e8c */
                    /* catch() { ... } // from try @ 00411eb0 with catch @ 00411e90
                       catch() { ... } // from try @ 00411f14 with catch @ 00411e90 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
                    /* try { // try from 00411ea8 to 00511eaf has its CatchHandler @ 00411ee0 */
  MergeFrom(this,param_1);
                    /* try { // try from 00411eb0 to 00511ee7 has its CatchHandler @ 00411e90 */
  return;
}


