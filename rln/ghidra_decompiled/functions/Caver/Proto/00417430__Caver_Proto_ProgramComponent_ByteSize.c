/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417430
 * Function: Caver::Proto::ProgramComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::ByteSize() const */

int __thiscall Caver::Proto::ProgramComponent::ByteSize(ProgramComponent *this)

{
  ProgramComponent *pPVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 0x20);
  if ((uVar3 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uVar3 & 1) * 2;
    if ((uVar3 & 2) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x10);
      if ((int)uVar2 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar3 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      pPVar1 = *(ProgramComponent **)PTR_default_instance__007e56e8;
      if (*(long *)(this + 0x18) != 0) {
        pPVar1 = this;
      }
      uVar3 = Program::ByteSize(*(Program **)(pPVar1 + 0x18));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      iVar5 = iVar5 + uVar3 + iVar4 + 1;
    }
  }
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


