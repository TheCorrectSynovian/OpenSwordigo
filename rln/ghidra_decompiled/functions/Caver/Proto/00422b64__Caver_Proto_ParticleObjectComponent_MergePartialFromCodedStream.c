/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422b64
 * Function: Caver::Proto::ParticleObjectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ParticleObjectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ParticleObjectComponent::MergePartialFromCodedStream
          (ParticleObjectComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 00422b6c to 00522ba3 has its CatchHandler @ 004228f0 */
                    /* catch() { ... } // from try @ 00422b44 with catch @ 00422b74 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00422afc with catch @ 00422b80 */
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), pbVar1 < *(byte **)(param_1 + 0x10) &&
           (bVar2 = *pbVar1, -1 < (char)bVar2))) {
      uVar4 = (uint)bVar2;
                    /* try { // try from 00422ba4 to 00522bcb has its CatchHandler @ 00422bd4 */
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
      if (bVar2 == 8) goto LAB_00422bf0;
LAB_00422bb8:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        uVar6 = 1;
        goto LAB_00422c6c;
      }
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar5 & 1) == 0) {
LAB_00422c68:
        uVar6 = 0;
        goto LAB_00422c6c;
      }
    }
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 8) goto LAB_00422bb8;
LAB_00422bf0:
    pbVar1 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((pbVar7 <= pbVar1) || ((char)*pbVar1 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar5 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        goto LAB_00422c30;
      }
      goto LAB_00422c68;
    }
    pbVar8 = pbVar1 + 1;
    local_3c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar8;
LAB_00422c30:
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  } while ((pbVar8 != pbVar7) || (*(int *)(param_1 + 0x2c) == 0));
  uVar6 = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (CodedInputStream)0x1;
LAB_00422c6c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


