/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdfe4
 * Function: Caver::Proto::DateTime::ByteSize
 * Signature: undefined __thiscall ByteSize(DateTime * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::ByteSize() const */

uint __thiscall Caver::Proto::DateTime::ByteSize(DateTime *this)

{
  DateTime DVar1;
  uint uVar2;
  
  DVar1 = this[0x18];
  uVar2 = (uint)(byte)DVar1;
  if ((byte)DVar1 != 0) {
    uVar2 = -((byte)DVar1 & 1) & 9;
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


