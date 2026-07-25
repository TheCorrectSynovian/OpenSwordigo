/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293438
 * Mangled: _ZNK5Caver29BatMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BatMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FE390  Caver::Proto::BatMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000293450 string=0x00000000001F57F0 "P'"
 *   insn=0x0000000000293454 string=0x0000000000293458 ""
 *   insn=0x0000000000293458 string=0x000000000029345C "s""
 *   insn=0x0000000000293468 string=0x000000000029346C "b"
 *   insn=0x0000000000293478 string=0x000000000029347C "="
 *   insn=0x000000000029347C string=0x0000000000293480 ""
 *   insn=0x000000000029347C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000293484 string=0x0000000000293488 "\n"
 *   insn=0x0000000000293488 string=0x000000000029348C "\t"
 *   insn=0x000000000029348C string=0x0000000000293490 "\n"
 *   insn=0x0000000000293494 string=0x0000000000293498 ""
 *   insn=0x0000000000293498 string=0x000000000029349C "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BatMonsterControllerComponent::SaveToProtobufMessage(
        Caver::BatMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BatMonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8

  v3 = (Caver::Proto::BatMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::BatMonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  result[3] = *((_DWORD *)this + 54);
  result[5] = v5 | 1;
  result[4] = *((_DWORD *)this + 60);
  result[5] = v5 | 3;
  return result;
}

