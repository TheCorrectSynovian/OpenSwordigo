/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004270c4
 * Function: Caver::Proto::SkellyMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::SkellyMonsterControllerComponent::ByteSize(SkellyMonsterControllerComponent *this)

{
  uint uVar1;
  SkellyMonsterControllerComponent SVar2;
  int iVar3;
  int iVar4;
  
  SVar2 = this[0x14];
  if (SVar2 == (SkellyMonsterControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00427144;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar4 = 0;
                    /* try { // try from 004270e4 to 005270ef has its CatchHandler @ 00427c98 */
joined_r0x0042711c:
    if (((byte)SVar2 >> 1 & 1) == 0) goto LAB_00427144;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x0042711c;
    }
                    /* try { // try from 00427114 to 0052714f has its CatchHandler @ 00427c3c */
    if (uVar1 < 0x80) {
      iVar4 = 2;
      goto joined_r0x0042711c;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_00427144;
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
LAB_00427144:
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


