/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2ff4
 * Function: google::protobuf::internal::WireFormatLite::WriteDouble
 * Signature: undefined __cdecl WriteDouble(int param_1, double param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteDouble(int, double,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteDouble
               (int param_1,double param_2,CodedOutputStream *param_3)

{
                    /* try { // try from 005e3000 to 006e3003 has its CatchHandler @ 005e325c */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 1);
                    /* try { // try from 005e3024 to 006e304b has its CatchHandler @ 005e326c */
  io::CodedOutputStream::WriteLittleEndian64(param_3,(ulong)param_2);
  return;
}


