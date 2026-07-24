/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ce5c
 * Function: Caver::Proto::DamageComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(DamageComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::DamageComponent::MergePartialFromCodedStream
          (DamageComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 0040ce6c to 0050cefb has its CatchHandler @ 0040ce6c
                       catch() { ... } // from try @ 0040ce6c with catch @ 0040ce6c
                       catch() { ... } // from try @ 0040cf14 with catch @ 0040ce6c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
LAB_0040d310:
  pbVar7 = *(byte **)(param_1 + 8);
  if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar7, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    if (bVar2 == 0) goto LAB_0040d338;
LAB_0040cea4:
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 0x10);
      if ((pbVar9 <= pbVar8) || ((char)*pbVar8 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) != 0) {
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
          goto LAB_0040d2bc;
        }
        goto LAB_0040d340;
      }
      pbVar7 = pbVar8 + 1;
      local_3c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar7;
LAB_0040d2bc:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
      if ((pbVar7 < pbVar9) && (*pbVar7 == 0x10)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar9) goto LAB_0040d09c;
        goto LAB_0040d2f0;
      }
      goto LAB_0040d310;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        if (pbVar7 < *(byte **)(param_1 + 0x10)) {
LAB_0040d09c:
          if ((char)*pbVar7 < '\0') goto LAB_0040d2f0;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar7 + 1;
        }
        else {
LAB_0040d2f0:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_0040d340;
        }
        if (local_3c < 2) {
          *(uint *)(this + 0x14) = local_3c;
          *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
        }
        pbVar7 = *(byte **)(param_1 + 8);
        if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (*pbVar7 == 0x18)) {
          pbVar7 = pbVar7 + 1;
          *(byte **)(param_1 + 8) = pbVar7;
          if (pbVar7 < *(byte **)(param_1 + 0x10)) {
LAB_0040cf34:
            if ((char)*pbVar7 < '\0') goto LAB_0040d0f4;
            local_3c = (uint)*pbVar7;
            *(byte **)(param_1 + 8) = pbVar7 + 1;
          }
          else {
LAB_0040d0f4:
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_0040d340;
          }
          if (local_3c < 3) {
                    /* catch() { ... } // from try @ 0040cefc with catch @ 0040cf58 */
            *(uint *)(this + 0x18) = local_3c;
            *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          if ((pbVar9 < pbVar8) && (*pbVar9 == 0x20)) {
            pbVar9 = pbVar9 + 1;
            *(byte **)(param_1 + 8) = pbVar9;
            if (pbVar9 < pbVar8) {
LAB_0040cf8c:
              if ((char)*pbVar9 < '\0') goto LAB_0040cfbc;
              pbVar7 = pbVar9 + 1;
              local_3c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar7;
            }
            else {
LAB_0040cfbc:
              uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar6 & 1) == 0) goto LAB_0040d340;
              pbVar7 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            this[0x1c] = (DamageComponent)(local_3c != 0);
            *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
            if ((pbVar7 < pbVar8) && (*pbVar7 == 0x28)) {
              pbVar7 = pbVar7 + 1;
              *(byte **)(param_1 + 8) = pbVar7;
              if (pbVar7 < pbVar8) {
LAB_0040cf04:
                if ((char)*pbVar7 < '\0') goto LAB_0040d010;
                pbVar9 = pbVar7 + 1;
                    /* try { // try from 0040cf14 to 0050cf5b has its CatchHandler @ 0040ce6c */
                local_3c = (uint)*pbVar7;
                *(byte **)(param_1 + 8) = pbVar9;
              }
              else {
LAB_0040d010:
                uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_3c);
                if ((uVar6 & 1) == 0) goto LAB_0040d340;
                pbVar9 = *(byte **)(param_1 + 8);
                pbVar8 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x10) = local_3c;
              *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
              if ((pbVar9 < pbVar8) && (*pbVar9 == 0x35)) {
                *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_0040d120:
                uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_3c);
                if ((uVar6 & 1) == 0) goto LAB_0040d340;
                *(uint *)(this + 0x20) = local_3c;
                *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
                pcVar1 = *(char **)(param_1 + 8);
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
                  goto LAB_0040d174;
                }
              }
            }
          }
        }
        goto LAB_0040d310;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        if (pbVar7 < *(byte **)(param_1 + 0x10)) goto LAB_0040cf34;
        goto LAB_0040d0f4;
      }
      break;
    case 4:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_0040cf8c;
        goto LAB_0040cfbc;
      }
      break;
    case 5:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0040cefc to 0050cf13 has its CatchHandler @ 0040cf58 */
        if (pbVar7 < pbVar8) goto LAB_0040cf04;
        goto LAB_0040d010;
      }
      break;
    case 6:
      if ((uVar4 & 7) == 5) goto LAB_0040d120;
      break;
    case 7:
      if ((uVar4 & 7) == 5) {
LAB_0040d174:
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_0040d340;
        *(uint *)(this + 0x24) = local_3c;
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar9 < pbVar8) && (*pbVar9 == 0x40)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar8) goto LAB_0040d06c;
          goto LAB_0040d1c0;
        }
        goto LAB_0040d310;
      }
      break;
    case 8:
      if ((uVar6 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if (pbVar9 < pbVar8) {
LAB_0040d06c:
        if ((char)*pbVar9 < '\0') goto LAB_0040d1c0;
        pbVar7 = pbVar9 + 1;
        local_3c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar7;
      }
      else {
LAB_0040d1c0:
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_0040d340;
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      this[0x28] = (DamageComponent)(local_3c != 0);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
      if ((pbVar7 < pbVar8) && (*pbVar7 == 0x48)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar8) {
LAB_0040d214:
          if ((char)*pbVar7 < '\0') goto LAB_0040d244;
          pbVar9 = pbVar7 + 1;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_0040d244:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_0040d340;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        this[0x29] = (DamageComponent)(local_3c != 0);
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x100;
        if ((pbVar9 == pbVar8) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_0040d344:
          if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar5);
          }
          return;
        }
      }
      goto LAB_0040d310;
    case 9:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar8) goto LAB_0040d214;
        goto LAB_0040d244;
      }
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_0040d340:
        uVar5 = 0;
        goto LAB_0040d344;
      }
      goto LAB_0040d310;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_0040cea4;
  }
LAB_0040d338:
  uVar5 = 1;
  goto LAB_0040d344;
}


