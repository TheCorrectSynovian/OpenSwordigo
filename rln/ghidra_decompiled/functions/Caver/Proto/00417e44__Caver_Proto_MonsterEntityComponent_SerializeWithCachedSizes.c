/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417e44
 * Function: Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MonsterEntityComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes
          (MonsterEntityComponent *this,CodedOutputStream *param_1)

{
  MonsterEntityComponent *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  if ((uVar2 >> 1 & 1) != 0) {
    pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pMVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 & 1) != 0) {
    pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pMVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x20],param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x21],param_1);
  return;
}


