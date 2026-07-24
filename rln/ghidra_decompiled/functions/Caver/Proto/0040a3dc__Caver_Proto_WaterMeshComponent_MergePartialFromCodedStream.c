/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a3dc
 * Function: Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(WaterMeshComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream
          (WaterMeshComponent *this,CodedInputStream *param_1)

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
  FloatColor *pFVar11;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_0040a410:
  pbVar9 = *(byte **)(param_1 + 8);
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_0040a754;
LAB_0040a450:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar8 <= pbVar10) || ((char)*pbVar10 < '\0')) {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) != 0) {
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
            goto LAB_0040a524;
          }
          goto LAB_0040a74c;
        }
        pbVar9 = pbVar10 + 1;
        local_4c = (uint)*pbVar10;
        *(byte **)(param_1 + 8) = pbVar9;
LAB_0040a524:
        *(uint *)(this + 0xc) = local_4c;
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
        if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar8) goto LAB_0040a4d4;
          goto LAB_0040a558;
        }
        goto LAB_0040a410;
      }
      break;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) {
LAB_0040a4d4:
          if ((char)*pbVar9 < '\0') goto LAB_0040a558;
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
LAB_0040a558:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_0040a74c;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_4c;
        uVar4 = *(uint *)(this + 0x28) | 2;
        *(uint *)(this + 0x28) = uVar4;
        if ((pbVar8 <= pbVar10) || (*pbVar10 != 0x1a)) goto LAB_0040a410;
        *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_0040a59c:
        pFVar11 = *(FloatColor **)(this + 0x18);
        *(uint *)(this + 0x28) = uVar4 | 4;
        if (pFVar11 == (FloatColor *)0x0) {
          pFVar11 = operator_new(0x20);
          FloatColor::FloatColor(pFVar11);
          *(FloatColor **)(this + 0x18) = pFVar11;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_0040a74c;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (iVar5 < *(int *)(param_1 + 0x3c)) {
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = FloatColor::MergePartialFromCodedStream(pFVar11,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040a74c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\"')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_0040a670;
          }
          goto LAB_0040a410;
        }
        goto LAB_0040a74c;
      }
      break;
    case 3:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x28);
        goto LAB_0040a59c;
      }
      break;
    case 4:
      if ((uVar4 & 7) != 2) break;
LAB_0040a670:
      pFVar11 = *(FloatColor **)(this + 0x20);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
      if (pFVar11 == (FloatColor *)0x0) {
        pFVar11 = operator_new(0x20);
        FloatColor::FloatColor(pFVar11);
        *(FloatColor **)(this + 0x20) = pFVar11;
      }
      pbVar9 = *(byte **)(param_1 + 8);
      if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
        local_4c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar9 + 1;
      }
      else {
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_0040a74c;
      }
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040a74c;
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar7 = FloatColor::MergePartialFromCodedStream(pFVar11,param_1);
      if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040a74c;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0040a758:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
        return;
      }
      goto LAB_0040a410;
    }
    if ((uVar4 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_0040a410;
LAB_0040a74c:
      uVar6 = 0;
      goto LAB_0040a758;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_0040a450;
  }
LAB_0040a754:
  uVar6 = 1;
  goto LAB_0040a758;
}


