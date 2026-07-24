/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415cd0
 * Function: Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PressureTriggerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream
          (PressureTriggerComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  Program *pPVar11;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00415d04:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar2 = *pbVar9, (char)bVar2 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_00415d44;
LAB_0041602c:
      uVar6 = 1;
      goto LAB_00416030;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_0041602c;
LAB_00415d44:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar4 & 7) == 5) {
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00416024;
        *(uint *)(this + 0xc) = local_4c;
        uVar4 = *(uint *)(this + 0x28) | 1;
        *(uint *)(this + 0x28) = uVar4;
        pcVar1 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00415bac with catch @ 00415d98 */
                    /* catch() { ... } // from try @ 00415c6c with catch @ 00415d9c */
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00415e04:
          pPVar11 = *(Program **)(this + 0x18);
          *(uint *)(this + 0x28) = uVar4 | 4;
          if (pPVar11 == (Program *)0x0) {
            pPVar11 = operator_new(0x30);
            Program::Program(pPVar11);
            *(Program **)(this + 0x18) = pPVar11;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar9 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_00416024;
          }
                    /* try { // try from 00415e7c to 00515e7f has its CatchHandler @ 00415e98 */
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00416024;
                    /* catch() { ... } // from try @ 00415e7c with catch @ 00415e98 */
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* try { // try from 00415e9c to 00515e9f has its CatchHandler @ 00415ea4 */
                    /* try { // try from 00415ea0 to 00515f13 has its CatchHandler @ 00415aa8 */
                    /* catch() { ... } // from try @ 00415e9c with catch @ 00415ea4 */
                    /* catch() { ... } // from try @ 00415b78 with catch @ 00415ea8 */
          uVar7 = Program::MergePartialFromCodedStream(pPVar11,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00416024;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00415ef4:
            pPVar11 = *(Program **)(this + 0x20);
            *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
            if (pPVar11 == (Program *)0x0) {
              pPVar11 = operator_new(0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00415f64 with catch @ 00415f14
                       catch(type#1 @ 00000000) { ... } // from try @ 00416048 with catch @ 00415f14
                        */
              Program::Program(pPVar11);
              *(Program **)(this + 0x20) = pPVar11;
            }
            pbVar9 = *(byte **)(param_1 + 8);
            if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
              local_4c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar9 + 1;
            }
            else {
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00416024;
            }
            iVar5 = *(int *)(param_1 + 0x38);
                    /* try { // try from 00415f60 to 00515f63 has its CatchHandler @ 00415fbc */
            *(int *)(param_1 + 0x38) = iVar5 + 1;
                    /* try { // try from 00415f64 to 0051603b has its CatchHandler @ 00415f14 */
            if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00416024;
            iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
            uVar7 = Program::MergePartialFromCodedStream(pPVar11,param_1);
            if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00416024;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00415f60 with catch @ 00415fbc
                        */
            if ((pbVar9 < pbVar8) && (*pbVar9 == 0x20)) {
              pbVar9 = pbVar9 + 1;
              *(byte **)(param_1 + 8) = pbVar9;
              if (pbVar9 < pbVar8) {
LAB_00415dd8:
                if ((char)*pbVar9 < '\0') goto LAB_00415fd4;
                pbVar10 = pbVar9 + 1;
                local_4c = (uint)*pbVar9;
                *(byte **)(param_1 + 8) = pbVar10;
              }
              else {
LAB_00415fd4:
                uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_4c);
                if ((uVar7 & 1) == 0) goto LAB_00416024;
                pbVar10 = *(byte **)(param_1 + 8);
                pbVar8 = *(byte **)(param_1 + 0x10);
              }
              this[0x10] = (PressureTriggerComponent)(local_4c != 0);
              *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
              if ((pbVar10 == pbVar8) && (*(int *)(param_1 + 0x2c) != 0)) {
                uVar6 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_00416030;
              }
            }
          }
        }
        goto LAB_00415d04;
      }
      break;
    case 2:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x28);
        goto LAB_00415e04;
      }
      break;
    case 3:
      if ((uVar4 & 7) == 2) goto LAB_00415ef4;
      break;
    case 4:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_00415dd8;
        goto LAB_00415fd4;
      }
    }
    if ((uVar4 & 7) == 4) goto LAB_0041602c;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_00416024:
      uVar6 = 0;
LAB_00416030:
                    /* try { // try from 0041603c to 0051603f has its CatchHandler @ 00416040 */
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041603c with catch @ 00416040
                        */
                    /* try { // try from 00416044 to 00516047 has its CatchHandler @ 00416050 */
                    /* try { // try from 00416048 to 00516053 has its CatchHandler @ 00415f14 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00416044 with catch @ 00416050
                        */
                    /* catch() { ... } // from try @ 004162f4 with catch @ 00416054
                       catch() { ... } // from try @ 00416624 with catch @ 00416054 */
      return;
    }
  } while( true );
}


