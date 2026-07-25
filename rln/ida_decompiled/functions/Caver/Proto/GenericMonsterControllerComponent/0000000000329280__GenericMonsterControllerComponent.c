/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329280
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent(Caver::Proto::GenericMonsterControllerComponent const&)
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
 *   0x00000000001FD610  Caver::Proto::GenericMonsterControllerComponent::MergeFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x000000000032928C string=0x0000000000329290 ""
 *   insn=0x0000000000329298 string=0x000000000032929C "A"
 *   insn=0x000000000032929C string=0x00000000003292A0 "h~"
 *   insn=0x00000000003292A4 string=0x00000000001FD610 "0'"
 *   insn=0x00000000003292BC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003292C4 string=0x00000000003292C8 "!"
 *   insn=0x00000000003292DC string=0x00000000003292E0 "U"
 *   insn=0x00000000003292F8 string=0x00000000003292FC "hB@9"
 *   insn=0x0000000000329304 string=0x0000000000329308 "i"
 *   insn=0x0000000000329308 string=0x000000000032930C ""
 *   insn=0x0000000000329338 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000329348 string=0x000000000032934C ")4"
 *   insn=0x000000000032934C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000329350 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032935C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000329364 string=0x0000000000329368 "fD"
 *   insn=0x0000000000329368 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000329370 string=0x0000000000329374 "hB@9h"
 *   insn=0x0000000000329370 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000329374 string=0x0000000000329378 "h"
 *   insn=0x0000000000329380 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000329390 string=0x0000000000329394 "La\t"
 *   insn=0x000000000032939C string=0x00000000003293A0 ""
 *   insn=0x00000000003293A0 string=0x00000000003293A4 "A"
 *   insn=0x00000000003293A4 string=0x00000000003293A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent(
        Caver::Proto::GenericMonsterControllerComponent *this,
        const Caver::Proto::GenericMonsterControllerComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C9090;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::GenericMonsterControllerComponent::MergeFrom();
}

