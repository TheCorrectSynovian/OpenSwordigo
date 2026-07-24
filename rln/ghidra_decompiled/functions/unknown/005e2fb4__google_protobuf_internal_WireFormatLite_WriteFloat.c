/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2fb4
 * Function: google::protobuf::internal::WireFormatLite::WriteFloat
 * Signature: undefined __cdecl WriteFloat(int param_1, float param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteFloat(int, float,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteFloat
               (int param_1,float param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 5);
                    /* try { // try from 005e2fdc to 006e2fdf has its CatchHandler @ 005e324c */
  io::CodedOutputStream::WriteLittleEndian32(param_3,(uint)param_2);
  return;
}


