/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB04C
 * Mangled: _ZN5Caver5Proto9ComponentC2Ev
 * Demangled: Caver::Proto::Component::Component(void)
 *
 * Callers: 1
 *   0x00000000002018A0  Caver::Proto::Component::Component(void)
 *
 * Callees: 4
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FDF90  google::protobuf::internal::ExtensionSet::ExtensionSet(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x00000000002FB054 string=0x00000000002FB058 "H"
 *   insn=0x00000000002FB058 string=0x00000000002FB05C ""
 *   insn=0x00000000002FB060 string=0x00000000002FB064 "A"
 *   insn=0x00000000002FB064 string=0x00000000002FB068 ""
 *   insn=0x00000000002FB06C string=0x00000000001FDF90 "0'"
 *   insn=0x00000000002FB070 string=0x00000000002FB074 "H"
 *   insn=0x00000000002FB074 string=0x00000000002FB078 ""
 *   insn=0x00000000002FB07C string=0x00000000002FB080 "I"
 *   insn=0x00000000002FB080 string=0x00000000002FB084 ")"
 *   insn=0x00000000002FB084 string=0x00000000002FB088 "h""
 *   insn=0x00000000002FB08C string=0x00000000002FB090 "i*"
 *   insn=0x00000000002FB0A4 string=0x00000000002FB0A8 "V"
 *   insn=0x00000000002FB0A8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FB0B8 string=0x00000000002FB0BC "H"
 *   insn=0x00000000002FB0BC string=0x00000000002FB0C0 ""
 *   insn=0x00000000002FB0C4 string=0x00000000002FB0C8 "I"
 *   insn=0x00000000002FB0C8 string=0x00000000002FB0CC ")"
 *   insn=0x00000000002FB0CC string=0x00000000002FB0D0 " "
 *   insn=0x00000000002FB0D4 string=0x00000000002FB0D8 "\t("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Component::Component(Caver::Proto::Component *this)
{
  *(_QWORD *)this = off_6C7290;
  google::protobuf::internal::ExtensionSet::ExtensionSet((Caver::Proto::Component *)((char *)this + 8));
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 8) = &Caver::Proto::Component::_default_class_name_;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 10) = &Caver::Proto::Component::_default_label_;
}

