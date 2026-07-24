/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf8d0
 * Function: Caver::Proto::Box::ByteSize
 * Signature: undefined __thiscall ByteSize(Box * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::ByteSize() const */

uint __thiscall Caver::Proto::Box::ByteSize(Box *this)

{
  Box BVar1;
  uint uVar2;
  
  BVar1 = this[0x24];
  uVar2 = (uint)(byte)BVar1;
  if ((byte)BVar1 != 0) {
    uVar2 = -((byte)BVar1 & 1) & 5;
    if (((byte)BVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)BVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)BVar1 & 8) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)BVar1 & 0x10) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)BVar1 & 0x20) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


