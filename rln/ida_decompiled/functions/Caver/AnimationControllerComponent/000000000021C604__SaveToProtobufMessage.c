/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C604
 * Mangled: _ZNK5Caver28AnimationControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001F77B0  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F80B0  Caver::Proto::AnimationControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 15
 *   insn=0x000000000021C618 string=0x000000000021C61C "A"
 *   insn=0x000000000021C61C string=0x000000000021C620 "H&"
 *   insn=0x000000000021C620 string=0x000000000021C624 ""
 *   insn=0x000000000021C624 string=0x000000000021C628 "s""
 *   insn=0x000000000021C630 string=0x00000000001F80B0 "0'"
 *   insn=0x000000000021C634 string=0x000000000021C638 "b"
 *   insn=0x000000000021C648 string=0x000000000021C64C ""
 *   insn=0x000000000021C648 string=0x00000000001F7570 "0'"
 *   insn=0x000000000021C650 string=0x000000000021C654 "\n"
 *   insn=0x000000000021C654 string=0x000000000021C658 "\n"
 *   insn=0x000000000021C658 string=0x000000000021C65C "\t"
 *   insn=0x000000000021C660 string=0x000000000021C664 "\t"
 *   insn=0x000000000021C664 string=0x000000000021C668 "\t"
 *   insn=0x000000000021C66C string=0x000000000021C670 ""
 *   insn=0x000000000021C670 string=0x000000000021C674 "\tP"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimationControllerComponent::SaveToProtobufMessage(
        Caver::AnimationControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::AnimationControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9

  v3 = (Caver::Proto::AnimationControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::AnimationControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 24);
  v6 = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 24) = v5 | 1;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = *((_DWORD *)this + 36);
  LOBYTE(v6) = *((_BYTE *)this + 168);
  *(_DWORD *)(result + 24) = v5 | 7;
  *(_BYTE *)(result + 20) = v6;
  return result;
}

