/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb920
 * Function: Caver::Proto::Component::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Component * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Component::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Component::SerializeWithCachedSizes(Component *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x58);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x40),param_1);
    uVar1 = *(uint *)(this + 0x58);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x48),param_1);
    uVar1 = *(uint *)(this + 0x58);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x50),param_1);
    uVar1 = *(uint *)(this + 0x58);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x4c),param_1);
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes
            ((ExtensionSet *)(this + 8),100,0x20000000,param_1);
  return;
}


