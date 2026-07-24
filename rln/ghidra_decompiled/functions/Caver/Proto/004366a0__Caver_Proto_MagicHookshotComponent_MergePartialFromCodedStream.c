/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004366a0
 * Function: Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MagicHookshotComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream
          (MagicHookshotComponent *this,CodedInputStream *param_1)

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
  FloatColor *this_00;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
LAB_004366d4:
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar8, -1 < (char)bVar1)) {
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar1 == 0) goto LAB_00436a20;
LAB_00436714:
    uVar3 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 <= pbVar8) || ((char)*pbVar8 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar6 & 1) != 0) {
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          goto LAB_00436838;
        }
        goto LAB_00436a28;
      }
      pbVar9 = pbVar8 + 1;
      local_4c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar9;
LAB_00436838:
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
      if ((pbVar9 < pbVar7) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar7) goto LAB_004367e8;
        goto LAB_0043686c;
      }
      goto LAB_004366d4;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar7) {
LAB_004367e8:
          if ((char)*pbVar9 < '\0') goto LAB_0043686c;
          pbVar8 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar8;
        }
        else {
LAB_0043686c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00436a28;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_4c;
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
        if ((pbVar7 <= pbVar8) || (*pbVar8 != 0x18)) goto LAB_004366d4;
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar7) {
LAB_004367a4:
          if ((char)*pbVar8 < '\0') goto LAB_004368b8;
          pbVar9 = pbVar8 + 1;
          local_4c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_004368b8:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00436a28;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_4c;
        uVar3 = *(uint *)(this + 0x28) | 4;
        *(uint *)(this + 0x28) = uVar3;
        if ((pbVar7 <= pbVar9) || (*pbVar9 != 0x22)) goto LAB_004366d4;
        *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_004368fc:
        this_00 = *(FloatColor **)(this + 0x20);
        *(uint *)(this + 0x28) = uVar3 | 0x10;
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x20) = this_00;
        }
        pbVar8 = *(byte **)(param_1 + 8);
        if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar8)) {
          local_4c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar8 + 1;
        }
        else {
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00436a28;
        }
        iVar4 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar4 + 1;
        if (iVar4 < *(int *)(param_1 + 0x3c)) {
          iVar4 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar6 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00436a28;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar4);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          if ((pbVar8 < pbVar7) && (*pbVar8 == 0x28)) {
            pbVar8 = pbVar8 + 1;
            *(byte **)(param_1 + 8) = pbVar8;
            if (pbVar8 < pbVar7) goto LAB_00436774;
            goto LAB_004369d8;
          }
          goto LAB_004366d4;
        }
        goto LAB_00436a28;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_004367a4;
        goto LAB_004368b8;
      }
      break;
    case 4:
      if ((uVar3 & 7) == 2) {
        uVar3 = *(uint *)(this + 0x28);
        goto LAB_004368fc;
      }
      break;
    case 5:
      if ((uVar6 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if (pbVar8 < pbVar7) {
LAB_00436774:
        if ((char)*pbVar8 < '\0') goto LAB_004369d8;
        pbVar9 = pbVar8 + 1;
        local_4c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_004369d8:
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar6 & 1) == 0) goto LAB_00436a28;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x18) = local_4c;
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
      if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00436a2c:
        if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
      goto LAB_004366d4;
    }
    if ((uVar3 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar3);
      if ((uVar6 & 1) != 0) goto LAB_004366d4;
LAB_00436a28:
      uVar5 = 0;
      goto LAB_00436a2c;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_00436714;
  }
LAB_00436a20:
  uVar5 = 1;
  goto LAB_00436a2c;
}


