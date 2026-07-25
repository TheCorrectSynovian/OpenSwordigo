/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BB6C
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponentC2ERKS1_
 * Demangled: Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5690  Caver::Proto::WeaponGlowComponent::MergeFrom(Caver::Proto::WeaponGlowComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 73
 *   insn=0x000000000032BB78 string=0x000000000032BB7C ""
 *   insn=0x000000000032BB88 string=0x000000000032BB8C "A"
 *   insn=0x000000000032BB8C string=0x000000000032BB90 "h"
 *   insn=0x000000000032BB94 string=0x00000000001F5690 "P'"
 *   insn=0x000000000032BBAC string=0x00000000001F7600 "0'"
 *   insn=0x000000000032BBB0 string=0x000000000032BBB4 "DW\t"
 *   insn=0x000000000032BBCC string=0x000000000032BBD0 "V"
 *   insn=0x000000000032BBE4 string=0x000000000032BBE8 "@"
 *   insn=0x000000000032BBE8 string=0x000000000032BBEC "h"
 *   insn=0x000000000032BBEC string=0x000000000032BBF0 "(\t"
 *   insn=0x000000000032BBF8 string=0x000000000032BBFC "i"
 *   insn=0x000000000032BBFC string=0x000000000032BC00 ""
 *   insn=0x000000000032BC08 string=0x000000000032BC0C "h&@"
 *   insn=0x000000000032BC18 string=0x000000000032BC1C ""
 *   insn=0x000000000032BC28 string=0x000000000032BC2C "m&"
 *   insn=0x000000000032BC2C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032BC34 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000032BC3C string=0x000000000032BC40 "h\n@"
 *   insn=0x000000000032BC40 string=0x000000000032BC44 ")MC"
 *   insn=0x000000000032BC4C string=0x000000000032BC50 ")"
 *   insn=0x000000000032BC50 string=0x000000000032BC54 "("
 *   insn=0x000000000032BC58 string=0x000000000032BC5C "MM"
 *   insn=0x000000000032BC5C string=0x000000000032BC60 "h&@"
 *   insn=0x000000000032BC6C string=0x000000000032BC70 ""
 *   insn=0x000000000032BC7C string=0x000000000032BC80 "X&"
 *   insn=0x000000000032BC90 string=0x000000000032BC94 "h"
 *   insn=0x000000000032BC94 string=0x000000000032BC98 ")MC"
 *   insn=0x000000000032BCA0 string=0x000000000032BCA4 ")"
 *   insn=0x000000000032BCA4 string=0x000000000032BCA8 "("
 *   insn=0x000000000032BCAC string=0x000000000032BCB0 "8M"
 *   insn=0x000000000032BCB0 string=0x000000000032BCB4 "h&@"
 *   insn=0x000000000032BCBC string=0x000000000032BCC0 "i"@"
 *   insn=0x000000000032BCC0 string=0x000000000032BCC4 ""
 *   insn=0x000000000032BCD0 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032BCDC string=0x000000000032BCE0 "C]"
 *   insn=0x000000000032BCE4 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032BCE8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032BCF0 string=0x000000000032BCF4 "GA"
 *   insn=0x000000000032BCF4 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032BD00 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032BD04 string=0x000000000032BD08 ":9"
 *   insn=0x000000000032BD08 string=0x000000000032BD0C "h"
 *   insn=0x000000000032BD08 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032BD0C string=0x000000000032BD10 "("
 *   insn=0x000000000032BD20 string=0x000000000032BD38 "f)"
 *   insn=0x000000000032BD38 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032BD44 string=0x000000000032BD48 "Z-"
 *   insn=0x000000000032BD48 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032BD58 string=0x000000000032BD5C "%9"
 *   insn=0x000000000032BD64 string=0x000000000032BD68 "y"
 *   insn=0x000000000032BD78 string=0x000000000032BD7C ""
 *   insn=0x000000000032BD80 string=0x000000000032BD84 "A"
 *   insn=0x000000000032BD84 string=0x000000000032BD88 "h"
 *   insn=0x000000000032BD8C string=0x000000000032BD90 "MC"
 *   insn=0x000000000032BD90 string=0x000000000032BD94 ""
 *   insn=0x000000000032BD98 string=0x000000000032BD9C "`"
 *   insn=0x000000000032BD9C string=0x000000000032BDA0 "`\n@"
 *   insn=0x000000000032BDA4 string=0x000000000032BDA8 ""
 *   insn=0x000000000032BDA4 string=0x000000000032BDB4 "`"
 *   insn=0x000000000032BDA8 string=0x000000000032BDAC ""
 *   insn=0x000000000032BDB8 string=0x000000000032BDBC ""
 *   insn=0x000000000032BDBC string=0x000000000032BDC0 ""
 *   insn=0x000000000032BDD0 string=0x000000000032BDD4 "."
 *   insn=0x000000000032BDDC string=0x000000000032BDE0 "."
 *   insn=0x000000000032BDE8 string=0x000000000032BDEC "X"
 *   insn=0x000000000032BDFC string=0x000000000032BE00 "MC"
 *   insn=0x000000000032BE04 string=0x000000000032BE08 ""
 *   insn=0x000000000032BE10 string=0x000000000032BE14 "`\n@"
 *   insn=0x000000000032BE18 string=0x000000000032BE1C ""
 *   insn=0x000000000032BE18 string=0x000000000032BE28 "`"
 *   insn=0x000000000032BE1C string=0x000000000032BE20 ""
 *   insn=0x000000000032BE2C string=0x000000000032BE30 ""
 *   insn=0x000000000032BE3C string=0x000000000032BE40 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(
        Caver::Proto::WeaponGlowComponent *this,
        const Caver::Proto::WeaponGlowComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9270;
  Caver::Proto::WeaponGlowComponent::MergeFrom();
}

