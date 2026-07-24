/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2e9c
 * Function: google::protobuf::internal::WireFormatLite::WriteSInt64
 * Signature: undefined __cdecl WriteSInt64(int param_1, long param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteSInt64(int, long,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteSInt64
               (int param_1,long param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  io::CodedOutputStream::WriteVarint64(param_3,param_2 << 1 ^ param_2 >> 0x3f);
  return;
}


