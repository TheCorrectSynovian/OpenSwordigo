/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3338
 * Function: google::protobuf::internal::WireFormatLite::ReadString
 * Signature: undefined __cdecl ReadString(CodedInputStream * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream*,
   std::string*) */

void google::protobuf::internal::WireFormatLite::ReadString
               (CodedInputStream *param_1,string *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  size_t __n;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((pbVar1 < pbVar5) && (-1 < (char)*pbVar1)) {
    pbVar6 = pbVar1 + 1;
    local_3c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar6;
LAB_005e3384:
    if ((int)pbVar5 - (int)pbVar6 < (int)local_3c) {
      uVar3 = io::CodedInputStream::ReadStringFallback(param_1,param_2,local_3c);
      if ((uVar3 & 1) == 0) goto LAB_005e33c4;
    }
    else {
      __n = (size_t)(int)local_3c;
      FUN_00669650(param_2,__n,0);
      __dest = *(void **)param_2;
      if (*(long *)((long)__dest + -0x18) == 0) {
        __dest = (void *)0x0;
      }
      else if (-1 < *(int *)((long)__dest + -8)) {
                    /* try { // try from 005e33f8 to 006e341b has its CatchHandler @ 005e2b10 */
        FUN_00668ea8(param_2);
        __dest = *(void **)param_2;
      }
      memcpy(__dest,*(void **)(param_1 + 8),__n);
                    /* catch() { ... } // from try @ 005e3134 with catch @ 005e3418 */
      *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
    }
    uVar4 = 1;
  }
  else {
    uVar3 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
    if (((uVar3 & 1) != 0) && (-1 < (int)local_3c)) {
      pbVar6 = *(byte **)(param_1 + 8);
      pbVar5 = *(byte **)(param_1 + 0x10);
      goto LAB_005e3384;
    }
LAB_005e33c4:
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


