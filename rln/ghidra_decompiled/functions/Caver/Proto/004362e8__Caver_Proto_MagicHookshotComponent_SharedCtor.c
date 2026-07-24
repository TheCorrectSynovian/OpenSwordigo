/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004362e8
 * Function: Caver::Proto::MagicHookshotComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::SharedCtor() */

void __thiscall Caver::Proto::MagicHookshotComponent::SharedCtor(MagicHookshotComponent *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 004362f4 to 0053630f has its CatchHandler @ 00436224 */
  *(undefined4 *)(this + 0x18) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004362e4 with catch @ 004362f8
                        */
  return;
}


