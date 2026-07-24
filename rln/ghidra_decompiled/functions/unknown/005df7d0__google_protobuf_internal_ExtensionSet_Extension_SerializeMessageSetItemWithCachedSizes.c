/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005df7d0
 * Function: google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes
 * Signature: undefined __thiscall SerializeMessageSetItemWithCachedSizes(Extension * this, int param_1, CodedOutputStream * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,
   google::protobuf::io::CodedOutputStream*) const */

void __thiscall
google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes
          (Extension *this,int param_1,CodedOutputStream *param_2)

{
  if ((this[8] == (Extension)0xb) && (this[9] == (Extension)0x0)) {
    if (this[10] != (Extension)0x0) {
      return;
    }
    io::CodedOutputStream::WriteVarint32(param_2,0xb);
    WireFormatLite::WriteUInt32(2,param_1,param_2);
    WireFormatLite::WriteMessageMaybeToArray(3,*(MessageLite **)this,param_2);
    io::CodedOutputStream::WriteVarint32(param_2,0xc);
    return;
  }
  SerializeFieldWithCachedSizes(this,param_1,param_2);
  return;
}


