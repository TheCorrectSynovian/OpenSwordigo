/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c9b8
 * Function: Caver::Proto::PropertiesComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PropertiesComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PropertiesComponent::SerializeWithCachedSizes
          (PropertiesComponent *this,CodedOutputStream *param_1)

{
  PropertiesComponent *pPVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  pPVar1 = *(PropertiesComponent **)PTR_default_instance__007e5f30;
  if (*(long *)(this + 0x10) != 0) {
    pPVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pPVar1 + 0x10),param_1);
  return;
}


