/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040c5b0
 * Function: Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CollisionShapeComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes
          (CollisionShapeComponent *this,CodedOutputStream *param_1)

{
  CollisionShapeComponent *pCVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x40);
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(2,(bool)this[0xd],param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0xe],param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0xf],param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[0x10],param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(8,*(int *)(this + 0x1c),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
    if (*(long *)(this + 0x28) != 0) {
      pCVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (9,*(MessageLite **)(pCVar1 + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
    if (*(long *)(this + 0x30) != 0) {
      pCVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pCVar1 + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0xb,(bool)this[0xc],param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
    if (*(long *)(this + 0x38) != 0) {
      pCVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (0xc,*(MessageLite **)(pCVar1 + 0x38),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0xd,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0xe,(bool)this[0x24],param_1);
    return;
  }
  return;
}


