/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C638
 * Mangled: _ZNK5Caver34ShootingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ShootingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FE000  Caver::Proto::ShootingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 14
 *   insn=0x000000000029C64C string=0x000000000029C650 "hd"
 *   insn=0x000000000029C650 string=0x000000000029C654 "H""
 *   insn=0x000000000029C650 string=0x00000000001F57F0 "P'"
 *   insn=0x000000000029C654 string=0x000000000029C658 ""
 *   insn=0x000000000029C658 string=0x000000000029C65C "s""
 *   insn=0x000000000029C660 string=0x000000000029C664 "g"
 *   insn=0x000000000029C668 string=0x000000000029C66C "b"
 *   insn=0x000000000029C67C string=0x000000000029C680 ""
 *   insn=0x000000000029C67C string=0x00000000001F7570 "0'"
 *   insn=0x000000000029C684 string=0x000000000029C688 "\n"
 *   insn=0x000000000029C688 string=0x000000000029C68C "\t"
 *   insn=0x000000000029C68C string=0x000000000029C690 "\n"
 *   insn=0x000000000029C694 string=0x000000000029C698 ""
 *   insn=0x000000000029C698 string=0x000000000029C69C "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ShootingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::ShootingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ShootingMonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8

  v3 = (Caver::Proto::ShootingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                             this,
                                                             a2);
  Caver::Proto::ShootingMonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  result[3] = *((_DWORD *)this + 54);
  result[5] = v5 | 1;
  result[4] = *((_DWORD *)this + 60);
  result[5] = v5 | 3;
  return result;
}

