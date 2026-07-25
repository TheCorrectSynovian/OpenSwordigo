/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003272A0
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC490  Caver::Proto::StaticMonsterControllerComponent::MergeFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000003272AC string=0x00000000003272B0 "%D"
 *   insn=0x00000000003272B0 string=0x00000000003272B4 ")"
 *   insn=0x00000000003272B4 string=0x00000000003272B8 " 9B"
 *   insn=0x00000000003272BC string=0x00000000003272C0 "t"
 *   insn=0x00000000003272C0 string=0x00000000003272C4 "A"
 *   insn=0x00000000003272C8 string=0x00000000003272CC "h"
 *   insn=0x00000000003272CC string=0x00000000003272D0 "`"
 *   insn=0x00000000003272D4 string=0x00000000003272D8 "nT"
 *   insn=0x00000000003272D8 string=0x00000000001FC490 "0'"
 *   insn=0x00000000003272F4 string=0x00000000003272F8 "h"
 *   insn=0x0000000000327300 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000327308 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032730C string=0x0000000000327310 "mi\t"
 *   insn=0x0000000000327330 string=0x0000000000327334 "V"
 *   insn=0x000000000032734C string=0x0000000000327350 """
 *   insn=0x000000000032734C string=0x000000000032738C "x"
 *   insn=0x0000000000327350 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032735C string=0x0000000000327360 "c3"
 *   insn=0x0000000000327360 string=0x0000000000327364 "#<"
 *   insn=0x0000000000327364 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000327368 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000327374 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032737C string=0x0000000000327380 "`L"
 *   insn=0x0000000000327380 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000327388 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000327390 string=0x0000000000327394 ""
 *   insn=0x0000000000327394 string=0x0000000000327398 "?"
 *   insn=0x0000000000327398 string=0x000000000032739C "J"
 *   insn=0x000000000032739C string=0x00000000003273A0 ")y"
 *   insn=0x00000000003273A0 string=0x00000000003273A4 "?"
 *   insn=0x00000000003273A4 string=0x00000000003273A8 ""
 *   insn=0x00000000003273A8 string=0x00000000003273AC "\t}@"
 *   insn=0x00000000003273B4 string=0x00000000003273B8 ")}"
 *   insn=0x00000000003273BC string=0x00000000003273C0 "}~"
 *   insn=0x00000000003273CC string=0x00000000003273D0 "hD"
 *   insn=0x00000000003273D0 string=0x00000000003273D4 """
 *   insn=0x00000000003273D0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000003273FC string=0x0000000000327400 "x"
 *   insn=0x0000000000327404 string=0x0000000000327408 "a\n@"
 *   insn=0x0000000000327414 string=0x0000000000327418 "h"
 *   insn=0x000000000032741C string=0x0000000000327420 "("
 *   insn=0x0000000000327424 string=0x0000000000327428 "h"
 *   insn=0x0000000000327430 string=0x0000000000327434 "i"
 *   insn=0x0000000000327434 string=0x0000000000327438 ""
 *   insn=0x0000000000327470 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000327478 string=0x000000000032747C "]K"
 *   insn=0x000000000032749C string=0x00000000003274A0 "`\n@"
 *   insn=0x00000000003274A0 string=0x00000000003274A4 "%D"
 *   insn=0x00000000003274A4 string=0x00000000003274A8 "i"
 *   insn=0x00000000003274AC string=0x00000000003274B0 "A"
 *   insn=0x00000000003274B0 string=0x00000000003274B4 "h"
 *   insn=0x00000000003274B4 string=0x00000000003274B8 "`"
 *   insn=0x00000000003274B8 string=0x00000000003274BC "@"
 *   insn=0x00000000003274CC string=0x00000000003274D0 "L@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(
        Caver::Proto::StaticMonsterControllerComponent *this,
        const Caver::Proto::StaticMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = (char *)this + 32;
  *(_QWORD *)this = off_6C8E38;
  *((_QWORD *)this + 3) = 0x400000000LL;
  *((_DWORD *)this + 12) = 0;
  Caver::Proto::StaticMonsterControllerComponent::MergeFrom();
}

