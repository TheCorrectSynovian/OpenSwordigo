/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC5F0
 * Mangled: _ZN5Caver5Proto10QuestStateC2ERKS1_
 * Demangled: Caver::Proto::QuestState::QuestState(Caver::Proto::QuestState const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F3770  Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x00000000002EC600 string=0x00000000002EC604 ""
 *   insn=0x00000000002EC60C string=0x00000000002EC610 ")"
 *   insn=0x00000000002EC610 string=0x00000000002EC614 "A"
 *   insn=0x00000000002EC618 string=0x00000000002EC61C "h"
 *   insn=0x00000000002EC61C string=0x00000000002EC620 "i\n"
 *   insn=0x00000000002EC624 string=0x00000000002EC628 "R"
 *   insn=0x00000000002EC628 string=0x00000000001F3770 "P'"
 *   insn=0x00000000002EC640 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002EC648 string=0x00000000002EC64C "@"
 *   insn=0x00000000002EC660 string=0x00000000002EC664 "V"
 *   insn=0x00000000002EC67C string=0x00000000002EC6BC "hr@9h"
 *   insn=0x00000000002EC680 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002EC690 string=0x00000000002EC694 "W'"
 *   insn=0x00000000002EC694 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002EC698 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002EC6A4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002EC6B0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002EC6B8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002EC6BC string=0x00000000002EC6C0 "h"
 *   insn=0x00000000002EC6D0 string=0x00000000002EC6D4 "u\n@"
 *   insn=0x00000000002EC6D4 string=0x00000000002EC6D8 ")"
 *   insn=0x00000000002EC6D8 string=0x00000000002EC6DC ""
 *   insn=0x00000000002EC6F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EC6F4 string=0x00000000002EC6F8 ""
 *   insn=0x00000000002EC6F8 string=0x00000000002EC6FC "a"
 *   insn=0x00000000002EC6FC string=0x00000000002EC700 ""
 *   insn=0x00000000002EC70C string=0x00000000002EC710 "h"
 *   insn=0x00000000002EC718 string=0x00000000002EC71C "ib@9"
 *   insn=0x00000000002EC71C string=0x00000000002EC720 ""
 *   insn=0x00000000002EC750 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EC760 string=0x00000000002EC764 "XT\n"
 *   insn=0x00000000002EC778 string=0x00000000002EC77C "T"
 *   insn=0x00000000002EC790 string=0x00000000002EC794 "`\n@"
 *   insn=0x00000000002EC794 string=0x00000000002EC798 ""
 *   insn=0x00000000002EC798 string=0x00000000002EC79C ")"
 *   insn=0x00000000002EC79C string=0x00000000002EC7A0 "A"
 *   insn=0x00000000002EC7A4 string=0x00000000002EC7A8 "h"
 *   insn=0x00000000002EC7A8 string=0x00000000002EC7AC " "
 *   insn=0x00000000002EC7B0 string=0x00000000002EC7B4 "\t"
 *   insn=0x00000000002EC7B8 string=0x00000000002EC7BC "J"
 *   insn=0x00000000002EC7BC string=0x00000000002EC7C0 "(a"
 *   insn=0x00000000002EC7CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002EC7E0 string=0x00000000002EC7E4 "!"
 *   insn=0x00000000002EC7F8 string=0x00000000002EC7FC "J=G"
 *   insn=0x00000000002EC7FC string=0x00000000002EC800 ")!"
 *   insn=0x00000000002EC804 string=0x00000000002EC808 "*"
 *   insn=0x00000000002EC804 string=0x00000000002EC81C "*"
 *   insn=0x00000000002EC808 string=0x00000000002EC80C "K"
 *   insn=0x00000000002EC80C string=0x00000000002EC810 "+"
 *   insn=0x00000000002EC818 string=0x00000000002EC828 "_"
 *   insn=0x00000000002EC81C string=0x00000000002EC820 "K"
 *   insn=0x00000000002EC820 string=0x00000000002EC824 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestState::QuestState(
        Caver::Proto::QuestState *this,
        const Caver::Proto::QuestState *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)this = off_6C6E98;
  *((_QWORD *)this + 2) = &Caver::Proto::QuestState::_default_quest_name_;
  *((_DWORD *)this + 7) = 0;
  Caver::Proto::QuestState::MergeFrom();
}

