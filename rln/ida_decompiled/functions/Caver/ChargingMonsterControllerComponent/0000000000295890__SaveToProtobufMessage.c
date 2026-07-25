/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295890
 * Mangled: _ZNK5Caver34ChargingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F58E0  Caver::Proto::ChargingMonsterControllerComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 19
 *   insn=0x00000000002958A8 string=0x00000000001F57F0 "P'"
 *   insn=0x00000000002958AC string=0x00000000002958B0 "=B"
 *   insn=0x00000000002958B0 string=0x00000000002958B4 "s""
 *   insn=0x00000000002958B8 string=0x00000000002958BC "\t"
 *   insn=0x00000000002958BC string=0x00000000001F58E0 "P'"
 *   insn=0x00000000002958C0 string=0x00000000002958C4 "b"
 *   insn=0x00000000002958D0 string=0x00000000002958D4 "'"
 *   insn=0x00000000002958D4 string=0x00000000002958D8 " @"
 *   insn=0x00000000002958D4 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002958DC string=0x00000000002958E0 "\n"
 *   insn=0x00000000002958E0 string=0x00000000002958E4 "\n "
 *   insn=0x00000000002958E4 string=0x00000000002958E8 "\t"
 *   insn=0x00000000002958EC string=0x00000000002958F0 "\n"
 *   insn=0x00000000002958F0 string=0x00000000002958F4 "\n "
 *   insn=0x00000000002958F4 string=0x00000000002958F8 ""
 *   insn=0x00000000002958F8 string=0x00000000002958FC "\t"
 *   insn=0x0000000000295900 string=0x0000000000295904 "\t"
 *   insn=0x0000000000295908 string=0x000000000029590C " "
 *   insn=0x000000000029590C string=0x0000000000295910 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::ChargingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ChargingMonsterControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  __int64 v8; // x9

  v3 = (Caver::Proto::ChargingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                             this,
                                                             a2);
  Caver::Proto::ChargingMonsterControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 32);
  v6 = *((_DWORD *)this + 54);
  *(_DWORD *)(result + 32) = v5 | 1;
  *(_DWORD *)(result + 12) = v6;
  v7 = *((_DWORD *)this + 60);
  *(_DWORD *)(result + 32) = v5 | 3;
  *(_DWORD *)(result + 16) = v7;
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 66);
  v8 = *((_QWORD *)this + 37);
  *(_DWORD *)(result + 32) = v5 | 0x1F;
  *(_QWORD *)(result + 24) = v8;
  return result;
}

