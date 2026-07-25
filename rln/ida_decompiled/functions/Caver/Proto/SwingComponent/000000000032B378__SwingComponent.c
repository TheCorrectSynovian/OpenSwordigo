/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B378
 * Mangled: _ZN5Caver5Proto14SwingComponentC2ERKS1_
 * Demangled: Caver::Proto::SwingComponent::SwingComponent(Caver::Proto::SwingComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4D10  Caver::Proto::SwingComponent::MergeFrom(Caver::Proto::SwingComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x000000000032B384 string=0x000000000032B388 "UA"
 *   insn=0x000000000032B394 string=0x000000000032B398 "A"
 *   insn=0x000000000032B39C string=0x000000000032B3A0 "h~"
 *   insn=0x000000000032B3A0 string=0x000000000032B3A4 "[&"
 *   insn=0x000000000032B3A4 string=0x00000000001F4D10 "P'"
 *   insn=0x000000000032B3BC string=0x00000000001F7600 "0'"
 *   insn=0x000000000032B3C0 string=0x000000000032B3C4 "@Y\t"
 *   insn=0x000000000032B3DC string=0x000000000032B3E0 "U"
 *   insn=0x000000000032B3F8 string=0x000000000032B438 "hr@9H"
 *   insn=0x000000000032B3FC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032B410 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032B414 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032B41C string=0x000000000032B420 "|C"
 *   insn=0x000000000032B420 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032B428 string=0x000000000032B42C "5<"
 *   insn=0x000000000032B42C string=0x00000000001FA500 "0'"
 *   insn=0x000000000032B430 string=0x000000000032B434 "o;"
 *   insn=0x000000000032B434 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032B438 string=0x000000000032B43C "H"
 *   insn=0x000000000032B43C string=0x000000000032B440 "H"
 *   insn=0x000000000032B440 string=0x000000000032B444 ""
 *   insn=0x000000000032B454 string=0x000000000032B458 "i"
 *   insn=0x000000000032B458 string=0x000000000032B45C ""
 *   insn=0x000000000032B46C string=0x000000000032B470 "a"
 *   insn=0x000000000032B470 string=0x000000000032B4FC "u+"
 *   insn=0x000000000032B488 string=0x000000000032B48C "i"
 *   insn=0x000000000032B48C string=0x000000000032B490 ""
 *   insn=0x000000000032B498 string=0x000000000032B49C "h"
 *   insn=0x000000000032B49C string=0x000000000032B4A0 "H"
 *   insn=0x000000000032B4A4 string=0x000000000032B4A8 "iB@9"
 *   insn=0x000000000032B4A8 string=0x000000000032B4AC ""
 *   insn=0x000000000032B4B4 string=0x000000000032B4B8 "h"
 *   insn=0x000000000032B4C0 string=0x000000000032B4C4 "iF@9"
 *   insn=0x000000000032B4C4 string=0x000000000032B4C8 ""
 *   insn=0x000000000032B4D0 string=0x000000000032B4D4 "h"
 *   insn=0x000000000032B4DC string=0x000000000032B4E0 "i"
 *   insn=0x000000000032B4E0 string=0x000000000032B4E4 ""
 *   insn=0x000000000032B4EC string=0x000000000032B4F0 "h"
 *   insn=0x000000000032B4F0 string=0x000000000032B4F4 ""
 *   insn=0x000000000032B4FC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032B504 string=0x000000000032B508 ":;"
 *   insn=0x000000000032B518 string=0x000000000032B51C "UA"
 *   insn=0x000000000032B51C string=0x000000000032B520 "A"
 *   insn=0x000000000032B520 string=0x000000000032B524 ""
 *   insn=0x000000000032B524 string=0x000000000032B528 "60"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingComponent::SwingComponent(
        Caver::Proto::SwingComponent *this,
        const Caver::Proto::SwingComponent *a2)
{
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)this = off_6C91F8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::SwingComponent::MergeFrom();
}

