/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416c78
 * Function: Caver::Proto::ProgramComponent::ProgramComponent
 * Signature: undefined __thiscall ProgramComponent(ProgramComponent * this, ProgramComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&) */

void __thiscall
Caver::Proto::ProgramComponent::ProgramComponent(ProgramComponent *this,ProgramComponent *param_1)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 00416c6c with catch @ 00416c78 */
  puVar1 = PTR_vtable_007e7708;
                    /* catch() { ... } // from try @ 00416a7c with catch @ 00416c7c
                       catch() { ... } // from try @ 00416ad4 with catch @ 00416c7c
                       catch() { ... } // from try @ 00416b18 with catch @ 00416c7c
                       catch() { ... } // from try @ 00416b60 with catch @ 00416c7c
                       catch() { ... } // from try @ 00416ba8 with catch @ 00416c7c */
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


