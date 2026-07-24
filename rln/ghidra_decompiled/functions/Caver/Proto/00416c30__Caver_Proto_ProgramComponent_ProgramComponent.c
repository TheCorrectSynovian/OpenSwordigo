/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416c30
 * Function: Caver::Proto::ProgramComponent::ProgramComponent
 * Signature: undefined __thiscall ProgramComponent(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::ProgramComponent() */

void __thiscall Caver::Proto::ProgramComponent::ProgramComponent(ProgramComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7708;
                    /* try { // try from 00416c3c to 00516c43 has its CatchHandler @ 00416c48 */
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 0;
                    /* catch() { ... } // from try @ 00416c3c with catch @ 00416c48 */
  *(undefined8 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 00416b84 with catch @ 00416c4c */
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


