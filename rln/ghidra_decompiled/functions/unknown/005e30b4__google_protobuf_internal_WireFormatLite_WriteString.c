/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e30b4
 * Function: google::protobuf::internal::WireFormatLite::WriteString
 * Signature: undefined __cdecl WriteString(int param_1, string * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteString(int, std::string const&,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteString
               (int param_1,string *param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 2);
  io::CodedOutputStream::WriteVarint32(param_3,*(uint *)(*(long *)param_2 + -0x18));
  io::CodedOutputStream::WriteRaw
            (param_3,*(void **)param_2,*(int *)((long)*(void **)param_2 + -0x18));
  return;
}


