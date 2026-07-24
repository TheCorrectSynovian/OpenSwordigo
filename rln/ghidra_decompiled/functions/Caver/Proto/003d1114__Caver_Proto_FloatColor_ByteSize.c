/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1114
 * Function: Caver::Proto::FloatColor::ByteSize
 * Signature: undefined __thiscall ByteSize(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FloatColor::ByteSize() const */

uint __thiscall Caver::Proto::FloatColor::ByteSize(FloatColor *this)

{
  FloatColor FVar1;
  uint uVar2;
  
  FVar1 = this[0x1c];
  uVar2 = (uint)(byte)FVar1;
  if ((byte)FVar1 != 0) {
    uVar2 = -((byte)FVar1 & 1) & 5;
    if (((byte)FVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)FVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)FVar1 & 8) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


