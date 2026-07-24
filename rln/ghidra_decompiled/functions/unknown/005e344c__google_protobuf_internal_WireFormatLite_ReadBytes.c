/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e344c
 * Function: google::protobuf::internal::WireFormatLite::ReadBytes
 * Signature: undefined __cdecl ReadBytes(CodedInputStream * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream*,
   std::string*) */

uint google::protobuf::internal::WireFormatLite::ReadBytes
               (CodedInputStream *param_1,string *param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  void *__dest;
  byte *pbVar5;
  byte *pbVar6;
  size_t __n;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005e3474 to 006e34bf has its CatchHandler @ 005e3474
                       catch() { ... } // from try @ 005e3474 with catch @ 005e3474
                       catch() { ... } // from try @ 005e34ec with catch @ 005e3474
                       catch() { ... } // from try @ 005e35a0 with catch @ 005e3474
                       catch() { ... } // from try @ 005e361c with catch @ 005e3474
                       catch() { ... } // from try @ 005e379c with catch @ 005e3474
                       catch() { ... } // from try @ 005e3828 with catch @ 005e3474
                       catch() { ... } // from try @ 005e38b4 with catch @ 005e3474
                       catch() { ... } // from try @ 005e3934 with catch @ 005e3474
                       catch() { ... } // from try @ 005e3a0c with catch @ 005e3474
                       catch() { ... } // from try @ 005e3c80 with catch @ 005e3474
                       catch() { ... } // from try @ 005e3e24 with catch @ 005e3474 */
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((pbVar1 < pbVar5) && (-1 < (char)*pbVar1)) {
    pbVar6 = pbVar1 + 1;
    local_3c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar6;
  }
  else {
    uVar4 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
                    /* try { // try from 005e34c0 to 006e34d3 has its CatchHandler @ 005e3ed8 */
    if (((uVar4 & 1) == 0) || ((int)local_3c < 0)) {
      uVar3 = 0;
      goto LAB_005e3534;
    }
    pbVar6 = *(byte **)(param_1 + 8);
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  if ((int)pbVar5 - (int)pbVar6 < (int)local_3c) {
    uVar3 = io::CodedInputStream::ReadStringFallback(param_1,param_2,local_3c);
  }
  else {
    __n = (size_t)(int)local_3c;
                    /* try { // try from 005e34d8 to 006e34eb has its CatchHandler @ 005e3e68 */
    FUN_00669650(param_2,__n,0);
    __dest = *(void **)param_2;
                    /* try { // try from 005e34ec to 006e3577 has its CatchHandler @ 005e3474 */
    if (*(long *)((long)__dest + -0x18) == 0) {
      __dest = (void *)0x0;
    }
    else if (-1 < *(int *)((long)__dest + -8)) {
      FUN_00668ea8(param_2);
      __dest = *(void **)param_2;
    }
    memcpy(__dest,*(void **)(param_1 + 8),__n);
    uVar3 = 1;
    *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
  }
LAB_005e3534:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


