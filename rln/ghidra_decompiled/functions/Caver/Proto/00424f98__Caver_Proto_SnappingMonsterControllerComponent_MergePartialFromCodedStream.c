/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424f98
 * Function: Caver::Proto::SnappingMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SnappingMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::MergePartialFromCodedStream
          (SnappingMonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00424fc8:
  pbVar7 = *(byte **)(param_1 + 8);
  if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar7, -1 < (char)bVar1)) {
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    if (bVar1 == 0) goto LAB_004252a8;
LAB_00425008:
    switch((int)(uVar5 >> 3)) {
    case 1:
      if ((uVar5 & 7) != 0) break;
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((pbVar6 <= pbVar7) || ((char)*pbVar7 < '\0')) {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) != 0) {
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
          goto LAB_00425148;
        }
        goto LAB_004252b0;
      }
      pbVar8 = pbVar7 + 1;
      local_3c = (uint)*pbVar7;
      *(byte **)(param_1 + 8) = pbVar8;
LAB_00425148:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if ((pbVar8 < pbVar6) && (*pbVar8 == 0x10)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar6) goto LAB_004250f8;
        goto LAB_0042517c;
      }
      goto LAB_00424fc8;
    case 2:
      if ((uVar5 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if (pbVar8 < pbVar6) {
LAB_004250f8:
        if ((char)*pbVar8 < '\0') goto LAB_0042517c;
        pbVar7 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar7;
      }
      else {
LAB_0042517c:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_004252b0;
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if ((pbVar7 < pbVar6) && (*pbVar7 == 0x18)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar6) {
LAB_00425098:
          if ((char)*pbVar7 < '\0') goto LAB_004251c8;
          pbVar8 = pbVar7 + 1;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar8;
        }
        else {
LAB_004251c8:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_004252b0;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_3c;
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
        if ((pbVar8 < pbVar6) && (*pbVar8 == 0x20)) {
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 8) = pbVar8;
          if (pbVar8 < pbVar6) {
LAB_004250c8:
            if ((char)*pbVar8 < '\0') goto LAB_00425214;
            pbVar7 = pbVar8 + 1;
            local_3c = (uint)*pbVar8;
            *(byte **)(param_1 + 8) = pbVar7;
          }
          else {
LAB_00425214:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_004252b0;
            pbVar7 = *(byte **)(param_1 + 8);
            pbVar6 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x18) = local_3c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
          if ((pbVar7 < pbVar6) && (*pbVar7 == 0x28)) {
            pbVar7 = pbVar7 + 1;
            *(byte **)(param_1 + 8) = pbVar7;
            if (pbVar7 < pbVar6) {
LAB_00425068:
              if ((char)*pbVar7 < '\0') goto LAB_00425260;
              pbVar8 = pbVar7 + 1;
              local_3c = (uint)*pbVar7;
              *(byte **)(param_1 + 8) = pbVar8;
            }
            else {
LAB_00425260:
              uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar5 & 1) == 0) goto LAB_004252b0;
              pbVar8 = *(byte **)(param_1 + 8);
              pbVar6 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x1c) = local_3c;
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
            if ((pbVar8 == pbVar6) && (*(int *)(param_1 + 0x2c) != 0)) {
              uVar4 = 1;
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
LAB_004252b4:
              if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail(uVar4);
              }
              return;
            }
          }
        }
      }
      goto LAB_00424fc8;
    case 3:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_00425098;
        goto LAB_004251c8;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_004250c8;
        goto LAB_00425214;
      }
      break;
    case 5:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_00425068;
        goto LAB_00425260;
      }
    }
    if (((uint)uVar5 & 7) != 4) {
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar5);
      if ((uVar5 & 1) == 0) {
LAB_004252b0:
        uVar4 = 0;
        goto LAB_004252b4;
      }
      goto LAB_00424fc8;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar5 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_00425008;
  }
LAB_004252a8:
  uVar4 = 1;
  goto LAB_004252b4;
}


