/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416fcc
 * Function: Caver::Proto::ProgramComponent::Clear
 * Signature: undefined __thiscall Clear(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::Clear() */

void __thiscall Caver::Proto::ProgramComponent::Clear(ProgramComponent *this)

{
  if (this[0x20] != (ProgramComponent)0x0) {
    *(undefined2 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 1;
    if ((((byte)this[0x20] >> 3 & 1) != 0) && (*(Program **)(this + 0x18) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


