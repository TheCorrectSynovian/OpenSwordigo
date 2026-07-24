/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432574
 * Function: Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PortalEffectComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes
          (PortalEffectComponent *this,CodedOutputStream *param_1)

{
  PortalEffectComponent *pPVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pPVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
                    /* try { // try from 0043261c to 0053265b has its CatchHandler @ 004324ec */
  pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
  if (*(long *)(this + 0x20) != 0) {
    pPVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (4,*(MessageLite **)(pPVar1 + 0x20),param_1);
  return;
}


