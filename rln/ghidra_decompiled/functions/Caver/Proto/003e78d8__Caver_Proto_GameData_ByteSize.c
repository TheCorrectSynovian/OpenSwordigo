/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e78d8
 * Function: Caver::Proto::GameData::ByteSize
 * Signature: undefined __thiscall ByteSize(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::ByteSize() const */

int __thiscall Caver::Proto::GameData::ByteSize(GameData *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0x18);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      uVar1 = Item::ByteSize(*(Item **)(*(long *)(this + 0x10) + lVar4 * 8));
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
  iVar3 = *(int *)(this + 0x50) + iVar3;
  if (0 < *(int *)(this + 0x50)) {
    lVar4 = 0;
    do {
      uVar1 = Skill::ByteSize(*(Skill **)(*(long *)(this + 0x48) + lVar4 * 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      }
      lVar4 = lVar4 + 1;
      iVar3 = uVar1 + iVar3 + iVar2;
    } while (lVar4 < *(int *)(this + 0x50));
  }
  iVar3 = *(int *)(this + 0x88) + iVar3;
  if (0 < *(int *)(this + 0x88)) {
    lVar4 = 0;
    do {
      uVar1 = Quest::ByteSize(*(Quest **)(*(long *)(this + 0x80) + lVar4 * 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      }
      lVar4 = lVar4 + 1;
      iVar3 = uVar1 + iVar3 + iVar2;
    } while (lVar4 < *(int *)(this + 0x88));
  }
  iVar3 = *(int *)(this + 0xc0) + iVar3;
  if (0 < *(int *)(this + 0xc0)) {
    lVar4 = 0;
    do {
      uVar1 = EntityClass::ByteSize(*(EntityClass **)(*(long *)(this + 0xb8) + lVar4 * 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      }
      lVar4 = lVar4 + 1;
      iVar3 = uVar1 + iVar3 + iVar2;
    } while (lVar4 < *(int *)(this + 0xc0));
  }
  iVar3 = *(int *)(this + 0xf8) + iVar3;
  if (0 < *(int *)(this + 0xf8)) {
    lVar4 = 0;
    do {
      uVar1 = GuideTarget::ByteSize(*(GuideTarget **)(*(long *)(this + 0xf0) + lVar4 * 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      }
      lVar4 = lVar4 + 1;
      iVar3 = uVar1 + iVar3 + iVar2;
    } while (lVar4 < *(int *)(this + 0xf8));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


