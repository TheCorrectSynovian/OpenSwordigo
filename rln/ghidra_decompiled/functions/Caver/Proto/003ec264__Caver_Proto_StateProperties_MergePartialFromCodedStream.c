/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec264
 * Function: Caver::Proto::StateProperties::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(StateProperties * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::StateProperties::MergePartialFromCodedStream
          (StateProperties *this,CodedInputStream *param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  string *psVar7;
  int iVar8;
  
  do {
    while ((pbVar2 = *(byte **)(param_1 + 8), pbVar2 < *(byte **)(param_1 + 0x10) &&
           (bVar4 = *pbVar2, -1 < (char)bVar4))) {
      uVar5 = (uint)bVar4;
      *(uint *)(param_1 + 0x20) = (uint)bVar4;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      if (bVar4 == 10) goto LAB_003ec2f0;
LAB_003ec2ac:
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
    if (uVar5 != 10) goto LAB_003ec2ac;
LAB_003ec2f0:
    while( true ) {
      iVar1 = *(int *)(this + 0x18);
      iVar8 = *(int *)(this + 0x1c);
      if (iVar1 < iVar8) {
        *(int *)(this + 0x18) = iVar1 + 1;
        psVar7 = *(string **)(*(long *)(this + 0x10) + (long)iVar1 * 8);
      }
      else {
        if (iVar8 == *(int *)(this + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x10),iVar8 + 1);
          iVar8 = *(int *)(this + 0x1c);
        }
        *(int *)(this + 0x1c) = iVar8 + 1;
        psVar7 = (string *)google::protobuf::internal::StringTypeHandlerBase::New();
        iVar1 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar1 + 1;
        *(string **)(*(long *)(this + 0x10) + (long)iVar1 * 8) = psVar7;
      }
      uVar6 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar7);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((*(char **)(param_1 + 0x10) <= pcVar3) || (*pcVar3 != '\n')) break;
      *(char **)(param_1 + 8) = pcVar3 + 1;
    }
    if ((pcVar3 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      param_1[0x24] = (CodedInputStream)0x1;
      return 1;
    }
  } while( true );
}


