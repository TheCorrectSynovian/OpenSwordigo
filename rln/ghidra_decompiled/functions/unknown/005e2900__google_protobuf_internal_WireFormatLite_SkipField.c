/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2900
 * Function: google::protobuf::internal::WireFormatLite::SkipField
 * Signature: undefined __cdecl SkipField(CodedInputStream * param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream*,
   unsigned int) */

byte google::protobuf::internal::WireFormatLite::SkipField(CodedInputStream *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong local_40;
  long local_38;
  
                    /* try { // try from 005e2904 to 006e292b has its CatchHandler @ 005e2954 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar4 = 0;
                    /* try { // try from 005e292c to 006e2933 has its CatchHandler @ 005e2968 */
                    /* try { // try from 005e2934 to 006e2957 has its CatchHandler @ 005e267c */
  switch(param_2 & 7) {
  case 0:
    pbVar2 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 005e2904 with catch @ 005e2954 */
                    /* try { // try from 005e2958 to 006e295f has its CatchHandler @ 005e2964 */
    if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
      local_40 = (ulong)*pbVar2;
                    /* catch() { ... } // from try @ 005e2958 with catch @ 005e2964 */
                    /* catch() { ... } // from try @ 005e2864 with catch @ 005e2968
                       catch() { ... } // from try @ 005e292c with catch @ 005e2968 */
      *(byte **)(param_1 + 8) = pbVar2 + 1;
    }
    else {
      uVar6 = io::CodedInputStream::ReadVarint64Fallback(param_1,&local_40);
      if ((uVar6 & 1) == 0) goto LAB_005e2a64;
    }
    bVar4 = 1;
    break;
  case 1:
    bVar4 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,&local_40);
    break;
  case 2:
                    /* catch() { ... } // from try @ 005e2988 with catch @ 005e2974 */
    pbVar2 = *(byte **)(param_1 + 8);
                    /* try { // try from 005e2984 to 006e2987 has its CatchHandler @ 005e2998 */
    if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar2, -1 < (char)bVar4)) {
                    /* try { // try from 005e2988 to 006e29ab has its CatchHandler @ 005e2974 */
      local_40 = CONCAT44(local_40._4_4_,(uint)bVar4);
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      uVar7 = (uint)bVar4;
                    /* catch() { ... } // from try @ 005e2984 with catch @ 005e2998 */
    }
    else {
                    /* try { // try from 005e2a2c to 006e2a37 has its CatchHandler @ 005e29ac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005e2a28 with catch @ 005e2a34
                        */
      uVar6 = io::CodedInputStream::ReadVarint32Fallback(param_1,(uint *)&local_40);
      if ((uVar6 & 1) == 0) goto LAB_005e2a64;
      uVar7 = (uint)local_40;
    }
    bVar4 = io::CodedInputStream::Skip(param_1,uVar7);
    break;
  case 3:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005e29cc with catch @ 005e29ac
                       catch(type#1 @ 00000000) { ... } // from try @ 005e2a2c with catch @ 005e29ac
                        */
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    if (iVar1 < *(int *)(param_1 + 0x3c)) {
      do {
        pbVar2 = *(byte **)(param_1 + 8);
                    /* try { // try from 005e29c4 to 006e29cb has its CatchHandler @ 005e2a08 */
                    /* try { // try from 005e29cc to 006e2a17 has its CatchHandler @ 005e29ac */
        if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
          uVar5 = io::CodedInputStream::ReadTagFallback(param_1);
          *(uint *)(param_1 + 0x20) = uVar5;
          uVar7 = 0;
          if (uVar5 != 0) goto LAB_005e2a00;
LAB_005e2a90:
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          bVar4 = uVar7 == (param_2 & 0xfffffff8 | 4);
          goto switchD_005e2948_caseD_4;
        }
        uVar7 = (uint)bVar4;
        *(uint *)(param_1 + 0x20) = (uint)bVar4;
        *(byte **)(param_1 + 8) = pbVar2 + 1;
        uVar5 = (uint)bVar4;
        if (bVar4 == 0) goto LAB_005e2a90;
LAB_005e2a00:
        uVar7 = uVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005e29c4 with catch @ 005e2a08
                        */
        if ((uVar7 & 7) == 4) goto LAB_005e2a90;
        uVar6 = SkipField(param_1,uVar7);
      } while ((uVar6 & 1) != 0);
    }
LAB_005e2a64:
    bVar4 = 0;
    break;
  case 5:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005e2a18 with catch @ 005e2a24
                        */
    bVar4 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,(uint *)&local_40);
                    /* try { // try from 005e2a28 to 006e2a2b has its CatchHandler @ 005e2a34 */
  }
switchD_005e2948_caseD_4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


