/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428fc8
 * Function: Caver::Proto::MonsterDeathControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MonsterDeathControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::MergePartialFromCodedStream
          (MonsterDeathControllerComponent *this,CodedInputStream *param_1)

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
  
                    /* try { // try from 00428fd4 to 0052900f has its CatchHandler @ 00429828 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar4 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      if (bVar2 == 8) goto LAB_00429054;
LAB_0042901c:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        uVar6 = 1;
        goto LAB_004290d0;
      }
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar5 & 1) == 0) {
LAB_004290cc:
        uVar6 = 0;
        goto LAB_004290d0;
      }
    }
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 8) goto LAB_0042901c;
LAB_00429054:
    pbVar1 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0042905c to 00529067 has its CatchHandler @ 004297ec */
    if ((pbVar7 <= pbVar1) || ((char)*pbVar1 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
                    /* try { // try from 00429088 to 005290c3 has its CatchHandler @ 00429790 */
      if ((uVar5 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        goto LAB_00429094;
      }
      goto LAB_004290cc;
    }
    pbVar8 = pbVar1 + 1;
    local_3c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar8;
LAB_00429094:
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  } while ((pbVar8 != pbVar7) || (*(int *)(param_1 + 0x2c) == 0));
  uVar6 = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (CodedInputStream)0x1;
LAB_004290d0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* try { // try from 004290e4 to 005290f7 has its CatchHandler @ 0042978c */
  return;
}


