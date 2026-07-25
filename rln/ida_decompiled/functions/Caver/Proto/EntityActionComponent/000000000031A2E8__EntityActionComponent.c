/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A2E8
 * Mangled: _ZN5Caver5Proto21EntityActionComponentC2ERKS1_
 * Demangled: Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF80  Caver::Proto::EntityActionComponent::MergeFrom(Caver::Proto::EntityActionComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x000000000031A2F0 string=0x000000000031A2F4 "H"
 *   insn=0x000000000031A2F4 string=0x000000000031A2F8 "\tE"
 *   insn=0x000000000031A304 string=0x000000000031A308 "A"
 *   insn=0x000000000031A308 string=0x000000000031A30C "h"
 *   insn=0x000000000031A310 string=0x000000000031A314 ""
 *   insn=0x000000000031A314 string=0x00000000001FAF80 "0'"
 *   insn=0x000000000031A32C string=0x00000000001F7600 "0'"
 *   insn=0x000000000031A330 string=0x000000000031A334 "d"
 *   insn=0x000000000031A34C string=0x000000000031A350 "V"
 *   insn=0x000000000031A368 string=0x000000000031A36C "hb@9h"
 *   insn=0x000000000031A36C string=0x000000000031A370 "h"
 *   insn=0x000000000031A370 string=0x000000000031A374 "%"
 *   insn=0x000000000031A378 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031A38C string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031A390 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031A39C string=0x00000000001FC210 "0'"
 *   insn=0x000000000031A3A4 string=0x000000000031A3A8 "V"
 *   insn=0x000000000031A3A8 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031A3B0 string=0x000000000031A3B4 "hb@9"
 *   insn=0x000000000031A3B0 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031A3C0 string=0x000000000031A3C4 ""
 *   insn=0x000000000031A3CC string=0x000000000031A3E4 "I"
 *   insn=0x000000000031A3D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031A3D8 string=0x000000000031A3DC "\tk"
 *   insn=0x000000000031A3DC string=0x00000000001F5000 "P'"
 *   insn=0x000000000031A3E4 string=0x000000000031A3E8 "h\n@"
 *   insn=0x000000000031A3E8 string=0x000000000031A3EC ")"
 *   insn=0x000000000031A3F4 string=0x000000000031A3F8 ")"
 *   insn=0x000000000031A3F8 string=0x000000000031A3FC "("
 *   insn=0x000000000031A404 string=0x00000000001F37A0 "P'"
 *   insn=0x000000000031A42C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031A438 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031A43C string=0x000000000031A440 "!"
 *   insn=0x000000000031A448 string=0x000000000031A44C "i"
 *   insn=0x000000000031A464 string=0x000000000031A468 "H"
 *   insn=0x000000000031A468 string=0x000000000031A46C "\tE"
 *   insn=0x000000000031A470 string=0x000000000031A474 "A"
 *   insn=0x000000000031A474 string=0x000000000031A478 "h"
 *   insn=0x000000000031A478 string=0x000000000031A47C "H"
 *   insn=0x000000000031A47C string=0x000000000031A480 ""
 *   insn=0x000000000031A480 string=0x000000000031A484 ""
 *   insn=0x000000000031A48C string=0x000000000031A490 "`\n@"
 *   insn=0x000000000031A494 string=0x000000000031A498 ""
 *   insn=0x000000000031A498 string=0x000000000031A49C ""
 *   insn=0x000000000031A4AC string=0x000000000031A4B0 "Tt"
 *   insn=0x000000000031A4B8 string=0x000000000031A4BC "Qt"
 *   insn=0x000000000031A4C8 string=0x000000000031A4CC "H"
 *   insn=0x000000000031A4CC string=0x000000000031A4D0 ""
 *   insn=0x000000000031A4D0 string=0x000000000031A4D4 ""
 *   insn=0x000000000031A4E4 string=0x000000000031A4E8 ""
 *   insn=0x000000000031A4EC string=0x000000000031A4F0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityActionComponent::EntityActionComponent(
        Caver::Proto::EntityActionComponent *this,
        const Caver::Proto::EntityActionComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8460;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::EntityActionComponent::MergeFrom();
}

