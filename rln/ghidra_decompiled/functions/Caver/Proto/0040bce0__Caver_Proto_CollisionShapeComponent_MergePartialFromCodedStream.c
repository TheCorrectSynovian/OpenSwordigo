/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040bce0
 * Function: Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(CollisionShapeComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream
          (CollisionShapeComponent *this,CodedInputStream *param_1)

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
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  Program *pPVar13;
  uint local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pCVar1 = param_1 + 8;
  pCVar2 = param_1 + 0x10;
LAB_0040c51c:
  pbVar11 = *(byte **)pCVar1;
  if ((pbVar11 < *(byte **)pCVar2) && (bVar3 = *pbVar11, -1 < (char)bVar3)) {
    uVar8 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar11 + 1;
    if (bVar3 == 0) goto LAB_0040c548;
LAB_0040bd38:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 2:
      if ((uVar8 & 7) != 0) break;
      pbVar12 = *(byte **)pCVar1;
      pbVar9 = *(byte **)pCVar2;
      if ((pbVar9 <= pbVar12) || ((char)*pbVar12 < '\0')) {
        uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
        if ((uVar8 & 1) != 0) {
          pbVar11 = *(byte **)pCVar1;
          pbVar9 = *(byte **)pCVar2;
          goto LAB_0040c328;
        }
        goto LAB_0040c550;
      }
      pbVar11 = pbVar12 + 1;
      local_5c = (uint)*pbVar12;
      *(byte **)pCVar1 = pbVar11;
LAB_0040c328:
      this[0xd] = (CollisionShapeComponent)(local_5c != 0);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      if ((pbVar11 < pbVar9) && (*pbVar11 == 0x18)) {
        pbVar11 = pbVar11 + 1;
        *(byte **)pCVar1 = pbVar11;
        if (pbVar11 < pbVar9) goto LAB_0040bea0;
        goto LAB_0040c364;
      }
      goto LAB_0040c51c;
    case 3:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
        if (pbVar11 < pbVar9) {
LAB_0040bea0:
          if ((char)*pbVar11 < '\0') goto LAB_0040c364;
          pbVar12 = pbVar11 + 1;
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar12;
        }
        else {
LAB_0040c364:
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
          pbVar12 = *(byte **)pCVar1;
          pbVar9 = *(byte **)pCVar2;
        }
        this[0xe] = (CollisionShapeComponent)(local_5c != 0);
        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
        if ((pbVar12 < pbVar9) && (*pbVar12 == 0x20)) {
          pbVar12 = pbVar12 + 1;
          *(byte **)pCVar1 = pbVar12;
          if (pbVar12 < pbVar9) {
LAB_0040be28:
            if ((char)*pbVar12 < '\0') goto LAB_0040c3bc;
            pbVar11 = pbVar12 + 1;
            local_5c = (uint)*pbVar12;
            *(byte **)pCVar1 = pbVar11;
          }
          else {
LAB_0040c3bc:
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar8 & 1) == 0) goto LAB_0040c550;
            pbVar11 = *(byte **)pCVar1;
            pbVar9 = *(byte **)pCVar2;
          }
          this[0xf] = (CollisionShapeComponent)(local_5c != 0);
          *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
          if ((pbVar11 < pbVar9) && (*pbVar11 == 0x28)) {
            pbVar11 = pbVar11 + 1;
            *(byte **)pCVar1 = pbVar11;
            if (pbVar11 < pbVar9) {
LAB_0040be5c:
              if ((char)*pbVar11 < '\0') goto LAB_0040c414;
              pbVar12 = pbVar11 + 1;
              local_5c = (uint)*pbVar11;
              *(byte **)pCVar1 = pbVar12;
            }
            else {
LAB_0040c414:
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_5c);
              if ((uVar8 & 1) == 0) goto LAB_0040c550;
              pbVar12 = *(byte **)pCVar1;
              pbVar9 = *(byte **)pCVar2;
            }
            this[0x10] = (CollisionShapeComponent)(local_5c != 0);
            *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10;
            if ((pbVar12 < pbVar9) && (*pbVar12 == 0x35)) {
              *(byte **)pCVar1 = pbVar12 + 1;
LAB_0040c464:
              uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_5c);
              if ((uVar8 & 1) == 0) goto LAB_0040c550;
              *(uint *)(this + 0x14) = local_5c;
              *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
              pcVar10 = *(char **)pCVar1;
              if ((pcVar10 < *(char **)pCVar2) && (*pcVar10 == '=')) {
                *(char **)pCVar1 = pcVar10 + 1;
                goto LAB_0040c4ac;
              }
            }
          }
        }
        goto LAB_0040c51c;
      }
      break;
    case 4:
      if ((uVar8 & 7) == 0) {
        pbVar12 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
        if (pbVar12 < pbVar9) goto LAB_0040be28;
        goto LAB_0040c3bc;
      }
      break;
    case 5:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
        if (pbVar11 < pbVar9) goto LAB_0040be5c;
        goto LAB_0040c414;
      }
      break;
    case 6:
      if ((uVar5 & 7) == 5) goto LAB_0040c464;
      break;
    case 7:
      if ((uVar5 & 7) == 5) {
LAB_0040c4ac:
        uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_5c);
        if ((uVar8 & 1) == 0) goto LAB_0040c550;
        *(uint *)(this + 0x18) = local_5c;
        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40;
        pbVar11 = *(byte **)pCVar1;
        if ((pbVar11 < *(byte **)pCVar2) && (*pbVar11 == 0x40)) {
          pbVar11 = pbVar11 + 1;
          *(byte **)pCVar1 = pbVar11;
          if (pbVar11 < *(byte **)pCVar2) goto LAB_0040bef4;
          goto LAB_0040c4fc;
        }
        goto LAB_0040c51c;
      }
      break;
    case 8:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        if (pbVar11 < *(byte **)pCVar2) {
LAB_0040bef4:
          if ((char)*pbVar11 < '\0') goto LAB_0040c4fc;
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar11 + 1;
        }
        else {
LAB_0040c4fc:
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
        }
        if (local_5c < 8) {
          *(uint *)(this + 0x1c) = local_5c;
          *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x80;
        }
        pcVar10 = *(char **)pCVar1;
        if ((*(char **)pCVar2 <= pcVar10) || (*pcVar10 != 'J')) goto LAB_0040c51c;
        *(char **)pCVar1 = pcVar10 + 1;
