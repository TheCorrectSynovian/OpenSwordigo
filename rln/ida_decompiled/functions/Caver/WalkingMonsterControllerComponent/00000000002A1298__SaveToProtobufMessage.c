/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1298
 * Mangled: _ZNK5Caver33WalkingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x0000000000202410  Caver::Proto::WalkingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000002A12AC string=0x00000000002A12B0 "PQ"
 *   insn=0x00000000002A12B0 string=0x00000000002A12B4 "(""
 *   insn=0x00000000002A12B0 string=0x00000000001F57F0 "P'"
 *   insn=0x00000000002A12B4 string=0x00000000002A12B8 ""
 *   insn=0x00000000002A12B8 string=0x00000000002A12BC "s""
 *   insn=0x00000000002A12C0 string=0x00000000002A12C4 "S"
 *   insn=0x00000000002A12C8 string=0x00000000002A12CC "b"
 *   insn=0x00000000002A12DC string=0x00000000002A12E0 ""
 *   insn=0x00000000002A12DC string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A12E4 string=0x00000000002A12E8 ""
 *   insn=0x00000000002A12E8 string=0x00000000002A12EC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::WalkingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::WalkingMonsterControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8

  v3 = (Caver::Proto::WalkingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                            this,
                                                            a2);
  Caver::Proto::WalkingMonsterControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 16) | 1;
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 54);
  *(_DWORD *)(result + 16) = v5;
  return result;
}

