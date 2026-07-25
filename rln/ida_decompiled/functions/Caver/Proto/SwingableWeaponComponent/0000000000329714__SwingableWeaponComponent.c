/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329714
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponentC2ERKS1_
 * Demangled: Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6730  Caver::Proto::SwingableWeaponComponent::MergeFrom(Caver::Proto::SwingableWeaponComponent const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 90
 *   insn=0x0000000000329720 string=0x0000000000329724 "%E"
 *   insn=0x0000000000329730 string=0x0000000000329734 "A"
 *   insn=0x000000000032973C string=0x0000000000329740 "h"
 *   insn=0x0000000000329744 string=0x00000000001F6730 "0'"
 *   insn=0x000000000032975C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000329760 string=0x0000000000329764 "X`\t"
 *   insn=0x000000000032977C string=0x0000000000329780 "V"
 *   insn=0x0000000000329798 string=0x00000000003297D8 "hF@"
 *   insn=0x000000000032979C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003297A8 string=0x00000000003297AC "c"
 *   insn=0x00000000003297B0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003297B4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003297C0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003297C8 string=0x00000000003297CC "MC"
 *   insn=0x00000000003297CC string=0x00000000001FA500 "0'"
 *   insn=0x00000000003297D4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003297E0 string=0x00000000003297E4 ""
 *   insn=0x00000000003297EC string=0x00000000003297F0 "H"
 *   insn=0x00000000003297F0 string=0x00000000003297F4 " 7"
 *   insn=0x0000000000329800 string=0x0000000000329804 "i*@"
 *   insn=0x0000000000329804 string=0x0000000000329808 ""
 *   insn=0x0000000000329810 string=0x0000000000329814 "hF@"
 *   insn=0x000000000032981C string=0x0000000000329820 "i.@"
 *   insn=0x0000000000329820 string=0x0000000000329824 ""
 *   insn=0x000000000032982C string=0x0000000000329830 "hF@"
 *   insn=0x0000000000329834 string=0x0000000000329838 "@"
 *   insn=0x0000000000329838 string=0x000000000032983C "h\t@7(\nH7"
 *   insn=0x000000000032983C string=0x0000000000329840 "(\nH7"
 *   insn=0x0000000000329850 string=0x0000000000329854 "iB@"
 *   insn=0x0000000000329854 string=0x0000000000329858 ""
 *   insn=0x000000000032986C string=0x00000000003299DC "=2"
 *   insn=0x0000000000329884 string=0x0000000000329888 "i"
 *   insn=0x0000000000329888 string=0x000000000032988C ""
 *   insn=0x0000000000329894 string=0x0000000000329898 "hF@"
 *   insn=0x00000000003298A0 string=0x00000000003298A4 "i"
 *   insn=0x00000000003298A4 string=0x00000000003298A8 ""
 *   insn=0x00000000003298B0 string=0x00000000003298B4 "hF@"
 *   insn=0x00000000003298BC string=0x00000000003298C0 "i"
 *   insn=0x00000000003298C0 string=0x00000000003298C4 ""
 *   insn=0x00000000003298CC string=0x00000000003298D0 "hF@"
 *   insn=0x00000000003298D0 string=0x00000000003298D4 ""
 *   insn=0x00000000003298D8 string=0x00000000003298DC "i"
 *   insn=0x00000000003298DC string=0x00000000003298E0 ""
 *   insn=0x00000000003298E8 string=0x00000000003298EC "hF@"
 *   insn=0x00000000003298EC string=0x00000000003298F0 "H"
 *   insn=0x00000000003298F4 string=0x00000000003298F8 "i"
 *   insn=0x00000000003298F8 string=0x00000000003298FC ""
 *   insn=0x0000000000329904 string=0x0000000000329908 "hF@"
 *   insn=0x0000000000329914 string=0x0000000000329918 ""
 *   insn=0x0000000000329924 string=0x0000000000329928 "./"
 *   insn=0x0000000000329928 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032992C string=0x0000000000329930 "|)"
 *   insn=0x0000000000329930 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000329938 string=0x000000000032993C "h"
 *   insn=0x000000000032993C string=0x0000000000329940 ")"
 *   insn=0x0000000000329948 string=0x000000000032994C ")"
 *   insn=0x000000000032994C string=0x0000000000329950 "("
 *   insn=0x0000000000329958 string=0x000000000032995C "hF@"
 *   insn=0x000000000032995C string=0x0000000000329960 ""
 *   insn=0x0000000000329968 string=0x000000000032996C "i2@"
 *   insn=0x000000000032996C string=0x0000000000329970 ""
 *   insn=0x0000000000329978 string=0x000000000032997C "hF@"
 *   insn=0x000000000032997C string=0x0000000000329980 "("
 *   insn=0x0000000000329984 string=0x0000000000329988 "i6@"
 *   insn=0x0000000000329988 string=0x000000000032998C ""
 *   insn=0x0000000000329994 string=0x0000000000329998 "hF@"
 *   insn=0x0000000000329998 string=0x000000000032999C "h"
 *   insn=0x00000000003299A0 string=0x00000000003299A4 "i:@"
 *   insn=0x00000000003299A4 string=0x00000000003299A8 ""
 *   insn=0x00000000003299B0 string=0x00000000003299B4 "hF@"
 *   insn=0x00000000003299BC string=0x00000000003299C0 "i>@"
 *   insn=0x00000000003299C0 string=0x00000000003299C4 ""
 *   insn=0x00000000003299CC string=0x00000000003299D0 "hF@"
 *   insn=0x00000000003299DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003299E4 string=0x00000000003299E8 "26"
 *   insn=0x00000000003299E8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000329A04 string=0x0000000000329A08 "Q"
 *   insn=0x0000000000329A18 string=0x0000000000329A1C "%E"
 *   insn=0x0000000000329A20 string=0x0000000000329A24 "A"
 *   insn=0x0000000000329A24 string=0x0000000000329A28 "h"
 *   insn=0x0000000000329A2C string=0x0000000000329A30 ""
 *   insn=0x0000000000329A30 string=0x0000000000329A34 ""
 *   insn=0x0000000000329A3C string=0x0000000000329A40 "`"
 *   insn=0x0000000000329A44 string=0x0000000000329A48 ""
 *   insn=0x0000000000329A48 string=0x0000000000329A4C ""
 *   insn=0x0000000000329A74 string=0x0000000000329A78 "5"
 *   insn=0x0000000000329A7C string=0x0000000000329A80 ""
 *   insn=0x0000000000329A80 string=0x0000000000329A84 ""
 *   insn=0x0000000000329A94 string=0x0000000000329A98 ""
 *   insn=0x0000000000329A9C string=0x0000000000329AA0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(
        Caver::Proto::SwingableWeaponComponent *this,
        const Caver::Proto::SwingableWeaponComponent *a2)
{
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9108;
  Caver::Proto::SwingableWeaponComponent::MergeFrom();
}

