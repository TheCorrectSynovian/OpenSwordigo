/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416c5c
 * Function: Caver::Proto::ProgramComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::SharedCtor() */

void __thiscall Caver::Proto::ProgramComponent::SharedCtor(ProgramComponent *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 00416c6c to 00516c73 has its CatchHandler @ 00416c78 */
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


