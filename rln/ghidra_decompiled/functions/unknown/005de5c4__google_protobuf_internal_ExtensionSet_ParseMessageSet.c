/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005de5c4
 * Function: google::protobuf::internal::ExtensionSet::ParseMessageSet
 * Signature: undefined __thiscall ParseMessageSet(ExtensionSet * this, CodedInputStream * param_1, ExtensionFinder * param_2, FieldSkipper * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream*,
   google::protobuf::internal::ExtensionFinder*, google::protobuf::internal::FieldSkipper*) */

undefined8 __thiscall
google::protobuf::internal::ExtensionSet::ParseMessageSet
          (ExtensionSet *this,CodedInputStream *param_1,ExtensionFinder *param_2,
          FieldSkipper *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar3 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      if (bVar2 == 0xb) goto LAB_005de648;
LAB_005de610:
      if (uVar3 == 0) {
        return 1;
      }
      uVar4 = ParseField(this,uVar3,param_1,param_2,param_3);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
                    /* try { // try from 005de634 to 006de647 has its CatchHandler @ 005de9e4 */
    uVar3 = io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0xb) goto LAB_005de610;
LAB_005de648:
                    /* try { // try from 005de648 to 006de65b has its CatchHandler @ 005de988 */
    uVar4 = ParseMessageSetItem(this,param_1,param_2,param_3);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  } while( true );
}


