/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040db18
 * Function: Caver::Proto::HealthComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(HealthComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::HealthComponent::MergePartialFromCodedStream
          (HealthComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  Vector2 *this_00;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_0040db44:
  do {
    pbVar11 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar11) || (bVar3 = *pbVar11, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_0040db84;
LAB_0040dd9c:
      uVar7 = 1;
      goto LAB_0040dda8;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar11 + 1;
    if (bVar3 == 0) goto LAB_0040dd9c;
LAB_0040db84:
    iVar5 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar5 == 1) {
      if ((uVar9 & 7) != 0) goto LAB_0040dc98;
      pbVar2 = *(byte **)(param_1 + 8);
      pbVar10 = *(byte **)(param_1 + 0x10);
      if ((pbVar2 < pbVar10) && (-1 < (char)*pbVar2)) {
        pbVar11 = pbVar2 + 1;
        local_4c = (uint)*pbVar2;
        *(byte **)(param_1 + 8) = pbVar11;
      }
      else {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar6 & 1) == 0) goto LAB_0040dda4;
        pbVar11 = *(byte **)(param_1 + 8);
        pbVar10 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if ((pbVar11 < pbVar10) && (*pbVar11 == 0x10)) {
        pbVar11 = pbVar11 + 1;
        *(byte **)(param_1 + 8) = pbVar11;
        if (pbVar11 < pbVar10) {
LAB_0040dbc4:
          if ((char)*pbVar11 < '\0') goto LAB_0040dd7c;
          local_4c = (uint)*pbVar11;
          *(byte **)(param_1 + 8) = pbVar11 + 1;
        }
        else {
LAB_0040dd7c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_0040dda4;
        }
        if (local_4c < 2) {
          *(uint *)(this + 0x10) = local_4c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
        }
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x1a')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0040dc14:
          this_00 = *(Vector2 **)(this + 0x18);
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
          if (this_00 == (Vector2 *)0x0) {
            this_00 = operator_new(0x18);
            Vector2::Vector2(this_00);
            *(Vector2 **)(this + 0x18) = this_00;
          }
          pbVar11 = *(byte **)(param_1 + 8);
          if ((pbVar11 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar11)) {
            local_4c = (uint)*pbVar11;
            *(byte **)(param_1 + 8) = pbVar11 + 1;
          }
          else {
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar6 & 1) == 0) goto LAB_0040dda4;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040dda4;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar6 = Vector2::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040dda4;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
             (*(int *)(param_1 + 0x2c) != 0)) {
            uVar7 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
            goto LAB_0040dda8;
          }
        }
      }
      goto LAB_0040db44;
    }
    if (iVar5 == 2) {
      if ((uVar9 & 7) == 0) {
        pbVar11 = *(byte **)(param_1 + 8);
        if (pbVar11 < *(byte **)(param_1 + 0x10)) goto LAB_0040dbc4;
        goto LAB_0040dd7c;
      }
    }
    else if ((iVar5 == 3) && ((uVar8 & 7) == 2)) goto LAB_0040dc14;
LAB_0040dc98:
    if ((uVar8 & 7) == 4) goto LAB_0040dd9c;
    uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    if ((uVar6 & 1) == 0) {
LAB_0040dda4:
      uVar7 = 0;
LAB_0040dda8:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


