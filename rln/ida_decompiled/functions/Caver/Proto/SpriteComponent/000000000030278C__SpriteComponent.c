/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030278C
 * Mangled: _ZN5Caver5Proto15SpriteComponentC2ERKS1_
 * Demangled: Caver::Proto::SpriteComponent::SpriteComponent(Caver::Proto::SpriteComponent const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FE560  Caver::Proto::SpriteComponent::MergeFrom(Caver::Proto::SpriteComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x0000000000302798 string=0x000000000030279C "("
 *   insn=0x000000000030279C string=0x00000000003027A0 "1C"
 *   insn=0x00000000003027A4 string=0x00000000003027A8 "\t"
 *   insn=0x00000000003027A8 string=0x00000000003027AC ")"
 *   insn=0x00000000003027AC string=0x00000000003027B0 "A"
 *   insn=0x00000000003027B0 string=0x00000000003027B4 "h"
 *   insn=0x00000000003027B8 string=0x00000000003027BC "i\n"
 *   insn=0x00000000003027BC string=0x00000000003027C0 "h"
 *   insn=0x00000000003027D8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003027DC string=0x00000000003027E0 "9"
 *   insn=0x00000000003027F8 string=0x00000000003027FC "U"
 *   insn=0x0000000000302814 string=0x0000000000302824 "B"
 *   insn=0x0000000000302818 string=0x000000000030281C "h"
 *   insn=0x000000000030281C string=0x0000000000302820 "$"
 *   insn=0x000000000030281C string=0x0000000000302868 "\t"
 *   insn=0x0000000000302824 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000302838 string=0x000000000030283C "A"
 *   insn=0x0000000000302838 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030283C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000302844 string=0x0000000000302848 "r"
 *   insn=0x0000000000302848 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000302850 string=0x0000000000302854 "+"
 *   insn=0x0000000000302854 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000302858 string=0x000000000030285C "e"
 *   insn=0x000000000030285C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000302860 string=0x0000000000302864 "h"
 *   insn=0x0000000000302868 string=0x000000000030286C "h"
 *   insn=0x000000000030286C string=0x0000000000302870 "`\n@"
 *   insn=0x0000000000302874 string=0x0000000000302878 ")"
 *   insn=0x0000000000302878 string=0x000000000030287C ""
 *   insn=0x000000000030287C string=0x0000000000302880 "h"
 *   insn=0x000000000030288C string=0x0000000000302890 "T"
 *   insn=0x0000000000302890 string=0x0000000000302894 ""
 *   insn=0x0000000000302890 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000302894 string=0x0000000000302898 ""
 *   insn=0x0000000000302898 string=0x000000000030289C "a"
 *   insn=0x000000000030289C string=0x00000000003028A0 ""
 *   insn=0x00000000003028A0 string=0x00000000003028A4 "`\n"
 *   insn=0x00000000003028D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003028DC string=0x00000000003028E0 "D"
 *   insn=0x00000000003028FC string=0x0000000000302900 "T"
 *   insn=0x0000000000302908 string=0x000000000030290C "\t"
 *   insn=0x0000000000302910 string=0x0000000000302914 "("
 *   insn=0x0000000000302914 string=0x0000000000302918 "`\n@"
 *   insn=0x0000000000302918 string=0x000000000030291C "1C"
 *   insn=0x000000000030291C string=0x0000000000302920 ")"
 *   insn=0x0000000000302920 string=0x0000000000302924 "A"
 *   insn=0x0000000000302928 string=0x000000000030292C "h"
 *   insn=0x000000000030292C string=0x0000000000302930 " "
 *   insn=0x0000000000302934 string=0x0000000000302938 "\t"
 *   insn=0x0000000000302938 string=0x000000000030293C "\n"
 *   insn=0x000000000030293C string=0x0000000000302940 "J"
 *   insn=0x0000000000302940 string=0x0000000000302944 "(a"
 *   insn=0x000000000030294C string=0x0000000000302950 "X"
 *   insn=0x000000000030294C string=0x000000000030297C "\n"
 *   insn=0x0000000000302950 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000302954 string=0x0000000000302958 "*"
 *   insn=0x0000000000302964 string=0x0000000000302968 "!"
 *   insn=0x0000000000302968 string=0x00000000003029CC "A"
 *   insn=0x000000000030297C string=0x0000000000302980 "J=G"
 *   insn=0x0000000000302980 string=0x0000000000302984 ")!"
 *   insn=0x0000000000302988 string=0x000000000030298C "*"
 *   insn=0x0000000000302988 string=0x00000000003029A0 "*"
 *   insn=0x000000000030298C string=0x0000000000302990 "K"
 *   insn=0x0000000000302990 string=0x0000000000302994 "+"
 *   insn=0x000000000030299C string=0x00000000003029AC "_"
 *   insn=0x00000000003029A0 string=0x00000000003029A4 "K"
 *   insn=0x00000000003029A4 string=0x00000000003029A8 "+"
 *   insn=0x00000000003029BC string=0x00000000003029C0 "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpriteComponent::SpriteComponent(
        Caver::Proto::SpriteComponent *this,
        const Caver::Proto::SpriteComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7560;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::SpriteComponent::_default_texture_name_;
  Caver::Proto::SpriteComponent::MergeFrom();
}

