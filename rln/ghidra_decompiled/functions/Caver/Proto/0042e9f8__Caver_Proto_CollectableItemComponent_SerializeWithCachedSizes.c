/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e9f8
 * Function: Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CollectableItemComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes
          (CollectableItemComponent *this,CodedOutputStream *param_1)

{
  CollectableItemComponent *pCVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    pCVar1 = *(CollectableItemComponent **)PTR_default_instance__007e5fb8;
    if (*(long *)(this + 0x30) != 0) {
      pCVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pCVar1 + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(4,*(string **)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 2 & 1) != 0) {
                    /* try { // try from 0042eab8 to 0052ebfb has its CatchHandler @ 0042eab8
                       catch() { ... } // from try @ 0042eab8 with catch @ 0042eab8
                       catch() { ... } // from try @ 0042ec00 with catch @ 0042eab8
                       catch() { ... } // from try @ 0042ec5c with catch @ 0042eab8
                       catch() { ... } // from try @ 0042ecd8 with catch @ 0042eab8 */
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x28],param_1);
  return;
}


