/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c24c
 * Function: Caver::Proto::BackgroundComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BackgroundComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::BackgroundComponent::MergePartialFromCodedStream
          (BackgroundComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  string *psVar7;
  
  puVar4 = PTR__default_texture_name__007e56a8;
                    /* try { // try from 0041c258 to 0051c26b has its CatchHandler @ 0041c384 */
                    /* try { // try from 0041c26c to 0051c283 has its CatchHandler @ 0041c34c */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  do {
                    /* try { // try from 0041c284 to 0051c423 has its CatchHandler @ 0041c154 */
    while ((pbVar2 = *(byte **)(param_1 + 8), pbVar2 < *(byte **)(param_1 + 0x10) &&
           (bVar3 = *pbVar2, -1 < (char)bVar3))) {
      uVar5 = (uint)bVar3;
      *(uint *)(param_1 + 0x20) = (uint)bVar3;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      if (bVar3 == 10) goto LAB_0041c2dc;
LAB_0041c2a4:
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        return 1;
      }
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 10) goto LAB_0041c2a4;
LAB_0041c2dc:
    psVar7 = *(string **)(this + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (psVar7 == (string *)puVar4) {
      psVar7 = operator_new(8);
      *(undefined **)psVar7 = puVar1;
      *(string **)(this + 0x10) = psVar7;
    }
    uVar6 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar7);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      param_1[0x24] = (CodedInputStream)0x1;
                    /* catch() { ... } // from try @ 0041c26c with catch @ 0041c34c */
      return 1;
    }
  } while( true );
}


