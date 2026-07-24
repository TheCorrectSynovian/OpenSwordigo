/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e750
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(BoneControlledCollisionShapeComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::SerializeWithCachedSizes
          (BoneControlledCollisionShapeComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
                    /* try { // try from 0040e754 to 0050e763 has its CatchHandler @ 0041015c */
  uVar1 = *(uint *)(this + 0x18);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x18);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
                    /* try { // try from 0040e794 to 0050e79b has its CatchHandler @ 00410068 */
  google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x10),param_1);
  return;
}


