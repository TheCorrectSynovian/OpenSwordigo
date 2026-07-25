/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031460C
 * Mangled: _ZN5Caver5Proto15EntityComponentC2ERKS1_
 * Demangled: Caver::Proto::EntityComponent::EntityComponent(Caver::Proto::EntityComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F57D0  Caver::Proto::EntityComponent::MergeFrom(Caver::Proto::EntityComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000314618 string=0x000000000031461C "UG"
 *   insn=0x0000000000314620 string=0x0000000000314624 " 1E"
 *   insn=0x000000000031462C string=0x0000000000314630 "A"
 *   insn=0x0000000000314630 string=0x0000000000314634 "jB"
 *   insn=0x0000000000314634 string=0x0000000000314638 "h"
 *   insn=0x0000000000314638 string=0x000000000031463C "`"
 *   insn=0x0000000000314640 string=0x0000000000314644 "c"
 *   insn=0x0000000000314644 string=0x00000000001F57D0 "P'"
 *   insn=0x000000000031465C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000314664 string=0x0000000000314668 "9"
 *   insn=0x000000000031467C string=0x0000000000314680 "U"
 *   insn=0x0000000000314698 string=0x00000000003146D8 "hR@9"
 *   insn=0x000000000031469C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003146AC string=0x00000000003146B0 "P"
 *   insn=0x00000000003146B0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003146B4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003146C0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003146CC string=0x00000000001FA500 "0'"
 *   insn=0x00000000003146D4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003146E4 string=0x00000000003146E8 "i"
 *   insn=0x00000000003146E8 string=0x00000000003146EC ""
 *   insn=0x00000000003146F4 string=0x00000000003146F8 "h"
 *   insn=0x0000000000314700 string=0x0000000000314704 "iB@9"
 *   insn=0x0000000000314704 string=0x0000000000314708 ""
 *   insn=0x0000000000314738 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000314748 string=0x000000000031474C "^"
 *   insn=0x0000000000314754 string=0x0000000000314758 "UG"
 *   insn=0x0000000000314758 string=0x000000000031475C "A"
 *   insn=0x000000000031475C string=0x0000000000314760 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityComponent::EntityComponent(
        Caver::Proto::EntityComponent *this,
        const Caver::Proto::EntityComponent *a2)
{
  *((_BYTE *)this + 16) = 1;
  *(_QWORD *)this = off_6C7FB0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  *((_DWORD *)this + 5) = 0;
  Caver::Proto::EntityComponent::MergeFrom();
}

