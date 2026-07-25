/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298CAC
 * Mangled: _ZNK5Caver33LeapingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::LeapingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F5CF0  Caver::Proto::LeapingMonsterControllerComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 14
 *   insn=0x0000000000298CC4 string=0x0000000000298CC8 "h""
 *   insn=0x0000000000298CC4 string=0x00000000001F57F0 "P'"
 *   insn=0x0000000000298CC8 string=0x0000000000298CCC "UB"
 *   insn=0x0000000000298CCC string=0x0000000000298CD0 "s""
 *   insn=0x0000000000298CD8 string=0x00000000001F5CF0 "P'"
 *   insn=0x0000000000298CDC string=0x0000000000298CE0 "b"
 *   insn=0x0000000000298CEC string=0x0000000000298CF0 " z"
 *   insn=0x0000000000298CF0 string=0x0000000000298CF4 ""
 *   insn=0x0000000000298CF0 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000298CF8 string=0x0000000000298CFC "\n"
 *   insn=0x0000000000298CFC string=0x0000000000298D00 "\t"
 *   insn=0x0000000000298D00 string=0x0000000000298D04 "\n"
 *   insn=0x0000000000298D08 string=0x0000000000298D0C ""
 *   insn=0x0000000000298D0C string=0x0000000000298D10 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::LeapingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::LeapingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::LeapingMonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8

  v3 = (Caver::Proto::LeapingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                            this,
                                                            a2);
  Caver::Proto::LeapingMonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  result[3] = *((_DWORD *)this + 54);
  result[5] = v5 | 1;
  result[4] = *((_DWORD *)this + 60);
  result[5] = v5 | 3;
  return result;
}

