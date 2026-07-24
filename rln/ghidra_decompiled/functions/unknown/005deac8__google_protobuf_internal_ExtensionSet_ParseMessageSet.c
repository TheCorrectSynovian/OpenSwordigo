/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005deac8
 * Function: google::protobuf::internal::ExtensionSet::ParseMessageSet
 * Signature: undefined __thiscall ParseMessageSet(ExtensionSet * this, CodedInputStream * param_1, MessageLite * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream*,
   google::protobuf::MessageLite const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::ParseMessageSet
          (ExtensionSet *this,CodedInputStream *param_1,MessageLite *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_50;
  MessageLite *local_48;
  undefined *puStack_40;
  long local_38;
  
                    /* try { // try from 005dead8 to 006deadb has its CatchHandler @ 005deae4 */
                    /* try { // try from 005deadc to 006deae7 has its CatchHandler @ 005de41c */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 005de8b4 with catch @ 005deae4
                       catch() { ... } // from try @ 005dead8 with catch @ 005deae4 */
  local_38 = *(long *)(lVar3 + 0x28);
  puStack_40 = PTR_vtable_007e52e8 + 0x10;
  local_50 = PTR_vtable_007e6718 + 0x10;
  local_48 = param_2;
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar4 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      if (bVar2 == 0xb) goto LAB_005deb78;
LAB_005deb3c:
      if (uVar4 == 0) {
        uVar6 = 1;
        goto LAB_005deb9c;
      }
      uVar5 = ParseField(this,uVar4,param_1,(ExtensionFinder *)&local_50,(FieldSkipper *)&puStack_40
                        );
      if ((uVar5 & 1) == 0) goto LAB_005deb90;
    }
    uVar4 = io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0xb) goto LAB_005deb3c;
LAB_005deb78:
                    /* catch() { ... } // from try @ 005decf0 with catch @ 005deb84
                       catch() { ... } // from try @ 005deed4 with catch @ 005deb84 */
    uVar5 = ParseMessageSetItem(this,param_1,(ExtensionFinder *)&local_50,
                                (FieldSkipper *)&puStack_40);
  } while ((uVar5 & 1) != 0);
LAB_005deb90:
  uVar6 = 0;
LAB_005deb9c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* try { // try from 005debb0 to 006debb3 has its CatchHandler @ 005ded30 */
  return;
}


