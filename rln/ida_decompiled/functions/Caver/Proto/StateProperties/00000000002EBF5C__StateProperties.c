/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EBF5C
 * Mangled: _ZN5Caver5Proto15StatePropertiesC2ERKS1_
 * Demangled: Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3A60  Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000002EBF6C string=0x00000000002EBF70 "IA"
 *   insn=0x00000000002EBF74 string=0x00000000002EBF78 "t"
 *   insn=0x00000000002EBF7C string=0x00000000002EBF80 "A"
 *   insn=0x00000000002EBF80 string=0x00000000002EBF84 "t~"
 *   insn=0x00000000002EBF88 string=0x00000000002EBF8C "i""
 *   insn=0x00000000002EBF8C string=0x00000000002EBF90 "h"
 *   insn=0x00000000002EBF98 string=0x00000000001F3A60 "P'"
 *   insn=0x00000000002EBFAC string=0x00000000002EBFB0 "h\n@"
 *   insn=0x00000000002EBFB4 string=0x00000000002EBFB8 "?"
 *   insn=0x00000000002EBFB8 string=0x00000000002EBFBC "+"
 *   insn=0x00000000002EBFC4 string=0x00000000002EBFC8 ":+"
 *   insn=0x00000000002EBFC8 string=0x00000000002EBFCC "i"
 *   insn=0x00000000002EBFC8 string=0x00000000001F6CB0 "0'"
 *   insn=0x00000000002EBFCC string=0x00000000002EBFD0 "h\n@"
 *   insn=0x00000000002EBFD8 string=0x00000000002EBFDC "K"
 *   insn=0x00000000002EBFE4 string=0x00000000002EBFE8 "h"
 *   insn=0x00000000002EBFF0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002EBFF8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002EBFFC string=0x00000000002EC000 "1V\n"
 *   insn=0x00000000002EC01C string=0x00000000002EC020 "U"
 *   insn=0x00000000002EC03C string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002EC048 string=0x00000000002EC04C "#"
 *   insn=0x00000000002EC050 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002EC054 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002EC05C string=0x00000000002EC060 "l@"
 *   insn=0x00000000002EC060 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002EC068 string=0x00000000002EC06C "%9"
 *   insn=0x00000000002EC06C string=0x00000000001FA500 "0'"
 *   insn=0x00000000002EC070 string=0x00000000002EC074 "_8"
 *   insn=0x00000000002EC074 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002EC078 string=0x00000000002EC07C "aB"
 *   insn=0x00000000002EC080 string=0x00000000001FB3D0 "0'"
 *   insn=0x00000000002EC0A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EC0B0 string=0x00000000002EC0B4 "O8"
 *   insn=0x00000000002EC0D4 string=0x00000000002EC0D8 "h"
 *   insn=0x00000000002EC0D8 string=0x00000000002EC0DC ")IA"
 *   insn=0x00000000002EC0DC string=0x00000000002EC0E0 "`\n@"
 *   insn=0x00000000002EC0E4 string=0x00000000002EC0E8 ")A"
 *   insn=0x00000000002EC0E8 string=0x00000000002EC0EC "i"
 *   insn=0x00000000002EC0EC string=0x00000000002EC0F0 "+"
 *   insn=0x00000000002EC0F0 string=0x00000000002EC114 "h"
 *   insn=0x00000000002EC0FC string=0x00000000002EC100 "h"
 *   insn=0x00000000002EC100 string=0x00000000002EC104 "`\n@"
 *   insn=0x00000000002EC10C string=0x00000000002EC110 "K"
 *   insn=0x00000000002EC118 string=0x00000000002EC11C "`"
 *   insn=0x00000000002EC11C string=0x00000000002EC120 "@"
 *   insn=0x00000000002EC130 string=0x00000000002EC134 "3-"
 *   insn=0x00000000002EC13C string=0x00000000002EC140 "0-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StateProperties::StateProperties(
        Caver::Proto::StateProperties *this,
        const Caver::Proto::StateProperties *a2)
{
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)this = off_6C6E20;
  *((_DWORD *)this + 18) = 0;
  Caver::Proto::StateProperties::MergeFrom();
}

