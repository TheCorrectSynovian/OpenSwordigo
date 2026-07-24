/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1f6c
 * Function: Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Texture_ConversionInfo * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream
          (Texture_ConversionInfo *this,CodedInputStream *param_1)

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
LAB_003d1f9c:
  pbVar6 = *(byte **)(param_1 + 8);
  if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar6, -1 < (char)bVar1)) {
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar6 + 1;
    if (bVar1 == 0) goto LAB_003d2210;
LAB_003d1fdc:
    switch((int)(uVar5 >> 3)) {
    case 1:
      if ((uVar5 & 7) != 0) break;
      pbVar6 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 <= pbVar6) || ((char)*pbVar6 < '\0')) {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) != 0) {
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          goto LAB_003d2170;
        }
        goto LAB_003d2218;
      }
      pbVar8 = pbVar6 + 1;
      local_3c = (uint)*pbVar6;
      *(byte **)(param_1 + 8) = pbVar8;
LAB_003d2170:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar7) goto LAB_003d2120;
        goto LAB_003d21a4;
      }
      goto LAB_003d1f9c;
    case 2:
      if ((uVar5 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if (pbVar8 < pbVar7) {
LAB_003d2120:
        if ((char)*pbVar8 < '\0') goto LAB_003d21a4;
        pbVar6 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar6;
      }
      else {
LAB_003d21a4:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_003d2218;
        pbVar6 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      if ((pbVar6 < pbVar7) && (*pbVar6 == 0x18)) {
        pbVar6 = pbVar6 + 1;
        *(byte **)(param_1 + 8) = pbVar6;
        if (pbVar6 < pbVar7) {
LAB_003d203c:
          if ((char)*pbVar6 < '\0') goto LAB_003d21f0;
          local_3c = (uint)*pbVar6;
          *(byte **)(param_1 + 8) = pbVar6 + 1;
        }
        else {
LAB_003d21f0:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_003d2218;
        }
        if (local_3c < 9) {
          *(uint *)(this + 0x18) = local_3c;
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
        }
        pbVar6 = *(byte **)(param_1 + 8);
        if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (*pbVar6 == 0x20)) {
          pbVar6 = pbVar6 + 1;
          *(byte **)(param_1 + 8) = pbVar6;
          if (pbVar6 < *(byte **)(param_1 + 0x10)) {
LAB_003d2090:
            if ((char)*pbVar6 < '\0') goto LAB_003d20ec;
            local_3c = (uint)*pbVar6;
            *(byte **)(param_1 + 8) = pbVar6 + 1;
          }
          else {
LAB_003d20ec:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_003d2218;
          }
          if (local_3c < 4) {
            *(uint *)(this + 0x14) = local_3c;
            *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
          }
          if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
             (*(int *)(param_1 + 0x2c) != 0)) {
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_003d221c:
            if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar4);
            }
            return;
          }
        }
      }
      goto LAB_003d1f9c;
    case 3:
      if ((uVar5 & 7) == 0) {
        pbVar6 = *(byte **)(param_1 + 8);
        if (pbVar6 < *(byte **)(param_1 + 0x10)) goto LAB_003d203c;
        goto LAB_003d21f0;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 0) {
        pbVar6 = *(byte **)(param_1 + 8);
        if (pbVar6 < *(byte **)(param_1 + 0x10)) goto LAB_003d2090;
        goto LAB_003d20ec;
      }
    }
    if (((uint)uVar5 & 7) != 4) {
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar5);
      if ((uVar5 & 1) == 0) {
LAB_003d2218:
        uVar4 = 0;
        goto LAB_003d221c;
      }
      goto LAB_003d1f9c;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar5 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_003d1fdc;
  }
LAB_003d2210:
  uVar4 = 1;
  goto LAB_003d221c;
}


