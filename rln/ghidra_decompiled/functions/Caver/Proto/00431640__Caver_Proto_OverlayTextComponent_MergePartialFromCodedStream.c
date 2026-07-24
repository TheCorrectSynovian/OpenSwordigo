/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431640
 * Function: Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(OverlayTextComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream
          (OverlayTextComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  string *psVar13;
  Vector2 *pVVar14;
  uint local_6c;
  long local_68;
  
  puVar8 = PTR__default_sprite_name__007e6978;
  puVar7 = PTR__default_text__007e5e10;
  puVar6 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_00431698:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar12 = (ulong)uVar9;
      *(uint *)(param_1 + 0x20) = uVar9;
      if (uVar9 != 0) goto LAB_004316d8;
LAB_004319bc:
      uVar11 = 1;
      goto LAB_004319c0;
    }
    uVar12 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_004319bc;
LAB_004316d8:
    uVar9 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar9 & 7) == 2) {
        psVar13 = *(string **)(this + 0x10);
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
        if (psVar13 == (string *)puVar7) {
          psVar13 = operator_new(8);
          *(undefined **)psVar13 = puVar1;
          *(string **)(this + 0x10) = psVar13;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
        if ((uVar12 & 1) == 0) goto LAB_004319b4;
                    /* try { // try from 00431738 to 005317e3 has its CatchHandler @ 00431738
                       catch() { ... } // from try @ 00431738 with catch @ 00431738
                       catch() { ... } // from try @ 004317e8 with catch @ 00431738 */
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_00431788:
          pVVar14 = *(Vector2 **)(this + 0x18);
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
          if (pVVar14 == (Vector2 *)0x0) {
            pVVar14 = operator_new(0x18);
            Vector2::Vector2(pVVar14);
            *(Vector2 **)(this + 0x18) = pVVar14;
          }
          pbVar2 = *(byte **)(param_1 + 8);
          if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
            local_6c = (uint)*pbVar2;
            *(byte **)(param_1 + 8) = pbVar2 + 1;
          }
          else {
            uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar12 & 1) == 0) goto LAB_004319b4;
          }
                    /* catch() { ... } // from try @ 004317e4 with catch @ 00431804 */
          iVar10 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar10 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_004319b4;
                    /* catch() { ... } // from try @ 00431958 with catch @ 00431818 */
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar12 = Vector2::MergePartialFromCodedStream(pVVar14,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004319b4;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
                    /* try { // try from 00431854 to 00531867 has its CatchHandler @ 004319a4 */
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar3 = *(char **)(param_1 + 8);
                    /* try { // try from 0043186c to 0053187f has its CatchHandler @ 004319a0 */
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_0043187c:
            psVar13 = *(string **)(this + 0x20);
                    /* try { // try from 00431884 to 00531897 has its CatchHandler @ 0043199c */
            *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
            if (psVar13 == (string *)puVar8) {
              psVar13 = operator_new(8);
                    /* try { // try from 0043189c to 005318af has its CatchHandler @ 00431998 */
              *(undefined **)psVar13 = puVar6 + 0x18;
              *(string **)(this + 0x20) = psVar13;
            }
            uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
                    /* try { // try from 004318b4 to 005318c7 has its CatchHandler @ 00431994 */
            if ((uVar12 & 1) == 0) goto LAB_004319b4;
            pcVar3 = *(char **)(param_1 + 8);
                    /* try { // try from 004318cc to 005318df has its CatchHandler @ 00431990 */
            if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\"')) {
              *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_004318d8:
              pVVar14 = *(Vector2 **)(this + 0x28);
                    /* try { // try from 004318e4 to 005318f7 has its CatchHandler @ 0043198c */
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
              if (pVVar14 == (Vector2 *)0x0) {
                pVVar14 = operator_new(0x18);
                Vector2::Vector2(pVVar14);
                    /* try { // try from 004318fc to 0053190f has its CatchHandler @ 00431988 */
                *(Vector2 **)(this + 0x28) = pVVar14;
              }
              pbVar2 = *(byte **)(param_1 + 8);
              if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
                    /* try { // try from 00431914 to 00531927 has its CatchHandler @ 00431984 */
                local_6c = (uint)*pbVar2;
                *(byte **)(param_1 + 8) = pbVar2 + 1;
              }
              else {
                    /* try { // try from 0043192c to 0053193f has its CatchHandler @ 00431980 */
                uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar12 & 1) == 0) goto LAB_004319b4;
              }
              iVar10 = *(int *)(param_1 + 0x38);
                    /* try { // try from 00431944 to 00531957 has its CatchHandler @ 0043197c */
              *(int *)(param_1 + 0x38) = iVar10 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_004319b4;
              iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
                    /* try { // try from 00431958 to 005319a7 has its CatchHandler @ 00431818 */
              uVar12 = Vector2::MergePartialFromCodedStream(pVVar14,param_1);
              if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_004319b4;
                    /* catch() { ... } // from try @ 00431944 with catch @ 0043197c */
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
                    /* catch() { ... } // from try @ 0043192c with catch @ 00431980 */
                    /* catch() { ... } // from try @ 00431914 with catch @ 00431984 */
                    /* catch() { ... } // from try @ 004318fc with catch @ 00431988 */
              if (0 < *(int *)(param_1 + 0x38)) {
                    /* catch() { ... } // from try @ 004318e4 with catch @ 0043198c */
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
                    /* catch() { ... } // from try @ 004318cc with catch @ 00431990 */
                    /* catch() { ... } // from try @ 004318b4 with catch @ 00431994 */
                    /* catch() { ... } // from try @ 0043189c with catch @ 00431998 */
                    /* catch() { ... } // from try @ 00431884 with catch @ 0043199c */
                    /* catch() { ... } // from try @ 0043186c with catch @ 004319a0 */
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                    /* catch() { ... } // from try @ 00431854 with catch @ 004319a4 */
                uVar11 = 1;
                    /* try { // try from 004319a8 to 005319d3 has its CatchHandler @ 004319a8
                       catch() { ... } // from try @ 004319a8 with catch @ 004319a8
                       catch() { ... } // from try @ 00431bd8 with catch @ 004319a8 */
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_004319c0;
              }
            }
          }
        }
        goto LAB_00431698;
      }
      break;
    case 2:
      if ((uVar9 & 7) == 2) goto LAB_00431788;
      break;
    case 3:
      if ((uVar9 & 7) == 2) goto LAB_0043187c;
      break;
    case 4:
      if ((uVar9 & 7) == 2) goto LAB_004318d8;
    }
    if ((uVar9 & 7) == 4) goto LAB_004319bc;
                    /* try { // try from 004317e4 to 005317e7 has its CatchHandler @ 00431804 */
                    /* try { // try from 004317e8 to 00531817 has its CatchHandler @ 00431738 */
    uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
    if ((uVar12 & 1) == 0) {
LAB_004319b4:
      uVar11 = 0;
LAB_004319c0:
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
                    /* try { // try from 004319d4 to 005319e7 has its CatchHandler @ 00431fbc */
      return;
    }
  } while( true );
}


