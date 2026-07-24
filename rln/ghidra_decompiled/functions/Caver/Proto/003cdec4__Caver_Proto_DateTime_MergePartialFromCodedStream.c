/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdec4
 * Function: Caver::Proto::DateTime::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(DateTime * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::DateTime::MergePartialFromCodedStream(DateTime *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar4 = (uint)bVar2;
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      if (bVar2 == 9) goto LAB_003cdf50;
LAB_003cdf18:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        uVar6 = 1;
        goto LAB_003cdfa4;
      }
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar5 & 1) == 0) {
LAB_003cdfa0:
        uVar6 = 0;
        goto LAB_003cdfa4;
      }
    }
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 9) goto LAB_003cdf18;
LAB_003cdf50:
    uVar5 = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(param_1,&local_40);
    if ((uVar5 & 1) == 0) goto LAB_003cdfa0;
    *(ulong *)(this + 0x10) = local_40;
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
  } while ((*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x2c) == 0))
  ;
  uVar6 = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (CodedInputStream)0x1;
LAB_003cdfa4:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


