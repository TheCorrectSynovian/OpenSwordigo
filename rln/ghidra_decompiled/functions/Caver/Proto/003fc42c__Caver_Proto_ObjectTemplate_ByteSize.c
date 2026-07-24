/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc42c
 * Function: Caver::Proto::ObjectTemplate::ByteSize
 * Signature: undefined __thiscall ByteSize(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::ByteSize() const */

void __thiscall Caver::Proto::ObjectTemplate::ByteSize(ObjectTemplate *this)

{
  ObjectTemplate *pOVar1;
  ObjectTemplate OVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  OVar2 = this[0x1c];
  uVar5 = (uint)(byte)OVar2;
  if (OVar2 == (ObjectTemplate)0x0) {
    iVar4 = 0;
  }
  else {
    if (((byte)OVar2 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pOVar1 = *(ObjectTemplate **)PTR_default_instance__007e4a98;
      if (*(long *)(this + 0x10) != 0) {
        pOVar1 = this;
      }
      uVar3 = SceneObject::ByteSize(*(SceneObject **)(pOVar1 + 0x10));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x1c);
      iVar4 = uVar3 + iVar4 + 1;
    }
    if ((uVar5 & 2) != 0) {
      iVar4 = iVar4 + 5;
    }
  }
  *(int *)(this + 8) = iVar4;
  return;
}


