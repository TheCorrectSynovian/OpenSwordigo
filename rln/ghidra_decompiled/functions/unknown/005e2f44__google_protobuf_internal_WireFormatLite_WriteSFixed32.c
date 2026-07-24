/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2f44
 * Function: google::protobuf::internal::WireFormatLite::WriteSFixed32
 * Signature: undefined __cdecl WriteSFixed32(int param_1, int param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteSFixed32(int, int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteSFixed32
               (int param_1,int param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 5);
                    /* try { // try from 005e2f6c to 006e2f93 has its CatchHandler @ 005e3104 */
  io::CodedOutputStream::WriteLittleEndian32(param_3,param_2);
  return;
}


