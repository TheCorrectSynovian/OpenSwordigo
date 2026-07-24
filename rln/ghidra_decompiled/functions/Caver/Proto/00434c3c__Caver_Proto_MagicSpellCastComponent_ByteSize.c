/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434c3c
 * Function: Caver::Proto::MagicSpellCastComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::ByteSize() const */

int __thiscall Caver::Proto::MagicSpellCastComponent::ByteSize(MagicSpellCastComponent *this)

{
  uint uVar1;
  MagicSpellCastComponent MVar2;
  int iVar3;
  int iVar4;
  
  MVar2 = this[0x14];
  if (MVar2 == (MagicSpellCastComponent)0x0) {
    iVar4 = 0;
    goto LAB_00434cbc;
  }
  if (((byte)MVar2 & 1) == 0) {
                    /* try { // try from 00434c58 to 00534ccb has its CatchHandler @ 00434c58
                       catch() { ... } // from try @ 00434c58 with catch @ 00434c58
                       catch() { ... } // from try @ 00434cd0 with catch @ 00434c58 */
    iVar4 = 0;
joined_r0x00434c94:
    if (((byte)MVar2 >> 1 & 1) == 0) goto LAB_00434cbc;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00434c94;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      goto joined_r0x00434c94;
    }
                    /* try { // try from 00434cd0 to 00534d0f has its CatchHandler @ 00434c58 */
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_00434cbc;
  }
  uVar1 = *(uint *)(this + 0x10);
  if ((int)uVar1 < 0) {
    iVar3 = 0xb;
  }
  else if (uVar1 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar3 = iVar3 + 1;
  }
  iVar4 = iVar3 + iVar4;
LAB_00434cbc:
  *(int *)(this + 8) = iVar4;
                    /* try { // try from 00434ccc to 00534ccf has its CatchHandler @ 00434cfc */
  return iVar4;
}


