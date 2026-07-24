/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2e30
 * Function: google::protobuf::internal::WireFormatLite::WriteUInt64
 * Signature: undefined __cdecl WriteUInt64(int param_1, ulong param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteUInt64(int, unsigned long,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteUInt64
               (int param_1,ulong param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  io::CodedOutputStream::WriteVarint64(param_3,param_2);
  return;
}


