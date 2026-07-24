/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004120f0
 * Function: Caver::Proto::CharAnimControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(CharAnimControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::CharAnimControllerComponent::MergePartialFromCodedStream
          (CharAnimControllerComponent *this,CodedInputStream *param_1)

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
LAB_00412120:
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar8, -1 < (char)bVar1)) {
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar1 == 0) goto LAB_0041247c;
LAB_00412160:
    switch((int)(uVar5 >> 3)) {
    case 4:
      if ((uVar5 & 7) != 0) break;
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((pbVar6 <= pbVar7) || ((char)*pbVar7 < '\0')) {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 00412010 with catch @ 004122c8 */
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
          goto LAB_004122d0;
        }
        goto LAB_00412484;
      }
      pbVar8 = pbVar7 + 1;
      local_3c = (uint)*pbVar7;
      *(byte **)(param_1 + 8) = pbVar8;
LAB_004122d0:
                    /* catch() { ... } // from try @ 00411fc8 with catch @ 004122d0 */
      *(uint *)(this + 0xc) = local_3c;
                    /* catch() { ... } // from try @ 00411fa4 with catch @ 004122e0 */
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      if ((pbVar8 < pbVar6) && (*pbVar8 == 0x28)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar6) goto LAB_00412250;
        goto LAB_00412304;
      }
      goto LAB_00412120;
    case 5:
      if ((uVar5 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if (pbVar8 < pbVar6) {
LAB_00412250:
        if ((char)*pbVar8 < '\0') goto LAB_00412304;
        pbVar7 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar7;
      }
      else {
LAB_00412304:
                    /* try { // try from 00412304 to 00512373 has its CatchHandler @ 004125e0 */
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_00412484;
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if ((pbVar7 < pbVar6) && (*pbVar7 == 0x30)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar6) {
LAB_004121f0:
          if ((char)*pbVar7 < '\0') goto LAB_00412350;
          pbVar8 = pbVar7 + 1;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar8;
        }
        else {
LAB_00412350:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_00412484;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_3c;
                    /* try { // try from 00412374 to 005125e3 has its CatchHandler @ 00411f78 */
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
        if ((pbVar8 < pbVar6) && (*pbVar8 == 0x38)) {
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 8) = pbVar8;
          if (pbVar8 < pbVar6) {
LAB_00412220:
            if ((char)*pbVar8 < '\0') goto LAB_0041239c;
            pbVar7 = pbVar8 + 1;
            local_3c = (uint)*pbVar8;
            *(byte **)(param_1 + 8) = pbVar7;
          }
          else {
LAB_0041239c:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_00412484;
            pbVar7 = *(byte **)(param_1 + 8);
            pbVar6 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x1c) = local_3c;
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
          if ((pbVar7 < pbVar6) && (*pbVar7 == 0x40)) {
            pbVar7 = pbVar7 + 1;
            *(byte **)(param_1 + 8) = pbVar7;
            if (pbVar7 < pbVar6) {
LAB_004121c0:
              if ((char)*pbVar7 < '\0') goto LAB_004123e8;
              pbVar8 = pbVar7 + 1;
              local_3c = (uint)*pbVar7;
              *(byte **)(param_1 + 8) = pbVar8;
            }
            else {
LAB_004123e8:
              uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar5 & 1) == 0) goto LAB_00412484;
              pbVar8 = *(byte **)(param_1 + 8);
              pbVar6 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x20) = local_3c;
            *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x20;
            if ((pbVar8 < pbVar6) && (*pbVar8 == 0x48)) {
              pbVar8 = pbVar8 + 1;
              *(byte **)(param_1 + 8) = pbVar8;
              if (pbVar8 < pbVar6) {
LAB_00412280:
                if ((char)*pbVar8 < '\0') goto LAB_00412434;
                pbVar7 = pbVar8 + 1;
                local_3c = (uint)*pbVar8;
                *(byte **)(param_1 + 8) = pbVar7;
              }
              else {
LAB_00412434:
                uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_3c);
                if ((uVar5 & 1) == 0) goto LAB_00412484;
                pbVar7 = *(byte **)(param_1 + 8);
                pbVar6 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x18) = local_3c;
              *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
              if ((pbVar7 == pbVar6) && (*(int *)(param_1 + 0x2c) != 0)) {
                uVar4 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
LAB_00412488:
                if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail(uVar4);
                }
                return;
              }
            }
          }
        }
      }
      goto LAB_00412120;
    case 6:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_004121f0;
        goto LAB_00412350;
      }
      break;
    case 7:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_00412220;
        goto LAB_0041239c;
      }
      break;
    case 8:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_004121c0;
        goto LAB_004123e8;
      }
      break;
    case 9:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_00412280;
        goto LAB_00412434;
      }
    }
    if (((uint)uVar5 & 7) != 4) {
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar5);
      if ((uVar5 & 1) == 0) {
LAB_00412484:
        uVar4 = 0;
        goto LAB_00412488;
      }
      goto LAB_00412120;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar5 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_00412160;
  }
LAB_0041247c:
  uVar4 = 1;
  goto LAB_00412488;
}


