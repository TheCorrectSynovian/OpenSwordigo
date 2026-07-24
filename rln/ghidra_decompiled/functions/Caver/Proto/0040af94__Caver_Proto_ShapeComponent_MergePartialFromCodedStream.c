/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040af94
 * Function: Caver::Proto::ShapeComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ShapeComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ShapeComponent::MergePartialFromCodedStream
          (ShapeComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  Rectangle *this_00;
  Circle *this_01;
  Polygon *this_02;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_0040afc0:
  pbVar1 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
    uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar9 = uVar6 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar6;
    if ((int)uVar6 != 0) goto LAB_0040b000;
LAB_0040b2f8:
    uVar7 = 1;
    goto LAB_0040b2fc;
  }
  uVar9 = (ulong)bVar3;
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
  *(byte **)(param_1 + 8) = pbVar1 + 1;
  if (bVar3 == 0) goto LAB_0040b2f8;
LAB_0040b000:
  iVar5 = (int)(uVar9 >> 3);
  uVar8 = (uint)uVar9;
  if (iVar5 == 1) {
    if ((uVar8 & 7) != 2) goto LAB_0040b09c;
    this_00 = *(Rectangle **)(this + 0x10);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    if (this_00 == (Rectangle *)0x0) {
      this_00 = operator_new(0x20);
      Rectangle::Rectangle(this_00);
      *(Rectangle **)(this + 0x10) = this_00;
    }
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
      uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar6 & 1) == 0) goto LAB_0040b2f0;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar5 + 1;
    if (iVar5 < *(int *)(param_1 + 0x3c)) {
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar6 = Rectangle::MergePartialFromCodedStream(this_00,param_1);
      if (((uVar6 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
          goto LAB_0040b13c;
        }
        goto LAB_0040afc0;
      }
    }
  }
  else {
    if (iVar5 != 2) {
      if ((iVar5 == 3) && ((uVar8 & 7) == 2)) {
LAB_0040b214:
        this_02 = *(Polygon **)(this + 0x20);
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
        if (this_02 == (Polygon *)0x0) {
          this_02 = operator_new(0x50);
          Polygon::Polygon(this_02);
          *(Polygon **)(this + 0x20) = this_02;
        }
        pbVar1 = *(byte **)(param_1 + 8);
        if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_4c = (uint)*pbVar1;
          *(byte **)(param_1 + 8) = pbVar1 + 1;
        }
        else {
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_0040b2f0;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040b2f0;
        iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
        uVar6 = Polygon::MergePartialFromCodedStream(this_02,param_1);
        if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040b2f0;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_0040b2fc:
          if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar7);
          }
          return;
        }
      }
      else {
LAB_0040b09c:
        if ((uVar8 & 7) == 4) goto LAB_0040b2f8;
        uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
        if ((uVar6 & 1) == 0) goto LAB_0040b2f0;
      }
      goto LAB_0040afc0;
    }
    if ((uVar8 & 7) != 2) goto LAB_0040b09c;
LAB_0040b13c:
    this_01 = *(Circle **)(this + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
    if (this_01 == (Circle *)0x0) {
      this_01 = operator_new(0x20);
      Circle::Circle(this_01);
      *(Circle **)(this + 0x18) = this_01;
    }
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
      uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar6 & 1) == 0) goto LAB_0040b2f0;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar5 + 1;
    if (iVar5 < *(int *)(param_1 + 0x3c)) {
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar6 = Circle::MergePartialFromCodedStream(this_01,param_1);
      if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040b2f0;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar2 = *(char **)(param_1 + 8);
      if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
        *(char **)(param_1 + 8) = pcVar2 + 1;
        goto LAB_0040b214;
      }
      goto LAB_0040afc0;
    }
  }
LAB_0040b2f0:
  uVar7 = 0;
  goto LAB_0040b2fc;
}


