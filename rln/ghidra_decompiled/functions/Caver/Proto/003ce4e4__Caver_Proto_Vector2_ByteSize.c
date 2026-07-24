/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce4e4
 * Function: Caver::Proto::Vector2::ByteSize
 * Signature: undefined __thiscall ByteSize(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::ByteSize() const */

uint __thiscall Caver::Proto::Vector2::ByteSize(Vector2 *this)

{
  Vector2 VVar1;
  uint uVar2;
  
  VVar1 = this[0x14];
  uVar2 = (uint)(byte)VVar1;
  if ((byte)VVar1 != 0) {
    uVar2 = -((byte)VVar1 & 1) & 5;
    if (((byte)VVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


