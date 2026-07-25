/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C97A4
 * Mangled: _ZNK5Caver14SwingComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SwingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FC430  Caver::Proto::SwingComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 13
 *   insn=0x00000000002C97C0 string=0x00000000002C97C4 ""
 *   insn=0x00000000002C97C4 string=0x00000000002C97C8 "s""
 *   insn=0x00000000002C97D0 string=0x00000000001FC430 "0'"
 *   insn=0x00000000002C97D4 string=0x00000000002C97D8 "b"
 *   insn=0x00000000002C97E4 string=0x00000000002C97E8 "b"
 *   insn=0x00000000002C97E8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002C97EC string=0x00000000002C97F0 "\t"
 *   insn=0x00000000002C97F0 string=0x00000000002C97F4 ""
 *   insn=0x00000000002C97F8 string=0x00000000002C97FC ")"
 *   insn=0x00000000002C97FC string=0x00000000002C9800 "@"
 *   insn=0x00000000002C9804 string=0x00000000002C9808 "D"
 *   insn=0x00000000002C980C string=0x00000000002C9810 "\t"
 *   insn=0x00000000002C9810 string=0x00000000002C9814 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingComponent::SaveToProtobufMessage(
        Caver::SwingComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SwingComponent *v3; // x0
  __int64 result; // x0
  int v5; // w9
  __int64 v6; // x8

  v3 = (Caver::Proto::SwingComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SwingComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 28);
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 30);
  *(_BYTE *)(result + 16) = *((_BYTE *)this + 144);
  *(_BYTE *)(result + 17) = *((_BYTE *)this + 145);
  v6 = *((_QWORD *)this + 17);
  *(_DWORD *)(result + 28) = v5 | 0x1F;
  *(_QWORD *)(result + 20) = v6;
  return result;
}

