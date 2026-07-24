/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430774
 * Function: Caver::Proto::ItemDropComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ItemDropComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ItemDropComponent::MergePartialFromCodedStream
          (ItemDropComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  string *psVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ItemDropComponent_ItemDropEntry *this_00;
  uint local_6c;
  long local_68;
  
  puVar9 = PTR__default_item_identifier__007e7320;
  puVar8 = PTR__default_template_name__007e6418;
  puVar7 = PTR_DAT_007e5de8;
                    /* try { // try from 00430784 to 00530797 has its CatchHandler @ 00430a08 */
  lVar5 = tpidr_el0;
                    /* try { // try from 00430798 to 005307a3 has its CatchHandler @ 004309d4 */
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004307c4 to 005307c7 has its CatchHandler @ 00430a08 */
                    /* try { // try from 004307c8 to 005307f7 has its CatchHandler @ 00430504 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5f28 + 0x10;
LAB_004307e8:
  pbVar18 = *(byte **)(param_1 + 8);
                    /* try { // try from 004307f8 to 005307fb has its CatchHandler @ 00430aec */
  if ((pbVar18 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar18, -1 < (char)bVar4)) {
                    /* try { // try from 004307fc to 005308bb has its CatchHandler @ 00430504 */
    uVar13 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar18 + 1;
    if (bVar4 == 0) goto LAB_00430ba0;
LAB_00430828:
    puVar6 = PTR__default_item_name__007e5cd8;
    uVar10 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 1:
      if ((uVar10 & 7) != 2) break;
      psVar14 = *(string **)(this + 0x10);
      *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 1;
      if (psVar14 == (string *)puVar6) {
        psVar14 = operator_new(8);
        *(undefined **)psVar14 = puVar1;
        *(string **)(this + 0x10) = psVar14;
      }
      uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
      if ((uVar13 & 1) == 0) goto LAB_00430b98;
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
        goto LAB_00430930;
      }
      goto LAB_004307e8;
    case 2:
      if ((uVar10 & 7) == 2) {
LAB_00430930:
        puVar6 = PTR__default_item_identifier__007e6a38;
        psVar14 = *(string **)(this + 0x18);
        *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 2;
        if (psVar14 == (string *)puVar6) {
          psVar14 = operator_new(8);
          *(undefined **)psVar14 = puVar7 + 0x18;
          *(string **)(this + 0x18) = psVar14;
        }
        uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
        if ((uVar13 & 1) == 0) goto LAB_00430b98;
        pbVar17 = *(byte **)(param_1 + 8);
        if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (*pbVar17 == 0x1a)) {
          do {
            *(byte **)(param_1 + 8) = pbVar17 + 1;
LAB_004309ac:
            iVar11 = *(int *)(this + 0x28);
            iVar15 = *(int *)(this + 0x2c);
            if (iVar11 < iVar15) {
              *(int *)(this + 0x28) = iVar11 + 1;
              this_00 = *(ItemDropComponent_ItemDropEntry **)
                         (*(long *)(this + 0x20) + (long)iVar11 * 8);
            }
            else {
                    /* catch() { ... } // from try @ 00430798 with catch @ 004309d4 */
              if (iVar15 == *(int *)(this + 0x30)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x20),iVar15 + 1);
                iVar11 = *(int *)(this + 0x28);
                iVar15 = *(int *)(this + 0x2c);
              }
              *(int *)(this + 0x2c) = iVar15 + 1;
                    /* try { // try from 004309f8 to 005309ff has its CatchHandler @ 00430bd8 */
              this_00 = operator_new(0x30);
                    /* try { // try from 00430a00 to 00530a6b has its CatchHandler @ 00430504 */
                    /* catch() { ... } // from try @ 00430770 with catch @ 00430a04 */
              *(undefined **)this_00 = puVar2;
                    /* catch() { ... } // from try @ 00430784 with catch @ 00430a08
                       catch() { ... } // from try @ 004307c4 with catch @ 00430a08 */
              *(undefined4 *)(this_00 + 8) = 0;
              *(undefined **)(this_00 + 0x18) = puVar9;
              *(undefined **)(this_00 + 0x10) = puVar8;
              *(long *)(this_00 + 0x20) = 0;
              *(long *)(this_00 + 0x28) = 0;
              *(int *)(this + 0x28) = iVar11 + 1;
              *(ItemDropComponent_ItemDropEntry **)(*(long *)(this + 0x20) + (long)iVar11 * 8) =
                   this_00;
            }
            pbVar18 = *(byte **)(param_1 + 8);
            if ((pbVar18 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar18)) {
              local_6c = (uint)*pbVar18;
              *(byte **)(param_1 + 8) = pbVar18 + 1;
                    /* catch() { ... } // from try @ 0043064c with catch @ 00430a48 */
            }
            else {
              uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_6c);
              if ((uVar13 & 1) == 0) goto LAB_00430b98;
            }
            iVar11 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar11 + 1;
                    /* try { // try from 00430a6c to 00530a73 has its CatchHandler @ 00430bd8 */
            if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_00430b98;
                    /* try { // try from 00430a74 to 00530ba7 has its CatchHandler @ 00430504 */
                    /* catch() { ... } // from try @ 00430624 with catch @ 00430a78 */
            iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
                    /* catch() { ... } // from try @ 00430638 with catch @ 00430a7c
                       catch() { ... } // from try @ 00430678 with catch @ 00430a7c */
            uVar13 = ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(this_00,param_1);
            if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00430b98;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pbVar17 = *(byte **)(param_1 + 8);
            pbVar16 = *(byte **)(param_1 + 0x10);
            if (pbVar16 <= pbVar17) goto LAB_004307e8;
          } while (*pbVar17 == 0x1a);
          if (*pbVar17 == 0x20) {
            pbVar17 = pbVar17 + 1;
                    /* catch() { ... } // from try @ 004308bc with catch @ 00430ae8 */
            *(byte **)(param_1 + 8) = pbVar17;
                    /* catch() { ... } // from try @ 004307f8 with catch @ 00430aec */
                    /* catch() { ... } // from try @ 00430604 with catch @ 00430af0 */
            if (pbVar17 < pbVar16) goto LAB_00430908;
            goto LAB_00430af4;
          }
        }
        goto LAB_004307e8;
      }
      break;
    case 3:
      if ((uVar10 & 7) == 2) goto LAB_004309ac;
      break;
    case 4:
      if ((uVar13 & 7) != 0) break;
      pbVar17 = *(byte **)(param_1 + 8);
      pbVar16 = *(byte **)(param_1 + 0x10);
      if (pbVar17 < pbVar16) {
LAB_00430908:
        if ((char)*pbVar17 < '\0') goto LAB_00430af4;
        pbVar18 = pbVar17 + 1;
        local_6c = (uint)*pbVar17;
        *(byte **)(param_1 + 8) = pbVar18;
      }
      else {
LAB_00430af4:
                    /* catch() { ... } // from try @ 004305a0 with catch @ 00430af4 */
                    /* catch() { ... } // from try @ 0043071c with catch @ 00430af8 */
        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar13 & 1) == 0) goto LAB_00430b98;
                    /* catch() { ... } // from try @ 0043055c with catch @ 00430b04 */
        pbVar18 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
      }
                    /* catch() { ... } // from try @ 004306f0 with catch @ 00430b18 */
      this[0x58] = (ItemDropComponent)(local_6c != 0);
      *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 8;
      if ((pbVar18 < pbVar16) && (*pbVar18 == 0x28)) {
        pbVar18 = pbVar18 + 1;
        *(byte **)(param_1 + 8) = pbVar18;
        if (pbVar18 < pbVar16) {
LAB_004308c8:
          if ((char)*pbVar18 < '\0') goto LAB_00430b48;
          pbVar17 = pbVar18 + 1;
          local_6c = (uint)*pbVar18;
          *(byte **)(param_1 + 8) = pbVar17;
        }
        else {
LAB_00430b48:
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar13 & 1) == 0) goto LAB_00430b98;
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        this[0x59] = (ItemDropComponent)(local_6c != 0);
        *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x10;
        if ((pbVar17 == pbVar16) && (*(int *)(param_1 + 0x2c) != 0)) {
                    /* catch() { ... } // from try @ 004306e4 with catch @ 00430b88 */
          uVar12 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00430ba4:
                    /* try { // try from 00430ba8 to 00530bcf has its CatchHandler @ 00430bd8 */
          if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar12);
          }
                    /* try { // try from 00430bd0 to 00530bdb has its CatchHandler @ 00430504 */
          return;
        }
      }
      goto LAB_004307e8;
    case 5:
      if ((uVar13 & 7) == 0) {
                    /* try { // try from 004308bc to 005308bf has its CatchHandler @ 00430ae8 */
        pbVar18 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 004308c0 to 005309f7 has its CatchHandler @ 00430504 */
        if (pbVar18 < pbVar16) goto LAB_004308c8;
        goto LAB_00430b48;
      }
    }
    if ((uVar10 & 7) != 4) {
      uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
      if ((uVar13 & 1) == 0) {
LAB_00430b98:
        uVar12 = 0;
        goto LAB_00430ba4;
      }
      goto LAB_004307e8;
    }
  }
  else {
    uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar13 = (ulong)uVar10;
    *(uint *)(param_1 + 0x20) = uVar10;
    if (uVar10 != 0) goto LAB_00430828;
  }
LAB_00430ba0:
  uVar12 = 1;
  goto LAB_00430ba4;
}


