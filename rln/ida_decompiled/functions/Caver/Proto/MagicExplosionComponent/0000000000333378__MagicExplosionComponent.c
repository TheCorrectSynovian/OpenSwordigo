/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333378
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponentC2ERKS1_
 * Demangled: Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent const&)
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
 *   0x00000000001FA070  Caver::Proto::MagicExplosionComponent::MergeFrom(Caver::Proto::MagicExplosionComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x0000000000333384 string=0x0000000000333388 "YD"
 *   insn=0x0000000000333394 string=0x0000000000333398 "A"
 *   insn=0x0000000000333398 string=0x000000000033339C "h"
 *   insn=0x000000000033339C string=0x00000000003333A0 "4"
 *   insn=0x00000000003333A0 string=0x00000000001FA070 "0'"
 *   insn=0x00000000003333B8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003333BC string=0x00000000003333C0 "A9\t"
 *   insn=0x00000000003333D8 string=0x00000000003333DC "V"
 *   insn=0x00000000003333F0 string=0x00000000003333F4 "`"
 *   insn=0x00000000003333F4 string=0x00000000003333F8 "h"
 *   insn=0x0000000000333404 string=0x0000000000333408 "i"
 *   insn=0x0000000000333408 string=0x000000000033340C ""
 *   insn=0x0000000000333414 string=0x0000000000333418 "h&@"
 *   insn=0x0000000000333424 string=0x0000000000333428 ""
 *   insn=0x0000000000333434 string=0x0000000000333438 "j"
 *   insn=0x0000000000333438 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000333440 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000333448 string=0x000000000033344C "h\n@"
 *   insn=0x000000000033344C string=0x0000000000333450 ")G"
 *   insn=0x0000000000333458 string=0x000000000033345C ")"
 *   insn=0x000000000033345C string=0x0000000000333460 "("
 *   insn=0x0000000000333464 string=0x0000000000333468 "J/"
 *   insn=0x0000000000333468 string=0x000000000033346C "h&@"
 *   insn=0x0000000000333474 string=0x0000000000333478 "H"
 *   insn=0x0000000000333478 string=0x000000000033347C "%"
 *   insn=0x0000000000333480 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000333494 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000333498 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003334A0 string=0x00000000003334A4 "[#"
 *   insn=0x00000000003334A4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003334B0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003334B4 string=0x00000000003334B8 "N"
 *   insn=0x00000000003334B8 string=0x00000000003334BC "h"
 *   insn=0x00000000003334B8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003334BC string=0x00000000003334C0 ""
 *   insn=0x00000000003334C8 string=0x00000000003334CC "i"
 *   insn=0x00000000003334CC string=0x00000000003334D0 ""
 *   insn=0x00000000003334D8 string=0x00000000003334DC "h&@"
 *   insn=0x00000000003334E4 string=0x00000000003334E8 "i"
 *   insn=0x00000000003334E8 string=0x00000000003334EC ""
 *   insn=0x00000000003334F4 string=0x00000000003334F8 "h&@"
 *   insn=0x0000000000333500 string=0x0000000000333504 "i"@"
 *   insn=0x0000000000333504 string=0x0000000000333508 ""
 *   insn=0x000000000033351C string=0x0000000000333534 "g"
 *   insn=0x0000000000333534 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033353C string=0x0000000000333540 "\"
 *   insn=0x0000000000333540 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000333550 string=0x0000000000333554 "'"
 *   insn=0x000000000033355C string=0x0000000000333560 "{k"
 *   insn=0x0000000000333570 string=0x0000000000333574 "YD"
 *   insn=0x0000000000333578 string=0x000000000033357C "A"
 *   insn=0x000000000033357C string=0x0000000000333580 "h"
 *   insn=0x0000000000333584 string=0x0000000000333588 "G"
 *   insn=0x0000000000333588 string=0x000000000033358C ""
 *   insn=0x0000000000333594 string=0x0000000000333598 "`\n@"
 *   insn=0x000000000033359C string=0x00000000003335A0 ""
 *   insn=0x00000000003335A0 string=0x00000000003335A4 ""
 *   insn=0x00000000003335CC string=0x00000000003335D0 "_k"
 *   insn=0x00000000003335D4 string=0x00000000003335D8 "G"
 *   insn=0x00000000003335D8 string=0x00000000003335DC ""
 *   insn=0x00000000003335EC string=0x00000000003335F0 ""
 *   insn=0x00000000003335F4 string=0x00000000003335F8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(
        Caver::Proto::MagicExplosionComponent *this,
        const Caver::Proto::MagicExplosionComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9798;
  Caver::Proto::MagicExplosionComponent::MergeFrom();
}

