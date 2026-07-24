/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3100
 * Function: google::protobuf::internal::WireFormatLite::WriteBytes
 * Signature: undefined __cdecl WriteBytes(int param_1, string * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteBytes(int, std::string const&,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteBytes
               (int param_1,string *param_2,CodedOutputStream *param_3)

{
                    /* catch() { ... } // from try @ 005e2f6c with catch @ 005e3104 */
                    /* catch() { ... } // from try @ 005e2c94 with catch @ 005e3108
                       catch() { ... } // from try @ 005e2d28 with catch @ 005e3108 */
                    /* catch() { ... } // from try @ 005e2fa8 with catch @ 005e310c */
                    /* catch() { ... } // from try @ 005e2f40 with catch @ 005e3110 */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 2);
  io::CodedOutputStream::WriteVarint32(param_3,*(uint *)(*(long *)param_2 + -0x18));
                    /* try { // try from 005e3134 to 006e33f7 has its CatchHandler @ 005e3418 */
  io::CodedOutputStream::WriteRaw
            (param_3,*(void **)param_2,*(int *)((long)*(void **)param_2 + -0x18));
  return;
}


