/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C654
 * Mangled: _ZNK5Caver29ProjectileControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ProjectileControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000201780  Caver::Proto::ProjectileControllerComponent::default_instance(void)
 *
 * Referenced strings: 11
 *   insn=0x000000000028C668 string=0x000000000028C66C "-"
 *   insn=0x000000000028C670 string=0x000000000028C674 ""
 *   insn=0x000000000028C674 string=0x000000000028C678 "s""
 *   insn=0x000000000028C67C string=0x000000000028C680 "@"
 *   insn=0x000000000028C684 string=0x000000000028C688 "b"
 *   insn=0x000000000028C698 string=0x00000000001F7570 "0'"
 *   insn=0x000000000028C69C string=0x000000000028C6A0 "\t"
 *   insn=0x000000000028C6A0 string=0x000000000028C6A4 "0"
 *   insn=0x000000000028C6A8 string=0x000000000028C6AC ")"
 *   insn=0x000000000028C6AC string=0x000000000028C6B0 "\t"
 *   insn=0x000000000028C6B0 string=0x000000000028C6B4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::SaveToProtobufMessage(
        Caver::ProjectileControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ProjectileControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w9
  char v6; // w8

  v3 = (Caver::Proto::ProjectileControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ProjectileControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 16);
  *(_BYTE *)(result + 12) = *((_BYTE *)this + 112);
  v6 = *((_BYTE *)this + 113);
  *(_DWORD *)(result + 16) = v5 | 3;
  *(_BYTE *)(result + 13) = v6;
  return result;
}

