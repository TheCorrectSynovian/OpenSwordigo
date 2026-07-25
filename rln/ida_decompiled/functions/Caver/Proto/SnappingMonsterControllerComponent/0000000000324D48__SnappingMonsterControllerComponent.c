/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324D48
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F53E0  Caver::Proto::SnappingMonsterControllerComponent::MergeFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000324D50 string=0x0000000000324D54 ""
 *   insn=0x0000000000324D54 string=0x0000000000324D58 "yB"
 *   insn=0x0000000000324D64 string=0x0000000000324D68 "A"
 *   insn=0x0000000000324D68 string=0x0000000000324D6C "h~"
 *   insn=0x0000000000324D70 string=0x00000000001F53E0 "P'"
 *   insn=0x0000000000324D88 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000324D90 string=0x0000000000324D94 "n"
 *   insn=0x0000000000324DA8 string=0x0000000000324DAC "U"
 *   insn=0x0000000000324DC4 string=0x0000000000324DC8 """
 *   insn=0x0000000000324DC4 string=0x0000000000324E04 "h"
 *   insn=0x0000000000324DC8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000324DDC string=0x0000000000324DE0 "!"
 *   insn=0x0000000000324DDC string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000324DE0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000324DE8 string=0x0000000000324DEC "\t]"
 *   insn=0x0000000000324DEC string=0x00000000001FC210 "0'"
 *   insn=0x0000000000324DF8 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000324E00 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000324E04 string=0x0000000000324E08 "H"
 *   insn=0x0000000000324E08 string=0x0000000000324E0C "H"
 *   insn=0x0000000000324E0C string=0x0000000000324E10 ""
 *   insn=0x0000000000324E20 string=0x0000000000324E24 "i"
 *   insn=0x0000000000324E24 string=0x0000000000324E28 ""
 *   insn=0x0000000000324E38 string=0x0000000000324E3C "a"
 *   insn=0x0000000000324E54 string=0x0000000000324E58 "i"
 *   insn=0x0000000000324E58 string=0x0000000000324E5C ""
 *   insn=0x0000000000324E64 string=0x0000000000324E68 "h"@"
 *   insn=0x0000000000324E68 string=0x0000000000324E6C "H"
 *   insn=0x0000000000324E70 string=0x0000000000324E74 "i"
 *   insn=0x0000000000324E74 string=0x0000000000324E78 ""
 *   insn=0x0000000000324E80 string=0x0000000000324E84 "h"@"
 *   insn=0x0000000000324E8C string=0x0000000000324E90 "i"
 *   insn=0x0000000000324E90 string=0x0000000000324E94 ""
 *   insn=0x0000000000324E9C string=0x0000000000324EA0 "h"@"
 *   insn=0x0000000000324EA8 string=0x0000000000324EAC "i"
 *   insn=0x0000000000324EAC string=0x0000000000324EB0 ""
 *   insn=0x0000000000324EB8 string=0x0000000000324EBC "h"@"
 *   insn=0x0000000000324EBC string=0x0000000000324EC0 ""
 *   insn=0x0000000000324EC8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000324ED8 string=0x0000000000324EDC "zr\t"
 *   insn=0x0000000000324EDC string=0x0000000000324EE0 ""
 *   insn=0x0000000000324EE0 string=0x0000000000324EE4 ""
 *   insn=0x0000000000324EE4 string=0x0000000000324EE8 "yB"
 *   insn=0x0000000000324EE8 string=0x0000000000324EEC "A"
 *   insn=0x0000000000324EEC string=0x0000000000324EF0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(
        Caver::Proto::SnappingMonsterControllerComponent *this,
        const Caver::Proto::SnappingMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = off_6C8C58;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::SnappingMonsterControllerComponent::MergeFrom();
}

