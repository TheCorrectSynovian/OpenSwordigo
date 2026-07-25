/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231690
 * Mangled: _ZN5Caver16ProgramComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ProgramComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 18
 *   insn=0x00000000002316A0 string=0x00000000002316A4 "g$"
 *   insn=0x00000000002316A4 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002316A8 string=0x00000000002316AC ""
 *   insn=0x00000000002316BC string=0x00000000002316C0 "0@9h"
 *   insn=0x00000000002316C0 string=0x00000000002316C4 "h"
 *   insn=0x00000000002316C4 string=0x00000000002316C8 "4@9h"
 *   insn=0x00000000002316C8 string=0x00000000002316CC "h"
 *   insn=0x00000000002316CC string=0x00000000002316D0 ""
 *   insn=0x00000000002316D0 string=0x00000000002316D4 ""
 *   insn=0x00000000002316E0 string=0x00000000002316E8 "("
 *   insn=0x00000000002316EC string=0x00000000002316F4 "hv"
 *   insn=0x00000000002316F4 string=0x00000000002316F8 ""
 *   insn=0x000000000023170C string=0x0000000000231710 ""
 *   insn=0x0000000000231710 string=0x0000000000231714 ")uC"
 *   insn=0x000000000023171C string=0x0000000000231720 ")"
 *   insn=0x0000000000231720 string=0x0000000000231724 "("
 *   insn=0x0000000000231728 string=0x000000000023172C "`"
 *   insn=0x0000000000231730 string=0x0000000000231734 "{A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::LoadFromProtobufMessage(
        Caver::ProgramComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  int v5; // w8
  int v6; // w8
  __int64 v7; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::ProgramComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E94E8);
  *((_BYTE *)this + 112) = *(_BYTE *)(Message + 12);
  *((_BYTE *)this + 120) = *(_BYTE *)(Message + 13);
  v5 = *(_DWORD *)(Message + 16) - 1;
  if ( (unsigned int)v5 > 9 )
    v6 = 0;
  else
    v6 = dword_584620[v5];
  *((_DWORD *)this + 29) = v6;
  if ( (*(_BYTE *)(Message + 32) & 8) != 0 )
  {
    if ( *(_QWORD *)(Message + 24) )
      v7 = Message;
    else
      v7 = Caver::Proto::ProgramComponent::default_instance_;
    Caver::Program::LoadFromProtobufMessage(
      (Caver::ProgramComponent *)((char *)this + 128),
      *(const Caver::Proto::Program **)(v7 + 24));
  }
}

