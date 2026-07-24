/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec410
 * Function: Caver::Proto::StateProperties::ByteSize
 * Signature: undefined __thiscall ByteSize(StateProperties * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::ByteSize() const */

int __thiscall Caver::Proto::StateProperties::ByteSize(StateProperties *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  iVar3 = *(int *)(this + 0x18);
  iVar4 = iVar3;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(*(long *)(this + 0x10) + lVar5 * 8);
      uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar2 < 0x80) {
        iVar1 = 1;
      }
      else {
        iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        iVar3 = *(int *)(this + 0x18);
        uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      lVar5 = lVar5 + 1;
      iVar4 = iVar4 + iVar1 + uVar2;
    } while (lVar5 < iVar3);
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


