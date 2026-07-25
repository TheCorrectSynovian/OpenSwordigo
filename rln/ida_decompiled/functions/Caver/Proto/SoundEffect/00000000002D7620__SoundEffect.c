/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7620
 * Mangled: _ZN5Caver5Proto11SoundEffectC2ERKS1_
 * Demangled: Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F4670  Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF510  Caver::Proto::SoundEffect::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 105
 *   insn=0x00000000002D762C string=0x00000000002D7630 "h "
 *   insn=0x00000000002D7630 string=0x00000000002D7634 ""
 *   insn=0x00000000002D763C string=0x00000000002D7640 ")"
 *   insn=0x00000000002D7640 string=0x00000000002D7644 "j "
 *   insn=0x00000000002D7644 string=0x00000000002D7648 "JuC"
 *   insn=0x00000000002D764C string=0x00000000002D7650 "a"
 *   insn=0x00000000002D7650 string=0x00000000002D7654 " "
 *   insn=0x00000000002D7654 string=0x00000000002D7658 "A"
 *   insn=0x00000000002D7658 string=0x00000000002D765C "@"
 *   insn=0x00000000002D765C string=0x00000000002D7660 "h"
 *   insn=0x00000000002D7660 string=0x00000000002D7664 "`"
 *   insn=0x00000000002D7664 string=0x00000000002D7668 "a"
 *   insn=0x00000000002D7670 string=0x00000000001F4670 "P'"
 *   insn=0x00000000002D7688 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D7690 string=0x00000000002D7694 "."
 *   insn=0x00000000002D76A8 string=0x00000000002D76AC "V"
 *   insn=0x00000000002D76C4 string=0x00000000002D7704 "h"
 *   insn=0x00000000002D76C8 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D76D8 string=0x00000000002D76DC "E{"
 *   insn=0x00000000002D76DC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D76E0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D76EC string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D76F8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D7700 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D7704 string=0x00000000002D7708 "("
 *   insn=0x00000000002D7708 string=0x00000000002D770C "("
 *   insn=0x00000000002D7710 string=0x00000000002D77A0 "i "
 *   insn=0x00000000002D771C string=0x00000000002D7720 "i&@"
 *   insn=0x00000000002D7720 string=0x00000000002D7724 ""
 *   insn=0x00000000002D7758 string=0x00000000002D775C "u\n@"
 *   insn=0x00000000002D775C string=0x00000000002D7760 ")"
 *   insn=0x00000000002D7760 string=0x00000000002D7764 ""
 *   insn=0x00000000002D7778 string=0x00000000002D777C "h "
 *   insn=0x00000000002D7778 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D777C string=0x00000000002D7780 ""
 *   insn=0x00000000002D7780 string=0x00000000002D7784 "a"
 *   insn=0x00000000002D7784 string=0x00000000002D7788 ""
 *   insn=0x00000000002D7794 string=0x00000000002D7798 "h*@"
 *   insn=0x00000000002D77A8 string=0x00000000002D77AC "u"
 *   insn=0x00000000002D77AC string=0x00000000002D77B0 ")uC"
 *   insn=0x00000000002D77B0 string=0x00000000002D77B4 ""
 *   insn=0x00000000002D77C8 string=0x00000000002D77CC "h "
 *   insn=0x00000000002D77CC string=0x00000000002D77D0 ""
 *   insn=0x00000000002D77D0 string=0x00000000002D77D4 "a"
 *   insn=0x00000000002D77D4 string=0x00000000002D77D8 ""
 *   insn=0x00000000002D77E4 string=0x00000000002D77E8 "h*@"
 *   insn=0x00000000002D77E8 string=0x00000000002D77EC "h"
 *   insn=0x00000000002D77F0 string=0x00000000002D77F4 "i"@"
 *   insn=0x00000000002D77F4 string=0x00000000002D77F8 ""
 *   insn=0x00000000002D7800 string=0x00000000002D7804 "h*@"
 *   insn=0x00000000002D7810 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D7818 string=0x00000000002D781C "u"
 *   insn=0x00000000002D7820 string=0x00000000002D7824 "("
 *   insn=0x00000000002D7834 string=0x00000000002D7838 "h "
 *   insn=0x00000000002D7838 string=0x00000000002D783C ""
 *   insn=0x00000000002D7840 string=0x00000000002D7844 "A"
 *   insn=0x00000000002D7844 string=0x00000000002D7848 "h"
 *   insn=0x00000000002D7848 string=0x00000000002D784C "1"
 *   insn=0x00000000002D7858 string=0x00000000002D785C "i"
 *   insn=0x00000000002D7864 string=0x00000000002D7868 "f"
 *   insn=0x00000000002D7884 string=0x00000000002D7888 "T"
 *   insn=0x00000000002D7898 string=0x00000000002D789C "`\n@"
 *   insn=0x00000000002D789C string=0x00000000002D78A0 ""
 *   insn=0x00000000002D78A4 string=0x00000000002D78A8 " "
 *   insn=0x00000000002D78A8 string=0x00000000002D78CC "h "
 *   insn=0x00000000002D78AC string=0x00000000002D78B0 "\t"
 *   insn=0x00000000002D78B0 string=0x00000000002D78B4 "j "
 *   insn=0x00000000002D78B4 string=0x00000000002D78B8 "J"
 *   insn=0x00000000002D78B8 string=0x00000000002D78BC "(a"
 *   insn=0x00000000002D78C4 string=0x00000000002D78C8 "z~"
 *   insn=0x00000000002D78C4 string=0x00000000002D7924 "j "
 *   insn=0x00000000002D78C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D78CC string=0x00000000002D78D0 "s"
 *   insn=0x00000000002D78D0 string=0x00000000002D78D4 "uC"
 *   insn=0x00000000002D78D8 string=0x00000000002D78DC "@"
 *   insn=0x00000000002D78DC string=0x00000000002D78E0 "3"
 *   insn=0x00000000002D78E0 string=0x00000000002D78E4 "h"
 *   insn=0x00000000002D78E4 string=0x00000000002D78E8 "i "
 *   insn=0x00000000002D78E8 string=0x00000000002D78EC ")"
 *   insn=0x00000000002D78F8 string=0x00000000002D7948 "i "
 *   insn=0x00000000002D78FC string=0x00000000002D7900 "l~"
 *   insn=0x00000000002D790C string=0x00000000002D7910 "A"
 *   insn=0x00000000002D7910 string=0x00000000002D79B8 "Fz"
 *   insn=0x00000000002D7924 string=0x00000000002D7928 "J=G"
 *   insn=0x00000000002D7928 string=0x00000000002D792C ")!"
 *   insn=0x00000000002D7930 string=0x00000000002D7934 "*"
 *   insn=0x00000000002D7930 string=0x00000000002D796C "*"
 *   insn=0x00000000002D7934 string=0x00000000002D7938 "K"
 *   insn=0x00000000002D7938 string=0x00000000002D793C "+"
 *   insn=0x00000000002D7940 string=0x00000000002D7944 ""
 *   insn=0x00000000002D7944 string=0x00000000002D7978 "_"
 *   insn=0x00000000002D7948 string=0x00000000002D794C ")=G"
 *   insn=0x00000000002D794C string=0x00000000002D7950 "!"
 *   insn=0x00000000002D7950 string=0x00000000002D7954 ")"
 *   insn=0x00000000002D7954 string=0x00000000002D7958 "\t"
 *   insn=0x00000000002D7954 string=0x00000000002D7998 "\t"
 *   insn=0x00000000002D7958 string=0x00000000002D795C "*"
 *   insn=0x00000000002D795C string=0x00000000002D7960 "\n"
 *   insn=0x00000000002D7968 string=0x00000000002D79A4 "?"
 *   insn=0x00000000002D796C string=0x00000000002D7970 "K"
 *   insn=0x00000000002D7970 string=0x00000000002D7974 "+"
 *   insn=0x00000000002D7978 string=0x00000000002D797C "l"
 *   insn=0x00000000002D7998 string=0x00000000002D799C "*"
 *   insn=0x00000000002D799C string=0x00000000002D79A0 "\n"
 *   insn=0x00000000002D79AC string=0x00000000002D79B0 "}J\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::SoundEffect::SoundEffect(
        Caver::Proto::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::SoundEffect::_default_name_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::SoundEffect::_default_resource_name_;
  *(_QWORD *)this = off_6C6110;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 4) = 0x3DCCCCCD3F800000LL;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::SoundEffect::MergeFrom(this, a2);
  return result;
}

