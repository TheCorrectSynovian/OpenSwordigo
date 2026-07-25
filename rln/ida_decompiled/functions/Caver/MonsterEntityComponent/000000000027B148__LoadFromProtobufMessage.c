/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027B148
 * Mangled: _ZN5Caver22MonsterEntityComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MonsterEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4D30  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 12
 *   insn=0x000000000027B160 string=0x000000000027B164 "H#"
 *   insn=0x000000000027B160 string=0x00000000001F4D30 "P'"
 *   insn=0x000000000027B164 string=0x000000000027B168 ""
 *   insn=0x000000000027B17C string=0x000000000027B180 "U#"
 *   insn=0x000000000027B188 string=0x000000000027B18C "`"
 *   insn=0x000000000027B194 string=0x000000000027B198 "("
 *   insn=0x000000000027B1A8 string=0x000000000027B1AC "`b"
 *   insn=0x000000000027B1B0 string=0x000000000027B1B4 "("
 *   insn=0x000000000027B1C0 string=0x000000000027B1C4 "h"
 *   insn=0x000000000027B1C4 string=0x000000000027B1D0 "h"
 *   insn=0x000000000027B1C8 string=0x000000000027B1CC "ib"
 *   insn=0x000000000027B1D4 string=0x000000000027B1D8 "hj"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterEntityComponent::LoadFromProtobufMessage(
        Caver::MonsterEntityComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  int v7; // w8

  Caver::EntityComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::MonsterEntityComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E94F8);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::MonsterEntityComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::MonsterEntityComponent *)((char *)this + 304),
    *(const Caver::Proto::Program **)(v5 + 16));
  if ( *(_QWORD *)(Message + 24) )
    v6 = Message;
  else
    v6 = Caver::Proto::MonsterEntityComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::MonsterEntityComponent *)((char *)this + 344),
    *(const Caver::Proto::Program **)(v6 + 24));
  v7 = *(_DWORD *)(Message + 36);
  if ( (v7 & 4) != 0 )
    *((_BYTE *)this + 408) = *(_BYTE *)(Message + 32);
  if ( (v7 & 8) != 0 )
    *((_BYTE *)this + 410) = *(_BYTE *)(Message + 33);
}

