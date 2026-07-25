/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BDB4
 * Mangled: _ZN5Caver5Proto19BackgroundComponentC2ERKS1_
 * Demangled: Caver::Proto::BackgroundComponent::BackgroundComponent(Caver::Proto::BackgroundComponent const&)
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
 *   0x00000000001FF4B0  Caver::Proto::BackgroundComponent::MergeFrom(Caver::Proto::BackgroundComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 61
 *   insn=0x000000000031BDC0 string=0x000000000031BDC4 "H"
 *   insn=0x000000000031BDC4 string=0x000000000031BDC8 "9E"
 *   insn=0x000000000031BDCC string=0x000000000031BDD0 "I"
 *   insn=0x000000000031BDD0 string=0x000000000031BDD4 ")UC"
 *   insn=0x000000000031BDD4 string=0x000000000031BDD8 "A"
 *   insn=0x000000000031BDD8 string=0x000000000031BDDC "h"
 *   insn=0x000000000031BDE0 string=0x000000000031BDE4 "i\n"
 *   insn=0x000000000031BE00 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031BE08 string=0x000000000031BE0C "P"
 *   insn=0x000000000031BE20 string=0x000000000031BE24 "U"
 *   insn=0x000000000031BE40 string=0x000000000031BE44 "h"
 *   insn=0x000000000031BE44 string=0x000000000031BE48 "$"
 *   insn=0x000000000031BE44 string=0x000000000031BE90 "I"
 *   insn=0x000000000031BE4C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031BE58 string=0x000000000031BE5C "#"
 *   insn=0x000000000031BE5C string=0x000000000031BE60 "di"
 *   insn=0x000000000031BE60 string=0x000000000031BE64 "a"
 *   insn=0x000000000031BE60 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031BE64 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031BE70 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031BE7C string=0x00000000001FA500 "0'"
 *   insn=0x000000000031BE84 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031BE88 string=0x000000000031BE8C "h"
 *   insn=0x000000000031BE90 string=0x000000000031BE94 "h"
 *   insn=0x000000000031BE94 string=0x000000000031BE98 "`\n@"
 *   insn=0x000000000031BE9C string=0x000000000031BEA0 ")UC"
 *   insn=0x000000000031BEA0 string=0x000000000031BEA4 ""
 *   insn=0x000000000031BEA4 string=0x000000000031BEA8 "h"
 *   insn=0x000000000031BEB8 string=0x000000000031BEBC "H"
 *   insn=0x000000000031BEB8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031BEBC string=0x000000000031BEC0 ""
 *   insn=0x000000000031BEC0 string=0x000000000031BEC4 "a"
 *   insn=0x000000000031BEC4 string=0x000000000031BEC8 ""
 *   insn=0x000000000031BEC8 string=0x000000000031BECC "`\n"
 *   insn=0x000000000031BEFC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031BF0C string=0x000000000031BF10 "m"
 *   insn=0x000000000031BF24 string=0x000000000031BF28 "T"
 *   insn=0x000000000031BF30 string=0x000000000031BF34 "I"
 *   insn=0x000000000031BF38 string=0x000000000031BF3C "H"
 *   insn=0x000000000031BF3C string=0x000000000031BF40 "`\n@"
 *   insn=0x000000000031BF40 string=0x000000000031BF44 "9E"
 *   insn=0x000000000031BF44 string=0x000000000031BF48 ")UC"
 *   insn=0x000000000031BF48 string=0x000000000031BF4C "A"
 *   insn=0x000000000031BF50 string=0x000000000031BF54 "h"
 *   insn=0x000000000031BF54 string=0x000000000031BF58 " "
 *   insn=0x000000000031BF5C string=0x000000000031BF60 "\t"
 *   insn=0x000000000031BF60 string=0x000000000031BF64 "J"
 *   insn=0x000000000031BF64 string=0x000000000031BF68 "J"
 *   insn=0x000000000031BF68 string=0x000000000031BF6C "(a"
 *   insn=0x000000000031BF74 string=0x000000000031BFA4 "J"
 *   insn=0x000000000031BF78 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031BF8C string=0x000000000031BF90 "!"
 *   insn=0x000000000031BFA4 string=0x000000000031BFA8 "J=G"
 *   insn=0x000000000031BFA8 string=0x000000000031BFAC ")!"
 *   insn=0x000000000031BFB0 string=0x000000000031BFB4 "*"
 *   insn=0x000000000031BFB0 string=0x000000000031BFC8 "*"
 *   insn=0x000000000031BFB4 string=0x000000000031BFB8 "K"
 *   insn=0x000000000031BFB8 string=0x000000000031BFBC "+"
 *   insn=0x000000000031BFC4 string=0x000000000031BFD4 "_"
 *   insn=0x000000000031BFC8 string=0x000000000031BFCC "K"
 *   insn=0x000000000031BFCC string=0x000000000031BFD0 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BackgroundComponent::BackgroundComponent(
        Caver::Proto::BackgroundComponent *this,
        const Caver::Proto::BackgroundComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8640;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::BackgroundComponent::_default_texture_name_;
  Caver::Proto::BackgroundComponent::MergeFrom();
}

