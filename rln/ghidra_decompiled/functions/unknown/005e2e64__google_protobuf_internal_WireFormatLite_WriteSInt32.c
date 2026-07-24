/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2e64
 * Function: google::protobuf::internal::WireFormatLite::WriteSInt32
 * Signature: undefined __cdecl WriteSInt32(int param_1, int param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteSInt32(int, int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteSInt32
               (int param_1,int param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  io::CodedOutputStream::WriteVarint32(param_3,param_2 << 1 ^ param_2 >> 0x1f);
  return;
}


