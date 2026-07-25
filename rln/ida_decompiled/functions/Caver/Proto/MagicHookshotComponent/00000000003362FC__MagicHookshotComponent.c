/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003362FC
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponentC2ERKS1_
 * Demangled: Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5620  Caver::Proto::MagicHookshotComponent::MergeFrom(Caver::Proto::MagicHookshotComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x0000000000336308 string=0x000000000033630C "yF"
 *   insn=0x0000000000336318 string=0x000000000033631C "A"
 *   insn=0x0000000000336320 string=0x0000000000336324 "h"
 *   insn=0x000000000033632C string=0x00000000001F5620 "P'"
 *   insn=0x0000000000336344 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000336348 string=0x000000000033634C "^-\t"
 *   insn=0x0000000000336364 string=0x0000000000336368 "V"
 *   insn=0x000000000033637C string=0x0000000000336380 " "
 *   insn=0x0000000000336380 string=0x0000000000336384 "h"
 *   insn=0x0000000000336384 string=0x0000000000336388 "\t"
 *   insn=0x0000000000336388 string=0x000000000033638C ""
 *   insn=0x0000000000336394 string=0x0000000000336398 "H"
 *   insn=0x0000000000336398 string=0x000000000033639C ""
 *   insn=0x000000000033639C string=0x00000000003363A0 "B"
 *   insn=0x00000000003363A4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003363B8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003363BC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003363C8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003363D0 string=0x00000000003363D4 "K"
 *   insn=0x00000000003363D4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003363DC string=0x00000000003363E0 "h"
 *   insn=0x00000000003363DC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003363E0 string=0x00000000003363E4 "H"
 *   insn=0x00000000003363E4 string=0x00000000003363E8 "0"
 *   insn=0x00000000003363EC string=0x00000000003363F0 "i"
 *   insn=0x00000000003363F0 string=0x00000000003363F4 ""
 *   insn=0x00000000003363FC string=0x0000000000336400 "h*@"
 *   insn=0x0000000000336408 string=0x000000000033640C "i"
 *   insn=0x000000000033640C string=0x0000000000336410 ""
 *   insn=0x0000000000336418 string=0x000000000033641C "h*@"
 *   insn=0x0000000000336424 string=0x0000000000336428 "i"
 *   insn=0x0000000000336428 string=0x000000000033642C ""
 *   insn=0x0000000000336434 string=0x0000000000336438 "h*@"
 *   insn=0x0000000000336438 string=0x000000000033643C ""
 *   insn=0x0000000000336440 string=0x0000000000336444 "i"
 *   insn=0x0000000000336444 string=0x0000000000336448 ""
 *   insn=0x0000000000336450 string=0x0000000000336454 "h*@"
 *   insn=0x0000000000336460 string=0x0000000000336464 ""
 *   insn=0x0000000000336470 string=0x0000000000336474 "["
 *   insn=0x0000000000336474 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033647C string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000336484 string=0x0000000000336488 "h"
 *   insn=0x0000000000336488 string=0x000000000033648C ")"
 *   insn=0x0000000000336494 string=0x0000000000336498 ")"
 *   insn=0x0000000000336498 string=0x000000000033649C "("
 *   insn=0x00000000003364A0 string=0x00000000003364A4 ";#"
 *   insn=0x00000000003364CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003364D4 string=0x00000000003364D8 "v"
 *   insn=0x00000000003364D8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003364E8 string=0x00000000003364EC "A"
 *   insn=0x0000000000336508 string=0x000000000033650C "yF"
 *   insn=0x0000000000336510 string=0x0000000000336514 "A"
 *   insn=0x0000000000336514 string=0x0000000000336518 "h"
 *   insn=0x000000000033651C string=0x0000000000336520 ""
 *   insn=0x0000000000336520 string=0x0000000000336524 ""
 *   insn=0x000000000033652C string=0x0000000000336530 "`"
 *   insn=0x0000000000336534 string=0x0000000000336538 ""
 *   insn=0x0000000000336538 string=0x000000000033653C ""
 *   insn=0x000000000033654C string=0x0000000000336550 ","
 *   insn=0x0000000000336558 string=0x000000000033655C ")"
 *   insn=0x0000000000336564 string=0x0000000000336568 "y_"
 *   insn=0x000000000033656C string=0x0000000000336570 ""
 *   insn=0x0000000000336570 string=0x0000000000336574 ""
 *   insn=0x0000000000336584 string=0x0000000000336588 ""
 *   insn=0x000000000033658C string=0x0000000000336590 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(
        Caver::Proto::MagicHookshotComponent *this,
        const Caver::Proto::MagicHookshotComponent *a2)
{
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9A68;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::MagicHookshotComponent::MergeFrom();
}

