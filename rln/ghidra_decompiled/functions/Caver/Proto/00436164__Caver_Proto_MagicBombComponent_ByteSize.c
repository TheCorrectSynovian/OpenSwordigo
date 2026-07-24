/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436164
 * Function: Caver::Proto::MagicBombComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::ByteSize() const */

void __thiscall Caver::Proto::MagicBombComponent::ByteSize(MagicBombComponent *this)

{
  MagicBombComponent *pMVar1;
  uint uVar2;
  int iVar3;
  
  if (((byte)this[0x18] & 1) == 0) {
    iVar3 = 0;
  }
  else {
    pMVar1 = *(MagicBombComponent **)PTR_default_instance__007e7bd0;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    uVar2 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x10));
                    /* try { // try from 004361a4 to 005361a7 has its CatchHandler @ 004361e4 */
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
    iVar3 = uVar2 + iVar3 + 1;
  }
                    /* try { // try from 004361c8 to 005361cb has its CatchHandler @ 004361dc */
  *(int *)(this + 8) = iVar3;
                    /* try { // try from 004361cc to 00536207 has its CatchHandler @ 00436150 */
  return;
}


