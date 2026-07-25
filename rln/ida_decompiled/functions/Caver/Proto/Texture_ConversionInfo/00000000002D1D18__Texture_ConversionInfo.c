/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1D18
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfoC2ERKS1_
 * Demangled: Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7410  Caver::Proto::Texture_ConversionInfo::MergeFrom(Caver::Proto::Texture_ConversionInfo const&)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000002D1D24 string=0x00000000002D1D28 ""
 *   insn=0x00000000002D1D30 string=0x00000000002D1D34 "A"
 *   insn=0x00000000002D1D34 string=0x00000000002D1D38 "h~"
 *   insn=0x00000000002D1D3C string=0x00000000001F7410 "0'"
 *   insn=0x00000000002D1D50 string=0x00000000002D1D54 "+"
 *   insn=0x00000000002D1D54 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D1D5C string=0x00000000002D1D60 "{"
 *   insn=0x00000000002D1D74 string=0x00000000002D1D78 "U"
 *   insn=0x00000000002D1D90 string=0x00000000002D1DD0 "hr@9("
 *   insn=0x00000000002D1D94 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D1DA8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D1DAC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D1DB8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D1DC4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D1DC8 string=0x00000000002D1DCC "\t"
 *   insn=0x00000000002D1DCC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D1DD0 string=0x00000000002D1DD4 "("
 *   insn=0x00000000002D1DD4 string=0x00000000002D1DD8 "("
 *   insn=0x00000000002D1DE8 string=0x00000000002D1DEC "i"
 *   insn=0x00000000002D1DEC string=0x00000000002D1DF0 ""
 *   insn=0x00000000002D1E1C string=0x00000000002D1E20 "i"
 *   insn=0x00000000002D1E20 string=0x00000000002D1E24 ""
 *   insn=0x00000000002D1E2C string=0x00000000002D1E30 "h"
 *   insn=0x00000000002D1E30 string=0x00000000002D1E34 "h"
 *   insn=0x00000000002D1E38 string=0x00000000002D1E3C "i"
 *   insn=0x00000000002D1E3C string=0x00000000002D1E40 ""
 *   insn=0x00000000002D1E48 string=0x00000000002D1E4C "h"
 *   insn=0x00000000002D1E54 string=0x00000000002D1E58 "i"
 *   insn=0x00000000002D1E58 string=0x00000000002D1E5C ""
 *   insn=0x00000000002D1E64 string=0x00000000002D1E68 "h"
 *   insn=0x00000000002D1E74 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D1E88 string=0x00000000002D1E8C "0"
 *   insn=0x00000000002D1E90 string=0x00000000002D1E94 ""
 *   insn=0x00000000002D1E94 string=0x00000000002D1E98 "A"
 *   insn=0x00000000002D1E98 string=0x00000000002D1E9C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(
        Caver::Proto::Texture_ConversionInfo *this,
        const Caver::Proto::Texture_ConversionInfo *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C5DC8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::Texture_ConversionInfo::MergeFrom();
}

