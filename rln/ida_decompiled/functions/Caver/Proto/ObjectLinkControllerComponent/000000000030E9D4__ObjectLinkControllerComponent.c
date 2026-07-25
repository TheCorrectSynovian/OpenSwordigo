/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E9D4
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000200B10  Caver::Proto::ObjectLinkControllerComponent::SharedDtor(void)
 *   0x0000000000202BA0  Caver::Proto::ObjectLinkControllerComponent::MergeFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 125
 *   insn=0x000000000030E9E4 string=0x000000000030E9E8 "M@"
 *   insn=0x000000000030E9F0 string=0x000000000030E9F4 ")"
 *   insn=0x000000000030E9F8 string=0x000000000030E9FC "J"
 *   insn=0x000000000030E9FC string=0x000000000030EA00 "A"
 *   insn=0x000000000030EA00 string=0x000000000030EA04 " "
 *   insn=0x000000000030EA08 string=0x000000000030EA0C "@"
 *   insn=0x000000000030EA10 string=0x000000000030EA14 "h"
 *   insn=0x000000000030EA14 string=0x000000000030EA18 "`"
 *   insn=0x000000000030EA1C string=0x000000000030EA20 "`"
 *   insn=0x000000000030EA38 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030EA40 string=0x000000000030EA44 "B"
 *   insn=0x000000000030EA58 string=0x000000000030EA5C "V"
 *   insn=0x000000000030EA70 string=0x000000000030EA74 " "
 *   insn=0x000000000030EA74 string=0x000000000030EA78 "h"
 *   insn=0x000000000030EA7C string=0x000000000030EA80 ""
 *   insn=0x000000000030EA80 string=0x000000000030EA84 "h"
 *   insn=0x000000000030EA88 string=0x000000000030EA8C "H\n"
 *   insn=0x000000000030EA90 string=0x000000000030EA94 "x"
 *   insn=0x000000000030EA98 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030EAA8 string=0x000000000030EAAC "Q"
 *   insn=0x000000000030EAAC string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030EAB0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030EABC string=0x00000000001FC210 "0'"
 *   insn=0x000000000030EAC8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000030EAD0 string=0x000000000030EAD4 "h"
 *   insn=0x000000000030EAD0 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030EAD4 string=0x000000000030EAD8 "H"
 *   insn=0x000000000030EAD8 string=0x000000000030EADC "f"
 *   insn=0x000000000030EAE8 string=0x000000000030EAEC "u\n@"
 *   insn=0x000000000030EAEC string=0x000000000030EAF0 ")"
 *   insn=0x000000000030EAF0 string=0x000000000030EAF4 ""
 *   insn=0x000000000030EB08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030EB0C string=0x000000000030EB10 ""
 *   insn=0x000000000030EB10 string=0x000000000030EB14 "a"
 *   insn=0x000000000030EB14 string=0x000000000030EB18 ""
 *   insn=0x000000000030EB24 string=0x000000000030EB28 "h:@"
 *   insn=0x000000000030EB38 string=0x000000000030EB3C "u"
 *   insn=0x000000000030EB3C string=0x000000000030EB40 ")"
 *   insn=0x000000000030EB40 string=0x000000000030EB44 ""
 *   insn=0x000000000030EB5C string=0x000000000030EB60 ""
 *   insn=0x000000000030EB60 string=0x000000000030EB64 "a"
 *   insn=0x000000000030EB64 string=0x000000000030EB68 ""
 *   insn=0x000000000030EB74 string=0x000000000030EB78 "h:@"
 *   insn=0x000000000030EB84 string=0x000000000030EB88 ""
 *   insn=0x000000000030EBA0 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000030EBA8 string=0x000000000030EBAC "h"
 *   insn=0x000000000030EBAC string=0x000000000030EBB0 ")"
 *   insn=0x000000000030EBB8 string=0x000000000030EBBC ")"
 *   insn=0x000000000030EBBC string=0x000000000030EBC0 "("
 *   insn=0x000000000030EBC8 string=0x000000000030EBCC "h:@"
 *   insn=0x000000000030EBC8 string=0x00000000001F3800 "P'"
 *   insn=0x000000000030EBCC string=0x000000000030EBD0 ""
 *   insn=0x000000000030EBD8 string=0x000000000030EBDC ""
 *   insn=0x000000000030EBE8 string=0x000000000030EBEC "}"
 *   insn=0x000000000030EBFC string=0x000000000030EC00 "h"
 *   insn=0x000000000030EC00 string=0x000000000030EC04 ")"
 *   insn=0x000000000030EC0C string=0x000000000030EC10 ")"
 *   insn=0x000000000030EC10 string=0x000000000030EC14 "("
 *   insn=0x000000000030EC1C string=0x000000000030EC20 "h:@"
 *   insn=0x000000000030EC2C string=0x000000000030EC30 ""
 *   insn=0x000000000030EC3C string=0x000000000030EC40 "h"
 *   insn=0x000000000030EC44 string=0x000000000030EC48 "°"
 *   insn=0x000000000030EC50 string=0x000000000030EC54 "h"
 *   insn=0x000000000030EC54 string=0x000000000030EC58 ")"
 *   insn=0x000000000030EC60 string=0x000000000030EC64 ")"
 *   insn=0x000000000030EC64 string=0x000000000030EC68 "("
 *   insn=0x000000000030EC98 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030ECAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030ECBC string=0x000000000030ECC0 "L"
 *   insn=0x000000000030ECDC string=0x000000000030ECE0 "M@"
 *   insn=0x000000000030ECE4 string=0x000000000030ECE8 "A"
 *   insn=0x000000000030ECE8 string=0x000000000030ECEC "h"
 *   insn=0x000000000030ECFC string=0x000000000030ED00 "@"
 *   insn=0x000000000030ED08 string=0x000000000030ED0C "="
 *   insn=0x000000000030ED28 string=0x000000000030ED2C "T"
 *   insn=0x000000000030ED3C string=0x000000000030ED40 "`\n@"
 *   insn=0x000000000030ED40 string=0x000000000030ED44 ""
 *   insn=0x000000000030ED48 string=0x000000000030ED4C " "
 *   insn=0x000000000030ED50 string=0x000000000030ED54 "\t"
 *   insn=0x000000000030ED58 string=0x000000000030ED5C "J"
 *   insn=0x000000000030ED5C string=0x000000000030ED60 "(a"
 *   insn=0x000000000030ED64 string=0x000000000030ED68 "a"
 *   insn=0x000000000030ED68 string=0x000000000030ED6C "Q"
 *   insn=0x000000000030ED70 string=0x000000000030ED74 "`"
 *   insn=0x000000000030ED74 string=0x000000000030ED78 ""
 *   insn=0x000000000030ED7C string=0x000000000030ED80 " "
 *   insn=0x000000000030ED84 string=0x000000000030ED88 "\t"
 *   insn=0x000000000030ED8C string=0x000000000030ED90 "J"
 *   insn=0x000000000030ED90 string=0x000000000030ED94 "(a"
 *   insn=0x000000000030ED9C string=0x000000000030EDA0 "D"
 *   insn=0x000000000030EDA4 string=0x000000000030EDA8 ""
 *   insn=0x000000000030EDA8 string=0x000000000030EDAC ""
 *   insn=0x000000000030EDB4 string=0x000000000030EDB8 "`"
 *   insn=0x000000000030EDBC string=0x000000000030EDC0 ""
 *   insn=0x000000000030EDBC string=0x000000000030EDCC "`"
 *   insn=0x000000000030EDC0 string=0x000000000030EDC4 ""
 *   insn=0x000000000030EDD0 string=0x000000000030EDD4 ""
 *   insn=0x000000000030EDD0 string=0x000000000030EDE0 "`"
 *   insn=0x000000000030EDD4 string=0x000000000030EDD8 ""
 *   insn=0x000000000030EDE4 string=0x000000000030EDE8 ""
 *   insn=0x000000000030EDE8 string=0x000000000030EDEC ""
 *   insn=0x000000000030EE00 string=0x000000000030EEB4 ""
 *   insn=0x000000000030EE14 string=0x000000000030EE18 "J=G"
 *   insn=0x000000000030EE18 string=0x000000000030EE1C ")!"
 *   insn=0x000000000030EE20 string=0x000000000030EE24 "*"
 *   insn=0x000000000030EE20 string=0x000000000030EE5C "*"
 *   insn=0x000000000030EE24 string=0x000000000030EE28 "K"
 *   insn=0x000000000030EE28 string=0x000000000030EE2C "+"
 *   insn=0x000000000030EE30 string=0x000000000030EE34 ""
 *   insn=0x000000000030EE34 string=0x000000000030EE68 "_"
 *   insn=0x000000000030EE38 string=0x000000000030EE3C "J=G"
 *   insn=0x000000000030EE3C string=0x000000000030EE40 ")!"
 *   insn=0x000000000030EE40 string=0x000000000030EE44 "*"
 *   insn=0x000000000030EE44 string=0x000000000030EE48 "*"
 *   insn=0x000000000030EE44 string=0x000000000030EE88 "*"
 *   insn=0x000000000030EE48 string=0x000000000030EE4C "K"
 *   insn=0x000000000030EE4C string=0x000000000030EE50 "+"
 *   insn=0x000000000030EE58 string=0x000000000030EE94 "_"
 *   insn=0x000000000030EE5C string=0x000000000030EE60 "K"
 *   insn=0x000000000030EE60 string=0x000000000030EE64 "+"
 *   insn=0x000000000030EE78 string=0x000000000030EE7C "Jm\t"
 *   insn=0x000000000030EE88 string=0x000000000030EE8C "K"
 *   insn=0x000000000030EE8C string=0x000000000030EE90 "+"
 *   insn=0x000000000030EE94 string=0x000000000030EE98 "L"
 *   insn=0x000000000030EEA4 string=0x000000000030EEA8 "?m\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(
        Caver::Proto::ObjectLinkControllerComponent *this,
        const Caver::Proto::ObjectLinkControllerComponent *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C7C68;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 14) = 0;
  Caver::Proto::ObjectLinkControllerComponent::MergeFrom(this, a2);
  return result;
}

