/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434580
 * Function: Caver::Proto::SkillComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SkillComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SkillComponent::SerializeWithCachedSizes
          (SkillComponent *this,CodedOutputStream *param_1)

{
  SkillComponent *pSVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pSVar1 = *(SkillComponent **)PTR_default_instance__007e5830;
    if (*(long *)(this + 0x18) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pSVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x10),param_1);
    return;
  }
  return;
}


