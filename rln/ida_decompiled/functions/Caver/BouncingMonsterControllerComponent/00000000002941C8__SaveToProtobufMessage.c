/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002941C8
 * Mangled: _ZNK5Caver34BouncingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAB80  Caver::Proto::BouncingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000002941E0 string=0x00000000001F57F0 "P'"
 *   insn=0x00000000002941E4 string=0x00000000002941E8 "9G"
 *   insn=0x00000000002941E8 string=0x00000000002941EC "s""
 *   insn=0x00000000002941F0 string=0x00000000002941F4 "c"
 *   insn=0x00000000002941F4 string=0x00000000001FAB80 "0'"
 *   insn=0x00000000002941F8 string=0x00000000002941FC "b"
 *   insn=0x000000000029420C string=0x0000000000294210 ""
 *   insn=0x000000000029420C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000294214 string=0x0000000000294218 "\n"
 *   insn=0x0000000000294218 string=0x000000000029421C "\n"
 *   insn=0x000000000029421C string=0x0000000000294220 "\t"
 *   insn=0x0000000000294224 string=0x0000000000294228 ""
 *   insn=0x0000000000294228 string=0x000000000029422C "\t"
 *   insn=0x0000000000294230 string=0x0000000000294234 ""
 *   insn=0x0000000000294234 string=0x0000000000294238 "\t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::BouncingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BouncingMonsterControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  __int64 v7; // x9

  v3 = (Caver::Proto::BouncingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                             this,
                                                             a2);
  Caver::Proto::BouncingMonsterControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 28);
  v6 = *((_DWORD *)this + 54);
  *(_DWORD *)(result + 28) = v5 | 1;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = *((_DWORD *)this + 60);
  v7 = *((_QWORD *)this + 33);
  *(_DWORD *)(result + 28) = v5 | 0xF;
  *(_QWORD *)(result + 20) = v7;
  return result;
}

