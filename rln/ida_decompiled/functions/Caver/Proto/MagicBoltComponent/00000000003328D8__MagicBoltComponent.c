/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003328D8
 * Mangled: _ZN5Caver5Proto18MagicBoltComponentC2ERKS1_
 * Demangled: Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC760  Caver::Proto::MagicBoltComponent::MergeFrom(Caver::Proto::MagicBoltComponent const&)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 60
 *   insn=0x00000000003328E4 string=0x00000000003328E8 "YF"
 *   insn=0x00000000003328F4 string=0x00000000003328F8 "A"
 *   insn=0x00000000003328F8 string=0x00000000003328FC "h"
 *   insn=0x0000000000332900 string=0x00000000001FC760 "0'"
 *   insn=0x0000000000332914 string=0x0000000000332918 ":"
 *   insn=0x0000000000332918 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000332938 string=0x000000000033293C "V"
 *   insn=0x0000000000332950 string=0x0000000000332954 " "
 *   insn=0x0000000000332954 string=0x0000000000332958 "h"
 *   insn=0x000000000033295C string=0x0000000000332960 ""
 *   insn=0x0000000000332968 string=0x000000000033296C "H"
 *   insn=0x0000000000332970 string=0x0000000000332974 "A"
 *   insn=0x0000000000332978 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000332984 string=0x0000000000332988 "#"
 *   insn=0x000000000033298C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000332990 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000033299C string=0x00000000001FC210 "0'"
 *   insn=0x00000000003329A8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003329B0 string=0x00000000003329B4 "h"
 *   insn=0x00000000003329B0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003329B4 string=0x00000000003329B8 "H"
 *   insn=0x00000000003329B8 string=0x00000000003329BC "/"
 *   insn=0x00000000003329C0 string=0x00000000003329C4 "i"
 *   insn=0x00000000003329C4 string=0x00000000003329C8 ""
 *   insn=0x00000000003329D0 string=0x00000000003329D4 "h&@"
 *   insn=0x00000000003329DC string=0x00000000003329E0 "i"
 *   insn=0x00000000003329E0 string=0x00000000003329E4 ""
 *   insn=0x00000000003329EC string=0x00000000003329F0 "h&@"
 *   insn=0x00000000003329F8 string=0x00000000003329FC "i"
 *   insn=0x00000000003329FC string=0x0000000000332A00 ""
 *   insn=0x0000000000332A08 string=0x0000000000332A0C "h&@"
 *   insn=0x0000000000332A0C string=0x0000000000332A10 ""
 *   insn=0x0000000000332A18 string=0x0000000000332A1C ""
 *   insn=0x0000000000332A2C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000332A30 string=0x0000000000332A34 ";"
 *   insn=0x0000000000332A34 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000332A3C string=0x0000000000332A40 "h"
 *   insn=0x0000000000332A40 string=0x0000000000332A44 ")"
 *   insn=0x0000000000332A4C string=0x0000000000332A50 ")"
 *   insn=0x0000000000332A50 string=0x0000000000332A54 "("
 *   insn=0x0000000000332A5C string=0x0000000000332A60 "h&@"
 *   insn=0x0000000000332A68 string=0x0000000000332A6C "i"@"
 *   insn=0x0000000000332A6C string=0x0000000000332A70 ""
 *   insn=0x0000000000332A84 string=0x0000000000332A9C ""
 *   insn=0x0000000000332A9C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000332AA8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000332AC4 string=0x0000000000332AC8 "!n"
 *   insn=0x0000000000332AD8 string=0x0000000000332ADC "YF"
 *   insn=0x0000000000332AE0 string=0x0000000000332AE4 "A"
 *   insn=0x0000000000332AE4 string=0x0000000000332AE8 "h"
 *   insn=0x0000000000332AEC string=0x0000000000332AF0 ""
 *   insn=0x0000000000332AF0 string=0x0000000000332AF4 ""
 *   insn=0x0000000000332AFC string=0x0000000000332B00 "`"
 *   insn=0x0000000000332B04 string=0x0000000000332B08 ""
 *   insn=0x0000000000332B08 string=0x0000000000332B0C ""
 *   insn=0x0000000000332B30 string=0x0000000000332B34 "d;\t"
 *   insn=0x0000000000332B3C string=0x0000000000332B40 ""
 *   insn=0x0000000000332B40 string=0x0000000000332B44 ""
 *   insn=0x0000000000332B54 string=0x0000000000332B58 ""
 *   insn=0x0000000000332B5C string=0x0000000000332B60 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBoltComponent::MagicBoltComponent(
        Caver::Proto::MagicBoltComponent *this,
        const Caver::Proto::MagicBoltComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9720;
  Caver::Proto::MagicBoltComponent::MergeFrom();
}

