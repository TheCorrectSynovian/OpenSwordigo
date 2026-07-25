/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F26F0
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemStateC2ERKS1_
 * Demangled: Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(Caver::Proto::CharacterState_ItemState const&)
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
 *   0x00000000001FFA60  Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x00000000002F26FC string=0x00000000002F2700 ""
 *   insn=0x00000000002F270C string=0x00000000002F2710 "A"
 *   insn=0x00000000002F2710 string=0x00000000002F2714 "h"
 *   insn=0x00000000002F2718 string=0x00000000002F271C " "
 *   insn=0x00000000002F271C string=0x00000000002F2720 ")G"
 *   insn=0x00000000002F2720 string=0x00000000002F2724 "`"
 *   insn=0x00000000002F2724 string=0x00000000002F2728 "h\n"
 *   insn=0x00000000002F2744 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002F2748 string=0x00000000002F274C "^<\n"
 *   insn=0x00000000002F2764 string=0x00000000002F2768 "V"
 *   insn=0x00000000002F2780 string=0x00000000002F27C0 "hr@9H"
 *   insn=0x00000000002F2784 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002F2798 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002F279C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002F27A8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002F27B0 string=0x00000000002F27B4 "S"
 *   insn=0x00000000002F27B4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002F27BC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002F27C0 string=0x00000000002F27C4 "H"
 *   insn=0x00000000002F27D4 string=0x00000000002F27D8 "u\n@"
 *   insn=0x00000000002F27D8 string=0x00000000002F27DC "))G"
 *   insn=0x00000000002F27DC string=0x00000000002F27E0 ""
 *   insn=0x00000000002F27F0 string=0x00000000002F27F4 "{"
 *   insn=0x00000000002F27F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F27F8 string=0x00000000002F27FC ""
 *   insn=0x00000000002F27FC string=0x00000000002F2800 "a"
 *   insn=0x00000000002F2800 string=0x00000000002F2804 ""
 *   insn=0x00000000002F2810 string=0x00000000002F2814 "h"
 *   insn=0x00000000002F281C string=0x00000000002F2820 "i"
 *   insn=0x00000000002F2820 string=0x00000000002F2824 ""
 *   insn=0x00000000002F2850 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F2858 string=0x00000000002F285C "e"
 *   insn=0x00000000002F2878 string=0x00000000002F287C "T"
 *   insn=0x00000000002F2890 string=0x00000000002F2894 "`\n@"
 *   insn=0x00000000002F2894 string=0x00000000002F2898 ""
 *   insn=0x00000000002F2898 string=0x00000000002F289C "))G"
 *   insn=0x00000000002F289C string=0x00000000002F28A0 "A"
 *   insn=0x00000000002F28A4 string=0x00000000002F28A8 "h"
 *   insn=0x00000000002F28A8 string=0x00000000002F28AC " "
 *   insn=0x00000000002F28B0 string=0x00000000002F28B4 "\t"
 *   insn=0x00000000002F28B8 string=0x00000000002F28BC "J"
 *   insn=0x00000000002F28BC string=0x00000000002F28C0 "(a"
 *   insn=0x00000000002F28C8 string=0x00000000002F28CC "y"
 *   insn=0x00000000002F28CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002F28D0 string=0x00000000002F28D4 "K"
 *   insn=0x00000000002F28E0 string=0x00000000002F28E4 "!"
 *   insn=0x00000000002F28E4 string=0x00000000002F2948 "b"
 *   insn=0x00000000002F28F8 string=0x00000000002F28FC "J=G"
 *   insn=0x00000000002F28FC string=0x00000000002F2900 ")!"
 *   insn=0x00000000002F2904 string=0x00000000002F2908 "*"
 *   insn=0x00000000002F2904 string=0x00000000002F291C "*"
 *   insn=0x00000000002F2908 string=0x00000000002F290C "K"
 *   insn=0x00000000002F290C string=0x00000000002F2910 "+"
 *   insn=0x00000000002F2918 string=0x00000000002F2928 "_"
 *   insn=0x00000000002F291C string=0x00000000002F2920 "K"
 *   insn=0x00000000002F2920 string=0x00000000002F2924 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(
        Caver::Proto::CharacterState_ItemState *this,
        const Caver::Proto::CharacterState_ItemState *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7078;
  *((_QWORD *)this + 3) = 1;
  *((_QWORD *)this + 2) = &Caver::Proto::CharacterState_ItemState::_default_name_;
  Caver::Proto::CharacterState_ItemState::MergeFrom(this, a2);
}

