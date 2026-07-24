/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042fa94
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ItemDropComponent_ItemDropEntry * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream
          (ItemDropComponent_ItemDropEntry *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  string *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint local_5c;
  long local_58;
  
  puVar7 = PTR__default_item_identifier__007e7320;
  puVar6 = PTR__default_template_name__007e6418;
                    /* try { // try from 0042fa94 to 0052fac3 has its CatchHandler @ 0042fa94
                       catch() { ... } // from try @ 0042fa94 with catch @ 0042fa94
                       catch() { ... } // from try @ 0042fcbc with catch @ 0042fa94 */
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0042fac4 to 0052fad7 has its CatchHandler @ 004300a4 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0042fae8:
  do {
                    /* try { // try from 0042fae8 to 0052faf3 has its CatchHandler @ 00430038 */
    pbVar13 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar13) || (bVar3 = *pbVar13, (char)bVar3 < '\0')) {
                    /* try { // try from 0042fb18 to 0052fb53 has its CatchHandler @ 0042ffd4 */
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar10 = (ulong)uVar8;
      *(uint *)(param_1 + 0x20) = uVar8;
      if (uVar8 != 0) goto LAB_0042fb28;
LAB_0042fd78:
      uVar9 = 1;
      goto LAB_0042fd7c;
    }
    uVar10 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar13 + 1;
    if (bVar3 == 0) goto LAB_0042fd78;
LAB_0042fb28:
    uVar8 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
        if (psVar11 == (string *)puVar6) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
                    /* try { // try from 0042fb7c to 0052fb8f has its CatchHandler @ 0042ffd0 */
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_0042fd70;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
                    /* try { // try from 0042fba0 to 0052fbab has its CatchHandler @ 0042ff98 */
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0042fc28:
                    /* try { // try from 0042fc28 to 0052fc3b has its CatchHandler @ 0042ff38 */
          psVar11 = *(string **)(this + 0x18);
          *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
          if (psVar11 == (string *)puVar7) {
            psVar11 = operator_new(8);
                    /* try { // try from 0042fc4c to 0052fc57 has its CatchHandler @ 0042ff00 */
            *(undefined **)psVar11 = puVar5 + 0x18;
            *(string **)(this + 0x18) = psVar11;
          }
          uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
          if ((uVar10 & 1) == 0) goto LAB_0042fd70;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1d')) {
                    /* try { // try from 0042fc80 to 0052fcbb has its CatchHandler @ 0042fea4 */
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0042fc84:
            uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                               (param_1,&local_5c);
            if ((uVar10 & 1) == 0) goto LAB_0042fd70;
            *(uint *)(this + 0x20) = local_5c;
            *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
            pbVar14 = *(byte **)(param_1 + 8);
            pbVar12 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0042fcbc to 005300a7 has its CatchHandler @ 0042fa94 */
            if ((pbVar14 < pbVar12) && (*pbVar14 == 0x20)) {
              pbVar14 = pbVar14 + 1;
              *(byte **)(param_1 + 8) = pbVar14;
              if (pbVar14 < pbVar12) {
LAB_0042fc00:
                if ((char)*pbVar14 < '\0') goto LAB_0042fcd0;
                pbVar13 = pbVar14 + 1;
                local_5c = (uint)*pbVar14;
                *(byte **)(param_1 + 8) = pbVar13;
              }
              else {
LAB_0042fcd0:
                uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_5c);
                if ((uVar10 & 1) == 0) goto LAB_0042fd70;
                pbVar13 = *(byte **)(param_1 + 8);
                pbVar12 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x24) = local_5c;
              *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
              if ((pbVar13 < pbVar12) && (*pbVar13 == 0x28)) {
                pbVar13 = pbVar13 + 1;
                *(byte **)(param_1 + 8) = pbVar13;
                if (pbVar13 < pbVar12) {
LAB_0042fbc0:
                  if ((char)*pbVar13 < '\0') goto LAB_0042fd1c;
                    /* try { // try from 0042fbcc to 0052fc07 has its CatchHandler @ 0042ff3c */
                  pbVar14 = pbVar13 + 1;
                  local_5c = (uint)*pbVar13;
                  *(byte **)(param_1 + 8) = pbVar14;
                }
                else {
LAB_0042fd1c:
                  uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_5c);
                  if ((uVar10 & 1) == 0) goto LAB_0042fd70;
                  pbVar14 = *(byte **)(param_1 + 8);
                  pbVar12 = *(byte **)(param_1 + 0x10);
                }
                *(uint *)(this + 0x28) = local_5c;
                *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
                if ((pbVar14 == pbVar12) && (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar9 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_0042fd7c;
                }
              }
            }
          }
        }
        goto LAB_0042fae8;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 2) goto LAB_0042fc28;
      break;
    case 3:
      if ((uVar8 & 7) == 5) goto LAB_0042fc84;
      break;
    case 4:
      if ((uVar10 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar12) goto LAB_0042fc00;
        goto LAB_0042fcd0;
      }
      break;
    case 5:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_0042fbc0;
        goto LAB_0042fd1c;
      }
    }
    if ((uVar8 & 7) == 4) goto LAB_0042fd78;
    uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    if ((uVar10 & 1) == 0) {
LAB_0042fd70:
      uVar9 = 0;
LAB_0042fd7c:
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
      return;
    }
  } while( true );
}


