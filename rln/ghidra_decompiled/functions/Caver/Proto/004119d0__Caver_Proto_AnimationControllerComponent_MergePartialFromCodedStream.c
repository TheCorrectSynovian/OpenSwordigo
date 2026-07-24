/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004119d0
 * Function: Caver::Proto::AnimationControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(AnimationControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::AnimationControllerComponent::MergePartialFromCodedStream
          (AnimationControllerComponent *this,CodedInputStream *param_1)

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
LAB_004119f8:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
                    /* try { // try from 00411a24 to 00511a9f has its CatchHandler @ 004119b4 */
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_00411a38;
LAB_00411be8:
                    /* try { // try from 00411be8 to 00511bf3 has its CatchHandler @ 00411bf4 */
      uVar5 = 1;
      goto LAB_00411bf4;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_00411be8;
LAB_00411a38:
    iVar3 = (int)(uVar6 >> 3);
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        if ((uVar6 & 7) != 0) goto LAB_00411ae8;
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_00411a98;
        goto LAB_00411b4c;
      }
      if ((iVar3 == 3) && ((uVar6 & 7) == 0)) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar7) goto LAB_00411a68;
        goto LAB_00411b98;
      }
LAB_00411ae8:
      if (((uint)uVar6 & 7) == 4) goto LAB_00411be8;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_00411bf0:
        uVar5 = 0;
        goto LAB_00411bf4;
      }
      goto LAB_004119f8;
    }
    if ((uVar6 & 7) != 0) goto LAB_00411ae8;
    pbVar9 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00411ac8 to 00511ad3 has its CatchHandler @ 004119b4 */
    if ((pbVar9 < pbVar7) && (-1 < (char)*pbVar9)) {
                    /* catch() { ... } // from try @ 00411aa0 with catch @ 00411ad0 */
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_00411bf0;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
                    /* catch() { ... } // from try @ 00411bcc with catch @ 00411b1c */
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
                    /* try { // try from 00411b34 to 00511b3b has its CatchHandler @ 00411bd8 */
    if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      if (pbVar8 < pbVar7) {
LAB_00411a98:
        if ((char)*pbVar8 < '\0') goto LAB_00411b4c;
                    /* try { // try from 00411aa0 to 00511ac7 has its CatchHandler @ 00411ad0 */
        pbVar9 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_00411b4c:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_00411bf0;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
                    /* try { // try from 00411b68 to 00511b73 has its CatchHandler @ 00411b80 */
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
                    /* catch() { ... } // from try @ 00411b68 with catch @ 00411b80 */
      if ((pbVar9 < pbVar7) && (*pbVar9 == 0x18)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar7) {
LAB_00411a68:
          if ((char)*pbVar9 < '\0') goto LAB_00411b98;
          pbVar8 = pbVar9 + 1;
          local_3c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar8;
                    /* catch() { ... } // from try @ 00411a20 with catch @ 00411a80 */
        }
        else {
LAB_00411b98:
          uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
                    /* try { // try from 00411ba4 to 00511bcb has its CatchHandler @ 00411bd4 */
          if ((uVar4 & 1) == 0) goto LAB_00411bf0;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        this[0x14] = (AnimationControllerComponent)(local_3c != 0);
        *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
                    /* try { // try from 00411bcc to 00511be7 has its CatchHandler @ 00411b1c */
                    /* catch() { ... } // from try @ 00411ba4 with catch @ 00411bd4 */
        if ((pbVar8 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
                    /* catch() { ... } // from try @ 00411b34 with catch @ 00411bd8 */
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00411bf4:
                    /* catch() { ... } // from try @ 00411be8 with catch @ 00411bf4 */
                    /* try { // try from 00411bf8 to 00511bfb has its CatchHandler @ 00411c00 */
                    /* catch() { ... } // from try @ 00411bf8 with catch @ 00411c00 */
          if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar5);
          }
          return;
        }
      }
    }
  } while( true );
}


