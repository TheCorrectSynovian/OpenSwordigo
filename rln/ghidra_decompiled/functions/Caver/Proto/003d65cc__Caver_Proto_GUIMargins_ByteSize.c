/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d65cc
 * Function: Caver::Proto::GUIMargins::ByteSize
 * Signature: undefined __thiscall ByteSize(GUIMargins * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::ByteSize() const */

uint __thiscall Caver::Proto::GUIMargins::ByteSize(GUIMargins *this)

{
  GUIMargins GVar1;
  uint uVar2;
  
  GVar1 = this[0x1c];
  uVar2 = (uint)(byte)GVar1;
  if ((byte)GVar1 != 0) {
    uVar2 = -((byte)GVar1 & 1) & 5;
    if (((byte)GVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)GVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)GVar1 & 8) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


