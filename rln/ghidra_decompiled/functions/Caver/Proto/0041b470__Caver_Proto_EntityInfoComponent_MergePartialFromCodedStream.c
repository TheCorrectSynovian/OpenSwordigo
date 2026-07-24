/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b470
 * Function: Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EntityInfoComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream
          (EntityInfoComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  string *psVar7;
  
  puVar4 = PTR__default_entity_class__007e6138;
                    /* try { // try from 0041b47c to 0051b4af has its CatchHandler @ 0041b4c4 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  do {
    while ((pbVar2 = *(byte **)(param_1 + 8), pbVar2 < *(byte **)(param_1 + 0x10) &&
           (bVar3 = *pbVar2, -1 < (char)bVar3))) {
      uVar5 = (uint)bVar3;
                    /* try { // try from 0041b4b4 to 0051b4bb has its CatchHandler @ 0041b4c8 */
      *(uint *)(param_1 + 0x20) = (uint)bVar3;
                    /* try { // try from 0041b4bc to 0051b4eb has its CatchHandler @ 0041b1a4 */
      *(byte **)(param_1 + 8) = pbVar2 + 1;
                    /* catch() { ... } // from try @ 0041b47c with catch @ 0041b4c4 */
      if (bVar3 == 10) goto LAB_0041b500;
LAB_0041b4c8:
                    /* catch() { ... } // from try @ 0041b460 with catch @ 0041b4c8
                       catch() { ... } // from try @ 0041b4b4 with catch @ 0041b4c8 */
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        return 1;
      }
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
                    /* try { // try from 0041b4ec to 0051b5bf has its CatchHandler @ 0041b5c8 */
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 10) goto LAB_0041b4c8;
LAB_0041b500:
    psVar7 = *(string **)(this + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (psVar7 == (string *)puVar4) {
                    /* catch() { ... } // from try @ 0041b284 with catch @ 0041b518 */
                    /* catch() { ... } // from try @ 0041b26c with catch @ 0041b51c */
      psVar7 = operator_new(8);
                    /* catch() { ... } // from try @ 0041b248 with catch @ 0041b520 */
                    /* catch() { ... } // from try @ 0041b228 with catch @ 0041b524
                       catch() { ... } // from try @ 0041b254 with catch @ 0041b524
                       catch() { ... } // from try @ 0041b290 with catch @ 0041b524 */
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
                    /* catch() { ... } // from try @ 0041b314 with catch @ 0041b574 */
      return 1;
    }
  } while( true );
}


