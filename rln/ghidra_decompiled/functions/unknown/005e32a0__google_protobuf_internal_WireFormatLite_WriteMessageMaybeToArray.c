/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e32a0
 * Function: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray
 * Signature: undefined __cdecl WriteMessageMaybeToArray(int param_1, MessageLite * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,
   google::protobuf::MessageLite const&, google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray
               (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  uint uVar1;
  CodedOutputStream *pCVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 2);
  uVar1 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
  io::CodedOutputStream::WriteVarint32(param_3,uVar1);
  if ((int)uVar1 <= *(int *)(param_3 + 0x10)) {
    pCVar2 = *(CodedOutputStream **)(param_3 + 8);
    *(uint *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - uVar1;
    *(CodedOutputStream **)(param_3 + 8) = pCVar2 + (int)uVar1;
    if (pCVar2 != (CodedOutputStream *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x58);
      param_3 = pCVar2;
      goto LAB_005e3328;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x50);
LAB_005e3328:
                    /* WARNING: Could not recover jumptable at 0x005e3334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


