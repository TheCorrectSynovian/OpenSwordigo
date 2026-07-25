/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8938
 * Mangled: _ZN5Caver5Proto10MusicTrackC2ERKS1_
 * Demangled: Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000202670  Caver::Proto::MusicTrack::MergeFrom(Caver::Proto::MusicTrack const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 60
 *   insn=0x00000000002D8944 string=0x00000000002D8948 "h "
 *   insn=0x00000000002D8948 string=0x00000000002D894C "}B"
 *   insn=0x00000000002D8950 string=0x00000000002D8954 "i "
 *   insn=0x00000000002D8954 string=0x00000000002D8958 ")"
 *   insn=0x00000000002D895C string=0x00000000002D8960 "A"
 *   insn=0x00000000002D8960 string=0x00000000002D8964 "h"
 *   insn=0x00000000002D8964 string=0x00000000002D8968 "i*"
 *   insn=0x00000000002D8968 string=0x00000000002D896C "A"
 *   insn=0x00000000002D8984 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D898C string=0x00000000002D8990 "o"
 *   insn=0x00000000002D89A4 string=0x00000000002D89A8 "V"
 *   insn=0x00000000002D89C0 string=0x00000000002D8A00 "hr@9H"
 *   insn=0x00000000002D89C4 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D89D8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D89DC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D89E4 string=0x00000000002D89E8 "\n"
 *   insn=0x00000000002D89E8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D89F4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D89FC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D8A00 string=0x00000000002D8A04 "H"
 *   insn=0x00000000002D8A08 string=0x00000000002D8A0C "i "
 *   insn=0x00000000002D8A14 string=0x00000000002D8A18 "u\n@"
 *   insn=0x00000000002D8A18 string=0x00000000002D8A1C ")"
 *   insn=0x00000000002D8A1C string=0x00000000002D8A20 ""
 *   insn=0x00000000002D8A34 string=0x00000000002D8A38 "h "
 *   insn=0x00000000002D8A34 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D8A38 string=0x00000000002D8A3C ""
 *   insn=0x00000000002D8A3C string=0x00000000002D8A40 "a"
 *   insn=0x00000000002D8A40 string=0x00000000002D8A44 ""
 *   insn=0x00000000002D8A50 string=0x00000000002D8A54 "h"
 *   insn=0x00000000002D8A5C string=0x00000000002D8A60 "i"
 *   insn=0x00000000002D8A60 string=0x00000000002D8A64 ""
 *   insn=0x00000000002D8A90 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D8AA4 string=0x00000000002D8AA8 ")"
 *   insn=0x00000000002D8AB8 string=0x00000000002D8ABC "T"
 *   insn=0x00000000002D8AC4 string=0x00000000002D8AC8 "i "
 *   insn=0x00000000002D8ACC string=0x00000000002D8AD0 "h "
 *   insn=0x00000000002D8AD0 string=0x00000000002D8AD4 "`\n@"
 *   insn=0x00000000002D8AD4 string=0x00000000002D8AD8 "}B"
 *   insn=0x00000000002D8AD8 string=0x00000000002D8ADC ")"
 *   insn=0x00000000002D8ADC string=0x00000000002D8AE0 "A"
 *   insn=0x00000000002D8AE4 string=0x00000000002D8AE8 "h"
 *   insn=0x00000000002D8AE8 string=0x00000000002D8AEC " "
 *   insn=0x00000000002D8AF0 string=0x00000000002D8AF4 "\t"
 *   insn=0x00000000002D8AF4 string=0x00000000002D8AF8 "j "
 *   insn=0x00000000002D8AF8 string=0x00000000002D8AFC "J"
 *   insn=0x00000000002D8AFC string=0x00000000002D8B00 "(a"
 *   insn=0x00000000002D8B08 string=0x00000000002D8B38 "j "
 *   insn=0x00000000002D8B0C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D8B20 string=0x00000000002D8B24 "!"
 *   insn=0x00000000002D8B38 string=0x00000000002D8B3C "J=G"
 *   insn=0x00000000002D8B3C string=0x00000000002D8B40 ")!"
 *   insn=0x00000000002D8B44 string=0x00000000002D8B48 "*"
 *   insn=0x00000000002D8B44 string=0x00000000002D8B5C "*"
 *   insn=0x00000000002D8B48 string=0x00000000002D8B4C "K"
 *   insn=0x00000000002D8B4C string=0x00000000002D8B50 "+"
 *   insn=0x00000000002D8B58 string=0x00000000002D8B68 "_"
 *   insn=0x00000000002D8B5C string=0x00000000002D8B60 "K"
 *   insn=0x00000000002D8B60 string=0x00000000002D8B64 "+"
 *   insn=0x00000000002D8B78 string=0x00000000002D8B7C "\nF\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicTrack::MusicTrack(
        Caver::Proto::MusicTrack *this,
        const Caver::Proto::MusicTrack *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C6200;
  *((_QWORD *)this + 2) = &Caver::Proto::MusicTrack::_default_resource_name_;
  *((_QWORD *)this + 3) = 1065353216;
  Caver::Proto::MusicTrack::MergeFrom();
}

