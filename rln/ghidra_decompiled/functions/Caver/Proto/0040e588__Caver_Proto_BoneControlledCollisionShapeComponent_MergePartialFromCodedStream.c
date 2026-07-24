/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e588
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BoneControlledCollisionShapeComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream
          (BoneControlledCollisionShapeComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  string *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_4c;
  long local_48;
  
  puVar6 = PTR__default_controlling_bone_name__007e79d8;
  lVar4 = tpidr_el0;
                    /* try { // try from 0040e5a4 to 0050e5a7 has its CatchHandler @ 00410834 */
                    /* try { // try from 0040e5a8 to 0050e673 has its CatchHandler @ 0040e548 */
  local_48 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0040e5c8:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar3 = *pbVar2, (char)bVar3 < '\0')) {
      uVar7 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar10 = uVar7 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar7;
      if ((int)uVar7 != 0) goto LAB_0040e608;
LAB_0040e718:
      uVar8 = 1;
      goto LAB_0040e724;
    }
    uVar10 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar3 == 0) goto LAB_0040e718;
LAB_0040e608:
    iVar5 = (int)(uVar10 >> 3);
    uVar9 = (uint)uVar10;
    if (iVar5 != 1) {
      if ((iVar5 == 2) && ((uVar9 & 7) == 2)) {
        uVar9 = *(uint *)(this + 0x18);
        goto LAB_0040e6c0;
      }
LAB_0040e664:
      if ((uVar9 & 7) == 4) goto LAB_0040e718;
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
                    /* try { // try from 0040e674 to 0050e67b has its CatchHandler @ 00410284 */
      if ((uVar7 & 1) == 0) {
LAB_0040e720:
        uVar8 = 0;
        goto LAB_0040e724;
      }
      goto LAB_0040e5c8;
    }
    if ((uVar10 & 7) != 0) goto LAB_0040e664;
    pbVar2 = *(byte **)(param_1 + 8);
    pbVar12 = *(byte **)(param_1 + 0x10);
    if ((pbVar2 < pbVar12) && (-1 < (char)*pbVar2)) {
      pbVar13 = pbVar2 + 1;
      local_4c = (uint)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar13;
    }
    else {
                    /* try { // try from 0040e67c to 0050e68f has its CatchHandler @ 0041024c */
      uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar7 & 1) == 0) goto LAB_0040e720;
                    /* try { // try from 0040e690 to 0050e69b has its CatchHandler @ 00410214 */
      pbVar13 = *(byte **)(param_1 + 8);
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_4c;
    uVar9 = *(uint *)(this + 0x18) | 1;
    *(uint *)(this + 0x18) = uVar9;
    if ((pbVar13 < pbVar12) && (*pbVar13 == 0x12)) {
      *(byte **)(param_1 + 8) = pbVar13 + 1;
LAB_0040e6c0:
      psVar11 = *(string **)(this + 0x10);
      *(uint *)(this + 0x18) = uVar9 | 2;
      if (psVar11 == (string *)puVar6) {
        psVar11 = operator_new(8);
        *(undefined **)psVar11 = puVar1;
        *(string **)(this + 0x10) = psVar11;
      }
      uVar7 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
                    /* try { // try from 0040e6f0 to 0050e6f7 has its CatchHandler @ 00410864 */
      if ((uVar7 & 1) == 0) goto LAB_0040e720;
                    /* try { // try from 0040e6f8 to 0050e703 has its CatchHandler @ 0041082c */
                    /* try { // try from 0040e704 to 0050e717 has its CatchHandler @ 004107d4 */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar8 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0040e724:
        if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar8);
        }
                    /* try { // try from 0040e734 to 0050e747 has its CatchHandler @ 0041020c */
                    /* try { // try from 0040e748 to 0050e753 has its CatchHandler @ 004101b8 */
        return;
      }
    }
  } while( true );
}


