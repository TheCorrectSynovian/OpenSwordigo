/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316360
 * Mangled: _ZN5Caver5Proto23DoorControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::DoorControllerComponent::DoorControllerComponent(Caver::Proto::DoorControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F85F0  Caver::Proto::DoorControllerComponent::MergeFrom(Caver::Proto::DoorControllerComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x000000000031636C string=0x0000000000316370 ""
 *   insn=0x000000000031637C string=0x0000000000316380 "A"
 *   insn=0x0000000000316380 string=0x0000000000316384 "h"
 *   insn=0x000000000031638C string=0x00000000001F85F0 "0'"
 *   insn=0x00000000003163A4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003163A8 string=0x00000000003163AC "F"
 *   insn=0x00000000003163C4 string=0x00000000003163C8 "U"
 *   insn=0x00000000003163E0 string=0x0000000000316420 "h"
 *   insn=0x00000000003163E4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003163F8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003163FC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000316408 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000316410 string=0x0000000000316414 ";"
 *   insn=0x0000000000316414 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000316418 string=0x000000000031641C "u"
 *   insn=0x000000000031641C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000316420 string=0x0000000000316424 "h"
 *   insn=0x0000000000316424 string=0x0000000000316428 "h"
 *   insn=0x0000000000316428 string=0x000000000031642C "("
 *   insn=0x000000000031643C string=0x0000000000316440 "ir@9"
 *   insn=0x0000000000316440 string=0x0000000000316444 ""
 *   insn=0x0000000000316458 string=0x000000000031645C "a"
 *   insn=0x000000000031645C string=0x00000000003164E8 "z"
 *   insn=0x0000000000316474 string=0x0000000000316478 "i"
 *   insn=0x0000000000316478 string=0x000000000031647C ""
 *   insn=0x0000000000316484 string=0x0000000000316488 "h"@"
 *   insn=0x0000000000316488 string=0x000000000031648C "("
 *   insn=0x0000000000316490 string=0x0000000000316494 "i"
 *   insn=0x0000000000316494 string=0x0000000000316498 ""
 *   insn=0x00000000003164A0 string=0x00000000003164A4 "h"@"
 *   insn=0x00000000003164A4 string=0x00000000003164A8 "h"
 *   insn=0x00000000003164AC string=0x00000000003164B0 "i"
 *   insn=0x00000000003164B0 string=0x00000000003164B4 ""
 *   insn=0x00000000003164BC string=0x00000000003164C0 "h"@"
 *   insn=0x00000000003164C8 string=0x00000000003164CC "i"
 *   insn=0x00000000003164CC string=0x00000000003164D0 ""
 *   insn=0x00000000003164D8 string=0x00000000003164DC "h"@"
 *   insn=0x00000000003164E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003164F0 string=0x00000000003164F4 "?"
 *   insn=0x0000000000316504 string=0x0000000000316508 ""
 *   insn=0x0000000000316508 string=0x000000000031650C "A"
 *   insn=0x000000000031650C string=0x0000000000316510 ""
 *   insn=0x0000000000316510 string=0x0000000000316514 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DoorControllerComponent::DoorControllerComponent(
        Caver::Proto::DoorControllerComponent *this,
        const Caver::Proto::DoorControllerComponent *a2)
{
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8190;
  *(_QWORD *)((char *)this + 21) = 0;
  Caver::Proto::DoorControllerComponent::MergeFrom();
}

