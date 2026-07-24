/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428c24
 * Function: Caver::Proto::BouncingMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::ByteSize(BouncingMonsterControllerComponent *this)

{
  uint uVar1;
  BouncingMonsterControllerComponent BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  BVar2 = this[0x1c];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BouncingMonsterControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00428cc0;
  }
  if (((byte)BVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00428c90:
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_00428c48:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x1c);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar3 + iVar4;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00428c90;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
                    /* try { // try from 00428c7c to 00528d17 has its CatchHandler @ 00428c7c
                       catch() { ... } // from try @ 00428c7c with catch @ 00428c7c
                       catch() { ... } // from try @ 00428d3c with catch @ 00428c7c
                       catch() { ... } // from try @ 00428db8 with catch @ 00428c7c
                       catch() { ... } // from try @ 00428df8 with catch @ 00428c7c
                       catch() { ... } // from try @ 00428e38 with catch @ 00428c7c */
      if (((byte)BVar2 >> 1 & 1) == 0) goto LAB_00428ca8;
      goto LAB_00428c48;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x1c);
    iVar4 = iVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00428c48;
  }
LAB_00428ca8:
  if ((uVar5 & 4) != 0) {
    iVar4 = iVar4 + 5;
  }
  if ((uVar5 & 8) != 0) {
    iVar4 = iVar4 + 5;
  }
LAB_00428cc0:
  *(int *)(this + 8) = iVar4;
  return;
}


