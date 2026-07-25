/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022D020
 * Mangled: _ZN5Caver20OverlayTextComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::OverlayTextComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF0D0  Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 14
 *   insn=0x000000000022D034 string=0x000000000022D038 "&H"
 *   insn=0x000000000022D03C string=0x000000000022D040 "%G"
 *   insn=0x000000000022D040 string=0x000000000022D044 "`""
 *   insn=0x000000000022D04C string=0x000000000022D050 "PG"
 *   insn=0x000000000022D054 string=0x000000000022D058 "a\n@"
 *   insn=0x000000000022D064 string=0x000000000022D068 "h"
 *   insn=0x000000000022D078 string=0x000000000022D07C "("
 *   insn=0x000000000022D07C string=0x000000000022D080 "@"
 *   insn=0x000000000022D080 string=0x000000000022D084 ""
 *   insn=0x000000000022D088 string=0x000000000022D08C "a"
 *   insn=0x000000000022D090 string=0x000000000022D094 "h"
 *   insn=0x000000000022D09C string=0x000000000022D0A0 "("
 *   insn=0x000000000022D0A0 string=0x000000000022D0A4 ""
 *   insn=0x000000000022D0A4 string=0x000000000022D0A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::LoadFromProtobufMessage(
        Caver::OverlayTextComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x19
  __int64 v5; // x8
  __int64 result; // x0
  __int64 v7; // x8

  Caver::OverlayComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::OverlayTextComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E97F0);
  sub_56A6A8((char *)this + 112);
  if ( *(_QWORD *)(Message + 24) )
    v5 = Message;
  else
    v5 = Caver::Proto::OverlayTextComponent::default_instance_;
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 12LL);
  result = sub_56A6A8((char *)this + 144);
  if ( *(_QWORD *)(Message + 40) )
    v7 = Message;
  else
    v7 = Caver::Proto::OverlayTextComponent::default_instance_;
  *((_QWORD *)this + 19) = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 12LL);
  return result;
}

