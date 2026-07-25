/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AB0C
 * Mangled: _ZN5Caver5Proto14ShapeComponentC2ERKS1_
 * Demangled: Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F98A0  Caver::Proto::Circle::Circle(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA380  Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&)
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FE8B0  Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *   0x00000000002032D0  Caver::Proto::ShapeComponent::MergeFrom(Caver::Proto::ShapeComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 79
 *   insn=0x000000000030AB18 string=0x000000000030AB1C ""
 *   insn=0x000000000030AB28 string=0x000000000030AB2C "A"
 *   insn=0x000000000030AB30 string=0x000000000030AB34 "h"
 *   insn=0x000000000030AB54 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030AB58 string=0x000000000030AB5C "Z"
 *   insn=0x000000000030AB74 string=0x000000000030AB78 "V"
 *   insn=0x000000000030AB8C string=0x000000000030AB90 "@"
 *   insn=0x000000000030AB90 string=0x000000000030AB94 "h"
 *   insn=0x000000000030AB94 string=0x000000000030AB98 "(\n"
 *   insn=0x000000000030ABA4 string=0x000000000030ABA8 ""
 *   insn=0x000000000030ABB8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030ABBC string=0x000000000030ABC0 ","
 *   insn=0x000000000030ABC0 string=0x00000000001FB070 "0'"
 *   insn=0x000000000030ABC8 string=0x000000000030ABCC "h\n@"
 *   insn=0x000000000030ABCC string=0x000000000030ABD0 ")"
 *   insn=0x000000000030ABD8 string=0x000000000030ABDC ")"
 *   insn=0x000000000030ABDC string=0x000000000030ABE0 "("
 *   insn=0x000000000030ABE4 string=0x000000000030ABE8 "z"
 *   insn=0x000000000030ABE8 string=0x000000000030ABEC "h*@"
 *   insn=0x000000000030ABF8 string=0x000000000030ABFC ""
 *   insn=0x000000000030AC08 string=0x000000000030AC0C "u"
 *   insn=0x000000000030AC10 string=0x000000000030AC14 "#"
 *   insn=0x000000000030AC14 string=0x00000000001F98A0 "0'"
 *   insn=0x000000000030AC1C string=0x000000000030AC20 "h"
 *   insn=0x000000000030AC20 string=0x000000000030AC24 ")"
 *   insn=0x000000000030AC2C string=0x000000000030AC30 ")"
 *   insn=0x000000000030AC30 string=0x000000000030AC34 "("
 *   insn=0x000000000030AC3C string=0x000000000030AC40 "h*@"
 *   insn=0x000000000030AC3C string=0x00000000001FA380 "0'"
 *   insn=0x000000000030AC4C string=0x000000000030AC50 ""
 *   insn=0x000000000030AC5C string=0x000000000030AC60 "`"
 *   insn=0x000000000030AC68 string=0x00000000001F73B0 "0'"
 *   insn=0x000000000030AC70 string=0x000000000030AC74 "h"
 *   insn=0x000000000030AC74 string=0x000000000030AC78 ")"
 *   insn=0x000000000030AC80 string=0x000000000030AC84 ")"
 *   insn=0x000000000030AC84 string=0x000000000030AC88 "("
 *   insn=0x000000000030AC8C string=0x000000000030AC90 ""
 *   insn=0x000000000030AC98 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030ACAC string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030ACB0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030ACB8 string=0x000000000030ACBC "U"
 *   insn=0x000000000030ACBC string=0x00000000001FC210 "0'"
 *   insn=0x000000000030ACC8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000030ACCC string=0x000000000030ACD0 "H"
 *   insn=0x000000000030ACD0 string=0x000000000030ACD4 "h"
 *   insn=0x000000000030ACD0 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030ACD4 string=0x000000000030ACD8 "("
 *   insn=0x000000000030ACE8 string=0x000000000030AD00 "t"
 *   insn=0x000000000030AD00 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030AD10 string=0x000000000030AD14 "g"
 *   insn=0x000000000030AD14 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030AD24 string=0x000000000030AD28 "2"
 *   insn=0x000000000030AD44 string=0x000000000030AD48 ""
 *   insn=0x000000000030AD4C string=0x000000000030AD50 "A"
 *   insn=0x000000000030AD50 string=0x000000000030AD54 "h"
 *   insn=0x000000000030AD58 string=0x000000000030AD5C ""
 *   insn=0x000000000030AD5C string=0x000000000030AD60 ""
 *   insn=0x000000000030AD68 string=0x000000000030AD6C "`\n@"
 *   insn=0x000000000030AD70 string=0x000000000030AD74 ""
 *   insn=0x000000000030AD70 string=0x000000000030AD80 "`"
 *   insn=0x000000000030AD74 string=0x000000000030AD78 ""
 *   insn=0x000000000030AD84 string=0x000000000030AD88 ""
 *   insn=0x000000000030AD84 string=0x000000000030AD94 "`"
 *   insn=0x000000000030AD88 string=0x000000000030AD8C ""
 *   insn=0x000000000030AD98 string=0x000000000030AD9C ""
 *   insn=0x000000000030AD9C string=0x000000000030ADA0 ""
 *   insn=0x000000000030ADC8 string=0x000000000030ADCC "`"
 *   insn=0x000000000030ADDC string=0x000000000030ADE0 ""
 *   insn=0x000000000030ADE4 string=0x000000000030ADE8 ""
 *   insn=0x000000000030ADEC string=0x000000000030ADF0 "@"
 *   insn=0x000000000030ADF0 string=0x000000000030ADF4 "`\n@"
 *   insn=0x000000000030ADF8 string=0x000000000030ADFC ""
 *   insn=0x000000000030ADF8 string=0x000000000030AE08 "`"
 *   insn=0x000000000030ADFC string=0x000000000030AE00 ""
 *   insn=0x000000000030AE0C string=0x000000000030AE10 ""
 *   insn=0x000000000030AE0C string=0x000000000030AE1C "`"
 *   insn=0x000000000030AE10 string=0x000000000030AE14 ""
 *   insn=0x000000000030AE20 string=0x000000000030AE24 ""
 *   insn=0x000000000030AE30 string=0x000000000030AE34 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShapeComponent::ShapeComponent(
        Caver::Proto::ShapeComponent *this,
        const Caver::Proto::ShapeComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7A10;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::ShapeComponent::MergeFrom();
}

