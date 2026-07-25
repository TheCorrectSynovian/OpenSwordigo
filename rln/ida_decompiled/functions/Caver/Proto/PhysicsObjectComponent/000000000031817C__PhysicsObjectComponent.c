/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031817C
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponentC2ERKS1_
 * Demangled: Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F36A0  Caver::Proto::PhysicsObjectComponent::MergeFrom(Caver::Proto::PhysicsObjectComponent const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x0000000000318184 string=0x0000000000318188 "h"
 *   insn=0x0000000000318188 string=0x000000000031818C ""
 *   insn=0x0000000000318198 string=0x000000000031819C "A"
 *   insn=0x00000000003181AC string=0x00000000003181B0 "i2"
 *   insn=0x00000000003181B0 string=0x00000000003181B4 "j"
 *   insn=0x00000000003181B4 string=0x00000000003181B8 "h"
 *   insn=0x00000000003181BC string=0x00000000003181C0 "8m"
 *   insn=0x00000000003181C0 string=0x00000000001F36A0 "P'"
 *   insn=0x00000000003181D4 string=0x00000000003181D8 "\n}"
 *   insn=0x00000000003181D8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003181E0 string=0x00000000003181E4 "Z"
 *   insn=0x00000000003181F8 string=0x00000000003181FC "V"
 *   insn=0x0000000000318214 string=0x0000000000318218 "h"
 *   insn=0x0000000000318224 string=0x0000000000318228 "i2@9"
 *   insn=0x0000000000318228 string=0x000000000031822C ""
 *   insn=0x0000000000318234 string=0x0000000000318238 "h2@"
 *   insn=0x000000000031823C string=0x0000000000318290 "("
 *   insn=0x0000000000318244 string=0x0000000000318248 ""
 *   insn=0x0000000000318250 string=0x0000000000318268 "i"
 *   insn=0x0000000000318258 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000318260 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000318268 string=0x000000000031826C "h\n@"
 *   insn=0x000000000031826C string=0x0000000000318270 ")"
 *   insn=0x0000000000318278 string=0x000000000031827C ")"
 *   insn=0x000000000031827C string=0x0000000000318280 "("
 *   insn=0x0000000000318288 string=0x000000000031828C "h2@"
 *   insn=0x0000000000318298 string=0x000000000031829C "h"
 *   insn=0x000000000031829C string=0x00000000003182A0 "("
 *   insn=0x00000000003182A4 string=0x00000000003182A8 ":"
 *   insn=0x00000000003182AC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003182BC string=0x00000000003182C0 "Lx"
 *   insn=0x00000000003182C0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003182C4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003182D0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003182DC string=0x00000000001FA500 "0'"
 *   insn=0x00000000003182E4 string=0x00000000003182E8 "h"
 *   insn=0x00000000003182E4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003182EC string=0x00000000003182F0 "("
 *   insn=0x00000000003182F4 string=0x00000000003182F8 "i"
 *   insn=0x00000000003182F8 string=0x00000000003182FC ""
 *   insn=0x0000000000318304 string=0x0000000000318308 "h2@"
 *   insn=0x0000000000318308 string=0x000000000031830C "h"
 *   insn=0x0000000000318310 string=0x0000000000318314 "i"
 *   insn=0x0000000000318314 string=0x0000000000318318 ""
 *   insn=0x0000000000318320 string=0x0000000000318324 "h2@"
 *   insn=0x000000000031832C string=0x0000000000318330 "i"@"
 *   insn=0x0000000000318330 string=0x0000000000318334 ""
 *   insn=0x000000000031833C string=0x0000000000318340 "h2@"
 *   insn=0x0000000000318348 string=0x000000000031834C "i&@"
 *   insn=0x000000000031834C string=0x0000000000318350 ""
 *   insn=0x0000000000318358 string=0x000000000031835C "h2@"
 *   insn=0x000000000031835C string=0x0000000000318360 "("
 *   insn=0x0000000000318364 string=0x0000000000318368 "i"
 *   insn=0x0000000000318368 string=0x000000000031836C ""
 *   insn=0x0000000000318374 string=0x0000000000318378 "h2@"
 *   insn=0x0000000000318380 string=0x0000000000318384 "i.@"
 *   insn=0x0000000000318384 string=0x0000000000318388 ""
 *   insn=0x00000000003183B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003183C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003183C4 string=0x00000000003183C8 "?"
 *   insn=0x00000000003183D8 string=0x00000000003183DC ":"
 *   insn=0x00000000003183EC string=0x00000000003183F0 "h"
 *   insn=0x00000000003183F0 string=0x00000000003183F4 ""
 *   insn=0x00000000003183F8 string=0x00000000003183FC "A"
 *   insn=0x00000000003183FC string=0x0000000000318400 "h"
 *   insn=0x0000000000318400 string=0x0000000000318404 "h"
 *   insn=0x0000000000318404 string=0x0000000000318408 ""
 *   insn=0x0000000000318408 string=0x000000000031840C ""
 *   insn=0x0000000000318414 string=0x0000000000318418 "`\n@"
 *   insn=0x000000000031841C string=0x0000000000318420 ""
 *   insn=0x0000000000318420 string=0x0000000000318424 ""
 *   insn=0x0000000000318434 string=0x0000000000318438 "r|"
 *   insn=0x0000000000318440 string=0x0000000000318444 "o|"
 *   insn=0x0000000000318450 string=0x0000000000318454 "h"
 *   insn=0x0000000000318454 string=0x0000000000318458 ""
 *   insn=0x0000000000318458 string=0x000000000031845C ""
 *   insn=0x000000000031846C string=0x0000000000318470 ""
 *   insn=0x0000000000318474 string=0x0000000000318478 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(
        Caver::Proto::PhysicsObjectComponent *this,
        const Caver::Proto::PhysicsObjectComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 44) = 0;
  *(_QWORD *)((char *)this + 33) = 0;
  *((_BYTE *)this + 12) = 1;
  *((_DWORD *)this + 6) = 1065353216;
  *(_QWORD *)this = off_6C82F8;
  *(_QWORD *)((char *)this + 28) = 0;
  Caver::Proto::PhysicsObjectComponent::MergeFrom();
}

