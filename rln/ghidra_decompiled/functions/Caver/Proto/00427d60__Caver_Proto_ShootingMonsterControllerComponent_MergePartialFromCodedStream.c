/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427d60
 * Function: Caver::Proto::ShootingMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ShootingMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::MergePartialFromCodedStream
          (ShootingMonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00427010 with catch @ 00427d68 */
                    /* catch() { ... } // from try @ 00426fac with catch @ 00427d6c */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00427d88:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_00427dc8;
LAB_00427eec:
      uVar5 = 1;
      goto LAB_00427ef8;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_00427eec;
LAB_00427dc8:
    iVar3 = (int)(uVar6 >> 3);
                    /* catch() { ... } // from try @ 00426f74 with catch @ 00427dd0 */
    if (iVar3 != 1) {
      if ((iVar3 == 2) && ((uVar6 & 7) == 0)) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_00427df0;
        goto LAB_00427ea4;
      }
LAB_00427e40:
      if (((uint)uVar6 & 7) == 4) goto LAB_00427eec;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_00427ef4:
        uVar5 = 0;
        goto LAB_00427ef8;
      }
      goto LAB_00427d88;
    }
    if ((uVar6 & 7) != 0) goto LAB_00427e40;
    pbVar9 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((pbVar9 < pbVar7) && (-1 < (char)*pbVar9)) {
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_00427ef4;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
    if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      if (pbVar8 < pbVar7) {
LAB_00427df0:
        if ((char)*pbVar8 < '\0') goto LAB_00427ea4;
        pbVar9 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_00427ea4:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_00427ef4;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00427ef8:
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
    }
  } while( true );
}


