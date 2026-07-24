/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005de67c
 * Function: google::protobuf::internal::ExtensionSet::ParseMessageSetItem
 * Signature: undefined __thiscall ParseMessageSetItem(ExtensionSet * this, CodedInputStream * param_1, ExtensionFinder * param_2, FieldSkipper * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005de990) */
/* WARNING: Removing unreachable block (ram,0x005de9b4) */
/* WARNING: Removing unreachable block (ram,0x005de9a0) */
/* WARNING: Removing unreachable block (ram,0x005de9a8) */
/* WARNING: Removing unreachable block (ram,0x005de9b0) */
/* WARNING: Removing unreachable block (ram,0x005de9c0) */
/* WARNING: Removing unreachable block (ram,0x005de9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream*,
   google::protobuf::internal::ExtensionFinder*, google::protobuf::internal::FieldSkipper*) */

void __thiscall
google::protobuf::internal::ExtensionSet::ParseMessageSetItem
          (ExtensionSet *this,CodedInputStream *param_1,ExtensionFinder *param_2,
          FieldSkipper *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
                    /* try { // try from 005de694 to 006de69b has its CatchHandler @ 005de8c0 */
                    /* try { // try from 005de69c to 006de6b3 has its CatchHandler @ 005de890 */
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005de6d4 to 006de6d7 has its CatchHandler @ 005de8c0 */
  while( true ) {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
      uVar5 = (ulong)bVar2;
      uVar4 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = uVar4;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 005de718 to 006de727 has its CatchHandler @ 005de984 */
    }
    else {
      uVar4 = io::CodedInputStream::ReadTagFallback(param_1);
                    /* try { // try from 005de728 to 006de72f has its CatchHandler @ 005deab4 */
      uVar5 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
    }
    if (uVar4 < 0x1b) break;
    uVar5 = (**(code **)(*(long *)param_3 + 0x10))(param_3,param_1,uVar5);
                    /* try { // try from 005de788 to 006de79b has its CatchHandler @ 005de928 */
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
                    /* catch() { ... } // from try @ 005de718 with catch @ 005de984 */
                    /* catch() { ... } // from try @ 005de648 with catch @ 005de988 */
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005de748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006987f0 + *(int *)(&DAT_006987f0 + uVar5 * 4)))(0);
  return;
}


