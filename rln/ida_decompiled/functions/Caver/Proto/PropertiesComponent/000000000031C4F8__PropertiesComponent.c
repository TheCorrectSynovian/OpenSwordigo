/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C4F8
 * Mangled: _ZN5Caver5Proto19PropertiesComponentC2ERKS1_
 * Demangled: Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FFA50  Caver::Proto::PropertiesComponent::MergeFrom(Caver::Proto::PropertiesComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x000000000031C500 string=0x000000000031C504 "H"
 *   insn=0x000000000031C504 string=0x000000000031C508 "QG"
 *   insn=0x000000000031C514 string=0x000000000031C518 "A"
 *   insn=0x000000000031C518 string=0x000000000031C51C "h"
 *   insn=0x000000000031C520 string=0x000000000031C524 "K"
 *   insn=0x000000000031C538 string=0x000000000031C53C "1l"
 *   insn=0x000000000031C53C string=0x00000000001F7600 "0'"
 *   insn=0x000000000031C55C string=0x000000000031C560 "V"
 *   insn=0x000000000031C578 string=0x000000000031C57C "hb@9h"
 *   insn=0x000000000031C578 string=0x000000000031C588 "b"
 *   insn=0x000000000031C57C string=0x000000000031C580 "h"
 *   insn=0x000000000031C580 string=0x000000000031C584 "%"
 *   insn=0x000000000031C588 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031C59C string=0x000000000031C5A0 "a"
 *   insn=0x000000000031C59C string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031C5A0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031C5AC string=0x00000000001FC210 "0'"
 *   insn=0x000000000031C5B8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031C5C0 string=0x000000000031C5C4 "hb@9"
 *   insn=0x000000000031C5C0 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031C5D0 string=0x000000000031C5D4 ""
 *   insn=0x000000000031C5DC string=0x000000000031C5F4 "I"
 *   insn=0x000000000031C5E4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031C5EC string=0x00000000001F5000 "P'"
 *   insn=0x000000000031C5F4 string=0x000000000031C5F8 "h\n@"
 *   insn=0x000000000031C5F8 string=0x000000000031C5FC ")"
 *   insn=0x000000000031C604 string=0x000000000031C608 ")"
 *   insn=0x000000000031C608 string=0x000000000031C60C "("
 *   insn=0x000000000031C610 string=0x000000000031C614 "c\"
 *   insn=0x000000000031C614 string=0x00000000001F37A0 "P'"
 *   insn=0x000000000031C624 string=0x000000000031C63C "%g"
 *   insn=0x000000000031C63C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031C648 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031C664 string=0x000000000031C668 "9"
 *   insn=0x000000000031C674 string=0x000000000031C678 "H"
 *   insn=0x000000000031C678 string=0x000000000031C67C "QG"
 *   insn=0x000000000031C680 string=0x000000000031C684 "A"
 *   insn=0x000000000031C684 string=0x000000000031C688 "h"
 *   insn=0x000000000031C688 string=0x000000000031C68C "H"
 *   insn=0x000000000031C68C string=0x000000000031C690 ""
 *   insn=0x000000000031C690 string=0x000000000031C694 ""
 *   insn=0x000000000031C69C string=0x000000000031C6A0 "`\n@"
 *   insn=0x000000000031C6A4 string=0x000000000031C6A8 ""
 *   insn=0x000000000031C6A8 string=0x000000000031C6AC ""
 *   insn=0x000000000031C6D0 string=0x000000000031C6D4 "|"
 *   insn=0x000000000031C6D8 string=0x000000000031C6DC "H"
 *   insn=0x000000000031C6DC string=0x000000000031C6E0 ""
 *   insn=0x000000000031C6E0 string=0x000000000031C6E4 ""
 *   insn=0x000000000031C6F4 string=0x000000000031C6F8 ""
 *   insn=0x000000000031C6FC string=0x000000000031C700 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PropertiesComponent::PropertiesComponent(
        Caver::Proto::PropertiesComponent *this,
        const Caver::Proto::PropertiesComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C86B8;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::PropertiesComponent::MergeFrom();
}

