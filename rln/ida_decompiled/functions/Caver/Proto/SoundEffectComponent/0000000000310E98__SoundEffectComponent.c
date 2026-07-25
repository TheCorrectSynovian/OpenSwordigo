/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310E98
 * Mangled: _ZN5Caver5Proto20SoundEffectComponentC2ERKS1_
 * Demangled: Caver::Proto::SoundEffectComponent::SoundEffectComponent(Caver::Proto::SoundEffectComponent const&)
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
 *   0x00000000001FE400  Caver::Proto::SoundEffectComponent::MergeFrom(Caver::Proto::SoundEffectComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000310EA8 string=0x0000000000310EAC "UB"
 *   insn=0x0000000000310EB8 string=0x0000000000310EBC ")"
 *   insn=0x0000000000310EBC string=0x0000000000310EC0 "@"
 *   insn=0x0000000000310EC0 string=0x0000000000310EC4 "A"
 *   insn=0x0000000000310EC4 string=0x0000000000310EC8 "h"
 *   insn=0x0000000000310EC8 string=0x0000000000310ECC "i\n"
 *   insn=0x0000000000310ECC string=0x0000000000310ED0 "`"
 *   insn=0x0000000000310ED4 string=0x0000000000310ED8 "J"
 *   insn=0x0000000000310EF0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000310EF4 string=0x0000000000310EF8 "s"
 *   insn=0x0000000000310F10 string=0x0000000000310F14 "V"
 *   insn=0x0000000000310F2C string=0x0000000000310F6C "h"
 *   insn=0x0000000000310F30 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000310F3C string=0x0000000000310F40 "cQ"
 *   insn=0x0000000000310F40 string=0x0000000000310F44 "+"
 *   insn=0x0000000000310F44 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000310F48 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000310F54 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000310F5C string=0x0000000000310F60 "h"
 *   insn=0x0000000000310F60 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000310F68 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000310F6C string=0x0000000000310F70 ""
 *   insn=0x0000000000310F70 string=0x0000000000310F74 ""
 *   insn=0x0000000000310F74 string=0x0000000000310F78 "h"
 *   insn=0x0000000000310F80 string=0x0000000000310F84 "i"
 *   insn=0x0000000000310F84 string=0x0000000000310F88 ""
 *   insn=0x0000000000310F98 string=0x0000000000310F9C "A"
 *   insn=0x0000000000310FBC string=0x0000000000310FC0 "u\n@"
 *   insn=0x0000000000310FC0 string=0x0000000000310FC4 ")"
 *   insn=0x0000000000310FC4 string=0x0000000000310FC8 ""
 *   insn=0x0000000000310FDC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000310FE0 string=0x0000000000310FE4 ""
 *   insn=0x0000000000310FE4 string=0x0000000000310FE8 "a"
 *   insn=0x0000000000310FE8 string=0x0000000000310FEC ""
 *   insn=0x0000000000310FF8 string=0x0000000000310FFC "h"@"
 *   insn=0x0000000000311004 string=0x0000000000311008 "i"
 *   insn=0x0000000000311008 string=0x000000000031100C ""
 *   insn=0x0000000000311014 string=0x0000000000311018 "h"@"
 *   insn=0x0000000000311018 string=0x000000000031101C "("
 *   insn=0x0000000000311024 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031102C string=0x0000000000311030 "p"
 *   insn=0x0000000000311034 string=0x0000000000311038 "#"
 *   insn=0x000000000031104C string=0x0000000000311050 "T"
 *   insn=0x0000000000311064 string=0x0000000000311068 "`\n@"
 *   insn=0x0000000000311068 string=0x000000000031106C "UB"
 *   insn=0x000000000031106C string=0x0000000000311070 ")"
 *   insn=0x0000000000311070 string=0x0000000000311074 "A"
 *   insn=0x0000000000311078 string=0x000000000031107C "h"
 *   insn=0x000000000031107C string=0x0000000000311080 " "
 *   insn=0x0000000000311084 string=0x0000000000311088 "\t"
 *   insn=0x000000000031108C string=0x0000000000311090 "J"
 *   insn=0x0000000000311090 string=0x0000000000311094 "(a"
 *   insn=0x00000000003110A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003110A4 string=0x00000000003110A8 "V"
 *   insn=0x00000000003110B4 string=0x00000000003110B8 "!"
 *   insn=0x00000000003110B8 string=0x000000000031111C "m"
 *   insn=0x00000000003110CC string=0x00000000003110D0 "J=G"
 *   insn=0x00000000003110D0 string=0x00000000003110D4 ")!"
 *   insn=0x00000000003110D8 string=0x00000000003110DC "*"
 *   insn=0x00000000003110D8 string=0x00000000003110F0 "*"
 *   insn=0x00000000003110DC string=0x00000000003110E0 "K"
 *   insn=0x00000000003110E0 string=0x00000000003110E4 "+"
 *   insn=0x00000000003110EC string=0x00000000003110FC "_"
 *   insn=0x00000000003110F0 string=0x00000000003110F4 "K"
 *   insn=0x00000000003110F4 string=0x00000000003110F8 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffectComponent::SoundEffectComponent(
        Caver::Proto::SoundEffectComponent *this,
        const Caver::Proto::SoundEffectComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7DD0;
  *((_QWORD *)this + 2) = &Caver::Proto::SoundEffectComponent::_default_name_;
  *((_QWORD *)this + 3) = 1065353216;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::SoundEffectComponent::MergeFrom();
}

