/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411390
 * Function: Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SoundEffectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream
          (SoundEffectComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  uint local_4c;
  long local_48;
  
  puVar7 = PTR__default_name__007e7518;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_004113d0:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = uVar8 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar8;
      if ((int)uVar8 != 0) goto LAB_00411410;
LAB_00411550:
      uVar9 = 1;
      goto LAB_00411554;
    }
    uVar11 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_00411550;
LAB_00411410:
    iVar6 = (int)(uVar11 >> 3);
    uVar10 = (uint)uVar11;
    if (iVar6 == 1) {
      if ((uVar10 & 7) == 2) {
        psVar12 = *(string **)(this + 0x10);
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
        if (psVar12 == (string *)puVar7) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar1;
          *(string **)(this + 0x10) = psVar12;
        }
        uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar8 & 1) == 0) goto LAB_00411548;
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x15')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_004114b0:
          uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_4c);
          if ((uVar8 & 1) == 0) goto LAB_00411548;
          *(uint *)(this + 0x1c) = local_4c;
          *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_004114f4:
            uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_00411548;
            *(uint *)(this + 0x18) = local_4c;
            *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
            if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
               (*(int *)(param_1 + 0x2c) != 0)) {
              uVar9 = 1;
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
              goto LAB_00411554;
            }
          }
        }
        goto LAB_004113d0;
      }
    }
    else if (iVar6 == 2) {
      if ((uVar10 & 7) == 5) goto LAB_004114b0;
    }
    else if ((iVar6 == 3) && ((uVar10 & 7) == 5)) goto LAB_004114f4;
    if ((uVar10 & 7) == 4) goto LAB_00411550;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar8 & 1) == 0) {
LAB_00411548:
      uVar9 = 0;
LAB_00411554:
      if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
      return;
    }
  } while( true );
}


