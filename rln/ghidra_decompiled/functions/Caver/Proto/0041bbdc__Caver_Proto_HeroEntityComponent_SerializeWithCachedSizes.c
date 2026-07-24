/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bbdc
 * Function: Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(HeroEntityComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes
          (HeroEntityComponent *this,CodedOutputStream *param_1)

{
  HeroEntityComponent *pHVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  pHVar1 = *(HeroEntityComponent **)PTR_default_instance__007e4d60;
  if (*(long *)(this + 0x10) != 0) {
    pHVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pHVar1 + 0x10),param_1);
  return;
}


