/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b378
 * Function: Caver::Proto::SwingComponent::SwingComponent
 * Signature: undefined __thiscall SwingComponent(SwingComponent * this, SwingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::SwingComponent(Caver::Proto::SwingComponent const&) */

void __thiscall
Caver::Proto::SwingComponent::SwingComponent(SwingComponent *this,SwingComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e62a8;
                    /* catch() { ... } // from try @ 0042b2ec with catch @ 0042b37c */
                    /* catch() { ... } // from try @ 0042b2c0 with catch @ 0042b384 */
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x10) = 0;
                    /* try { // try from 0042b3a0 to 0052b3a7 has its CatchHandler @ 0042b410 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
                    /* try { // try from 0042b3a8 to 0052b413 has its CatchHandler @ 0042b224 */
  return;
}


