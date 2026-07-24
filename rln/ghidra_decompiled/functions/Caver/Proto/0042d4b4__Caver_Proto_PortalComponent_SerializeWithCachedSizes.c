/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d4b4
 * Function: Caver::Proto::PortalComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PortalComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PortalComponent::SerializeWithCachedSizes
          (PortalComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x20],param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* try { // try from 0042d530 to 0052d543 has its CatchHandler @ 0042db14 */
  google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0xc),param_1);
  return;
}


