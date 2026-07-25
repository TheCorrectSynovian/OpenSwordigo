/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF290
 * Mangled: _ZN5Caver5Proto3BoxC2ERKS1_
 * Demangled: Caver::Proto::Box::Box(Caver::Proto::Box const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201AD0  Caver::Proto::Box::MergeFrom(Caver::Proto::Box const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x00000000002CF29C string=0x00000000002CF2A0 ""
 *   insn=0x00000000002CF2AC string=0x00000000002CF2B0 "A"
 *   insn=0x00000000002CF2B0 string=0x00000000002CF2B4 "h"
 *   insn=0x00000000002CF2D0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CF2D4 string=0x00000000002CF2D8 "{"
 *   insn=0x00000000002CF2F0 string=0x00000000002CF2F4 "U"
 *   insn=0x00000000002CF30C string=0x00000000002CF34C "h"
 *   insn=0x00000000002CF310 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CF320 string=0x00000000002CF324 "3"
 *   insn=0x00000000002CF324 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CF328 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CF334 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CF33C string=0x00000000002CF340 "p"
 *   insn=0x00000000002CF340 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CF348 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CF34C string=0x00000000002CF350 "h"
 *   insn=0x00000000002CF350 string=0x00000000002CF354 "h"
 *   insn=0x00000000002CF354 string=0x00000000002CF358 "("
 *   insn=0x00000000002CF360 string=0x00000000002CF364 "h"
 *   insn=0x00000000002CF36C string=0x00000000002CF370 "i"@"
 *   insn=0x00000000002CF370 string=0x00000000002CF374 ""
 *   insn=0x00000000002CF384 string=0x00000000002CF388 "A"
 *   insn=0x00000000002CF3A0 string=0x00000000002CF3A4 "i"
 *   insn=0x00000000002CF3A4 string=0x00000000002CF3A8 ""
 *   insn=0x00000000002CF3B0 string=0x00000000002CF3B4 "h&@"
 *   insn=0x00000000002CF3B4 string=0x00000000002CF3B8 "("
 *   insn=0x00000000002CF3BC string=0x00000000002CF3C0 "i"
 *   insn=0x00000000002CF3C0 string=0x00000000002CF3C4 ""
 *   insn=0x00000000002CF3CC string=0x00000000002CF3D0 "h&@"
 *   insn=0x00000000002CF3D0 string=0x00000000002CF3D4 "h"
 *   insn=0x00000000002CF3D8 string=0x00000000002CF3DC "i"
 *   insn=0x00000000002CF3DC string=0x00000000002CF3E0 ""
 *   insn=0x00000000002CF3E8 string=0x00000000002CF3EC "h&@"
 *   insn=0x00000000002CF3F4 string=0x00000000002CF3F8 "i"
 *   insn=0x00000000002CF3F8 string=0x00000000002CF3FC ""
 *   insn=0x00000000002CF404 string=0x00000000002CF408 "h&@"
 *   insn=0x00000000002CF410 string=0x00000000002CF414 "i"
 *   insn=0x00000000002CF414 string=0x00000000002CF418 ""
 *   insn=0x00000000002CF420 string=0x00000000002CF424 "h&@"
 *   insn=0x00000000002CF424 string=0x00000000002CF428 "("
 *   insn=0x00000000002CF430 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CF438 string=0x00000000002CF43C "m"
 *   insn=0x00000000002CF440 string=0x00000000002CF444 " "
 *   insn=0x00000000002CF44C string=0x00000000002CF450 ""
 *   insn=0x00000000002CF450 string=0x00000000002CF454 "A"
 *   insn=0x00000000002CF454 string=0x00000000002CF458 ""
 *   insn=0x00000000002CF458 string=0x00000000002CF45C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Box::Box(Caver::Proto::Box *this, const Caver::Proto::Box *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C5B70;
  Caver::Proto::Box::MergeFrom(this, a2);
}

