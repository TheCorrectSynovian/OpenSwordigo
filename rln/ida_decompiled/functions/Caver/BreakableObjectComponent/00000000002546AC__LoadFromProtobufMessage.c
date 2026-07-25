/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002546AC
 * Mangled: _ZN5Caver24BreakableObjectComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7520  Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 12
 *   insn=0x00000000002546BC string=0x00000000002546C0 "`"
 *   insn=0x00000000002546C0 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002546C4 string=0x00000000002546C8 ""
 *   insn=0x00000000002546E0 string=0x00000000002546E4 "h"
 *   insn=0x00000000002546E8 string=0x00000000002546EC "hv"
 *   insn=0x00000000002546FC string=0x0000000000254700 "`z"
 *   insn=0x00000000002546FC string=0x00000000001F7520 "0'"
 *   insn=0x0000000000254708 string=0x000000000025470C ")"
 *   insn=0x0000000000254710 string=0x0000000000254714 "`"
 *   insn=0x0000000000254718 string=0x000000000025471C ")"
 *   insn=0x000000000025471C string=0x0000000000254720 "("
 *   insn=0x0000000000254728 string=0x000000000025472C "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BreakableObjectComponent::LoadFromProtobufMessage(
        Caver::BreakableObjectComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  __int64 v5; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::BreakableObjectComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9518);
  *((_BYTE *)this + 113) = *(_BYTE *)(Message + 12);
  *((_DWORD *)this + 29) = *(_DWORD *)(Message + 16);
  if ( (*(_BYTE *)(Message + 32) & 4) != 0 )
    *((_DWORD *)this + 30) = Caver::SpecialDamageTypeFromProtobufValue();
  if ( *(_QWORD *)(Message + 24) )
    v5 = Message;
  else
    v5 = Caver::Proto::BreakableObjectComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::BreakableObjectComponent *)((char *)this + 128),
    *(const Caver::Proto::Program **)(v5 + 24));
}

