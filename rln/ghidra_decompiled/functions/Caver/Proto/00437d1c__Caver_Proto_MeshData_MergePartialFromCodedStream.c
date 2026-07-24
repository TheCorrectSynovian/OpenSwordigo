/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437d1c
 * Function: Caver::Proto::MeshData::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MeshData * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::MeshData::MergePartialFromCodedStream(MeshData *this,CodedInputStream *param_1)

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
LAB_00437d4c:
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar8, -1 < (char)bVar1)) {
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar1 == 0) goto LAB_00437fbc;
LAB_00437d8c:
    switch((int)(uVar5 >> 3)) {
    case 1:
      if ((uVar5 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      if ((*(byte **)(param_1 + 0x10) <= pbVar8) || ((char)*pbVar8 < '\0')) {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) != 0) goto LAB_00437e98;
        goto LAB_00437fc4;
      }
                    /* catch() { ... } // from try @ 0043793c with catch @ 00437dc4 */
      local_3c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar8 + 1;
LAB_00437e98:
      if (local_3c - 1 < 7) {
        *(uint *)(this + 0xc) = local_3c;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      }
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00437790 with catch @ 00437eb8
                       catch() { ... } // from try @ 00437868 with catch @ 00437eb8 */
      if ((pbVar8 < pbVar6) && (*pbVar8 == 0x10)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar6) goto LAB_00437e4c;
        goto LAB_00437edc;
      }
      goto LAB_00437d4c;
    case 2:
      if ((uVar5 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if (pbVar8 < pbVar6) {
LAB_00437e4c:
        if ((char)*pbVar8 < '\0') goto LAB_00437edc;
                    /* catch() { ... } // from try @ 004378ec with catch @ 00437e58 */
        pbVar7 = pbVar8 + 1;
                    /* catch() { ... } // from try @ 0043783c with catch @ 00437e5c
                       catch() { ... } // from try @ 004378bc with catch @ 00437e5c */
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar7;
      }
      else {
LAB_00437edc:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_00437fc4;
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
                    /* catch() { ... } // from try @ 00437810 with catch @ 00437f14 */
      if ((pbVar7 < pbVar6) && (*pbVar7 == 0x18)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar6) {
LAB_00437dec:
          if ((char)*pbVar7 < '\0') goto LAB_00437f28;
          pbVar8 = pbVar7 + 1;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar8;
        }
        else {
LAB_00437f28:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_00437fc4;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_3c;
                    /* catch() { ... } // from try @ 00437764 with catch @ 00437f4c */
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
        if ((pbVar8 < pbVar6) && (*pbVar8 == 0x20)) {
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 8) = pbVar8;
          if (pbVar8 < pbVar6) {
LAB_00437e1c:
                    /* catch() { ... } // from try @ 00437910 with catch @ 00437e20 */
            if ((char)*pbVar8 < '\0') goto LAB_00437f74;
            pbVar7 = pbVar8 + 1;
            local_3c = (uint)*pbVar8;
            *(byte **)(param_1 + 8) = pbVar7;
          }
          else {
LAB_00437f74:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_00437fc4;
                    /* catch() { ... } // from try @ 004377ec with catch @ 00437f84 */
                    /* catch() { ... } // from try @ 00437740 with catch @ 00437f88 */
            pbVar7 = *(byte **)(param_1 + 8);
            pbVar6 = *(byte **)(param_1 + 0x10);
          }
                    /* catch() { ... } // from try @ 004376e4 with catch @ 00437f8c
                       catch() { ... } // from try @ 004377bc with catch @ 00437f8c */
          *(uint *)(this + 0x18) = local_3c;
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
          if ((pbVar7 == pbVar6) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_00437fc8:
            if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar4);
            }
                    /* catch() { ... } // from try @ 00437638 with catch @ 00437fe8
                       catch() { ... } // from try @ 00437710 with catch @ 00437fe8 */
            return;
          }
        }
      }
      goto LAB_00437d4c;
    case 3:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_00437dec;
        goto LAB_00437f28;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_00437e1c;
        goto LAB_00437f74;
      }
    }
    if (((uint)uVar5 & 7) != 4) {
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar5);
      if ((uVar5 & 1) == 0) {
LAB_00437fc4:
        uVar4 = 0;
        goto LAB_00437fc8;
      }
      goto LAB_00437d4c;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar5 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_00437d8c;
  }
LAB_00437fbc:
  uVar4 = 1;
  goto LAB_00437fc8;
}


