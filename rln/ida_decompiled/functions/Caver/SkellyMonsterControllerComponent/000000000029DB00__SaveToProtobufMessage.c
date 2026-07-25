/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DB00
 * Mangled: _ZNK5Caver32SkellyMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SkellyMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA590  Caver::Proto::SkellyMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 14
 *   insn=0x000000000029DB14 string=0x000000000029DB18 "6_"
 *   insn=0x000000000029DB18 string=0x000000000029DB1C "H""
 *   insn=0x000000000029DB18 string=0x00000000001F57F0 "P'"
 *   insn=0x000000000029DB1C string=0x000000000029DB20 ""
 *   insn=0x000000000029DB20 string=0x000000000029DB24 "s""
 *   insn=0x000000000029DB2C string=0x00000000001FA590 "0'"
 *   insn=0x000000000029DB30 string=0x000000000029DB34 "b"
 *   insn=0x000000000029DB44 string=0x000000000029DB48 ""
 *   insn=0x000000000029DB44 string=0x00000000001F7570 "0'"
 *   insn=0x000000000029DB4C string=0x000000000029DB50 "\n"
 *   insn=0x000000000029DB50 string=0x000000000029DB54 "\t"
 *   insn=0x000000000029DB54 string=0x000000000029DB58 "\n"
 *   insn=0x000000000029DB5C string=0x000000000029DB60 ""
 *   insn=0x000000000029DB60 string=0x000000000029DB64 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SkellyMonsterControllerComponent::SaveToProtobufMessage(
        Caver::SkellyMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SkellyMonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8

  v3 = (Caver::Proto::SkellyMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                           this,
                                                           a2);
  Caver::Proto::SkellyMonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  result[3] = *((_DWORD *)this + 54);
  result[5] = v5 | 1;
  result[4] = *((_DWORD *)this + 60);
  result[5] = v5 | 3;
  return result;
}

