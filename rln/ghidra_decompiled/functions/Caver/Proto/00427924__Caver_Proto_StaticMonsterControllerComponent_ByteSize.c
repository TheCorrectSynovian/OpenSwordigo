/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427924
 * Function: Caver::Proto::StaticMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::ByteSize(StaticMonsterControllerComponent *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (((byte)this[0x30] & 1) == 0) {
    iVar2 = 0;
                    /* catch() { ... } // from try @ 00427478 with catch @ 00427944 */
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar2 = 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      iVar2 = iVar2 + 1;
    }
  }
  iVar4 = *(int *)(this + 0x18);
  if (iVar4 < 1) {
    iVar5 = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(this + 0x10) + lVar6 * 4);
      if ((int)uVar1 < 0) {
                    /* catch() { ... } // from try @ 0042744c with catch @ 004279a0 */
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        iVar4 = *(int *)(this + 0x18);
      }
      lVar6 = lVar6 + 1;
      iVar5 = iVar3 + iVar5;
    } while (lVar6 < iVar4);
  }
  *(int *)(this + 8) = iVar5 + iVar2 + iVar4;
                    /* catch() { ... } // from try @ 00427428 with catch @ 004279d8 */
                    /* catch() { ... } // from try @ 004273cc with catch @ 004279dc */
  return;
}


