/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ceaa8
 * Function: Caver::Proto::Vector3::ByteSize
 * Signature: undefined __thiscall ByteSize(Vector3 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::ByteSize() const */

uint __thiscall Caver::Proto::Vector3::ByteSize(Vector3 *this)

{
  Vector3 VVar1;
  uint uVar2;
  
  VVar1 = this[0x18];
  uVar2 = (uint)(byte)VVar1;
  if ((byte)VVar1 != 0) {
    uVar2 = -((byte)VVar1 & 1) & 5;
    if (((byte)VVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)VVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


