/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322E28
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A30  Caver::Proto::OrbitControllerComponent::MergeFrom(Caver::Proto::OrbitControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x0000000000322E30 string=0x0000000000322E34 "("
 *   insn=0x0000000000322E34 string=0x0000000000322E38 ""
 *   insn=0x0000000000322E44 string=0x0000000000322E48 "A"
 *   insn=0x0000000000322E48 string=0x0000000000322E4C "h"
 *   insn=0x0000000000322E54 string=0x00000000001F5A30 "P'"
 *   insn=0x0000000000322E6C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000322E74 string=0x0000000000322E78 "5"
 *   insn=0x0000000000322E8C string=0x0000000000322E90 "V"
 *   insn=0x0000000000322EA8 string=0x0000000000322EAC "h"
 *   insn=0x0000000000322EA8 string=0x0000000000322F3C "B"
 *   insn=0x0000000000322EBC string=0x0000000000322EC0 ""
 *   insn=0x0000000000322EC8 string=0x0000000000322EE0 ")"
 *   insn=0x0000000000322ED0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000322ED8 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000322EE0 string=0x0000000000322EE4 "h\n@"
 *   insn=0x0000000000322EE4 string=0x0000000000322EE8 ")}D"
 *   insn=0x0000000000322EF0 string=0x0000000000322EF4 ")"
 *   insn=0x0000000000322EF4 string=0x0000000000322EF8 "("
 *   insn=0x0000000000322EFC string=0x0000000000322F00 "@B"
 *   insn=0x0000000000322F00 string=0x0000000000322F04 "h"@"
 *   insn=0x0000000000322F00 string=0x00000000001F3800 "P'"
 *   insn=0x0000000000322F0C string=0x0000000000322F10 "i"
 *   insn=0x0000000000322F10 string=0x0000000000322F14 ""
 *   insn=0x0000000000322F1C string=0x0000000000322F20 "h"@"
 *   insn=0x0000000000322F28 string=0x0000000000322F2C "i"
 *   insn=0x0000000000322F2C string=0x0000000000322F30 ""
 *   insn=0x0000000000322F3C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000322F4C string=0x0000000000322F50 "(M"
 *   insn=0x0000000000322F50 string=0x0000000000322F54 "A"
 *   insn=0x0000000000322F50 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000322F54 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000322F60 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000322F68 string=0x0000000000322F6C "e]"
 *   insn=0x0000000000322F6C string=0x00000000001FA500 "0'"
 *   insn=0x0000000000322F74 string=0x0000000000322F78 "h"
 *   insn=0x0000000000322F74 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000322FA4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000322FB0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000322FB4 string=0x0000000000322FB8 "Cz\t"
 *   insn=0x0000000000322FC8 string=0x0000000000322FCC ">z\t"
 *   insn=0x0000000000322FDC string=0x0000000000322FE0 "("
 *   insn=0x0000000000322FE0 string=0x0000000000322FE4 ""
 *   insn=0x0000000000322FE8 string=0x0000000000322FEC "A"
 *   insn=0x0000000000322FEC string=0x0000000000322FF0 "h"
 *   insn=0x0000000000322FF0 string=0x0000000000322FF4 "("
 *   insn=0x0000000000322FF4 string=0x0000000000322FF8 "}D"
 *   insn=0x0000000000322FF8 string=0x0000000000322FFC ""
 *   insn=0x0000000000323004 string=0x0000000000323008 "`\n@"
 *   insn=0x000000000032300C string=0x0000000000323010 ""
 *   insn=0x0000000000323010 string=0x0000000000323014 ""
 *   insn=0x0000000000323024 string=0x0000000000323028 "vQ"
 *   insn=0x0000000000323030 string=0x0000000000323034 "sQ"
 *   insn=0x0000000000323038 string=0x000000000032303C ""z\t"
 *   insn=0x0000000000323040 string=0x0000000000323044 ""
 *   insn=0x0000000000323044 string=0x0000000000323048 "}D"
 *   insn=0x0000000000323048 string=0x000000000032304C ""
 *   insn=0x000000000032305C string=0x0000000000323060 ""
 *   insn=0x0000000000323064 string=0x0000000000323068 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(
        Caver::Proto::OrbitControllerComponent *this,
        const Caver::Proto::OrbitControllerComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8A00;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::OrbitControllerComponent::MergeFrom();
}

