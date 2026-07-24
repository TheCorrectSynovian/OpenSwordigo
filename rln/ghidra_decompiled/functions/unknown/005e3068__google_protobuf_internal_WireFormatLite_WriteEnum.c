/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3068
 * Function: google::protobuf::internal::WireFormatLite::WriteEnum
 * Signature: undefined __cdecl WriteEnum(int param_1, int param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteEnum(int, int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteEnum
               (int param_1,int param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  if (-1 < param_2) {
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    return;
  }
  io::CodedOutputStream::WriteVarint64(param_3,(long)param_2);
  return;
}


