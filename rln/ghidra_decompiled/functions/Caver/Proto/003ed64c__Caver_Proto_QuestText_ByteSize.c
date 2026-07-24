/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed64c
 * Function: Caver::Proto::QuestText::ByteSize
 * Signature: undefined __thiscall ByteSize(QuestText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::ByteSize() const */

int __thiscall Caver::Proto::QuestText::ByteSize(QuestText *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (((byte)this[0x50] & 1) == 0) {
    iVar1 = 0;
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar3 < 0x80) {
      iVar1 = 1;
    }
    else {
      iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar1 = iVar1 + uVar3 + 1;
  }
  iVar4 = *(int *)(this + 0x20);
  iVar1 = iVar4 + iVar1;
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(*(long *)(this + 0x18) + lVar5 * 8);
      uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        iVar4 = *(int *)(this + 0x20);
        uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      lVar5 = lVar5 + 1;
      iVar1 = iVar1 + iVar2 + uVar3;
    } while (lVar5 < iVar4);
  }
  *(int *)(this + 8) = iVar1;
  return iVar1;
}


