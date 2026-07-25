/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F928
 * Mangled: _ZN5Caver5Proto14LightComponentC2ERKS1_
 * Demangled: Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x0000000000201CA0  Caver::Proto::LightComponent::MergeFrom(Caver::Proto::LightComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 86
 *   insn=0x000000000030F934 string=0x000000000030F938 "yB"
 *   insn=0x000000000030F944 string=0x000000000030F948 "A"
 *   insn=0x000000000030F950 string=0x000000000030F954 "h~"
 *   insn=0x000000000030F970 string=0x000000000030F974 "#"
 *   insn=0x000000000030F974 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030F97C string=0x000000000030F980 "s"
 *   insn=0x000000000030F994 string=0x000000000030F998 "V"
 *   insn=0x000000000030F9AC string=0x000000000030F9B0 "`"
 *   insn=0x000000000030F9B0 string=0x000000000030F9B4 "h"
 *   insn=0x000000000030F9B8 string=0x000000000030F9BC "H"
 *   insn=0x000000000030F9BC string=0x000000000030F9C0 ""
 *   insn=0x000000000030F9C4 string=0x000000000030F9C8 "H"
 *   insn=0x000000000030F9C8 string=0x000000000030F9CC " 7"
 *   insn=0x000000000030F9D4 string=0x000000000030F9D8 "^"
 *   insn=0x000000000030F9DC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030F9F0 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030F9F4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030FA00 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030FA0C string=0x00000000001FA500 "0'"
 *   insn=0x000000000030FA14 string=0x000000000030FA18 "h"
 *   insn=0x000000000030FA14 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030FA18 string=0x000000000030FA1C ""
 *   insn=0x000000000030FA1C string=0x000000000030FA20 "L"
 *   insn=0x000000000030FA24 string=0x000000000030FA28 "i"
 *   insn=0x000000000030FA28 string=0x000000000030FA2C ""
 *   insn=0x000000000030FA34 string=0x000000000030FA38 "h:@"
 *   insn=0x000000000030FA38 string=0x000000000030FA3C "H"
 *   insn=0x000000000030FA40 string=0x000000000030FA44 "i"
 *   insn=0x000000000030FA44 string=0x000000000030FA48 ""
 *   insn=0x000000000030FA50 string=0x000000000030FA54 "h:@"
 *   insn=0x000000000030FA60 string=0x000000000030FA64 ""
 *   insn=0x000000000030FA74 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030FA78 string=0x000000000030FA7C ")"
 *   insn=0x000000000030FA7C string=0x00000000001F3F20 "P'"
 *   insn=0x000000000030FA84 string=0x000000000030FA88 "h"
 *   insn=0x000000000030FA88 string=0x000000000030FA8C ")eF"
 *   insn=0x000000000030FA94 string=0x000000000030FA98 ")"
 *   insn=0x000000000030FA98 string=0x000000000030FA9C "("
 *   insn=0x000000000030FAA4 string=0x000000000030FAA8 "h:@"
 *   insn=0x000000000030FAA8 string=0x000000000030FAAC ""
 *   insn=0x000000000030FAB0 string=0x000000000030FAB4 "i"@"
 *   insn=0x000000000030FAB4 string=0x000000000030FAB8 ""
 *   insn=0x000000000030FAC0 string=0x000000000030FAC4 "h:@"
 *   insn=0x000000000030FAC4 string=0x000000000030FAC8 "H"
 *   insn=0x000000000030FACC string=0x000000000030FAD0 "i&@"
 *   insn=0x000000000030FAD0 string=0x000000000030FAD4 ""
 *   insn=0x000000000030FADC string=0x000000000030FAE0 "h:@"
 *   insn=0x000000000030FAE8 string=0x000000000030FAEC "i*@"
 *   insn=0x000000000030FAEC string=0x000000000030FAF0 ""
 *   insn=0x000000000030FAF8 string=0x000000000030FAFC "h:@"
 *   insn=0x000000000030FB08 string=0x000000000030FB0C ""
 *   insn=0x000000000030FB20 string=0x000000000030FB24 ""
 *   insn=0x000000000030FB24 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000030FB2C string=0x000000000030FB30 "h"
 *   insn=0x000000000030FB30 string=0x000000000030FB34 ")eF"
 *   insn=0x000000000030FB3C string=0x000000000030FB40 ")"
 *   insn=0x000000000030FB40 string=0x000000000030FB44 "("
 *   insn=0x000000000030FB48 string=0x000000000030FB4C "-"
 *   insn=0x000000000030FB4C string=0x00000000001F3800 "P'"
 *   insn=0x000000000030FB74 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030FB84 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030FB88 string=0x000000000030FB8C "N"
 *   insn=0x000000000030FB9C string=0x000000000030FBA0 "I"
 *   insn=0x000000000030FBB4 string=0x000000000030FBB8 "yB"
 *   insn=0x000000000030FBBC string=0x000000000030FBC0 "A"
 *   insn=0x000000000030FBC0 string=0x000000000030FBC4 "h"
 *   insn=0x000000000030FBC8 string=0x000000000030FBCC "eF"
 *   insn=0x000000000030FBCC string=0x000000000030FBD0 ""
 *   insn=0x000000000030FBD4 string=0x000000000030FBD8 "`"
 *   insn=0x000000000030FBD8 string=0x000000000030FBDC "`"
 *   insn=0x000000000030FBE0 string=0x000000000030FBE4 ""
 *   insn=0x000000000030FBE0 string=0x000000000030FBF0 "`"
 *   insn=0x000000000030FBE4 string=0x000000000030FBE8 ""
 *   insn=0x000000000030FBF4 string=0x000000000030FBF8 ""
 *   insn=0x000000000030FBF8 string=0x000000000030FBFC ""
 *   insn=0x000000000030FC0C string=0x000000000030FC10 "|"
 *   insn=0x000000000030FC18 string=0x000000000030FC1C "y"
 *   insn=0x000000000030FC20 string=0x000000000030FC24 "("
 *   insn=0x000000000030FC38 string=0x000000000030FC3C "eF"
 *   insn=0x000000000030FC40 string=0x000000000030FC44 ""
 *   insn=0x000000000030FC4C string=0x000000000030FC50 "`"
 *   insn=0x000000000030FC54 string=0x000000000030FC58 ""
 *   insn=0x000000000030FC54 string=0x000000000030FC64 "`"
 *   insn=0x000000000030FC58 string=0x000000000030FC5C ""
 *   insn=0x000000000030FC68 string=0x000000000030FC6C ""
 *   insn=0x000000000030FC78 string=0x000000000030FC7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LightComponent::LightComponent(
        Caver::Proto::LightComponent *this,
        const Caver::Proto::LightComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C7CE0;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::LightComponent::MergeFrom();
}

