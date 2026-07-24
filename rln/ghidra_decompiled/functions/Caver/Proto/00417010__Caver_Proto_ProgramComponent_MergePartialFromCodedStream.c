/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417010
 * Function: Caver::Proto::ProgramComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ProgramComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ProgramComponent::MergePartialFromCodedStream
          (ProgramComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  Program *this_00;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
LAB_00417044:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
      uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = (ulong)uVar3;
      *(uint *)(param_1 + 0x20) = uVar3;
      if (uVar3 != 0) goto LAB_00417084;
LAB_00417328:
      uVar5 = 1;
      goto LAB_00417334;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_00417328;
LAB_00417084:
    uVar3 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar9 < pbVar8) && (-1 < (char)*pbVar9)) {
          pbVar7 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar7;
        }
        else {
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00417330;
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        this[0xd] = (ProgramComponent)(local_4c != 0);
        uVar3 = *(uint *)(this + 0x20) | 2;
        *(uint *)(this + 0x20) = uVar3;
        if ((pbVar7 < pbVar8) && (*pbVar7 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar7 + 1;
LAB_004171d8:
          this_00 = *(Program **)(this + 0x18);
          *(uint *)(this + 0x20) = uVar3 | 8;
          if (this_00 == (Program *)0x0) {
            this_00 = operator_new(0x30);
            Program::Program(this_00);
            *(Program **)(this + 0x18) = this_00;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar9 + 1;
          }
          else {
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar6 & 1) == 0) goto LAB_00417330;
          }
          iVar4 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar4 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar4) goto LAB_00417330;
          iVar4 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar6 = Program::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00417330;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar4);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          if ((pbVar8 < pbVar7) && (*pbVar8 == 0x18)) {
            pbVar8 = pbVar8 + 1;
            *(byte **)(param_1 + 8) = pbVar8;
            if (pbVar8 < pbVar7) {
LAB_004170e4:
              if ((char)*pbVar8 < '\0') goto LAB_004172b4;
              pbVar9 = pbVar8 + 1;
              local_4c = (uint)*pbVar8;
              *(byte **)(param_1 + 8) = pbVar9;
            }
            else {
LAB_004172b4:
              uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar6 & 1) == 0) goto LAB_00417330;
              pbVar9 = *(byte **)(param_1 + 8);
              pbVar7 = *(byte **)(param_1 + 0x10);
            }
            this[0xc] = (ProgramComponent)(local_4c != 0);
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
            if ((pbVar9 < pbVar7) && (*pbVar9 == 0x20)) {
              pbVar9 = pbVar9 + 1;
              *(byte **)(param_1 + 8) = pbVar9;
              if (pbVar9 < pbVar7) {
LAB_00417114:
                if ((char)*pbVar9 < '\0') goto LAB_00417308;
                local_4c = (uint)*pbVar9;
                *(byte **)(param_1 + 8) = pbVar9 + 1;
              }
              else {
LAB_00417308:
                uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_4c);
                if ((uVar6 & 1) == 0) goto LAB_00417330;
              }
              if (local_4c < 0xb) {
                *(uint *)(this + 0x10) = local_4c;
                *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
              }
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                uVar5 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_00417334;
              }
            }
          }
        }
        goto LAB_00417044;
      }
      break;
    case 2:
      if ((uVar3 & 7) == 2) {
        uVar3 = *(uint *)(this + 0x20);
        goto LAB_004171d8;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_004170e4;
        goto LAB_004172b4;
      }
      break;
    case 4:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        if (pbVar9 < *(byte **)(param_1 + 0x10)) goto LAB_00417114;
        goto LAB_00417308;
      }
    }
    if ((uVar3 & 7) == 4) goto LAB_00417328;
    uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar3);
    if ((uVar6 & 1) == 0) {
LAB_00417330:
      uVar5 = 0;
LAB_00417334:
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
      return;
    }
  } while( true );
}


