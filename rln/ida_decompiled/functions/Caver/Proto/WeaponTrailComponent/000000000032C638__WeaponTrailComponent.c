/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C638
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponentC2ERKS1_
 * Demangled: Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent const&)
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
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x00000000002007A0  Caver::Proto::WeaponTrailComponent::MergeFrom(Caver::Proto::WeaponTrailComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x000000000032C644 string=0x000000000032C648 ""
 *   insn=0x000000000032C654 string=0x000000000032C658 "A"
 *   insn=0x000000000032C658 string=0x000000000032C65C "h"
 *   insn=0x000000000032C660 string=0x000000000032C664 "OP"
 *   insn=0x000000000032C67C string=0x00000000001F7600 "0'"
 *   insn=0x000000000032C684 string=0x000000000032C688 "1"
 *   insn=0x000000000032C69C string=0x000000000032C6A0 "V"
 *   insn=0x000000000032C6B8 string=0x000000000032C6BC "hb@9h"
 *   insn=0x000000000032C6BC string=0x000000000032C6C0 "h"
 *   insn=0x000000000032C6C0 string=0x000000000032C6C4 "%"
 *   insn=0x000000000032C6C8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032C6D8 string=0x000000000032C6DC "E'"
 *   insn=0x000000000032C6DC string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032C6E0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032C6EC string=0x00000000001FC210 "0'"
 *   insn=0x000000000032C6F8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032C700 string=0x000000000032C704 "hb@9"
 *   insn=0x000000000032C700 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032C710 string=0x000000000032C714 ""
 *   insn=0x000000000032C724 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032C72C string=0x00000000001F3F20 "P'"
 *   insn=0x000000000032C734 string=0x000000000032C738 "h\n@"
 *   insn=0x000000000032C738 string=0x000000000032C73C ")"
 *   insn=0x000000000032C744 string=0x000000000032C748 ")"
 *   insn=0x000000000032C748 string=0x000000000032C74C "("
 *   insn=0x000000000032C77C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032C788 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032C78C string=0x000000000032C790 "MT\t"
 *   insn=0x000000000032C7A0 string=0x000000000032C7A4 "HT\t"
 *   insn=0x000000000032C7B8 string=0x000000000032C7BC ""
 *   insn=0x000000000032C7C0 string=0x000000000032C7C4 "A"
 *   insn=0x000000000032C7C4 string=0x000000000032C7C8 "h"
 *   insn=0x000000000032C7CC string=0x000000000032C7D0 ""
 *   insn=0x000000000032C7D0 string=0x000000000032C7D4 ""
 *   insn=0x000000000032C7DC string=0x000000000032C7E0 "`\n@"
 *   insn=0x000000000032C7E4 string=0x000000000032C7E8 ""
 *   insn=0x000000000032C7E8 string=0x000000000032C7EC ""
 *   insn=0x000000000032C808 string=0x000000000032C80C "}+"
 *   insn=0x000000000032C810 string=0x000000000032C814 ",T\t"
 *   insn=0x000000000032C81C string=0x000000000032C820 ""
 *   insn=0x000000000032C820 string=0x000000000032C824 ""
 *   insn=0x000000000032C834 string=0x000000000032C838 ""
 *   insn=0x000000000032C83C string=0x000000000032C840 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(
        Caver::Proto::WeaponTrailComponent *this,
        const Caver::Proto::WeaponTrailComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C92E8;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::WeaponTrailComponent::MergeFrom();
}

