/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402c24
 * Function: Caver::Proto::SpriteComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SpriteComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::SpriteComponent::MergePartialFromCodedStream
          (SpriteComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  string *psVar7;
  
  puVar4 = PTR__default_texture_name__007e5d90;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  do {
    while ((pbVar2 = *(byte **)(param_1 + 8), pbVar2 < *(byte **)(param_1 + 0x10) &&
           (bVar3 = *pbVar2, -1 < (char)bVar3))) {
      uVar5 = (uint)bVar3;
      *(uint *)(param_1 + 0x20) = (uint)bVar3;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      if (bVar3 == 10) goto LAB_00402cb4;
LAB_00402c7c:
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
    if (uVar5 != 10) goto LAB_00402c7c;
LAB_00402cb4:
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
      return 1;
    }
  } while( true );
}


