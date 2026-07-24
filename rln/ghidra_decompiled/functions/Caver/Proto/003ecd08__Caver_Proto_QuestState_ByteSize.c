/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ecd08
 * Function: Caver::Proto::QuestState::ByteSize
 * Signature: undefined __thiscall ByteSize(QuestState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::ByteSize() const */

void __thiscall Caver::Proto::QuestState::ByteSize(QuestState *this)

{
  QuestState QVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  QVar1 = this[0x1c];
  uVar4 = (uint)(byte)QVar1;
  if (QVar1 == (QuestState)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)QVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      plVar5 = *(long **)(this + 0x10);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x1c);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar2 = iVar2 + uVar3 + 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar2 = iVar2 + 2;
    }
  }
  *(int *)(this + 8) = iVar2;
  return;
}


