/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FC2C
 * Mangled: _ZN5Caver5Proto20FireEmitterComponentC2ERKS1_
 * Demangled: Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FB0F0  Caver::Proto::FireEmitterComponent::MergeFrom(Caver::Proto::FireEmitterComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000321078  Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 120
 *   insn=0x000000000031FC34 string=0x000000000031FC38 "("
 *   insn=0x000000000031FC38 string=0x000000000031FC3C ""
 *   insn=0x000000000031FC48 string=0x000000000031FC4C "A"
 *   insn=0x000000000031FC54 string=0x000000000031FC58 "h~"
 *   insn=0x000000000031FC5C string=0x000000000031FC60 "$m"
 *   insn=0x000000000031FC60 string=0x00000000001FB0F0 "0'"
 *   insn=0x000000000031FC74 string=0x000000000031FC78 "b^"
 *   insn=0x000000000031FC78 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031FC98 string=0x000000000031FC9C "V"
 *   insn=0x000000000031FCB4 string=0x000000000031FCB8 "h"
 *   insn=0x000000000031FCB4 string=0x000000000031FCE4 "b"
 *   insn=0x000000000031FCB8 string=0x000000000031FCBC "H"
 *   insn=0x000000000031FCBC string=0x000000000031FCC0 "h"
 *   insn=0x000000000031FCC0 string=0x000000000031FCC4 "("
 *   insn=0x000000000031FCC8 string=0x000000000031FCCC "h"
 *   insn=0x000000000031FCD0 string=0x000000000031FCD4 "h"
 *   insn=0x000000000031FCD4 string=0x000000000031FCD8 "(07"
 *   insn=0x000000000031FCE4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031FCF0 string=0x000000000031FCF4 "c"
 *   insn=0x000000000031FCF8 string=0x000000000031FCFC "A"
 *   insn=0x000000000031FCF8 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031FCFC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031FD04 string=0x000000000031FD08 "Bq"
 *   insn=0x000000000031FD08 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031FD14 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031FD18 string=0x000000000031FD1C "5i"
 *   insn=0x000000000031FD1C string=0x000000000031FD20 "h"
 *   insn=0x000000000031FD1C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031FD24 string=0x000000000031FD28 "o"
 *   insn=0x000000000031FD2C string=0x000000000031FD30 "i"
 *   insn=0x000000000031FD30 string=0x000000000031FD34 ""
 *   insn=0x000000000031FD3C string=0x000000000031FD40 "hB@"
 *   insn=0x000000000031FD40 string=0x000000000031FD44 "("
 *   insn=0x000000000031FD48 string=0x000000000031FD4C "i"
 *   insn=0x000000000031FD4C string=0x000000000031FD50 ""
 *   insn=0x000000000031FD58 string=0x000000000031FD5C "hB@"
 *   insn=0x000000000031FD5C string=0x000000000031FD60 "h"
 *   insn=0x000000000031FD68 string=0x000000000031FD6C ""
 *   insn=0x000000000031FD74 string=0x000000000031FD8C "I"
 *   insn=0x000000000031FD7C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031FD84 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000031FD8C string=0x000000000031FD90 "h"
 *   insn=0x000000000031FD90 string=0x000000000031FD94 ")"
 *   insn=0x000000000031FD9C string=0x000000000031FDA0 ")"
 *   insn=0x000000000031FDA0 string=0x000000000031FDA4 "("
 *   insn=0x000000000031FDAC string=0x000000000031FDB0 "hB@"
 *   insn=0x000000000031FDBC string=0x000000000031FDC0 ""
 *   insn=0x000000000031FDC8 string=0x000000000031FDE0 "I"
 *   insn=0x000000000031FDD4 string=0x000000000031FDD8 "^l"
 *   insn=0x000000000031FDD8 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000031FDE0 string=0x000000000031FDE4 "h"
 *   insn=0x000000000031FDE4 string=0x000000000031FDE8 ")"
 *   insn=0x000000000031FDF0 string=0x000000000031FDF4 ")"
 *   insn=0x000000000031FDF4 string=0x000000000031FDF8 "("
 *   insn=0x000000000031FE00 string=0x000000000031FE04 "hB@"
 *   insn=0x000000000031FE00 string=0x00000000001F3800 "P'"
 *   insn=0x000000000031FE04 string=0x000000000031FE08 "h"
 *   insn=0x000000000031FE10 string=0x000000000031FE14 ""
 *   insn=0x000000000031FE1C string=0x000000000031FE34 "I"
 *   insn=0x000000000031FE28 string=0x000000000031FE2C "=P"
 *   insn=0x000000000031FE2C string=0x00000000001F3F20 "P'"
 *   insn=0x000000000031FE34 string=0x000000000031FE38 "h"
 *   insn=0x000000000031FE38 string=0x000000000031FE3C ")"
 *   insn=0x000000000031FE44 string=0x000000000031FE48 ")"
 *   insn=0x000000000031FE48 string=0x000000000031FE4C "("
 *   insn=0x000000000031FE54 string=0x000000000031FE58 "hB@"
 *   insn=0x000000000031FE60 string=0x000000000031FE64 "i2@"
 *   insn=0x000000000031FE64 string=0x000000000031FE68 ""
 *   insn=0x000000000031FE70 string=0x000000000031FE74 "hB@"
 *   insn=0x000000000031FE74 string=0x000000000031FE78 "("
 *   insn=0x000000000031FE7C string=0x000000000031FE80 "i6@"
 *   insn=0x000000000031FE80 string=0x000000000031FE84 ""
 *   insn=0x000000000031FE8C string=0x000000000031FE90 "hB@"
 *   insn=0x000000000031FE9C string=0x000000000031FEA0 ""
 *   insn=0x000000000031FEA8 string=0x000000000031FEC0 "I"
 *   insn=0x000000000031FEB4 string=0x000000000031FEB8 "&l"
 *   insn=0x000000000031FEC0 string=0x000000000031FEC4 "h"
 *   insn=0x000000000031FEC4 string=0x000000000031FEC8 ")"
 *   insn=0x000000000031FED0 string=0x000000000031FED4 ")"
 *   insn=0x000000000031FED4 string=0x000000000031FED8 "("
 *   insn=0x000000000031FEDC string=0x000000000031FEE0 "HN"
 *   insn=0x000000000031FF08 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031FF20 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031FF24 string=0x000000000031FF28 "g"
 *   insn=0x000000000031FF38 string=0x000000000031FF3C "b"
 *   insn=0x000000000031FF4C string=0x000000000031FF50 "("
 *   insn=0x000000000031FF50 string=0x000000000031FF54 ""
 *   insn=0x000000000031FF58 string=0x000000000031FF5C "A"
 *   insn=0x000000000031FF5C string=0x000000000031FF60 "h"
 *   insn=0x000000000031FF60 string=0x000000000031FF64 "H"
 *   insn=0x000000000031FF64 string=0x000000000031FF68 ""
 *   insn=0x000000000031FF68 string=0x000000000031FF6C ""
 *   insn=0x000000000031FF74 string=0x000000000031FF78 "`"
 *   insn=0x000000000031FF7C string=0x000000000031FF80 ""
 *   insn=0x000000000031FF7C string=0x000000000031FF8C "`"
 *   insn=0x000000000031FF80 string=0x000000000031FF84 ""
 *   insn=0x000000000031FF90 string=0x000000000031FF94 ""
 *   insn=0x000000000031FF90 string=0x000000000031FFA0 "`"
 *   insn=0x000000000031FF94 string=0x000000000031FF98 ""
 *   insn=0x000000000031FFA4 string=0x000000000031FFA8 ""
 *   insn=0x000000000031FFA4 string=0x000000000031FFB4 "`"
 *   insn=0x000000000031FFA8 string=0x000000000031FFAC ""
 *   insn=0x000000000031FFB8 string=0x000000000031FFBC ""
 *   insn=0x000000000031FFBC string=0x000000000031FFC0 ""
 *   insn=0x000000000031FFE4 string=0x000000000031FFE8 "7"
 *   insn=0x000000000031FFF8 string=0x000000000031FFFC "H"
 *   insn=0x000000000031FFFC string=0x0000000000320000 ""
 *   insn=0x0000000000320008 string=0x000000000032007C ""
 *   insn=0x0000000000320010 string=0x0000000000320014 "`"
 *   insn=0x0000000000320018 string=0x000000000032001C ""
 *   insn=0x0000000000320018 string=0x0000000000320028 "`"
 *   insn=0x000000000032001C string=0x0000000000320020 ""
 *   insn=0x000000000032002C string=0x0000000000320030 ""
 *   insn=0x000000000032002C string=0x000000000032003C "`"
 *   insn=0x0000000000320030 string=0x0000000000320034 ""
 *   insn=0x0000000000320040 string=0x0000000000320044 ""
 *   insn=0x0000000000320040 string=0x0000000000320050 "`"
 *   insn=0x0000000000320044 string=0x0000000000320048 ""
 *   insn=0x0000000000320054 string=0x0000000000320058 ""
 *   insn=0x0000000000320064 string=0x0000000000320068 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireEmitterComponent::FireEmitterComponent(
        Caver::Proto::FireEmitterComponent *this,
        const Caver::Proto::FireEmitterComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8898;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 16) = 0;
  Caver::Proto::FireEmitterComponent::MergeFrom();
}

