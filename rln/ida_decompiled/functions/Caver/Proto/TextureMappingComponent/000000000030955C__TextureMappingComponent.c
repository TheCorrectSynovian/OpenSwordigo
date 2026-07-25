/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030955C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponentC2ERKS1_
 * Demangled: Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAED0  Caver::Proto::TextureMappingComponent::MergeFrom(Caver::Proto::TextureMappingComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 95
 *   insn=0x000000000030956C string=0x0000000000309570 "q@"
 *   insn=0x0000000000309578 string=0x000000000030957C ")-F"
 *   insn=0x000000000030957C string=0x0000000000309580 "A"
 *   insn=0x0000000000309588 string=0x000000000030958C "i\n"
 *   insn=0x000000000030958C string=0x0000000000309590 "h"
 *   insn=0x0000000000309594 string=0x0000000000309598 "N"
 *   insn=0x0000000000309598 string=0x00000000001FAED0 "0'"
 *   insn=0x00000000003095B0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003095B8 string=0x00000000003095BC "d"
 *   insn=0x00000000003095D0 string=0x00000000003095D4 "V"
 *   insn=0x00000000003095EC string=0x00000000003095F0 "h"
 *   insn=0x00000000003095F8 string=0x00000000003095FC "("
 *   insn=0x0000000000309600 string=0x0000000000309604 "A"
 *   insn=0x0000000000309608 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000309618 string=0x000000000030961C "u"
 *   insn=0x000000000030961C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000309620 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030962C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000309638 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000309640 string=0x0000000000309644 "h"
 *   insn=0x0000000000309640 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000309648 string=0x000000000030964C "/"
 *   insn=0x0000000000309658 string=0x000000000030965C "u\n@"
 *   insn=0x000000000030965C string=0x0000000000309660 ")-F"
 *   insn=0x0000000000309660 string=0x0000000000309664 ""
 *   insn=0x0000000000309678 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030967C string=0x0000000000309680 ""
 *   insn=0x0000000000309680 string=0x0000000000309684 "a"
 *   insn=0x0000000000309684 string=0x0000000000309688 ""
 *   insn=0x0000000000309694 string=0x0000000000309698 "h*@"
 *   insn=0x0000000000309698 string=0x000000000030969C "("
 *   insn=0x00000000003096A0 string=0x00000000003096A4 "i"
 *   insn=0x00000000003096A4 string=0x00000000003096A8 ""
 *   insn=0x00000000003096B0 string=0x00000000003096B4 "h*@"
 *   insn=0x00000000003096C0 string=0x00000000003096C4 ""
 *   insn=0x00000000003096D8 string=0x00000000003096DC "}"
 *   insn=0x00000000003096DC string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003096E4 string=0x00000000003096E8 "h"
 *   insn=0x00000000003096E8 string=0x00000000003096EC ")"
 *   insn=0x00000000003096F4 string=0x00000000003096F8 ")"
 *   insn=0x00000000003096F8 string=0x00000000003096FC "("
 *   insn=0x000000000030972C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000309738 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030973C string=0x0000000000309740 "a"
 *   insn=0x0000000000309750 string=0x0000000000309754 "\"
 *   insn=0x0000000000309768 string=0x000000000030976C "T"
 *   insn=0x0000000000309780 string=0x0000000000309784 "`\n@"
 *   insn=0x0000000000309784 string=0x0000000000309788 "q@"
 *   insn=0x0000000000309788 string=0x000000000030978C ")-F"
 *   insn=0x000000000030978C string=0x0000000000309790 "A"
 *   insn=0x0000000000309794 string=0x0000000000309798 "h"
 *   insn=0x0000000000309798 string=0x000000000030979C " "
 *   insn=0x00000000003097A0 string=0x00000000003097A4 "\t"
 *   insn=0x00000000003097A8 string=0x00000000003097AC "J"
 *   insn=0x00000000003097AC string=0x00000000003097B0 "(a"
 *   insn=0x00000000003097C0 string=0x00000000003097C4 ""
 *   insn=0x00000000003097C4 string=0x00000000003097C8 ""
 *   insn=0x00000000003097D0 string=0x00000000003097D4 "`"
 *   insn=0x00000000003097D8 string=0x00000000003097DC ""
 *   insn=0x00000000003097DC string=0x00000000003097E0 ""
 *   insn=0x00000000003097F8 string=0x00000000003097FC "!"
 *   insn=0x0000000000309810 string=0x0000000000309814 "J=G"
 *   insn=0x0000000000309814 string=0x0000000000309818 ")!"
 *   insn=0x000000000030981C string=0x0000000000309820 "*"
 *   insn=0x000000000030981C string=0x0000000000309834 "*"
 *   insn=0x0000000000309820 string=0x0000000000309824 "K"
 *   insn=0x0000000000309824 string=0x0000000000309828 "+"
 *   insn=0x0000000000309830 string=0x0000000000309840 "_"
 *   insn=0x0000000000309834 string=0x0000000000309838 "K"
 *   insn=0x0000000000309838 string=0x000000000030983C "+"
 *   insn=0x0000000000309868 string=0x000000000030986C "e"
 *   insn=0x0000000000309888 string=0x000000000030988C "T"
 *   insn=0x000000000030989C string=0x00000000003098A0 "`\n@"
 *   insn=0x00000000003098A0 string=0x00000000003098A4 "-F"
 *   insn=0x00000000003098A8 string=0x00000000003098AC " "
 *   insn=0x00000000003098B0 string=0x00000000003098B4 "\t"
 *   insn=0x00000000003098B8 string=0x00000000003098BC "J"
 *   insn=0x00000000003098BC string=0x00000000003098C0 "(a"
 *   insn=0x00000000003098C8 string=0x00000000003098CC "y"
 *   insn=0x00000000003098D0 string=0x00000000003098D4 ""
 *   insn=0x00000000003098D4 string=0x00000000003098D8 ""
 *   insn=0x00000000003098E0 string=0x00000000003098E4 "`"
 *   insn=0x00000000003098E8 string=0x00000000003098EC ""
 *   insn=0x00000000003098EC string=0x00000000003098F0 ""
 *   insn=0x0000000000309900 string=0x0000000000309904 "!"
 *   insn=0x0000000000309904 string=0x0000000000309968 "Z"
 *   insn=0x0000000000309918 string=0x000000000030991C "J=G"
 *   insn=0x000000000030991C string=0x0000000000309920 ")!"
 *   insn=0x0000000000309924 string=0x0000000000309928 "*"
 *   insn=0x0000000000309924 string=0x000000000030993C "*"
 *   insn=0x0000000000309928 string=0x000000000030992C "K"
 *   insn=0x000000000030992C string=0x0000000000309930 "+"
 *   insn=0x0000000000309938 string=0x0000000000309948 "_"
 *   insn=0x000000000030993C string=0x0000000000309940 "K"
 *   insn=0x0000000000309940 string=0x0000000000309944 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TextureMappingComponent::TextureMappingComponent(
        Caver::Proto::TextureMappingComponent *this,
        const Caver::Proto::TextureMappingComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::TextureMappingComponent::_default_texture_name_;
  *(_QWORD *)this = off_6C7920;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::TextureMappingComponent::MergeFrom(this, a2);
}

