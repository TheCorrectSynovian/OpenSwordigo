/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3034
 * Function: google::protobuf::internal::WireFormatLite::WriteBool
 * Signature: undefined __cdecl WriteBool(int param_1, bool param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteBool(int, bool,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteBool
               (int param_1,bool param_2,CodedOutputStream *param_3)

{
                    /* try { // try from 005e304c to 006e3133 has its CatchHandler @ 005e2b10 */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  io::CodedOutputStream::WriteVarint32(param_3,(uint)param_2);
  return;
}


