/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfdb0
 * Function: Caver::Proto::Circle::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Circle * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Circle::MergePartialFromCodedStream(Circle *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  Vector2 *this_00;
  uint local_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e6758 + 0x10;
LAB_003cfde8:
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
    uVar7 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar10 = uVar7 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar7;
    if ((int)uVar7 != 0) goto LAB_003cfe28;
LAB_003cff98:
    uVar8 = 1;
    goto LAB_003cffa4;
  }
  uVar10 = (ulong)bVar4;
  *(uint *)(param_1 + 0x20) = (uint)bVar4;
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  if (bVar4 == 0) goto LAB_003cff98;
LAB_003cfe28:
  iVar6 = (int)(uVar10 >> 3);
  uVar9 = (uint)uVar10;
  if (iVar6 != 1) {
    if ((iVar6 == 2) && ((uVar9 & 7) == 5)) {
LAB_003cff50:
      uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar7 & 1) == 0) goto LAB_003cffa0;
      *(uint *)(this + 0x18) = local_4c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar8 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003cffa4:
        if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar8);
        }
        return;
      }
    }
    else {
LAB_003cfeb0:
      if ((uVar9 & 7) == 4) goto LAB_003cff98;
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar7 & 1) == 0) goto LAB_003cffa0;
    }
    goto LAB_003cfde8;
  }
  if ((uVar9 & 7) != 2) goto LAB_003cfeb0;
  this_00 = *(Vector2 **)(this + 0x10);
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
  if (this_00 == (Vector2 *)0x0) {
    this_00 = operator_new(0x18);
    *(long *)(this_00 + 8) = 0;
    *(long *)(this_00 + 0x10) = 0;
    *(undefined **)this_00 = puVar1;
    *(Vector2 **)(this + 0x10) = this_00;
  }
  pbVar2 = *(byte **)(param_1 + 8);
  if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
    local_4c = (uint)*pbVar2;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
  }
  else {
    uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
    if ((uVar7 & 1) == 0) goto LAB_003cffa0;
  }
  iVar6 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar6 + 1;
  if (iVar6 < *(int *)(param_1 + 0x3c)) {
    iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
    uVar7 = Vector2::MergePartialFromCodedStream(this_00,param_1);
    if (((uVar7 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x15')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
        goto LAB_003cff50;
      }
      goto LAB_003cfde8;
    }
  }
LAB_003cffa0:
  uVar8 = 0;
  goto LAB_003cffa4;
}


