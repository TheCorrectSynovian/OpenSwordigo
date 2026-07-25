/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314BD0
 * Mangled: _ZN5Caver5Proto23BushControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::BushControllerComponent::BushControllerComponent(Caver::Proto::BushControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4890  Caver::Proto::BushControllerComponent::MergeFrom(Caver::Proto::BushControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000314BDC string=0x0000000000314BE0 "IF"
 *   insn=0x0000000000314BEC string=0x0000000000314BF0 "A"
 *   insn=0x0000000000314BF0 string=0x0000000000314BF4 "h"
 *   insn=0x0000000000314BF4 string=0x0000000000314BF8 "&"
 *   insn=0x0000000000314BF8 string=0x00000000001F4890 "P'"
 *   insn=0x0000000000314C0C string=0x0000000000314C10 "|"
 *   insn=0x0000000000314C10 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000314C14 string=0x0000000000314C18 "+"
 *   insn=0x0000000000314C30 string=0x0000000000314C34 "U"
 *   insn=0x0000000000314C4C string=0x0000000000314C8C "hb@9"
 *   insn=0x0000000000314C50 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000314C5C string=0x0000000000314C60 "c7"
 *   insn=0x0000000000314C64 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000314C68 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000314C70 string=0x0000000000314C74 "g"
 *   insn=0x0000000000314C74 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000314C7C string=0x0000000000314C80 " "
 *   insn=0x0000000000314C80 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000314C84 string=0x0000000000314C88 "Z"
 *   insn=0x0000000000314C88 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000314C8C string=0x0000000000314C90 ""
 *   insn=0x0000000000314C90 string=0x0000000000314C94 ""
 *   insn=0x0000000000314CA0 string=0x0000000000314CA4 "i"
 *   insn=0x0000000000314CA4 string=0x0000000000314CA8 ""
 *   insn=0x0000000000314CBC string=0x0000000000314D10 "p"
 *   insn=0x0000000000314CD4 string=0x0000000000314CD8 "i"
 *   insn=0x0000000000314CD8 string=0x0000000000314CDC ""
 *   insn=0x0000000000314CE4 string=0x0000000000314CE8 "h"
 *   insn=0x0000000000314CF0 string=0x0000000000314CF4 "i"
 *   insn=0x0000000000314CF4 string=0x0000000000314CF8 ""
 *   insn=0x0000000000314D00 string=0x0000000000314D04 "h"
 *   insn=0x0000000000314D10 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000314D18 string=0x0000000000314D1C "5"
 *   insn=0x0000000000314D2C string=0x0000000000314D30 "IF"
 *   insn=0x0000000000314D30 string=0x0000000000314D34 "A"
 *   insn=0x0000000000314D34 string=0x0000000000314D38 ""
 *   insn=0x0000000000314D38 string=0x0000000000314D3C "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BushControllerComponent::BushControllerComponent(
        Caver::Proto::BushControllerComponent *this,
        const Caver::Proto::BushControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C8028;
  Caver::Proto::BushControllerComponent::MergeFrom();
}

