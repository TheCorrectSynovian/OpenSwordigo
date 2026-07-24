/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d630c
 * Function: Caver::Proto::GUIMargins::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GUIMargins * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::GUIMargins::MergePartialFromCodedStream(GUIMargins *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
LAB_003d633c:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_003d637c;
LAB_003d64fc:
      uVar6 = 1;
      goto LAB_003d6500;
    }
    uVar7 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_003d64fc;
LAB_003d637c:
    uVar5 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar5 & 7) == 5) {
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar7 & 1) == 0) goto LAB_003d64f4;
        *(uint *)(this + 0xc) = local_3c;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003d6418:
          uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_3c);
          if ((uVar7 & 1) == 0) goto LAB_003d64f4;
          *(uint *)(this + 0x10) = local_3c;
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003d645c:
            uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_3c);
            if ((uVar7 & 1) == 0) goto LAB_003d64f4;
            *(uint *)(this + 0x14) = local_3c;
            *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
            pcVar2 = *(char **)(param_1 + 8);
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '%')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003d64a0:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_3c);
              if ((uVar7 & 1) == 0) goto LAB_003d64f4;
              *(uint *)(this + 0x18) = local_3c;
              *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                uVar6 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_003d6500;
              }
            }
          }
        }
        goto LAB_003d633c;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 5) goto LAB_003d6418;
      break;
    case 3:
      if ((uVar5 & 7) == 5) goto LAB_003d645c;
      break;
    case 4:
      if ((uVar5 & 7) == 5) goto LAB_003d64a0;
    }
    if ((uVar5 & 7) == 4) goto LAB_003d64fc;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar7 & 1) == 0) {
LAB_003d64f4:
      uVar6 = 0;
LAB_003d6500:
      if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


