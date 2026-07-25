/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F3D4
 * Mangled: _ZN5Caver5Proto17ParticleComponentC2ERKS1_
 * Demangled: Caver::Proto::ParticleComponent::ParticleComponent(Caver::Proto::ParticleComponent const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F4C30  Caver::Proto::ParticleComponent::MergeFrom(Caver::Proto::ParticleComponent const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x000000000031F3E0 string=0x000000000031F3E4 "("
 *   insn=0x000000000031F3E4 string=0x000000000031F3E8 "%E"
 *   insn=0x000000000031F3EC string=0x000000000031F3F0 ")"
 *   insn=0x000000000031F3F0 string=0x000000000031F3F4 ")"
 *   insn=0x000000000031F3F4 string=0x000000000031F3F8 "A"
 *   insn=0x000000000031F3F8 string=0x000000000031F3FC "h"
 *   insn=0x000000000031F3FC string=0x000000000031F400 "i~"
 *   insn=0x000000000031F400 string=0x000000000031F404 "V"
 *   insn=0x000000000031F404 string=0x00000000001F4C30 "P'"
 *   insn=0x000000000031F418 string=0x000000000031F41C "y`"
 *   insn=0x000000000031F41C string=0x00000000001F7600 "0'"
 *   insn=0x000000000031F420 string=0x000000000031F424 "("
 *   insn=0x000000000031F43C string=0x000000000031F440 "V"
 *   insn=0x000000000031F458 string=0x000000000031F45C "b"
 *   insn=0x000000000031F458 string=0x000000000031F498 "hr@9H"
 *   insn=0x000000000031F45C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031F468 string=0x000000000031F46C "C{"
 *   insn=0x000000000031F470 string=0x000000000031F474 "A"
 *   insn=0x000000000031F470 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031F474 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031F47C string=0x000000000031F480 "ds"
 *   insn=0x000000000031F480 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031F48C string=0x00000000001FA500 "0'"
 *   insn=0x000000000031F490 string=0x000000000031F494 "Wk"
 *   insn=0x000000000031F494 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031F498 string=0x000000000031F49C "H"
 *   insn=0x000000000031F4A0 string=0x000000000031F4A4 ")"
 *   insn=0x000000000031F4AC string=0x000000000031F4B0 "u\n@"
 *   insn=0x000000000031F4B0 string=0x000000000031F4B4 ")"
 *   insn=0x000000000031F4B4 string=0x000000000031F4B8 ""
 *   insn=0x000000000031F4C8 string=0x000000000031F4CC "EX"
 *   insn=0x000000000031F4CC string=0x000000000031F4D0 "("
 *   insn=0x000000000031F4CC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031F4D0 string=0x000000000031F4D4 ""
 *   insn=0x000000000031F4D4 string=0x000000000031F4D8 "a"
 *   insn=0x000000000031F4D8 string=0x000000000031F4DC ""
 *   insn=0x000000000031F4E4 string=0x000000000031F4E8 "p,\t"
 *   insn=0x000000000031F4E8 string=0x000000000031F4EC "h"
 *   insn=0x000000000031F4F4 string=0x000000000031F4F8 "i"
 *   insn=0x000000000031F4F8 string=0x000000000031F4FC ""
 *   insn=0x000000000031F510 string=0x000000000031F528 "j["
 *   insn=0x000000000031F528 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031F530 string=0x000000000031F534 "/k"
 *   insn=0x000000000031F550 string=0x000000000031F554 "T"
 *   insn=0x000000000031F55C string=0x000000000031F560 ")"
 *   insn=0x000000000031F564 string=0x000000000031F568 "("
 *   insn=0x000000000031F568 string=0x000000000031F56C "`\n@"
 *   insn=0x000000000031F56C string=0x000000000031F570 "%E"
 *   insn=0x000000000031F570 string=0x000000000031F574 ")"
 *   insn=0x000000000031F574 string=0x000000000031F578 "A"
 *   insn=0x000000000031F57C string=0x000000000031F580 "h"
 *   insn=0x000000000031F580 string=0x000000000031F584 " "
 *   insn=0x000000000031F588 string=0x000000000031F58C "\t"
 *   insn=0x000000000031F58C string=0x000000000031F590 "*"
 *   insn=0x000000000031F590 string=0x000000000031F594 "J"
 *   insn=0x000000000031F594 string=0x000000000031F598 "(a"
 *   insn=0x000000000031F5A0 string=0x000000000031F5A4 "C_"
 *   insn=0x000000000031F5A0 string=0x000000000031F5D0 "*"
 *   insn=0x000000000031F5A4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031F5B8 string=0x000000000031F5BC "!"
 *   insn=0x000000000031F5BC string=0x000000000031F620 ",["
 *   insn=0x000000000031F5D0 string=0x000000000031F5D4 "J=G"
 *   insn=0x000000000031F5D4 string=0x000000000031F5D8 ")!"
 *   insn=0x000000000031F5DC string=0x000000000031F5E0 "*"
 *   insn=0x000000000031F5DC string=0x000000000031F5F4 "*"
 *   insn=0x000000000031F5E0 string=0x000000000031F5E4 "K"
 *   insn=0x000000000031F5E4 string=0x000000000031F5E8 "+"
 *   insn=0x000000000031F5F0 string=0x000000000031F600 "_"
 *   insn=0x000000000031F5F4 string=0x000000000031F5F8 "K"
 *   insn=0x000000000031F5F8 string=0x000000000031F5FC "+"
 *   insn=0x000000000031F610 string=0x000000000031F614 "d+\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleComponent::ParticleComponent(
        Caver::Proto::ParticleComponent *this,
        const Caver::Proto::ParticleComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8820;
  *((_QWORD *)this + 2) = &Caver::Proto::ParticleComponent::_default_texture_name_;
  *((_QWORD *)this + 3) = 0;
  Caver::Proto::ParticleComponent::MergeFrom();
}

