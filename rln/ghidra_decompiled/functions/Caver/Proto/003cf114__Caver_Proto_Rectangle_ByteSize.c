/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf114
 * Function: Caver::Proto::Rectangle::ByteSize
 * Signature: undefined __thiscall ByteSize(Rectangle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::ByteSize() const */

uint __thiscall Caver::Proto::Rectangle::ByteSize(Rectangle *this)

{
  Rectangle RVar1;
  uint uVar2;
  
  RVar1 = this[0x1c];
  uVar2 = (uint)(byte)RVar1;
  if ((byte)RVar1 != 0) {
    uVar2 = -((byte)RVar1 & 1) & 5;
    if (((byte)RVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)RVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)RVar1 & 8) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