LAB_0040bf48:
        pPVar13 = *(Program **)(this + 0x28);
        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x400;
        if (pPVar13 == (Program *)0x0) {
          pPVar13 = operator_new(0x30);
          Program::Program(pPVar13);
          *(Program **)(this + 0x28) = pPVar13;
        }
        pbVar11 = *(byte **)pCVar1;
        if ((pbVar11 < *(byte **)pCVar2) && (-1 < (char)*pbVar11)) {
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar11 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
        }
        iVar6 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x3c)) {
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar8 = Program::MergePartialFromCodedStream(pPVar13,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040c550;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar10 = *(char **)pCVar1;
          if ((pcVar10 < *(char **)pCVar2) && (*pcVar10 == 'R')) {
            *(char **)pCVar1 = pcVar10 + 1;
            goto LAB_0040c060;
          }
          goto LAB_0040c51c;
        }
        goto LAB_0040c550;
      }
      break;
    case 9:
      if ((uVar5 & 7) == 2) goto LAB_0040bf48;
      break;
    case 10:
      if ((uVar5 & 7) == 2) {
LAB_0040c060:
        pPVar13 = *(Program **)(this + 0x30);
        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x800;
        if (pPVar13 == (Program *)0x0) {
          pPVar13 = operator_new(0x30);
          Program::Program(pPVar13);
          *(Program **)(this + 0x30) = pPVar13;
        }
        pbVar11 = *(byte **)pCVar1;
        if ((pbVar11 < *(byte **)pCVar2) && (-1 < (char)*pbVar11)) {
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar11 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
        }
        iVar6 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x3c)) {
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar8 = Program::MergePartialFromCodedStream(pPVar13,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040c550;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar11 = *(byte **)pCVar1;
          pbVar9 = *(byte **)pCVar2;
          if ((pbVar11 < pbVar9) && (*pbVar11 == 0x58)) {
                    /* try { // try from 0040c138 to 0050c1a3 has its CatchHandler @ 0040c138
                       catch() { ... } // from try @ 0040c138 with catch @ 0040c138
                       catch() { ... } // from try @ 0040c1bc with catch @ 0040c138 */
            pbVar11 = pbVar11 + 1;
            *(byte **)pCVar1 = pbVar11;
            if (pbVar11 < pbVar9) goto LAB_0040bdf4;
            goto LAB_0040c148;
          }
          goto LAB_0040c51c;
        }
        goto LAB_0040c550;
      }
      break;
    case 0xb:
      if ((uVar8 & 7) == 0) {
        pbVar11 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
        if (pbVar11 < pbVar9) {
LAB_0040bdf4:
          if ((char)*pbVar11 < '\0') goto LAB_0040c148;
          pbVar12 = pbVar11 + 1;
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar12;
        }
        else {
LAB_0040c148:
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
          pbVar12 = *(byte **)pCVar1;
          pbVar9 = *(byte **)pCVar2;
        }
        this[0xc] = (CollisionShapeComponent)(local_5c != 0);
        uVar5 = *(uint *)(this + 0x40) | 1;
        *(uint *)(this + 0x40) = uVar5;
        if ((pbVar9 <= pbVar12) || (*pbVar12 != 0x62)) goto LAB_0040c51c;
        *(byte **)pCVar1 = pbVar12 + 1;
LAB_0040c198:
        pPVar13 = *(Program **)(this + 0x38);
        *(uint *)(this + 0x40) = uVar5 | 0x1000;
                    /* try { // try from 0040c1a4 to 0050c1bb has its CatchHandler @ 0040c1fc */
        if (pPVar13 == (Program *)0x0) {
          pPVar13 = operator_new(0x30);
          Program::Program(pPVar13);
          *(Program **)(this + 0x38) = pPVar13;
        }
                    /* try { // try from 0040c1bc to 0050c1ff has its CatchHandler @ 0040c138 */
        pbVar11 = *(byte **)pCVar1;
        if ((pbVar11 < *(byte **)pCVar2) && (-1 < (char)*pbVar11)) {
          local_5c = (uint)*pbVar11;
          *(byte **)pCVar1 = pbVar11 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_0040c550;
        }
        iVar6 = *(int *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 0040c1a4 with catch @ 0040c1fc */
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x3c)) {
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar8 = Program::MergePartialFromCodedStream(pPVar13,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040c550;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar10 = *(char **)pCVar1;
          if ((pcVar10 < *(char **)pCVar2) && (*pcVar10 == 'm')) {
            *(char **)pCVar1 = pcVar10 + 1;
            goto LAB_0040c274;
          }
          goto LAB_0040c51c;
        }
        goto LAB_0040c550;
      }
      break;
    case 0xc:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x40);
        goto LAB_0040c198;
      }
      break;
    case 0xd:
      if ((uVar5 & 7) == 5) {
LAB_0040c274:
        uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_5c);
        if ((uVar8 & 1) == 0) goto LAB_0040c550;
        *(uint *)(this + 0x20) = local_5c;
        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
        pbVar11 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
        if ((pbVar11 < pbVar9) && (*pbVar11 == 0x70)) {
          pbVar11 = pbVar11 + 1;
          *(byte **)pCVar1 = pbVar11;
          if (pbVar11 < pbVar9) goto LAB_0040bdc0;
          goto LAB_0040c2c4;
        }
        goto LAB_0040c51c;
      }
      break;
    case 0xe:
      if ((uVar8 & 7) != 0) break;
      pbVar11 = *(byte **)pCVar1;
      pbVar9 = *(byte **)pCVar2;
      if (pbVar11 < pbVar9) {
LAB_0040bdc0:
        if ((char)*pbVar11 < '\0') goto LAB_0040c2c4;
        pbVar12 = pbVar11 + 1;
        local_5c = (uint)*pbVar11;
        *(byte **)pCVar1 = pbVar12;
      }
      else {
LAB_0040c2c4:
        uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
        if ((uVar8 & 1) == 0) goto LAB_0040c550;
        pbVar12 = *(byte **)pCVar1;
        pbVar9 = *(byte **)pCVar2;
      }
      this[0x24] = (CollisionShapeComponent)(local_5c != 0);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x200;
      if ((pbVar12 == pbVar9) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar7 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0040c554:
        if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar7);
        }
        return;
      }
      goto LAB_0040c51c;
    default:
    }
    if ((uVar5 & 7) != 4) {
      uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
      if ((uVar8 & 1) != 0) goto LAB_0040c51c;
LAB_0040c550:
      uVar7 = 0;
      goto LAB_0040c554;
    }
  }
  else {
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar8 = (ulong)uVar5;
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 0) goto LAB_0040bd38;
  }
LAB_0040c548:
  uVar7 = 1;
  goto LAB_0040c554;
}


