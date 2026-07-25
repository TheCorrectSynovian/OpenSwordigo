/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E0D4
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponentC2ERKS1_
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(Caver::Proto::BoneControlledCollisionShapeComponent const&)
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
 *   0x00000000001FD910  Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x000000000030E0E4 string=0x000000000030E0E8 ""
 *   insn=0x000000000030E0F0 string=0x000000000030E0F4 ")"
 *   insn=0x000000000030E0F4 string=0x000000000030E0F8 "A"
 *   insn=0x000000000030E0F8 string=0x000000000030E0FC "h"
 *   insn=0x000000000030E100 string=0x000000000030E104 "i\n"
 *   insn=0x000000000030E108 string=0x00000000001FD910 "0'"
 *   insn=0x000000000030E11C string=0x000000000030E120 "8"
 *   insn=0x000000000030E120 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030E140 string=0x000000000030E144 "U"
 *   insn=0x000000000030E160 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030E174 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030E178 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030E180 string=0x000000000030E184 "#"
 *   insn=0x000000000030E184 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030E190 string=0x00000000001FA500 "0'"
 *   insn=0x000000000030E198 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030E19C string=0x000000000030E1A0 "h"
 *   insn=0x000000000030E1A4 string=0x000000000030E1A8 "h"
 *   insn=0x000000000030E1A4 string=0x000000000030E1C0 "h"
 *   insn=0x000000000030E1AC string=0x000000000030E1B0 ""
 *   insn=0x000000000030E1B0 string=0x000000000030E1B4 "h"
 *   insn=0x000000000030E1B4 string=0x000000000030E1B8 "i"
 *   insn=0x000000000030E1C4 string=0x000000000030E1C8 "h"
 *   insn=0x000000000030E1C8 string=0x000000000030E1CC "`\n@"
 *   insn=0x000000000030E1D0 string=0x000000000030E1D4 ")"
 *   insn=0x000000000030E1D4 string=0x000000000030E1D8 ""
 *   insn=0x000000000030E1D8 string=0x000000000030E1DC "h"
 *   insn=0x000000000030E1EC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030E1F0 string=0x000000000030E1F4 ""
 *   insn=0x000000000030E1F4 string=0x000000000030E1F8 "a"
 *   insn=0x000000000030E1F8 string=0x000000000030E1FC ""
 *   insn=0x000000000030E1FC string=0x000000000030E200 "`\n"
 *   insn=0x000000000030E204 string=0x000000000030E208 "(q\t"
 *   insn=0x000000000030E218 string=0x000000000030E230 "("
 *   insn=0x000000000030E230 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030E244 string=0x000000000030E248 "A"
 *   insn=0x000000000030E258 string=0x000000000030E25C "T"
 *   insn=0x000000000030E270 string=0x000000000030E274 "`\n@"
 *   insn=0x000000000030E274 string=0x000000000030E278 ""
 *   insn=0x000000000030E278 string=0x000000000030E27C ")"
 *   insn=0x000000000030E27C string=0x000000000030E280 "A"
 *   insn=0x000000000030E284 string=0x000000000030E288 "h"
 *   insn=0x000000000030E288 string=0x000000000030E28C " "
 *   insn=0x000000000030E290 string=0x000000000030E294 "\t"
 *   insn=0x000000000030E298 string=0x000000000030E29C "J"
 *   insn=0x000000000030E29C string=0x000000000030E2A0 "(a"
 *   insn=0x000000000030E2AC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030E2C0 string=0x000000000030E2C4 "!"
 *   insn=0x000000000030E2D8 string=0x000000000030E2DC "J=G"
 *   insn=0x000000000030E2DC string=0x000000000030E2E0 ")!"
 *   insn=0x000000000030E2E4 string=0x000000000030E2E8 "*"
 *   insn=0x000000000030E2E4 string=0x000000000030E2FC "*"
 *   insn=0x000000000030E2E8 string=0x000000000030E2EC "K"
 *   insn=0x000000000030E2EC string=0x000000000030E2F0 "+"
 *   insn=0x000000000030E2F8 string=0x000000000030E308 "_"
 *   insn=0x000000000030E2FC string=0x000000000030E300 "K"
 *   insn=0x000000000030E300 string=0x000000000030E304 "+"
 *   insn=0x000000000030E318 string=0x000000000030E31C ""p\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(
        Caver::Proto::BoneControlledCollisionShapeComponent *this,
        const Caver::Proto::BoneControlledCollisionShapeComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *(_QWORD *)this = off_6C7BF0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_;
  Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom();
}

