/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004165bc
 * Function: Caver::Proto::DoorControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(DoorControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::DoorControllerComponent::MergePartialFromCodedStream
          (DoorControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_004165ec:
  do {
    pbVar8 = *(byte **)(param_1 + 8);
                    /* try { // try from 004165fc to 00516623 has its CatchHandler @ 0041662c */
    if ((*(byte **)(param_1 + 0x10) <= pbVar8) || (bVar1 = *pbVar8, (char)bVar1 < '\0')) {
      uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar5 = (ulong)uVar3;
                    /* try { // try from 00416624 to 00516657 has its CatchHandler @ 00416054 */
      *(uint *)(param_1 + 0x20) = uVar3;
      if (uVar3 != 0) goto LAB_0041662c;
LAB_004168e0:
      uVar4 = 1;
      goto LAB_004168ec;
    }
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar1 == 0) goto LAB_004168e0;
LAB_0041662c:
                    /* catch() { ... } // from try @ 004165fc with catch @ 0041662c */
                    /* catch() { ... } // from try @ 004165b8 with catch @ 00416638 */
    switch((int)(uVar5 >> 3)) {
    case 1:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00416658 to 0051667f has its CatchHandler @ 00416688 */
        if ((pbVar8 < pbVar6) && (-1 < (char)*pbVar8)) {
          pbVar7 = pbVar8 + 1;
          local_3c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar7;
        }
        else {
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_004168e8;
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_3c;
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
        if ((pbVar7 < pbVar6) && (*pbVar7 == 0x10)) {
          pbVar7 = pbVar7 + 1;
          *(byte **)(param_1 + 8) = pbVar7;
          if (pbVar7 < pbVar6) {
LAB_004166cc:
            if ((char)*pbVar7 < '\0') goto LAB_004167ac;
            pbVar8 = pbVar7 + 1;
            local_3c = (uint)*pbVar7;
            *(byte **)(param_1 + 8) = pbVar8;
          }
          else {
LAB_004167ac:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_004168e8;
            pbVar8 = *(byte **)(param_1 + 8);
            pbVar6 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x10) = local_3c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
                    /* try { // try from 004167e4 to 005167f7 has its CatchHandler @ 00416a88 */
          if ((pbVar8 < pbVar6) && (*pbVar8 == 0x20)) {
            pbVar8 = pbVar8 + 1;
            *(byte **)(param_1 + 8) = pbVar8;
            if (pbVar8 < pbVar6) {
LAB_0041669c:
              if ((char)*pbVar8 < '\0') goto LAB_004167f8;
              pbVar7 = pbVar8 + 1;
              local_3c = (uint)*pbVar8;
              *(byte **)(param_1 + 8) = pbVar7;
            }
            else {
LAB_004167f8:
              uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar5 & 1) == 0) goto LAB_004168e8;
              pbVar7 = *(byte **)(param_1 + 8);
              pbVar6 = *(byte **)(param_1 + 0x10);
            }
                    /* try { // try from 00416818 to 0051681b has its CatchHandler @ 00416a28 */
            this[0x1c] = (DoorControllerComponent)(local_3c != 0);
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
            if ((pbVar7 < pbVar6) && (*pbVar7 == 0x28)) {
                    /* try { // try from 0041683c to 0051683f has its CatchHandler @ 00416a1c */
              pbVar7 = pbVar7 + 1;
              *(byte **)(param_1 + 8) = pbVar7;
              if (pbVar7 < pbVar6) {
LAB_004166fc:
                if ((char)*pbVar7 < '\0') goto LAB_0041684c;
                pbVar8 = pbVar7 + 1;
                local_3c = (uint)*pbVar7;
                *(byte **)(param_1 + 8) = pbVar8;
              }
              else {
LAB_0041684c:
                uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_3c);
                if ((uVar5 & 1) == 0) goto LAB_004168e8;
                    /* try { // try from 0041685c to 00516863 has its CatchHandler @ 004169ec */
                pbVar8 = *(byte **)(param_1 + 8);
                pbVar6 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x14) = local_3c;
              *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
                    /* try { // try from 00416880 to 00516887 has its CatchHandler @ 004169e0 */
              if ((pbVar8 < pbVar6) && (*pbVar8 == 0x30)) {
                pbVar8 = pbVar8 + 1;
                *(byte **)(param_1 + 8) = pbVar8;
                if (pbVar8 < pbVar6) {
LAB_00416744:
                  if ((char)*pbVar8 < '\0') goto LAB_00416898;
                  pbVar7 = pbVar8 + 1;
                  local_3c = (uint)*pbVar8;
                  *(byte **)(param_1 + 8) = pbVar7;
                }
                else {
LAB_00416898:
                  uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                    (param_1,&local_3c);
                    /* try { // try from 004168a4 to 005168ab has its CatchHandler @ 004169b0 */
                  if ((uVar5 & 1) == 0) goto LAB_004168e8;
                  pbVar7 = *(byte **)(param_1 + 8);
                  pbVar6 = *(byte **)(param_1 + 0x10);
                }
                *(uint *)(this + 0x18) = local_3c;
                *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
                    /* try { // try from 004168c8 to 005168cf has its CatchHandler @ 004169a4 */
                if ((pbVar7 == pbVar6) && (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar4 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_004168ec;
                }
              }
            }
          }
        }
        goto LAB_004165ec;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_004166cc;
        goto LAB_004167ac;
      }
      break;
    default:
      break;
    case 4:
                    /* catch() { ... } // from try @ 00416658 with catch @ 00416688 */
                    /* catch() { ... } // from try @ 0041673c with catch @ 0041668c
                       catch() { ... } // from try @ 00416910 with catch @ 0041668c
                       catch() { ... } // from try @ 00416bb0 with catch @ 0041668c */
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_0041669c;
        goto LAB_004167f8;
      }
      break;
    case 5:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_004166fc;
        goto LAB_0041684c;
      }
      break;
    case 6:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0041673c to 005167e3 has its CatchHandler @ 0041668c */
        if (pbVar8 < pbVar6) goto LAB_00416744;
        goto LAB_00416898;
      }
    }
    if (((uint)uVar5 & 7) == 4) goto LAB_004168e0;
    uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar5);
    if ((uVar5 & 1) == 0) {
LAB_004168e8:
      uVar4 = 0;
LAB_004168ec:
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00416908 to 0051690f has its CatchHandler @ 00416974 */
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00416910 to 00516993 has its CatchHandler @ 0041668c */
      __stack_chk_fail(uVar4);
    }
  } while( true );
}


