/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3204
 * Function: google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray
 * Signature: undefined __cdecl WriteGroupMaybeToArray(int param_1, MessageLite * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(int,
   google::protobuf::MessageLite const&, google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray
               (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  int iVar1;
  long lVar2;
  
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 3);
  iVar1 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
                    /* catch() { ... } // from try @ 005e2d70 with catch @ 005e3244 */
                    /* catch() { ... } // from try @ 005e2ce4 with catch @ 005e3248 */
  if (iVar1 <= *(int *)(param_3 + 0x10)) {
                    /* catch() { ... } // from try @ 005e2da8 with catch @ 005e324c
                       catch() { ... } // from try @ 005e2fdc with catch @ 005e324c */
    lVar2 = *(long *)(param_3 + 8);
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar1;
    *(long *)(param_3 + 8) = lVar2 + iVar1;
                    /* catch() { ... } // from try @ 005e2d68 with catch @ 005e325c
                       catch() { ... } // from try @ 005e3000 with catch @ 005e325c */
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 005e2c4c with catch @ 005e326c
                       catch() { ... } // from try @ 005e3024 with catch @ 005e326c */
      (**(code **)(*(long *)param_2 + 0x58))(param_2);
      goto LAB_005e3288;
    }
  }
                    /* catch() { ... } // from try @ 005e2de8 with catch @ 005e327c
                       catch() { ... } // from try @ 005e2dfc with catch @ 005e327c */
  (**(code **)(*(long *)param_2 + 0x50))(param_2,param_3);
LAB_005e3288:
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 4);
  return;
}


