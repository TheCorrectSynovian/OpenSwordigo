/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc144
 * Function: Caver::Proto::ObjectTemplate::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ObjectTemplate * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ObjectTemplate::MergePartialFromCodedStream
          (ObjectTemplate *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  SceneObject *this_00;
  uint local_5c;
  long local_58;
  
  puVar7 = PTR__default_identifier__007e5320;
  puVar6 = PTR__default_template_name__007e5070;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e6240 + 0x10;
LAB_003fc1a4:
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = uVar9 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar9;
    if ((int)uVar9 != 0) goto LAB_003fc1e4;
LAB_003fc380:
    uVar10 = 1;
    goto LAB_003fc38c;
  }
  uVar12 = (ulong)bVar4;
  *(uint *)(param_1 + 0x20) = (uint)bVar4;
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  if (bVar4 == 0) goto LAB_003fc380;
LAB_003fc1e4:
  iVar8 = (int)(uVar12 >> 3);
  uVar11 = (uint)uVar12;
  if (iVar8 != 1) {
    if ((iVar8 == 2) && ((uVar11 & 7) == 5)) {
LAB_003fc338:
      uVar9 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_5c);
      if ((uVar9 & 1) == 0) goto LAB_003fc388;
      *(uint *)(this + 0x18) = local_5c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003fc38c:
        if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar10);
        }
        return;
      }
    }
    else {
LAB_003fc298:
      if ((uVar11 & 7) == 4) goto LAB_003fc380;
      uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
      if ((uVar9 & 1) == 0) goto LAB_003fc388;
    }
    goto LAB_003fc1a4;
  }
  if ((uVar11 & 7) != 2) goto LAB_003fc298;
  this_00 = *(SceneObject **)(this + 0x10);
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
  if (this_00 == (SceneObject *)0x0) {
    this_00 = operator_new(0x90);
    *(undefined **)this_00 = puVar1;
    *(SceneObject **)(this_00 + 0x20) = this_00 + 0x38;
    *(long *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x30) = 4;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined **)(this_00 + 0x18) = puVar7;
    *(undefined **)(this_00 + 0x10) = puVar6;
    *(long *)(this_00 + 0x58) = 0;
    *(long *)(this_00 + 0x60) = 0;
    *(undefined4 *)(this_00 + 0x68) = 0x3f800000;
    *(long *)(this_00 + 0x70) = 0;
    this_00[0x78] = (SceneObject)0x0;
    *(long *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x88) = 0;
    *(SceneObject **)(this + 0x10) = this_00;
  }
  pbVar2 = *(byte **)(param_1 + 8);
  if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
    local_5c = (uint)*pbVar2;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
  }
  else {
    uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
    if ((uVar9 & 1) == 0) goto LAB_003fc388;
  }
  iVar8 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar8 + 1;
  if (iVar8 < *(int *)(param_1 + 0x3c)) {
    iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
    uVar9 = SceneObject::MergePartialFromCodedStream(this_00,param_1);
    if (((uVar9 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x15')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
        goto LAB_003fc338;
      }
      goto LAB_003fc1a4;
    }
  }
LAB_003fc388:
  uVar10 = 0;
  goto LAB_003fc38c;
}


