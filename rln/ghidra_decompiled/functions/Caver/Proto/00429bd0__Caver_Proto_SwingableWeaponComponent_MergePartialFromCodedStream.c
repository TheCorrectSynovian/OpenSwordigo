/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429bd0
 * Function: Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SwingableWeaponComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream
          (SwingableWeaponComponent *this,CodedInputStream *param_1)

{
  CodedInputStream *pCVar1;
  CodedInputStream *pCVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  FloatColor *this_00;
  uint local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pCVar1 = param_1 + 8;
  pCVar2 = param_1 + 0x10;
                    /* try { // try from 00429c0c to 00529c33 has its CatchHandler @ 00429c3c */
LAB_00429c10:
  do {
    pbVar9 = *(byte **)pCVar1;
    if ((*(byte **)pCVar2 <= pbVar9) || (bVar3 = *pbVar9, (char)bVar3 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
                    /* catch() { ... } // from try @ 00429bc4 with catch @ 00429c48 */
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_00429c54;
LAB_0042a300:
      uVar7 = 1;
      goto LAB_0042a30c;
    }
    uVar8 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
                    /* try { // try from 00429c34 to 00529c6b has its CatchHandler @ 00429904 */
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar3 == 0) goto LAB_0042a300;
LAB_00429c54:
    uVar5 = (uint)uVar8;
                    /* try { // try from 00429c6c to 00529c93 has its CatchHandler @ 00429c9c */
    switch((int)(uVar8 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if ((pbVar11 < pbVar10) && (-1 < (char)*pbVar11)) {
          pbVar9 = pbVar11 + 1;
          local_5c = (uint)*pbVar11;
                    /* catch() { ... } // from try @ 00429c6c with catch @ 00429c9c */
          *(byte **)pCVar1 = pbVar9;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0042a308;
          pbVar9 = *(byte **)pCVar1;
          pbVar10 = *(byte **)pCVar2;
        }
        *(uint *)(this + 0xc) = local_5c;
        *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 1;
        if ((pbVar9 < pbVar10) && (*pbVar9 == 0x10)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)pCVar1 = pbVar9;
          if (pbVar9 < pbVar10) {
LAB_00429d9c:
            if ((char)*pbVar9 < '\0') goto LAB_00429ed8;
            pbVar11 = pbVar9 + 1;
            local_5c = (uint)*pbVar9;
            *(byte **)pCVar1 = pbVar11;
          }
          else {
LAB_00429ed8:
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar8 & 1) == 0) goto LAB_0042a308;
            pbVar11 = *(byte **)pCVar1;
            pbVar10 = *(byte **)pCVar2;
          }
          *(uint *)(this + 0x2c) = local_5c;
          *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x80;
          if ((pbVar11 < pbVar10) && (*pbVar11 == 0x20)) {
            pbVar11 = pbVar11 + 1;
            *(byte **)pCVar1 = pbVar11;
            if (pbVar11 < pbVar10) {
LAB_00429dd0:
              if ((char)*pbVar11 < '\0') goto LAB_00429f28;
              pbVar9 = pbVar11 + 1;
              local_5c = (uint)*pbVar11;
              *(byte **)pCVar1 = pbVar9;
            }
            else {
LAB_00429f28:
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_5c);
              if ((uVar8 & 1) == 0) goto LAB_0042a308;
              pbVar9 = *(byte **)pCVar1;
              pbVar10 = *(byte **)pCVar2;
            }
            *(uint *)(this + 0x38) = local_5c;
                    /* try { // try from 00429f54 to 00529f5b has its CatchHandler @ 0042a130 */
            *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x400;
                    /* try { // try from 00429f5c to 00529fcb has its CatchHandler @ 00429dfc */
            if ((pbVar9 < pbVar10) && (*pbVar9 == 0x28)) {
              pbVar9 = pbVar9 + 1;
              *(byte **)pCVar1 = pbVar9;
              if (pbVar9 < pbVar10) {
LAB_00429d58:
                if ((char)*pbVar9 < '\0') goto LAB_00429f78;
                pbVar11 = pbVar9 + 1;
                local_5c = (uint)*pbVar9;
                *(byte **)pCVar1 = pbVar11;
              }
              else {
LAB_00429f78:
                uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_5c);
                if ((uVar8 & 1) == 0) goto LAB_0042a308;
                pbVar11 = *(byte **)pCVar1;
                pbVar10 = *(byte **)pCVar2;
              }
              *(uint *)(this + 0x3c) = local_5c;
              *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x800;
              if ((pbVar11 < pbVar10) && (*pbVar11 == 0x30)) {
                pbVar11 = pbVar11 + 1;
                *(byte **)pCVar1 = pbVar11;
                if (pbVar11 < pbVar10) {
LAB_00429ccc:
                  if ((char)*pbVar11 < '\0') goto LAB_00429fc8;
                  pbVar9 = pbVar11 + 1;
                  local_5c = (uint)*pbVar11;
                  *(byte **)pCVar1 = pbVar9;
                }
                else {
LAB_00429fc8:
                    /* try { // try from 00429fcc to 00529fd7 has its CatchHandler @ 0042a0f8 */
                  uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                    (param_1,&local_5c);
                  if ((uVar8 & 1) == 0) goto LAB_0042a308;
                    /* try { // try from 00429fd8 to 0052a19f has its CatchHandler @ 00429dfc */
                  pbVar9 = *(byte **)pCVar1;
                  pbVar10 = *(byte **)pCVar2;
                }
                *(uint *)(this + 0x40) = local_5c;
                *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x1000;
                if ((pbVar9 < pbVar10) && (*pbVar9 == 0x38)) {
                  pbVar9 = pbVar9 + 1;
                  *(byte **)pCVar1 = pbVar9;
                  if (pbVar9 < pbVar10) {
LAB_00429d14:
                    if ((char)*pbVar9 < '\0') goto LAB_0042a018;
                    pbVar11 = pbVar9 + 1;
                    local_5c = (uint)*pbVar9;
                    *(byte **)pCVar1 = pbVar11;
                  }
                  else {
LAB_0042a018:
                    uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                      (param_1,&local_5c);
                    if ((uVar8 & 1) == 0) goto LAB_0042a308;
                    pbVar11 = *(byte **)pCVar1;
                    pbVar10 = *(byte **)pCVar2;
                  }
                  *(uint *)(this + 0x30) = local_5c;
                  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x100;
                  if ((pbVar11 < pbVar10) && (*pbVar11 == 0x40)) {
                    pbVar11 = pbVar11 + 1;
                    *(byte **)pCVar1 = pbVar11;
                    if (pbVar11 < pbVar10) {
LAB_00429e04:
                      if ((char)*pbVar11 < '\0') goto LAB_0042a068;
                      pbVar9 = pbVar11 + 1;
                      local_5c = (uint)*pbVar11;
                      *(byte **)pCVar1 = pbVar9;
                    }
                    else {
LAB_0042a068:
                      uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_5c);
                      if ((uVar8 & 1) == 0) goto LAB_0042a308;
                      pbVar9 = *(byte **)pCVar1;
                      pbVar10 = *(byte **)pCVar2;
                    }
                    *(uint *)(this + 0x10) = local_5c;
                    *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 2;
                    if ((pbVar9 < pbVar10) && (*pbVar9 == 0x48)) {
                      pbVar9 = pbVar9 + 1;
                      *(byte **)pCVar1 = pbVar9;
                      if (pbVar9 < pbVar10) {
LAB_00429e38:
                        if ((char)*pbVar9 < '\0') goto LAB_0042a0b8;
                        pbVar11 = pbVar9 + 1;
                        local_5c = (uint)*pbVar9;
                        *(byte **)pCVar1 = pbVar11;
                      }
                      else {
LAB_0042a0b8:
                        uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                          (param_1,&local_5c);
                        if ((uVar8 & 1) == 0) goto LAB_0042a308;
                        pbVar11 = *(byte **)pCVar1;
                        pbVar10 = *(byte **)pCVar2;
                      }
                      *(uint *)(this + 0x34) = local_5c;
                      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x200;
                      if ((pbVar11 < pbVar10) && (*pbVar11 == 0x55)) {
                    /* catch() { ... } // from try @ 00429fcc with catch @ 0042a0f8 */
                        *(byte **)pCVar1 = pbVar11 + 1;
LAB_0042a100:
                        uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                          (param_1,&local_5c);
                        if ((uVar8 & 1) == 0) goto LAB_0042a308;
                        *(uint *)(this + 0x14) = local_5c;
                        *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 4;
                        pcVar12 = *(char **)pCVar1;
                    /* catch() { ... } // from try @ 00429f54 with catch @ 0042a130 */
                        if ((pcVar12 < *(char **)pCVar2) && (*pcVar12 == ']')) {
                          *(char **)pCVar1 = pcVar12 + 1;
LAB_0042a148:
                          uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                            (param_1,&local_5c);
                          if ((uVar8 & 1) == 0) goto LAB_0042a308;
                          *(uint *)(this + 0x18) = local_5c;
                          *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 8;
                          pcVar12 = *(char **)pCVar1;
                          if ((pcVar12 < *(char **)pCVar2) && (*pcVar12 == 'e')) {
                            *(char **)pCVar1 = pcVar12 + 1;
LAB_0042a190:
                            uVar8 = google::protobuf::io::CodedInputStream::
                                    ReadLittleEndian32Fallback(param_1,&local_5c);
                            if ((uVar8 & 1) == 0) goto LAB_0042a308;
                    /* try { // try from 0042a1a0 to 0052a1f3 has its CatchHandler @ 0042a1a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0042a1a0 with catch @ 0042a1a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0042a218 with catch @ 0042a1a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0042a290 with catch @ 0042a1a0
                        */
                            *(uint *)(this + 0x1c) = local_5c;
                            *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x10;
                            pcVar12 = *(char **)pCVar1;
                            if ((pcVar12 < *(char **)pCVar2) && (*pcVar12 == 'm')) {
                              *(char **)pCVar1 = pcVar12 + 1;
LAB_0042a1d8:
                              uVar8 = google::protobuf::io::CodedInputStream::
                                      ReadLittleEndian32Fallback(param_1,&local_5c);
                              if ((uVar8 & 1) == 0) goto LAB_0042a308;
                              *(uint *)(this + 0x28) = local_5c;
                    /* try { // try from 0042a1f4 to 0052a217 has its CatchHandler @ 0042a264 */
                              uVar5 = *(uint *)(this + 0x44) | 0x40;
                              *(uint *)(this + 0x44) = uVar5;
                              pcVar12 = *(char **)pCVar1;
                              if ((pcVar12 < *(char **)pCVar2) && (*pcVar12 == 'r')) {
                    /* try { // try from 0042a218 to 0052a287 has its CatchHandler @ 0042a1a0 */
                                *(char **)pCVar1 = pcVar12 + 1;
LAB_0042a220:
                                this_00 = *(FloatColor **)(this + 0x20);
                                *(uint *)(this + 0x44) = uVar5 | 0x20;
                                if (this_00 == (FloatColor *)0x0) {
                                  this_00 = operator_new(0x20);
                                  FloatColor::FloatColor(this_00);
                                  *(FloatColor **)(this + 0x20) = this_00;
                                }
                                pbVar9 = *(byte **)pCVar1;
                                if ((pbVar9 < *(byte **)pCVar2) && (-1 < (char)*pbVar9)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042a1f4 with catch @ 0042a264
                        */
                                  local_5c = (uint)*pbVar9;
                                  *(byte **)pCVar1 = pbVar9 + 1;
                                }
                                else {
                                  uVar8 = google::protobuf::io::CodedInputStream::
                                          ReadVarint32Fallback(param_1,&local_5c);
                                  if ((uVar8 & 1) == 0) goto LAB_0042a308;
                                }
                                iVar6 = *(int *)(param_1 + 0x38);
                    /* try { // try from 0042a288 to 0052a28f has its CatchHandler @ 0042a298 */
                                *(int *)(param_1 + 0x38) = iVar6 + 1;
                    /* try { // try from 0042a290 to 0052a29b has its CatchHandler @ 0042a1a0 */
                                if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_0042a308;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042a288 with catch @ 0042a298
                        */
                                iVar6 = google::protobuf::io::CodedInputStream::PushLimit
                                                  (param_1,local_5c);
                                uVar8 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
                                if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                                goto LAB_0042a308;
                                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
                                if (0 < *(int *)(param_1 + 0x38)) {
                                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                                }
                                if ((*(ulong *)pCVar1 == *(ulong *)pCVar2) &&
                                   (*(int *)(param_1 + 0x2c) != 0)) {
                                  uVar7 = 1;
                                  *(undefined4 *)(param_1 + 0x20) = 0;
                                  param_1[0x24] = (CodedInputStream)0x1;
                                  goto LAB_0042a30c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00429c10;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 0) {
        pbVar9 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar9 < pbVar10) goto LAB_00429d9c;
        goto LAB_00429ed8;
      }
      break;
    default:
      break;
    case 4:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar11 < pbVar10) goto LAB_00429dd0;
        goto LAB_00429f28;
      }
      break;
    case 5:
      if ((uVar8 & 7) == 0) {
        pbVar9 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar9 < pbVar10) goto LAB_00429d58;
        goto LAB_00429f78;
      }
      break;
    case 6:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar11 < pbVar10) goto LAB_00429ccc;
        goto LAB_00429fc8;
      }
      break;
    case 7:
      if ((uVar8 & 7) == 0) {
        pbVar9 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar9 < pbVar10) goto LAB_00429d14;
        goto LAB_0042a018;
      }
      break;
    case 8:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
                    /* try { // try from 00429dfc to 00529f53 has its CatchHandler @ 00429dfc
                       catch() { ... } // from try @ 00429dfc with catch @ 00429dfc
                       catch() { ... } // from try @ 00429f5c with catch @ 00429dfc
                       catch() { ... } // from try @ 00429fd8 with catch @ 00429dfc */
        if (pbVar11 < pbVar10) goto LAB_00429e04;
        goto LAB_0042a068;
      }
      break;
    case 9:
      if ((uVar8 & 7) == 0) {
        pbVar9 = *(byte **)pCVar1;
        pbVar10 = *(byte **)pCVar2;
        if (pbVar9 < pbVar10) goto LAB_00429e38;
        goto LAB_0042a0b8;
      }
      break;
    case 10:
      if ((uVar5 & 7) == 5) goto LAB_0042a100;
      break;
    case 0xb:
      if ((uVar5 & 7) == 5) goto LAB_0042a148;
      break;
    case 0xc:
      if ((uVar5 & 7) == 5) goto LAB_0042a190;
      break;
    case 0xd:
      if ((uVar5 & 7) == 5) goto LAB_0042a1d8;
      break;
    case 0xe:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x44);
        goto LAB_0042a220;
      }
    }
    if ((uVar5 & 7) == 4) goto LAB_0042a300;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_0042a308:
      uVar7 = 0;
LAB_0042a30c:
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
  } while( true );
}


