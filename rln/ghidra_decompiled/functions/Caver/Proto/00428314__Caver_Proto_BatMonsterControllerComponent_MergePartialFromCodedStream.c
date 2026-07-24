/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428314
 * Function: Caver::Proto::BatMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BatMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::MergePartialFromCodedStream
          (BatMonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_0042833c:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_0042837c;
LAB_004284a0:
      uVar5 = 1;
      goto LAB_004284ac;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_004284a0;
LAB_0042837c:
    iVar3 = (int)(uVar6 >> 3);
    if (iVar3 != 1) {
      if ((iVar3 == 2) && ((uVar6 & 7) == 0)) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_004283a4;
        goto LAB_00428458;
      }
LAB_004283f4:
      if (((uint)uVar6 & 7) == 4) goto LAB_004284a0;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_004284a8:
        uVar5 = 0;
        goto LAB_004284ac;
      }
      goto LAB_0042833c;
    }
    if ((uVar6 & 7) != 0) goto LAB_004283f4;
    pbVar9 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 004283d8 to 00528437 has its CatchHandler @ 004283d8
                       catch() { ... } // from try @ 004283d8 with catch @ 004283d8
                       catch() { ... } // from try @ 0042843c with catch @ 004283d8 */
    if ((pbVar9 < pbVar7) && (-1 < (char)*pbVar9)) {
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_004284a8;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
                    /* try { // try from 00428438 to 0052843b has its CatchHandler @ 00428484 */
                    /* try { // try from 0042843c to 00528497 has its CatchHandler @ 004283d8 */
    if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      if (pbVar8 < pbVar7) {
LAB_004283a4:
        if ((char)*pbVar8 < '\0') goto LAB_00428458;
        pbVar9 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_00428458:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_004284a8;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
                    /* catch() { ... } // from try @ 00428438 with catch @ 00428484 */
      if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
                    /* try { // try from 00428498 to 00528507 has its CatchHandler @ 00428498
                       catch() { ... } // from try @ 00428498 with catch @ 00428498
                       catch() { ... } // from try @ 0042850c with catch @ 00428498 */
        param_1[0x24] = (CodedInputStream)0x1;
LAB_004284ac:
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
    }
  } while( true );
}


