/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5e04
 * Function: Caver::Proto::Program::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Program * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Program::SerializeWithCachedSizes(Program *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x28);
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x28);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBytes(2,*(string **)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x28);
  }
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x10),param_1);
    return;
  }
  return;
}


