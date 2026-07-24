/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2db0
 * Function: Caver::Proto::CharacterState_ItemState::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CharacterState_ItemState * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CharacterState_ItemState::SerializeWithCachedSizes
          (CharacterState_ItemState *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x18),param_1);
  return;
}


