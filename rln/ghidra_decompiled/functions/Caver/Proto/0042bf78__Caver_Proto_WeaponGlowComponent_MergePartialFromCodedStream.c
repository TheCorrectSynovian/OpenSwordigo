/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bf78
 * Function: Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(WeaponGlowComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream
          (WeaponGlowComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  FloatColor *pFVar11;
  uint local_4c;
  long local_48;
  
                    /* try { // try from 0042bf88 to 0052bf9b has its CatchHandler @ 0042c3b8 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0042bf9c to 0052bffb has its CatchHandler @ 0042c3bc */
LAB_0042bfac:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_0042bfec;
LAB_0042c2c8:
      uVar7 = 1;
      goto LAB_0042c2cc;
    }
    uVar8 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_0042c2c8;
LAB_0042bfec:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 1:
                    /* try { // try from 0042c008 to 0052c00f has its CatchHandler @ 0042c388 */
      if ((uVar8 & 7) == 0) {
                    /* try { // try from 0042c010 to 0052c1cb has its CatchHandler @ 0042bf34 */
        pbVar1 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if ((pbVar1 < pbVar9) && (-1 < (char)*pbVar1)) {
          pbVar10 = pbVar1 + 1;
          local_4c = (uint)*pbVar1;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar8 & 1) == 0) goto LAB_0042c2c0;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_4c;
        uVar5 = *(uint *)(this + 0x24) | 1;
        *(uint *)(this + 0x24) = uVar5;
        if ((pbVar10 < pbVar9) && (*pbVar10 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_0042c0cc:
          pFVar11 = *(FloatColor **)(this + 0x10);
          *(uint *)(this + 0x24) = uVar5 | 2;
          if (pFVar11 == (FloatColor *)0x0) {
            pFVar11 = operator_new(0x20);
            FloatColor::FloatColor(pFVar11);
            *(FloatColor **)(this + 0x10) = pFVar11;
          }
          pbVar1 = *(byte **)(param_1 + 8);
          if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
            local_4c = (uint)*pbVar1;
            *(byte **)(param_1 + 8) = pbVar1 + 1;
          }
          else {
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_0042c2c0;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_0042c2c0;
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar8 = FloatColor::MergePartialFromCodedStream(pFVar11,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042c2c0;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0042c1a0:
            pFVar11 = *(FloatColor **)(this + 0x18);
            *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
            if (pFVar11 == (FloatColor *)0x0) {
              pFVar11 = operator_new(0x20);
              FloatColor::FloatColor(pFVar11);
              *(FloatColor **)(this + 0x18) = pFVar11;
            }
            pbVar1 = *(byte **)(param_1 + 8);
                    /* try { // try from 0042c1cc to 0052c1cf has its CatchHandler @ 0042c440 */
            if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
              local_4c = (uint)*pbVar1;
              *(byte **)(param_1 + 8) = pbVar1 + 1;
            }
            else {
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar8 & 1) == 0) goto LAB_0042c2c0;
            }
            iVar6 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_0042c2c0;
                    /* try { // try from 0042c214 to 0052c217 has its CatchHandler @ 0042c434 */
                    /* try { // try from 0042c218 to 0052c25f has its CatchHandler @ 0042bf34 */
            iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
            uVar8 = FloatColor::MergePartialFromCodedStream(pFVar11,param_1);
            if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042c2c0;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar2 = *(char **)(param_1 + 8);
                    /* try { // try from 0042c260 to 0052c263 has its CatchHandler @ 0042c428 */
                    /* try { // try from 0042c264 to 0052c3ab has its CatchHandler @ 0042bf34 */
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '%')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0042c278:
              uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar8 & 1) == 0) goto LAB_0042c2c0;
              *(uint *)(this + 0x20) = local_4c;
              *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                uVar7 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_0042c2cc;
              }
            }
          }
        }
        goto LAB_0042bfac;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x24);
        goto LAB_0042c0cc;
      }
      break;
    case 3:
      if ((uVar5 & 7) == 2) goto LAB_0042c1a0;
      break;
    case 4:
      if ((uVar5 & 7) == 5) goto LAB_0042c278;
    }
    if ((uVar5 & 7) == 4) goto LAB_0042c2c8;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_0042c2c0:
      uVar7 = 0;
LAB_0042c2cc:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


