/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002972C0
 * Mangled: _ZNK5Caver33GenericMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F6370  Caver::Proto::GenericMonsterControllerComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 12
 *   insn=0x00000000002972D4 string=0x00000000002972D8 "Fy"
 *   insn=0x00000000002972D8 string=0x00000000002972DC "h""
 *   insn=0x00000000002972D8 string=0x00000000001F57F0 "P'"
 *   insn=0x00000000002972DC string=0x00000000002972E0 ""
 *   insn=0x00000000002972E0 string=0x00000000002972E4 "s""
 *   insn=0x00000000002972E8 string=0x00000000002972EC "!|"
 *   insn=0x00000000002972EC string=0x00000000001F6370 "0'"
 *   insn=0x00000000002972F0 string=0x00000000002972F4 "b"
 *   insn=0x0000000000297304 string=0x0000000000297308 ""
 *   insn=0x0000000000297304 string=0x00000000001F7570 "0'"
 *   insn=0x000000000029730C string=0x0000000000297310 ""
 *   insn=0x0000000000297310 string=0x0000000000297314 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(
        Caver::GenericMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::GenericMonsterControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8

  v3 = (Caver::Proto::GenericMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                            this,
                                                            a2);
  Caver::Proto::GenericMonsterControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 16) | 1;
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 54);
  *(_DWORD *)(result + 16) = v5;
  return result;
}

