/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026EA50
 * Mangled: _ZNK5Caver19EntityInfoComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FD2C0  Caver::Proto::EntityInfoComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x000000000026EA64 string=0x000000000026EA68 ".B"
 *   insn=0x000000000026EA6C string=0x000000000026EA70 "AA"
 *   insn=0x000000000026EA70 string=0x000000000026EA74 "s""
 *   insn=0x000000000026EA7C string=0x00000000001FD2C0 "0'"
 *   insn=0x000000000026EA80 string=0x000000000026EA84 "b"
 *   insn=0x000000000026EA94 string=0x00000000001F7570 "0'"
 *   insn=0x000000000026EA9C string=0x000000000026EAA0 "h"
 *   insn=0x000000000026EAA0 string=0x000000000026EAA4 "`\n@"
 *   insn=0x000000000026EAA4 string=0x000000000026EAA8 ")"
 *   insn=0x000000000026EAAC string=0x000000000026EAB0 ""
 *   insn=0x000000000026EAB0 string=0x000000000026EAB4 "h"
 *   insn=0x000000000026EAC4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026EAC8 string=0x000000000026EACC ""
 *   insn=0x000000000026EACC string=0x000000000026EAD0 "a"
 *   insn=0x000000000026EAD0 string=0x000000000026EAD4 ""
 *   insn=0x000000000026EAD4 string=0x000000000026EAD8 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::SaveToProtobufMessage(
        Caver::EntityInfoComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::EntityInfoComponent *v2; // x0
  __int64 v3; // x19
  __int64 *v4; // x0

  v2 = (Caver::Proto::EntityInfoComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::EntityInfoComponent::default_instance(v2);
  v3 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v4 = *(__int64 **)(v3 + 16);
  *(_DWORD *)(v3 + 24) |= 1u;
  if ( v4 == &Caver::Proto::EntityInfoComponent::_default_entity_class_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v3 + 16) = v4;
  }
  return sub_56A6A8(v4);
}

