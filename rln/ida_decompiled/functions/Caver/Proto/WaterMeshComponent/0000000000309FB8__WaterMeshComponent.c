/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309FB8
 * Mangled: _ZN5Caver5Proto18WaterMeshComponentC2ERKS1_
 * Demangled: Caver::Proto::WaterMeshComponent::WaterMeshComponent(Caver::Proto::WaterMeshComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F9180  Caver::Proto::WaterMeshComponent::MergeFrom(Caver::Proto::WaterMeshComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 71
 *   insn=0x0000000000309FC4 string=0x0000000000309FC8 "iG"
 *   insn=0x0000000000309FD4 string=0x0000000000309FD8 "A"
 *   insn=0x0000000000309FD8 string=0x0000000000309FDC "h~"
 *   insn=0x0000000000309FE0 string=0x0000000000309FE4 "g"
 *   insn=0x0000000000309FE4 string=0x00000000001F9180 "0'"
 *   insn=0x0000000000309FFC string=0x00000000001F7600 "0'"
 *   insn=0x000000000030A000 string=0x000000000030A004 "0"
 *   insn=0x000000000030A01C string=0x000000000030A020 "V"
 *   insn=0x000000000030A038 string=0x000000000030A03C "h"
 *   insn=0x000000000030A048 string=0x000000000030A04C "h"
 *   insn=0x000000000030A050 string=0x000000000030A054 "I"
 *   insn=0x000000000030A058 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030A06C string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030A070 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030A078 string=0x000000000030A07C "e"
 *   insn=0x000000000030A07C string=0x00000000001FC210 "0'"
 *   insn=0x000000000030A088 string=0x00000000001FA500 "0'"
 *   insn=0x000000000030A08C string=0x000000000030A090 "X"
 *   insn=0x000000000030A090 string=0x000000000030A094 "h"
 *   insn=0x000000000030A090 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030A094 string=0x000000000030A098 "h"
 *   insn=0x000000000030A098 string=0x000000000030A09C "7"
 *   insn=0x000000000030A0A0 string=0x000000000030A0A4 "i"
 *   insn=0x000000000030A0A4 string=0x000000000030A0A8 ""
 *   insn=0x000000000030A0B0 string=0x000000000030A0B4 "h*@"
 *   insn=0x000000000030A0BC string=0x000000000030A0C0 "i"
 *   insn=0x000000000030A0C0 string=0x000000000030A0C4 ""
 *   insn=0x000000000030A0CC string=0x000000000030A0D0 "h*@"
 *   insn=0x000000000030A0DC string=0x000000000030A0E0 ""
 *   insn=0x000000000030A0EC string=0x000000000030A0F0 "<"
 *   insn=0x000000000030A0F0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030A0F8 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000030A100 string=0x000000000030A104 "h"
 *   insn=0x000000000030A104 string=0x000000000030A108 ")"
 *   insn=0x000000000030A110 string=0x000000000030A114 ")"
 *   insn=0x000000000030A114 string=0x000000000030A118 "("
 *   insn=0x000000000030A120 string=0x000000000030A124 "h*@"
 *   insn=0x000000000030A130 string=0x000000000030A134 ""
 *   insn=0x000000000030A140 string=0x000000000030A144 "'"
 *   insn=0x000000000030A148 string=0x000000000030A14C "u"
 *   insn=0x000000000030A154 string=0x000000000030A158 "h"
 *   insn=0x000000000030A158 string=0x000000000030A15C ")"
 *   insn=0x000000000030A164 string=0x000000000030A168 ")"
 *   insn=0x000000000030A168 string=0x000000000030A16C "("
 *   insn=0x000000000030A170 string=0x000000000030A174 ""
 *   insn=0x000000000030A184 string=0x000000000030A19C "M"
 *   insn=0x000000000030A19C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030A1A8 string=0x000000000030A1AC "A"
 *   insn=0x000000000030A1AC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030A1C8 string=0x000000000030A1CC "`"
 *   insn=0x000000000030A1DC string=0x000000000030A1E0 "iG"
 *   insn=0x000000000030A1E4 string=0x000000000030A1E8 "A"
 *   insn=0x000000000030A1E8 string=0x000000000030A1EC "h"
 *   insn=0x000000000030A1F0 string=0x000000000030A1F4 ""
 *   insn=0x000000000030A1F4 string=0x000000000030A1F8 ""
 *   insn=0x000000000030A1FC string=0x000000000030A200 "`"
 *   insn=0x000000000030A200 string=0x000000000030A204 "`"
 *   insn=0x000000000030A208 string=0x000000000030A20C ""
 *   insn=0x000000000030A208 string=0x000000000030A218 "`"
 *   insn=0x000000000030A20C string=0x000000000030A210 ""
 *   insn=0x000000000030A21C string=0x000000000030A220 ""
 *   insn=0x000000000030A220 string=0x000000000030A224 ""
 *   insn=0x000000000030A24C string=0x000000000030A250 "?"
 *   insn=0x000000000030A260 string=0x000000000030A264 ""
 *   insn=0x000000000030A268 string=0x000000000030A26C ""
 *   insn=0x000000000030A274 string=0x000000000030A278 "`"
 *   insn=0x000000000030A27C string=0x000000000030A280 ""
 *   insn=0x000000000030A27C string=0x000000000030A28C "`"
 *   insn=0x000000000030A280 string=0x000000000030A284 ""
 *   insn=0x000000000030A290 string=0x000000000030A294 ""
 *   insn=0x000000000030A2A0 string=0x000000000030A2A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WaterMeshComponent::WaterMeshComponent(
        Caver::Proto::WaterMeshComponent *this,
        const Caver::Proto::WaterMeshComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C7998;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::WaterMeshComponent::MergeFrom();
}

