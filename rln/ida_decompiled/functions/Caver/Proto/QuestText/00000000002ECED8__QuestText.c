/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECED8
 * Mangled: _ZN5Caver5Proto9QuestTextC2ERKS1_
 * Demangled: Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F4390  Caver::Proto::QuestText::MergeFrom(Caver::Proto::QuestText const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 102
 *   insn=0x00000000002ECEEC string=0x00000000002ECEF0 ""
 *   insn=0x00000000002ECEFC string=0x00000000002ECF00 "J"
 *   insn=0x00000000002ECF00 string=0x00000000002ECF04 "t"
 *   insn=0x00000000002ECF08 string=0x00000000002ECF0C "A"
 *   insn=0x00000000002ECF0C string=0x00000000002ECF10 "jR"
 *   insn=0x00000000002ECF10 string=0x00000000002ECF14 "i*"
 *   insn=0x00000000002ECF14 string=0x00000000002ECF18 "h"
 *   insn=0x00000000002ECF20 string=0x00000000001F4390 "P'"
 *   insn=0x00000000002ECF34 string=0x00000000002ECF38 "h"
 *   insn=0x00000000002ECF3C string=0x00000000002ECF40 "?"
 *   insn=0x00000000002ECF40 string=0x00000000002ECF44 "+"
 *   insn=0x00000000002ECF4C string=0x00000000002ECF50 "X'"
 *   insn=0x00000000002ECF50 string=0x00000000002ECF54 "i&"
 *   insn=0x00000000002ECF50 string=0x00000000001F6CB0 "0'"
 *   insn=0x00000000002ECF54 string=0x00000000002ECF58 "h"
 *   insn=0x00000000002ECF60 string=0x00000000002ECF64 "K"
 *   insn=0x00000000002ECF6C string=0x00000000002ECF70 "h"
 *   insn=0x00000000002ECF78 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002ECF80 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002ECF84 string=0x00000000002ECF88 "OR\n"
 *   insn=0x00000000002ECFA4 string=0x00000000002ECFA8 "U"
 *   insn=0x00000000002ECFC0 string=0x00000000002ED000 "`b"
 *   insn=0x00000000002ECFC4 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002ECFD8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002ECFDC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002ECFE8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002ECFF0 string=0x00000000002ECFF4 "C5"
 *   insn=0x00000000002ECFF4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002ECFF8 string=0x00000000002ECFFC "}4"
 *   insn=0x00000000002ECFFC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002ED008 string=0x00000000001FB3D0 "0'"
 *   insn=0x00000000002ED00C string=0x00000000002ED010 "h"
 *   insn=0x00000000002ED014 string=0x00000000002ED018 "hR@"
 *   insn=0x00000000002ED018 string=0x00000000002ED01C "`\n@"
 *   insn=0x00000000002ED020 string=0x00000000002ED024 ")"
 *   insn=0x00000000002ED024 string=0x00000000002ED028 ""
 *   insn=0x00000000002ED028 string=0x00000000002ED02C "hR"
 *   insn=0x00000000002ED038 string=0x00000000002ED03C "i!"
 *   insn=0x00000000002ED03C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ED040 string=0x00000000002ED044 ""
 *   insn=0x00000000002ED044 string=0x00000000002ED048 "a"
 *   insn=0x00000000002ED048 string=0x00000000002ED04C ""
 *   insn=0x00000000002ED04C string=0x00000000002ED050 "`\n"
 *   insn=0x00000000002ED080 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002ED088 string=0x00000000002ED08C "Y4"
 *   insn=0x00000000002ED0AC string=0x00000000002ED0B0 "T"
 *   insn=0x00000000002ED0C4 string=0x00000000002ED0C8 "`\n@"
 *   insn=0x00000000002ED0C8 string=0x00000000002ED0CC ""
 *   insn=0x00000000002ED0CC string=0x00000000002ED0D0 ")"
 *   insn=0x00000000002ED0D0 string=0x00000000002ED0D4 "A"
 *   insn=0x00000000002ED0D8 string=0x00000000002ED0DC "h"
 *   insn=0x00000000002ED0DC string=0x00000000002ED0E0 " "
 *   insn=0x00000000002ED0E0 string=0x00000000002ED104 "h&@"
 *   insn=0x00000000002ED0E4 string=0x00000000002ED0E8 "\t"
 *   insn=0x00000000002ED0EC string=0x00000000002ED0F0 "J"
 *   insn=0x00000000002ED0F0 string=0x00000000002ED0F4 "(a"
 *   insn=0x00000000002ED0FC string=0x00000000002ED100 "l("
 *   insn=0x00000000002ED100 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002ED104 string=0x00000000002ED108 "`"
 *   insn=0x00000000002ED10C string=0x00000000002ED110 "+"
 *   insn=0x00000000002ED110 string=0x00000000002ED134 "h"
 *   insn=0x00000000002ED11C string=0x00000000002ED120 "h&"
 *   insn=0x00000000002ED120 string=0x00000000002ED124 "`"
 *   insn=0x00000000002ED12C string=0x00000000002ED130 "K"
 *   insn=0x00000000002ED138 string=0x00000000002ED13C "`"
 *   insn=0x00000000002ED13C string=0x00000000002ED140 "@"
 *   insn=0x00000000002ED148 string=0x00000000002ED14C "-)"
 *   insn=0x00000000002ED158 string=0x00000000002ED15C "A"
 *   insn=0x00000000002ED15C string=0x00000000002ED1C4 "C$"
 *   insn=0x00000000002ED174 string=0x00000000002ED178 "J=G"
 *   insn=0x00000000002ED178 string=0x00000000002ED17C ")!"
 *   insn=0x00000000002ED180 string=0x00000000002ED184 "*"
 *   insn=0x00000000002ED180 string=0x00000000002ED198 "*"
 *   insn=0x00000000002ED184 string=0x00000000002ED188 "K"
 *   insn=0x00000000002ED188 string=0x00000000002ED18C "+"
 *   insn=0x00000000002ED194 string=0x00000000002ED1A4 "_"
 *   insn=0x00000000002ED198 string=0x00000000002ED19C "K"
 *   insn=0x00000000002ED19C string=0x00000000002ED1A0 "+"
 *   insn=0x00000000002ED1B4 string=0x00000000002ED1B8 "{"
 *   insn=0x00000000002ED1D8 string=0x00000000002ED1DC "\"
 *   insn=0x00000000002ED1EC string=0x00000000002ED1F0 "S"
 *   insn=0x00000000002ED1F0 string=0x00000000002ED1F4 "h"
 *   insn=0x00000000002ED200 string=0x00000000002ED204 ""
 *   insn=0x00000000002ED208 string=0x00000000002ED20C " "
 *   insn=0x00000000002ED20C string=0x00000000002ED230 "h"
 *   insn=0x00000000002ED210 string=0x00000000002ED214 "\t"
 *   insn=0x00000000002ED218 string=0x00000000002ED21C "J"
 *   insn=0x00000000002ED21C string=0x00000000002ED220 "(a"
 *   insn=0x00000000002ED224 string=0x00000000002ED228 "A"
 *   insn=0x00000000002ED228 string=0x00000000002ED22C "!("
 *   insn=0x00000000002ED238 string=0x00000000002ED23C "!"
 *   insn=0x00000000002ED250 string=0x00000000002ED254 "J=G"
 *   insn=0x00000000002ED254 string=0x00000000002ED258 ")!"
 *   insn=0x00000000002ED25C string=0x00000000002ED260 "*"
 *   insn=0x00000000002ED25C string=0x00000000002ED274 "*"
 *   insn=0x00000000002ED260 string=0x00000000002ED264 "K"
 *   insn=0x00000000002ED264 string=0x00000000002ED268 "+"
 *   insn=0x00000000002ED270 string=0x00000000002ED280 "_"
 *   insn=0x00000000002ED274 string=0x00000000002ED278 "K"
 *   insn=0x00000000002ED278 string=0x00000000002ED27C "+"
 *   insn=0x00000000002ED280 string=0x00000000002ED284 "L"
 *   insn=0x00000000002ED290 string=0x00000000002ED294 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText *this, const Caver::Proto::QuestText *a2)
{
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::QuestText::_default_quest_name_;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 10) = 4;
  *(_QWORD *)this = off_6C6F10;
  *((_DWORD *)this + 20) = 0;
  Caver::Proto::QuestText::MergeFrom();
}

