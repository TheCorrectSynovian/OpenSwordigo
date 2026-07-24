/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc0a4
 * Function: Caver::Proto::MapNode_Portal::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MapNode_Portal * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MapNode_Portal::MergePartialFromCodedStream
          (MapNode_Portal *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  string *psVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_4c;
  long local_48;
  
  puVar4 = PTR__default_destination_name__007e6b58;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003dc0ec:
  pbVar9 = *(byte **)(param_1 + 8);
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_003dc35c;
LAB_003dc12c:
    uVar5 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar5 & 7) != 2) break;
      psVar8 = *(string **)(this + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      if (psVar8 == (string *)puVar4) {
        psVar8 = operator_new(8);
        *(undefined **)psVar8 = puVar1;
        *(string **)(this + 0x10) = psVar8;
      }
      uVar7 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar8);
      if ((uVar7 & 1) == 0) goto LAB_003dc354;
      pbVar9 = *(byte **)(param_1 + 8);
      if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < *(byte **)(param_1 + 0x10)) goto LAB_003dc1b4;
        goto LAB_003dc2c4;
      }
      goto LAB_003dc0ec;
    case 2:
      if ((uVar7 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      if (pbVar9 < *(byte **)(param_1 + 0x10)) {
LAB_003dc1b4:
        if ((char)*pbVar9 < '\0') goto LAB_003dc2c4;
        local_4c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar9 + 1;
      }
      else {
LAB_003dc2c4:
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_003dc354;
      }
      if (local_4c - 1 < 8) {
        *(uint *)(this + 0x18) = local_4c;
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      }
      pbVar9 = *(byte **)(param_1 + 8);
      if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (*pbVar9 == 0x18)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < *(byte **)(param_1 + 0x10)) {
LAB_003dc1e4:
          if ((char)*pbVar9 < '\0') goto LAB_003dc31c;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
LAB_003dc31c:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_003dc354;
        }
        if (local_4c < 3) {
          *(uint *)(this + 0x1c) = local_4c;
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar10 = *(byte **)(param_1 + 0x10);
        if ((pbVar9 < pbVar10) && (*pbVar9 == 0x20)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar10) {
LAB_003dc23c:
            if ((char)*pbVar9 < '\0') goto LAB_003dc26c;
            pbVar11 = pbVar9 + 1;
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar11;
          }
          else {
LAB_003dc26c:
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_003dc354;
            pbVar11 = *(byte **)(param_1 + 8);
            pbVar10 = *(byte **)(param_1 + 0x10);
          }
          this[0x20] = (MapNode_Portal)(local_4c != 0);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
          if ((pbVar11 == pbVar10) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar6 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_003dc360:
            if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar6);
            }
            return;
          }
        }
      }
      goto LAB_003dc0ec;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        if (pbVar9 < *(byte **)(param_1 + 0x10)) goto LAB_003dc1e4;
        goto LAB_003dc31c;
      }
      break;
    case 4:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar10 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar10) goto LAB_003dc23c;
        goto LAB_003dc26c;
      }
    }
    if ((uVar5 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
      if ((uVar7 & 1) == 0) {
LAB_003dc354:
        uVar6 = 0;
        goto LAB_003dc360;
      }
      goto LAB_003dc0ec;
    }
  }
  else {
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar5;
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 0) goto LAB_003dc12c;
  }
LAB_003dc35c:
  uVar6 = 1;
  goto LAB_003dc360;
}


