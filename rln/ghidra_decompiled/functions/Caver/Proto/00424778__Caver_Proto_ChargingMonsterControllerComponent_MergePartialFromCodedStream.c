/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424778
 * Function: Caver::Proto::ChargingMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ChargingMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::MergePartialFromCodedStream
          (ChargingMonsterControllerComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
LAB_004247a8:
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar8, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar2 == 0) goto LAB_00424a38;
LAB_004247e8:
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 <= pbVar8) || ((char)*pbVar8 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) != 0) {
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          goto LAB_004248e8;
        }
        goto LAB_00424a40;
      }
      pbVar9 = pbVar8 + 1;
      local_3c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar9;
LAB_004248e8:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if ((pbVar9 < pbVar7) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar7) goto LAB_00424898;
        goto LAB_0042491c;
      }
      goto LAB_004247a8;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar7) {
LAB_00424898:
          if ((char)*pbVar9 < '\0') goto LAB_0042491c;
          pbVar8 = pbVar9 + 1;
          local_3c = (uint)*pbVar9;
                    /* try { // try from 004248ac to 005248af has its CatchHandler @ 004249bc */
          *(byte **)(param_1 + 8) = pbVar8;
                    /* try { // try from 004248b0 to 0052493b has its CatchHandler @ 004247dc */
        }
        else {
LAB_0042491c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00424a40;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_3c;
                    /* try { // try from 0042493c to 0052493f has its CatchHandler @ 004249b8 */
                    /* try { // try from 00424940 to 00524977 has its CatchHandler @ 004247dc */
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
        if ((pbVar8 < pbVar7) && (*pbVar8 == 0x18)) {
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 8) = pbVar8;
          if (pbVar8 < pbVar7) {
LAB_00424858:
            if ((char)*pbVar8 < '\0') goto LAB_00424968;
            pbVar9 = pbVar8 + 1;
            local_3c = (uint)*pbVar8;
            *(byte **)(param_1 + 8) = pbVar9;
          }
          else {
LAB_00424968:
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_00424a40;
                    /* try { // try from 00424978 to 0052497b has its CatchHandler @ 004249b4 */
                    /* try { // try from 0042497c to 005249cf has its CatchHandler @ 004247dc */
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar7 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x14) = local_3c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
          if ((pbVar9 < pbVar7) && (*pbVar9 == 0x25)) {
            *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_004249ac:
                    /* catch() { ... } // from try @ 00424978 with catch @ 004249b4 */
            uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_3c);
                    /* catch() { ... } // from try @ 0042493c with catch @ 004249b8 */
            if ((uVar6 & 1) == 0) goto LAB_00424a40;
                    /* catch() { ... } // from try @ 004248ac with catch @ 004249bc */
            *(uint *)(this + 0x18) = local_3c;
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
                    /* catch() { ... } // from try @ 00424f64 with catch @ 004249d0 */
            pcVar1 = *(char **)(param_1 + 8);
            if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
              *(char **)(param_1 + 8) = pcVar1 + 1;
              goto LAB_004249f0;
            }
          }
        }
        goto LAB_004247a8;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_00424858;
        goto LAB_00424968;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 5) goto LAB_004249ac;
      break;
    case 5:
      if ((uVar4 & 7) != 5) break;
LAB_004249f0:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
                    /* try { // try from 004249fc to 00524a0f has its CatchHandler @ 004258ec */
      if ((uVar6 & 1) == 0) goto LAB_00424a40;
      *(uint *)(this + 0x1c) = local_3c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
                    /* try { // try from 00424a1c to 00524a27 has its CatchHandler @ 00425880 */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00424a44:
                    /* try { // try from 00424a4c to 00524a87 has its CatchHandler @ 0042581c */
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
      goto LAB_004247a8;
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_00424a40:
        uVar5 = 0;
        goto LAB_00424a44;
      }
      goto LAB_004247a8;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
                    /* try { // try from 004247dc to 005248ab has its CatchHandler @ 004247dc
                       catch() { ... } // from try @ 004247dc with catch @ 004247dc
                       catch() { ... } // from try @ 004248b0 with catch @ 004247dc
                       catch() { ... } // from try @ 00424940 with catch @ 004247dc
                       catch() { ... } // from try @ 0042497c with catch @ 004247dc */
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_004247e8;
  }
LAB_00424a38:
  uVar5 = 1;
  goto LAB_00424a44;
}


