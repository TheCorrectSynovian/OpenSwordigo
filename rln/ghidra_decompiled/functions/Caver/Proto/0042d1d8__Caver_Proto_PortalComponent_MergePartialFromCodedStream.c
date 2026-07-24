/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d1d8
 * Function: Caver::Proto::PortalComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PortalComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PortalComponent::MergePartialFromCodedStream
          (PortalComponent *this,CodedInputStream *param_1)

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
  
  puVar7 = PTR__default_spawn_point_name__007e72a0;
  puVar6 = PTR__default_destination_scene_name__007e6a68;
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
                    /* try { // try from 0042d1f8 to 0052d1fb has its CatchHandler @ 0042d224 */
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0042d1fc to 0052d23b has its CatchHandler @ 0042d0c0 */
                    /* catch() { ... } // from try @ 0042d1f8 with catch @ 0042d224 */
                    /* catch() { ... } // from try @ 0042d174 with catch @ 0042d228 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0042d22c:
  do {
    pbVar14 = *(byte **)(param_1 + 8);
                    /* try { // try from 0042d23c to 0052d26b has its CatchHandler @ 0042d23c
                       catch() { ... } // from try @ 0042d23c with catch @ 0042d23c
                       catch() { ... } // from try @ 0042d668 with catch @ 0042d23c */
    if ((*(byte **)(param_1 + 0x10) <= pbVar14) || (bVar3 = *pbVar14, (char)bVar3 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar10 = (ulong)uVar8;
      *(uint *)(param_1 + 0x20) = uVar8;
      if (uVar8 != 0) goto LAB_0042d26c;
LAB_0042d470:
      uVar9 = 1;
      goto LAB_0042d474;
    }
    uVar10 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar3 == 0) goto LAB_0042d470;
LAB_0042d26c:
                    /* try { // try from 0042d26c to 0052d27f has its CatchHandler @ 0042ddb0 */
    uVar8 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
                    /* try { // try from 0042d290 to 0052d29b has its CatchHandler @ 0042dd44 */
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        if (psVar11 == (string *)puVar6) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
                    /* try { // try from 0042d2c0 to 0052d2fb has its CatchHandler @ 0042dce0 */
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_0042d468;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0042d35c:
          psVar11 = *(string **)(this + 0x18);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
          if (psVar11 == (string *)puVar7) {
            psVar11 = operator_new(8);
                    /* try { // try from 0042d37c to 0052d3b7 has its CatchHandler @ 0042dc48 */
            *(undefined **)psVar11 = puVar5 + 0x18;
            *(string **)(this + 0x18) = psVar11;
          }
          uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
          if ((uVar10 & 1) == 0) goto LAB_0042d468;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar12 = *(byte **)(param_1 + 0x10);
          if ((pbVar13 < pbVar12) && (*pbVar13 == 0x18)) {
            pbVar13 = pbVar13 + 1;
            *(byte **)(param_1 + 8) = pbVar13;
            if (pbVar13 < pbVar12) {
LAB_0042d304:
              if ((char)*pbVar13 < '\0') goto LAB_0042d3c0;
              pbVar14 = pbVar13 + 1;
              local_5c = (uint)*pbVar13;
              *(byte **)(param_1 + 8) = pbVar14;
            }
            else {
LAB_0042d3c0:
              uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_5c);
              if ((uVar10 & 1) == 0) goto LAB_0042d468;
              pbVar14 = *(byte **)(param_1 + 8);
              pbVar12 = *(byte **)(param_1 + 0x10);
            }
                    /* try { // try from 0042d3d8 to 0052d3eb has its CatchHandler @ 0042dc44 */
            this[0x20] = (PortalComponent)(local_5c != 0);
            *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
                    /* try { // try from 0042d3fc to 0052d407 has its CatchHandler @ 0042dc0c */
            if ((pbVar14 < pbVar12) && (*pbVar14 == 0x20)) {
              pbVar14 = pbVar14 + 1;
              *(byte **)(param_1 + 8) = pbVar14;
              if (pbVar14 < pbVar12) {
LAB_0042d334:
                if ((char)*pbVar14 < '\0') goto LAB_0042d414;
                pbVar13 = pbVar14 + 1;
                local_5c = (uint)*pbVar14;
                    /* try { // try from 0042d348 to 0052d353 has its CatchHandler @ 0042dca4 */
                *(byte **)(param_1 + 8) = pbVar13;
              }
              else {
LAB_0042d414:
                uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_5c);
                if ((uVar10 & 1) == 0) goto LAB_0042d468;
                    /* try { // try from 0042d428 to 0052d463 has its CatchHandler @ 0042dbb0 */
                pbVar13 = *(byte **)(param_1 + 8);
                pbVar12 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0xc) = local_5c;
              *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
              if ((pbVar13 == pbVar12) && (*(int *)(param_1 + 0x2c) != 0)) {
                uVar9 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                    /* try { // try from 0042d4a8 to 0052d4b3 has its CatchHandler @ 0042db74 */
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_0042d474;
              }
            }
          }
        }
        goto LAB_0042d22c;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 2) goto LAB_0042d35c;
      break;
    case 3:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_0042d304;
        goto LAB_0042d3c0;
      }
      break;
    case 4:
                    /* try { // try from 0042d324 to 0052d337 has its CatchHandler @ 0042dcdc */
      if ((uVar10 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar12) goto LAB_0042d334;
        goto LAB_0042d414;
      }
    }
    if ((uVar8 & 7) == 4) goto LAB_0042d470;
    uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    if ((uVar10 & 1) == 0) {
LAB_0042d468:
      uVar9 = 0;
LAB_0042d474:
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
                    /* try { // try from 0042d484 to 0052d497 has its CatchHandler @ 0042dbac */
      return;
    }
  } while( true );
}


