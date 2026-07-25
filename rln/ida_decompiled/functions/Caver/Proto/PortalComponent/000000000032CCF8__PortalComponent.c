/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CCF8
 * Mangled: _ZN5Caver5Proto15PortalComponentC2ERKS1_
 * Demangled: Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7190  Caver::Proto::PortalComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201000  Caver::Proto::PortalComponent::MergeFrom(Caver::Proto::PortalComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 90
 *   insn=0x000000000032CD08 string=0x000000000032CD0C ""
 *   insn=0x000000000032CD14 string=0x000000000032CD18 ")5E"
 *   insn=0x000000000032CD1C string=0x000000000032CD20 "JQA"
 *   insn=0x000000000032CD20 string=0x000000000032CD24 "A"
 *   insn=0x000000000032CD24 string=0x000000000032CD28 " "
 *   insn=0x000000000032CD2C string=0x000000000032CD30 "@"
 *   insn=0x000000000032CD30 string=0x000000000032CD34 "h"
 *   insn=0x000000000032CD34 string=0x000000000032CD38 "`"
 *   insn=0x000000000032CD54 string=0x000000000032CD58 "**"
 *   insn=0x000000000032CD58 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032CD60 string=0x000000000032CD64 "z"
 *   insn=0x000000000032CD78 string=0x000000000032CD7C "V"
 *   insn=0x000000000032CD94 string=0x000000000032CDD4 "h"
 *   insn=0x000000000032CD98 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032CDA4 string=0x000000000032CDA8 "C"
 *   insn=0x000000000032CDAC string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032CDB0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032CDBC string=0x00000000001FC210 "0'"
 *   insn=0x000000000032CDC8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032CDCC string=0x000000000032CDD0 "5"
 *   insn=0x000000000032CDD0 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032CDD4 string=0x000000000032CDD8 "H"
 *   insn=0x000000000032CDD8 string=0x000000000032CDDC "H"
 *   insn=0x000000000032CDDC string=0x000000000032CDE0 ""
 *   insn=0x000000000032CDE0 string=0x000000000032CDE4 "h"
 *   insn=0x000000000032CDEC string=0x000000000032CDF0 "i"
 *   insn=0x000000000032CDF0 string=0x000000000032CDF4 ""
 *   insn=0x000000000032CE24 string=0x000000000032CE28 "i"
 *   insn=0x000000000032CE28 string=0x000000000032CE2C ""
 *   insn=0x000000000032CE34 string=0x000000000032CE38 "h&@"
 *   insn=0x000000000032CE38 string=0x000000000032CE3C "H"
 *   insn=0x000000000032CE48 string=0x000000000032CE4C "u\n@"
 *   insn=0x000000000032CE4C string=0x000000000032CE50 ")5E"
 *   insn=0x000000000032CE50 string=0x000000000032CE54 ""
 *   insn=0x000000000032CE68 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032CE6C string=0x000000000032CE70 ""
 *   insn=0x000000000032CE70 string=0x000000000032CE74 "a"
 *   insn=0x000000000032CE74 string=0x000000000032CE78 ""
 *   insn=0x000000000032CE80 string=0x000000000032CE84 "\t"
 *   insn=0x000000000032CE84 string=0x000000000032CE88 "h&@"
 *   insn=0x000000000032CE98 string=0x000000000032CE9C "u"
 *   insn=0x000000000032CE9C string=0x000000000032CEA0 ")QA"
 *   insn=0x000000000032CEA0 string=0x000000000032CEA4 ""
 *   insn=0x000000000032CEBC string=0x000000000032CEC0 ""
 *   insn=0x000000000032CEC0 string=0x000000000032CEC4 "a"
 *   insn=0x000000000032CEC4 string=0x000000000032CEC8 ""
 *   insn=0x000000000032CED4 string=0x000000000032CED8 "h&@"
 *   insn=0x000000000032CEE4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032CEF4 string=0x000000000032CEF8 "sR\t"
 *   insn=0x000000000032CF0C string=0x000000000032CF10 ""
 *   insn=0x000000000032CF14 string=0x000000000032CF18 "A"
 *   insn=0x000000000032CF18 string=0x000000000032CF1C "h"
 *   insn=0x000000000032CF20 string=0x00000000001F7190 "0'"
 *   insn=0x000000000032CF40 string=0x000000000032CF44 "`R\t"
 *   insn=0x000000000032CF58 string=0x000000000032CF5C "T"
 *   insn=0x000000000032CF6C string=0x000000000032CF70 "`\n@"
 *   insn=0x000000000032CF70 string=0x000000000032CF74 "5E"
 *   insn=0x000000000032CF78 string=0x000000000032CF7C " "
 *   insn=0x000000000032CF80 string=0x000000000032CF84 "\t"
 *   insn=0x000000000032CF88 string=0x000000000032CF8C "J"
 *   insn=0x000000000032CF8C string=0x000000000032CF90 "(a"
 *   insn=0x000000000032CF9C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032CFA0 string=0x000000000032CFA4 "s"
 *   insn=0x000000000032CFA4 string=0x000000000032CFA8 "QA"
 *   insn=0x000000000032CFAC string=0x000000000032CFB0 "@"
 *   insn=0x000000000032CFB0 string=0x000000000032CFB4 "3"
 *   insn=0x000000000032CFB4 string=0x000000000032CFB8 "h"
 *   insn=0x000000000032CFBC string=0x000000000032CFC0 ")"
 *   insn=0x000000000032CFE0 string=0x000000000032CFE4 "A"
 *   insn=0x000000000032CFF8 string=0x000000000032CFFC "J=G"
 *   insn=0x000000000032CFFC string=0x000000000032D000 ")!"
 *   insn=0x000000000032D004 string=0x000000000032D008 "*"
 *   insn=0x000000000032D004 string=0x000000000032D040 "*"
 *   insn=0x000000000032D008 string=0x000000000032D00C "K"
 *   insn=0x000000000032D00C string=0x000000000032D010 "+"
 *   insn=0x000000000032D014 string=0x000000000032D018 ""
 *   insn=0x000000000032D018 string=0x000000000032D04C "_"
 *   insn=0x000000000032D01C string=0x000000000032D020 ")=G"
 *   insn=0x000000000032D020 string=0x000000000032D024 "!"
 *   insn=0x000000000032D024 string=0x000000000032D028 ")"
 *   insn=0x000000000032D028 string=0x000000000032D02C "\t"
 *   insn=0x000000000032D028 string=0x000000000032D06C "\t"
 *   insn=0x000000000032D02C string=0x000000000032D030 "*"
 *   insn=0x000000000032D030 string=0x000000000032D034 "\n"
 *   insn=0x000000000032D03C string=0x000000000032D078 "?"
 *   insn=0x000000000032D040 string=0x000000000032D044 "K"
 *   insn=0x000000000032D044 string=0x000000000032D048 "+"
 *   insn=0x000000000032D04C string=0x000000000032D050 "l"
 *   insn=0x000000000032D06C string=0x000000000032D070 "*"
 *   insn=0x000000000032D070 string=0x000000000032D074 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::PortalComponent::PortalComponent(
        Caver::Proto::PortalComponent *this,
        const Caver::Proto::PortalComponent *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_QWORD *)this + 1) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::PortalComponent::_default_destination_scene_name_;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::PortalComponent::_default_spawn_point_name_;
  *(_QWORD *)this = off_6C9360;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 9) = 0;
  Caver::Proto::PortalComponent::MergeFrom(this, a2);
  return result;
}

