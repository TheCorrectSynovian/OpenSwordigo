/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424268
 * Function: Caver::Proto::WalkingMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(WalkingMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::MergePartialFromCodedStream
          (WalkingMonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 00424274 to 005242b7 has its CatchHandler @ 00424274
                       catch() { ... } // from try @ 00424274 with catch @ 00424274
                       catch() { ... } // from try @ 004242d0 with catch @ 00424274 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar4 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 004242b8 to 005242bb has its CatchHandler @ 00424374 */
      if (bVar2 == 8) goto LAB_004242f4;
LAB_004242bc:
                    /* try { // try from 004242c8 to 005242cf has its CatchHandler @ 00424368 */
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        uVar6 = 1;
                    /* catch() { ... } // from try @ 004242c8 with catch @ 00424368 */
        goto LAB_00424370;
      }
                    /* try { // try from 004242d0 to 00524387 has its CatchHandler @ 00424274 */
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar5 & 1) == 0) {
LAB_0042436c:
        uVar6 = 0;
        goto LAB_00424370;
      }
    }
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 8) goto LAB_004242bc;
LAB_004242f4:
    pbVar1 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((pbVar7 <= pbVar1) || ((char)*pbVar1 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar5 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        goto LAB_00424334;
      }
      goto LAB_0042436c;
    }
    pbVar8 = pbVar1 + 1;
    local_3c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar8;
LAB_00424334:
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  } while ((pbVar8 != pbVar7) || (*(int *)(param_1 + 0x2c) == 0));
  uVar6 = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (CodedInputStream)0x1;
LAB_00424370:
                    /* catch() { ... } // from try @ 004242b8 with catch @ 00424374 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


