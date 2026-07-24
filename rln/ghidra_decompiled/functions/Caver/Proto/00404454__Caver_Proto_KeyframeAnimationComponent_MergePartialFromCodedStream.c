/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404454
 * Function: Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(KeyframeAnimationComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream
          (KeyframeAnimationComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  string *psVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_4c;
  long local_48;
  
  puVar4 = PTR__default_name__007e5890;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0040449c:
  do {
    pbVar10 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar10) || (bVar2 = *pbVar10, (char)bVar2 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_004044dc;
LAB_00404750:
      uVar6 = 1;
      goto LAB_0040475c;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar2 == 0) goto LAB_00404750;
LAB_004044dc:
    uVar5 = (uint)uVar7;
                    /* try { // try from 004044f4 to 0050453f has its CatchHandler @ 004044f4
                       catch() { ... } // from try @ 004044f4 with catch @ 004044f4
                       catch() { ... } // from try @ 004045d4 with catch @ 004044f4 */
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if ((pbVar10 < pbVar9) && (-1 < (char)*pbVar10)) {
          pbVar11 = pbVar10 + 1;
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar11;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
                    /* try { // try from 004045d4 to 005046ab has its CatchHandler @ 004044f4 */
          if ((uVar7 & 1) == 0) goto LAB_00404758;
          pbVar11 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_4c;
        uVar5 = *(uint *)(this + 0x20) | 1;
        *(uint *)(this + 0x20) = uVar5;
        if ((pbVar11 < pbVar9) && (*pbVar11 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar11 + 1;
LAB_0040460c:
          psVar8 = *(string **)(this + 0x10);
          *(uint *)(this + 0x20) = uVar5 | 2;
                    /* catch() { ... } // from try @ 004045bc with catch @ 00404618 */
                    /* catch() { ... } // from try @ 004045a4 with catch @ 0040461c */
          if (psVar8 == (string *)puVar4) {
                    /* catch() { ... } // from try @ 0040458c with catch @ 00404620 */
                    /* catch() { ... } // from try @ 00404574 with catch @ 00404624 */
            psVar8 = operator_new(8);
                    /* catch() { ... } // from try @ 0040455c with catch @ 00404628 */
            *(undefined **)psVar8 = puVar1;
            *(string **)(this + 0x10) = psVar8;
          }
          uVar7 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar8);
          if ((uVar7 & 1) == 0) goto LAB_00404758;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
          if ((pbVar10 < pbVar9) && (*pbVar10 == 0x18)) {
            pbVar10 = pbVar10 + 1;
            *(byte **)(param_1 + 8) = pbVar10;
            if (pbVar10 < pbVar9) {
LAB_0040456c:
              if ((char)*pbVar10 < '\0') goto LAB_00404668;
                    /* try { // try from 00404574 to 0050458b has its CatchHandler @ 00404624 */
              pbVar11 = pbVar10 + 1;
              local_4c = (uint)*pbVar10;
              *(byte **)(param_1 + 8) = pbVar11;
            }
            else {
LAB_00404668:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00404758;
              pbVar11 = *(byte **)(param_1 + 8);
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            this[0x18] = (KeyframeAnimationComponent)(local_4c != 0);
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
                    /* catch() { ... } // from try @ 00404540 with catch @ 004046a8 */
            if ((pbVar11 < pbVar9) && (*pbVar11 == 0x25)) {
              *(byte **)(param_1 + 8) = pbVar11 + 1;
LAB_004046b4:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00404758;
              *(uint *)(this + 0x1c) = local_4c;
              *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
              pbVar10 = *(byte **)(param_1 + 8);
              pbVar9 = *(byte **)(param_1 + 0x10);
              if ((pbVar10 < pbVar9) && (*pbVar10 == 0x28)) {
                pbVar10 = pbVar10 + 1;
                *(byte **)(param_1 + 8) = pbVar10;
                if (pbVar10 < pbVar9) {
LAB_0040453c:
                    /* try { // try from 00404540 to 0050455b has its CatchHandler @ 004046a8 */
                  if ((char)*pbVar10 < '\0') goto LAB_00404700;
                  pbVar11 = pbVar10 + 1;
                  local_4c = (uint)*pbVar10;
                  *(byte **)(param_1 + 8) = pbVar11;
                }
                else {
LAB_00404700:
                  uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                    (param_1,&local_4c);
                  if ((uVar7 & 1) == 0) goto LAB_00404758;
                  pbVar11 = *(byte **)(param_1 + 8);
                  pbVar9 = *(byte **)(param_1 + 0x10);
                }
                this[0x19] = (KeyframeAnimationComponent)(local_4c != 0);
                *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
                if ((pbVar11 == pbVar9) && (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar6 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_0040475c;
                }
              }
            }
          }
        }
        goto LAB_0040449c;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 2) {
                    /* try { // try from 004045a4 to 005045bb has its CatchHandler @ 0040461c */
        uVar5 = *(uint *)(this + 0x20);
        goto LAB_0040460c;
      }
      break;
    case 3:
                    /* try { // try from 0040455c to 00504573 has its CatchHandler @ 00404628 */
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_0040456c;
        goto LAB_00404668;
      }
      break;
    case 4:
                    /* try { // try from 0040458c to 005045a3 has its CatchHandler @ 00404620 */
      if ((uVar5 & 7) == 5) goto LAB_004046b4;
      break;
    case 5:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_0040453c;
        goto LAB_00404700;
      }
    }
    if ((uVar5 & 7) == 4) goto LAB_00404750;
                    /* try { // try from 004045bc to 005045d3 has its CatchHandler @ 00404618 */
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar7 & 1) == 0) {
LAB_00404758:
      uVar6 = 0;
LAB_0040475c:
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


