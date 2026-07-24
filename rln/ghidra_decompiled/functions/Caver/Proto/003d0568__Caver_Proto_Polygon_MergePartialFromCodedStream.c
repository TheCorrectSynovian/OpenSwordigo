/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0568
 * Function: Caver::Proto::Polygon::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Polygon * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Polygon::MergePartialFromCodedStream(Polygon *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  Vector2 *this_00;
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_vtable_007e6758 + 0x10;
LAB_003d05a8:
  do {
    pbVar11 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar11) || (bVar2 = *pbVar11, (char)bVar2 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = uVar5 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar5;
      if ((int)uVar5 != 0) goto LAB_003d05e8;
LAB_003d0864:
      uVar6 = 1;
      goto LAB_003d0868;
    }
    uVar8 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar11 + 1;
    if (bVar2 == 0) goto LAB_003d0864;
LAB_003d05e8:
    iVar4 = (int)(uVar8 >> 3);
    uVar7 = (uint)uVar8;
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        if ((uVar8 & 7) == 0) {
          pbVar11 = *(byte **)(param_1 + 8);
          pbVar10 = *(byte **)(param_1 + 0x10);
          if (pbVar11 < pbVar10) goto LAB_003d0648;
          goto LAB_003d07ac;
        }
LAB_003d0848:
        if ((uVar7 & 7) == 4) goto LAB_003d0864;
        uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar7);
        if ((uVar5 & 1) == 0) goto LAB_003d085c;
      }
      else {
        if ((iVar4 != 3) || ((uVar8 & 7) != 0)) goto LAB_003d0848;
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar10 = *(byte **)(param_1 + 0x10);
        if (pbVar12 < pbVar10) {
LAB_003d0618:
          if ((char)*pbVar12 < '\0') goto LAB_003d0800;
          pbVar11 = pbVar12 + 1;
          local_5c = (uint)*pbVar12;
          *(byte **)(param_1 + 8) = pbVar11;
        }
        else {
LAB_003d0800:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar5 & 1) == 0) goto LAB_003d085c;
          pbVar11 = *(byte **)(param_1 + 8);
          pbVar10 = *(byte **)(param_1 + 0x10);
        }
        this[0x49] = (Polygon)(local_5c != 0);
        *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 4;
        if ((pbVar11 == pbVar10) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar6 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003d0868:
          if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar6);
          }
          return;
        }
      }
      goto LAB_003d05a8;
    }
    if ((uVar7 & 7) != 2) goto LAB_003d0848;
    while( true ) {
      iVar4 = *(int *)(this + 0x18);
      iVar9 = *(int *)(this + 0x1c);
      if (iVar4 < iVar9) {
        *(int *)(this + 0x18) = iVar4 + 1;
        this_00 = *(Vector2 **)(*(long *)(this + 0x10) + (long)iVar4 * 8);
      }
      else {
        if (iVar9 == *(int *)(this + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x10),iVar9 + 1);
          iVar4 = *(int *)(this + 0x18);
          iVar9 = *(int *)(this + 0x1c);
        }
        *(int *)(this + 0x1c) = iVar9 + 1;
        this_00 = operator_new(0x18);
        *(long *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(undefined **)this_00 = puVar1;
        *(int *)(this + 0x18) = iVar4 + 1;
        *(Vector2 **)(*(long *)(this + 0x10) + (long)iVar4 * 8) = this_00;
      }
      pbVar11 = *(byte **)(param_1 + 8);
      if ((pbVar11 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar11)) {
        local_5c = (uint)*pbVar11;
        *(byte **)(param_1 + 8) = pbVar11 + 1;
      }
      else {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
        if ((uVar5 & 1) == 0) goto LAB_003d085c;
      }
      iVar4 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar4 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar4) goto LAB_003d085c;
      iVar4 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
      uVar5 = Vector2::MergePartialFromCodedStream(this_00,param_1);
      if (((uVar5 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d085c;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar4);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pbVar11 = *(byte **)(param_1 + 8);
      pbVar10 = *(byte **)(param_1 + 0x10);
      if (pbVar10 <= pbVar11) goto LAB_003d05a8;
      if (*pbVar11 != 10) break;
      *(byte **)(param_1 + 8) = pbVar11 + 1;
    }
    if (*pbVar11 == 0x10) {
      pbVar11 = pbVar11 + 1;
      *(byte **)(param_1 + 8) = pbVar11;
      if (pbVar10 <= pbVar11) {
LAB_003d07ac:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
        if ((uVar5 & 1) != 0) {
          pbVar12 = *(byte **)(param_1 + 8);
          pbVar10 = *(byte **)(param_1 + 0x10);
          goto LAB_003d07c4;
        }
LAB_003d085c:
        uVar6 = 0;
        goto LAB_003d0868;
      }
LAB_003d0648:
      if ((char)*pbVar11 < '\0') goto LAB_003d07ac;
      pbVar12 = pbVar11 + 1;
      local_5c = (uint)*pbVar11;
      *(byte **)(param_1 + 8) = pbVar12;
LAB_003d07c4:
      this[0x48] = (Polygon)(local_5c != 0);
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 2;
      if ((pbVar12 < pbVar10) && (*pbVar12 == 0x18)) {
        pbVar12 = pbVar12 + 1;
        *(byte **)(param_1 + 8) = pbVar12;
        if (pbVar12 < pbVar10) goto LAB_003d0618;
        goto LAB_003d0800;
      }
    }
  } while( true );
}


