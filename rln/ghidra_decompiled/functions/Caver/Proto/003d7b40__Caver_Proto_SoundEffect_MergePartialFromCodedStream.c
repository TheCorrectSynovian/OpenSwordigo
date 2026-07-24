/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7b40
 * Function: Caver::Proto::SoundEffect::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SoundEffect * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SoundEffect::MergePartialFromCodedStream(SoundEffect *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  uint local_5c;
  long local_58;
  
  puVar8 = PTR__default_name__007e7200;
  puVar7 = PTR__default_resource_name__007e66e8;
  puVar6 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003d7b94:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = (ulong)uVar9;
      *(uint *)(param_1 + 0x20) = uVar9;
      if (uVar9 != 0) goto LAB_003d7bd4;
LAB_003d7d80:
      uVar10 = 1;
      goto LAB_003d7d84;
    }
    uVar11 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_003d7d80;
LAB_003d7bd4:
    uVar9 = (uint)uVar11;
    switch((int)(uVar11 >> 3)) {
    case 1:
      if ((uVar9 & 7) == 2) {
        psVar12 = *(string **)(this + 0x10);
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
        if (psVar12 == (string *)puVar8) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar1;
          *(string **)(this + 0x10) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) goto LAB_003d7d78;
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003d7c84:
          psVar12 = *(string **)(this + 0x18);
          *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
          if (psVar12 == (string *)puVar7) {
            psVar12 = operator_new(8);
            *(undefined **)psVar12 = puVar6 + 0x18;
            *(string **)(this + 0x18) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) goto LAB_003d7d78;
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003d7ce0:
            uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                               (param_1,&local_5c);
            if ((uVar11 & 1) == 0) goto LAB_003d7d78;
            *(uint *)(this + 0x20) = local_5c;
            *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
            pcVar3 = *(char **)(param_1 + 8);
            if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '%')) {
              *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003d7d24:
              uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                 (param_1,&local_5c);
              if ((uVar11 & 1) == 0) goto LAB_003d7d78;
              *(uint *)(this + 0x24) = local_5c;
              *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                uVar10 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_003d7d84;
              }
            }
          }
        }
        goto LAB_003d7b94;
      }
      break;
    case 2:
      if ((uVar9 & 7) == 2) goto LAB_003d7c84;
      break;
    case 3:
      if ((uVar9 & 7) == 5) goto LAB_003d7ce0;
      break;
    case 4:
      if ((uVar9 & 7) == 5) goto LAB_003d7d24;
    }
    if ((uVar9 & 7) == 4) goto LAB_003d7d80;
    uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
    if ((uVar11 & 1) == 0) {
LAB_003d7d78:
      uVar10 = 0;
LAB_003d7d84:
      if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10);
      }
      return;
    }
  } while( true );
}


