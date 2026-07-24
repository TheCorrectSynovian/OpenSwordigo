/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f22e0
 * Function: Caver::Proto::LevelState::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(LevelState * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::LevelState::SerializeWithCachedSizes(LevelState *this,CodedOutputStream *param_1)

{
  LevelState *pLVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x30);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(2,(bool)this[0x18],param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pLVar1 = *(LevelState **)PTR_default_instance__007e7240;
    if (*(long *)(this + 0x20) != 0) {
      pLVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pLVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x2c),param_1);
    return;
  }
  return;
}


