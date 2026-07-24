/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df594
 * Function: Caver::Proto::Map::ByteSize
 * Signature: undefined __thiscall ByteSize(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::ByteSize() const */

int __thiscall Caver::Proto::Map::ByteSize(Map *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0x18);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      uVar1 = MapZone::ByteSize(*(MapZone **)(*(long *)(this + 0x10) + lVar4 * 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      }
      lVar4 = lVar4 + 1;
      iVar3 = uVar1 + iVar3 + iVar2;
    } while (lVar4 < *(int *)(this + 0x18));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


