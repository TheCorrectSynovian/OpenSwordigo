/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419134
 * Function: Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BreakableObjectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream
          (BreakableObjectComponent *this,CodedInputStream *param_1)

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
  Program *this_00;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00419168:
  pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00418828 with catch @ 0041916c */
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_00419444;
LAB_004191a8:
                    /* catch() { ... } // from try @ 004187a8 with catch @ 004191a8 */
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar8 <= pbVar9) || ((char)*pbVar9 < '\0')) {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) != 0) {
            pbVar10 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
            goto LAB_0041939c;
          }
          goto LAB_0041944c;
        }
        pbVar10 = pbVar9 + 1;
        local_4c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar10;
LAB_0041939c:
        this[0xc] = (BreakableObjectComponent)(local_4c != 0);
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
        if ((pbVar10 < pbVar8) && (*pbVar10 == 0x10)) {
          pbVar10 = pbVar10 + 1;
                    /* catch() { ... } // from try @ 00418564 with catch @ 004193cc */
          *(byte **)(param_1 + 8) = pbVar10;
          if (pbVar10 < pbVar8) goto LAB_004192cc;
          goto LAB_004193d8;
        }
        goto LAB_00419168;
      }
      break;
    case 2:
      if ((uVar7 & 7) != 0) break;
      pbVar10 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if (pbVar10 < pbVar8) {
LAB_004192cc:
        if ((char)*pbVar10 < '\0') goto LAB_004193d8;
                    /* catch() { ... } // from try @ 004186a4 with catch @ 004192d4 */
                    /* catch() { ... } // from try @ 00418648 with catch @ 004192d8 */
        pbVar9 = pbVar10 + 1;
        local_4c = (uint)*pbVar10;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_004193d8:
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_0041944c;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_4c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
                    /* catch() { ... } // from try @ 00418540 with catch @ 00419404 */
                    /* catch() { ... } // from try @ 004184e4 with catch @ 00419408 */
      if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar8) {
LAB_00419208:
          if ((char)*pbVar9 < '\0') goto LAB_00419424;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
LAB_00419424:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_0041944c;
        }
        if (local_4c < 3) {
          *(uint *)(this + 0x14) = local_4c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
        }
        pcVar1 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00418750 with catch @ 0041923c */
                    /* catch() { ... } // from try @ 004186f4 with catch @ 00419240 */
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\"')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00419268:
          this_00 = *(Program **)(this + 0x18);
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
          if (this_00 == (Program *)0x0) {
            this_00 = operator_new(0x30);
            Program::Program(this_00);
            *(Program **)(this + 0x18) = this_00;
          }
          pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 004186c8 with catch @ 0041929c */
          if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar9 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_0041944c;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0041944c;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* catch() { ... } // from try @ 0041861c with catch @ 00419334 */
          uVar7 = Program::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041944c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
                    /* catch() { ... } // from try @ 004185f8 with catch @ 0041936c */
                    /* catch() { ... } // from try @ 0041859c with catch @ 00419370 */
          if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
             (*(int *)(param_1 + 0x2c) != 0)) {
            uVar6 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_00419450:
            if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar6);
            }
                    /* catch() { ... } // from try @ 004184b8 with catch @ 00419464 */
            return;
          }
        }
      }
      goto LAB_00419168;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00418774 with catch @ 00419204 */
        if (pbVar9 < *(byte **)(param_1 + 0x10)) goto LAB_00419208;
        goto LAB_00419424;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 2) goto LAB_00419268;
    }
    if ((uVar4 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) == 0) {
LAB_0041944c:
        uVar6 = 0;
        goto LAB_00419450;
      }
      goto LAB_00419168;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
                    /* catch() { ... } // from try @ 00418804 with catch @ 004191a4 */
    if (uVar4 != 0) goto LAB_004191a8;
  }
LAB_00419444:
  uVar6 = 1;
  goto LAB_00419450;
}


