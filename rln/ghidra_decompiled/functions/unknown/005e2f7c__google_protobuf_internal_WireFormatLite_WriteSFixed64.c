/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2f7c
 * Function: google::protobuf::internal::WireFormatLite::WriteSFixed64
 * Signature: undefined __cdecl WriteSFixed64(int param_1, long param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteSFixed64(int, long,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteSFixed64
               (int param_1,long param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 1);
                    /* try { // try from 005e2fa8 to 006e2fb3 has its CatchHandler @ 005e310c */
  io::CodedOutputStream::WriteLittleEndian64(param_3,param_2);
  return;
}


