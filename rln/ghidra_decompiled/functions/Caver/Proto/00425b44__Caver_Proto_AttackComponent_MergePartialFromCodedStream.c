/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425b44
 * Function: Caver::Proto::AttackComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(AttackComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::AttackComponent::MergePartialFromCodedStream
          (AttackComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  Program *this_00;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00425b78:
  pbVar10 = *(byte **)(param_1 + 8);
  if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar10, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar2 == 0) goto LAB_00426168;
LAB_00425bb8:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((pbVar8 <= pbVar9) || ((char)*pbVar9 < '\0')) {
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) != 0) {
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          goto LAB_00425d60;
        }
        goto LAB_00426170;
      }
      pbVar10 = pbVar9 + 1;
      local_4c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar10;
LAB_00425d60:
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 1;
      if ((pbVar10 < pbVar8) && (*pbVar10 == 0x10)) {
        pbVar10 = pbVar10 + 1;
        *(byte **)(param_1 + 8) = pbVar10;
        if (pbVar10 < pbVar8) goto LAB_00425cc8;
        goto LAB_00425d94;
      }
      goto LAB_00425b78;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar8) {
LAB_00425cc8:
          if ((char)*pbVar10 < '\0') goto LAB_00425d94;
          pbVar9 = pbVar10 + 1;
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_00425d94:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00426170;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 2;
        if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar8) {
LAB_00425c58:
                    /* try { // try from 00425c5c to 00525c83 has its CatchHandler @ 00425c88 */
            if ((char)*pbVar9 < '\0') goto LAB_00425de0;
            pbVar10 = pbVar9 + 1;
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar10;
          }
          else {
LAB_00425de0:
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_00426170;
            pbVar10 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x14) = local_4c;
          *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 4;
                    /* try { // try from 00425e18 to 00525e1f has its CatchHandler @ 00426104 */
          if ((pbVar10 < pbVar8) && (*pbVar10 == 0x20)) {
            pbVar10 = pbVar10 + 1;
                    /* try { // try from 00425e20 to 00526123 has its CatchHandler @ 00425d00 */
            *(byte **)(param_1 + 8) = pbVar10;
            if (pbVar10 < pbVar8) {
LAB_00425c88:
                    /* catch() { ... } // from try @ 00425c5c with catch @ 00425c88 */
                    /* catch() { ... } // from try @ 00425a6c with catch @ 00425c8c
                       catch() { ... } // from try @ 00425ab0 with catch @ 00425c8c */
              if ((char)*pbVar10 < '\0') goto LAB_00425e2c;
              pbVar9 = pbVar10 + 1;
              local_4c = (uint)*pbVar10;
              *(byte **)(param_1 + 8) = pbVar9;
            }
            else {
LAB_00425e2c:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00426170;
              pbVar9 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x18) = local_4c;
            *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 8;
            if ((pbVar9 < pbVar8) && (*pbVar9 == 0x2d)) {
              *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_00425e70:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00426170;
              *(uint *)(this + 0x28) = local_4c;
              *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x20;
              pcVar1 = *(char **)(param_1 + 8);
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '5')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
                goto LAB_00425eb4;
              }
            }
          }
        }
        goto LAB_00425b78;
      }
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_00425c58;
        goto LAB_00425de0;
      }
      break;
    case 4:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00425c84 to 00525cf7 has its CatchHandler @ 00425a10 */
        if (pbVar10 < pbVar8) goto LAB_00425c88;
        goto LAB_00425e2c;
      }
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_00425e70;
      break;
    case 6:
      if ((uVar4 & 7) == 5) {
LAB_00425eb4:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x2c) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x40;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00425ef8;
        }
        goto LAB_00425b78;
      }
      break;
    case 7:
                    /* try { // try from 00425d00 to 00525e17 has its CatchHandler @ 00425d00
                       catch(type#1 @ 00000000) { ... } // from try @ 00425d00 with catch @ 00425d00
                       catch(type#1 @ 00000000) { ... } // from try @ 00425e20 with catch @ 00425d00
                       catch(type#1 @ 00000000) { ... } // from try @ 0042614c with catch @ 00425d00
                        */
      if ((uVar4 & 7) == 5) {
LAB_00425ef8:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x30) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x80;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'E')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00425f3c;
        }
        goto LAB_00425b78;
      }
      break;
    case 8:
      if ((uVar4 & 7) == 5) {
LAB_00425f3c:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x34) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x100;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'M')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00425f80;
        }
        goto LAB_00425b78;
      }
      break;
    case 9:
      if ((uVar4 & 7) == 5) {
LAB_00425f80:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x40) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x800;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'U')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00425fc4;
        }
        goto LAB_00425b78;
      }
      break;
    case 10:
                    /* catch() { ... } // from try @ 00425a84 with catch @ 00425c38 */
      if ((uVar4 & 7) == 5) {
LAB_00425fc4:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x44) = local_4c;
        uVar4 = *(uint *)(this + 0x48) | 0x1000;
        *(uint *)(this + 0x48) = uVar4;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'Z')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00426008;
        }
        goto LAB_00425b78;
      }
      break;
    case 0xb:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x48);
LAB_00426008:
        this_00 = *(Program **)(this + 0x20);
        *(uint *)(this + 0x48) = uVar4 | 0x10;
        if (this_00 == (Program *)0x0) {
          this_00 = operator_new(0x30);
          Program::Program(this_00);
          *(Program **)(this + 0x20) = this_00;
        }
        pbVar10 = *(byte **)(param_1 + 8);
        if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar10 + 1;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00426170;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (iVar5 < *(int *)(param_1 + 0x3c)) {
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = Program::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00426170;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'e')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_004260dc;
          }
          goto LAB_00425b78;
        }
        goto LAB_00426170;
      }
      break;
    case 0xc:
      if ((uVar4 & 7) == 5) {
LAB_004260dc:
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00426170;
        *(uint *)(this + 0x38) = local_4c;
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x200;
        pcVar1 = *(char **)(param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00425e18 with catch @ 00426104
                        */
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'm')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00426120;
        }
        goto LAB_00425b78;
      }
      break;
    case 0xd:
      if ((uVar4 & 7) != 5) break;
LAB_00426120:
                    /* try { // try from 00426124 to 0052614b has its CatchHandler @ 00426154 */
      uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar7 & 1) == 0) goto LAB_00426170;
      *(uint *)(this + 0x3c) = local_4c;
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400;
                    /* try { // try from 0042614c to 00526157 has its CatchHandler @ 00425d00 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426124 with catch @ 00426154
                        */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00426174:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
        return;
      }
      goto LAB_00425b78;
    }
    if ((uVar4 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_00425b78;
LAB_00426170:
      uVar6 = 0;
      goto LAB_00426174;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00425bb8;
  }
LAB_00426168:
  uVar6 = 1;
  goto LAB_00426174;
}


