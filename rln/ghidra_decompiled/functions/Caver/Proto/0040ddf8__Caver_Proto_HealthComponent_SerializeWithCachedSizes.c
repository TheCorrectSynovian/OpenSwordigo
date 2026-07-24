/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ddf8
 * Function: Caver::Proto::HealthComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(HealthComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::HealthComponent::SerializeWithCachedSizes
          (HealthComponent *this,CodedOutputStream *param_1)

{
  HealthComponent *pHVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pHVar1 = *(HealthComponent **)PTR_default_instance__007e6bf0;
    if (*(long *)(this + 0x18) != 0) {
      pHVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pHVar1 + 0x18),param_1);
    return;
  }
  return;
}


