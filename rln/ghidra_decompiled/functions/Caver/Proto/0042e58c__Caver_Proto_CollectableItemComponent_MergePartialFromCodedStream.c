/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e58c
 * Function: Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(CollectableItemComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream
          (CollectableItemComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  string *psVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  Program *this_00;
  uint local_6c;
  long local_68;
  
  puVar7 = PTR__default_identifier__007e6b70;
  puVar6 = PTR__default_item_name__007e5e68;
  puVar5 = PTR_DAT_007e5de8;
                    /* try { // try from 0042e5ac to 0052e5c7 has its CatchHandler @ 0042e30c */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 0042e584 with catch @ 0042e5b0 */
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0042e524 with catch @ 0042e5b4 */
                    /* try { // try from 0042e5c8 to 0052e61f has its CatchHandler @ 0042e5c8
                       catch() { ... } // from try @ 0042e5c8 with catch @ 0042e5c8
                       catch() { ... } // from try @ 0042e784 with catch @ 0042e5c8
                       catch() { ... } // from try @ 0042e844 with catch @ 0042e5c8 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0042e96c:
  pbVar14 = *(byte **)(param_1 + 8);
  if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar14, -1 < (char)bVar3)) {
    uVar12 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar3 == 0) goto LAB_0042e994;
LAB_0042e5fc:
    uVar8 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar12 & 7) != 0) break;
                    /* try { // try from 0042e620 to 0052e62b has its CatchHandler @ 0042e81c */
      pbVar14 = *(byte **)(param_1 + 8);
      if ((*(byte **)(param_1 + 0x10) <= pbVar14) || ((char)*pbVar14 < '\0')) {
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar12 & 1) != 0) goto joined_r0x0042e964;
        goto LAB_0042e99c;
      }
      local_6c = (uint)*pbVar14;
      *(byte **)(param_1 + 8) = pbVar14 + 1;
joined_r0x0042e964:
      if (local_6c < 6) {
        *(uint *)(this + 0xc) = local_6c;
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
      }
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar13 = *(byte **)(param_1 + 0x10);
      if ((pbVar14 < pbVar13) && (*pbVar14 == 0x10)) {
        pbVar14 = pbVar14 + 1;
        *(byte **)(param_1 + 8) = pbVar14;
        if (pbVar14 < pbVar13) goto LAB_0042e684;
        goto LAB_0042e6e8;
      }
      goto LAB_0042e96c;
    case 2:
                    /* try { // try from 0042e6d4 to 0052e6e3 has its CatchHandler @ 0042e814 */
      if ((uVar12 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar13) {
LAB_0042e684:
          if ((char)*pbVar14 < '\0') goto LAB_0042e6e8;
                    /* try { // try from 0042e68c to 0052e68f has its CatchHandler @ 0042e7fc */
          pbVar15 = pbVar14 + 1;
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar15;
        }
        else {
LAB_0042e6e8:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_0042e99c;
          pbVar15 = *(byte **)(param_1 + 8);
          pbVar13 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_6c;
        uVar8 = *(uint *)(this + 0x38) | 2;
        *(uint *)(this + 0x38) = uVar8;
        if ((pbVar13 <= pbVar15) || (*pbVar15 != 0x1a)) goto LAB_0042e96c;
        *(byte **)(param_1 + 8) = pbVar15 + 1;
LAB_0042e72c:
                    /* try { // try from 0042e72c to 0052e72f has its CatchHandler @ 0042e7e8 */
        this_00 = *(Program **)(this + 0x30);
        *(uint *)(this + 0x38) = uVar8 | 0x20;
        if (this_00 == (Program *)0x0) {
          this_00 = operator_new(0x30);
          Program::Program(this_00);
          *(Program **)(this + 0x30) = this_00;
        }
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_0042e99c;
        }
        iVar9 = *(int *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 0042e780 with catch @ 0042e7dc */
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        if (iVar9 < *(int *)(param_1 + 0x3c)) {
                    /* catch() { ... } // from try @ 0042e72c with catch @ 0042e7e8 */
          iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
                    /* catch() { ... } // from try @ 0042e68c with catch @ 0042e7fc */
          uVar12 = Program::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042e99c;
                    /* catch() { ... } // from try @ 0042e6d4 with catch @ 0042e814 */
                    /* catch() { ... } // from try @ 0042e6b0 with catch @ 0042e818 */
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
                    /* catch() { ... } // from try @ 0042e620 with catch @ 0042e81c */
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
                    /* try { // try from 0042e840 to 0052e843 has its CatchHandler @ 0042e84c */
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\"')) {
                    /* try { // try from 0042e844 to 0052e84f has its CatchHandler @ 0042e5c8 */
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_0042e84c;
          }
          goto LAB_0042e96c;
        }
        goto LAB_0042e99c;
      }
      break;
    case 3:
                    /* try { // try from 0042e6b0 to 0052e6bb has its CatchHandler @ 0042e818 */
      if ((uVar8 & 7) == 2) {
        uVar8 = *(uint *)(this + 0x38);
        goto LAB_0042e72c;
      }
      break;
    case 4:
      if ((uVar8 & 7) == 2) {
LAB_0042e84c:
                    /* catch() { ... } // from try @ 0042e840 with catch @ 0042e84c */
        psVar11 = *(string **)(this + 0x20);
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
        if (psVar11 == (string *)puVar7) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x20) = psVar11;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar12 & 1) == 0) goto LAB_0042e99c;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '*')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
          goto LAB_0042e8a4;
        }
        goto LAB_0042e96c;
      }
      break;
    case 5:
      if ((uVar8 & 7) == 2) {
LAB_0042e8a4:
        psVar11 = *(string **)(this + 0x18);
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
        if (psVar11 == (string *)puVar6) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar5 + 0x18;
          *(string **)(this + 0x18) = psVar11;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar12 & 1) == 0) goto LAB_0042e99c;
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
        if ((pbVar14 < pbVar13) && (*pbVar14 == 0x30)) {
          pbVar14 = pbVar14 + 1;
          *(byte **)(param_1 + 8) = pbVar14;
          if (pbVar14 < pbVar13) goto LAB_0042e78c;
          goto LAB_0042e908;
        }
        goto LAB_0042e96c;
      }
      break;
    case 6:
      if ((uVar12 & 7) != 0) break;
                    /* try { // try from 0042e780 to 0052e783 has its CatchHandler @ 0042e7dc */
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar13 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0042e784 to 0052e83f has its CatchHandler @ 0042e5c8 */
      if (pbVar14 < pbVar13) {
LAB_0042e78c:
        if ((char)*pbVar14 < '\0') goto LAB_0042e908;
        pbVar15 = pbVar14 + 1;
        local_6c = (uint)*pbVar14;
        *(byte **)(param_1 + 8) = pbVar15;
      }
      else {
LAB_0042e908:
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_0042e99c;
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
      }
      this[0x28] = (CollectableItemComponent)(local_6c != 0);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
      if ((pbVar15 == pbVar13) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0042e9a0:
        if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar10);
        }
        return;
      }
      goto LAB_0042e96c;
    }
    if ((uVar8 & 7) != 4) {
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar12 & 1) != 0) goto LAB_0042e96c;
LAB_0042e99c:
      uVar10 = 0;
      goto LAB_0042e9a0;
    }
  }
  else {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = (ulong)uVar8;
    *(uint *)(param_1 + 0x20) = uVar8;
    if (uVar8 != 0) goto LAB_0042e5fc;
  }
LAB_0042e994:
  uVar10 = 1;
  goto LAB_0042e9a0;
}


