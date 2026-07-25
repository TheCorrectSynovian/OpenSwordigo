/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE624
 * Mangled: _ZN5Caver5Proto7Vector3C2ERKS1_
 * Demangled: Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000002CE630 string=0x00000000002CE634 ""
 *   insn=0x00000000002CE640 string=0x00000000002CE644 "A"
 *   insn=0x00000000002CE644 string=0x00000000002CE648 "h"
 *   insn=0x00000000002CE648 string=0x00000000002CE64C "m"
 *   insn=0x00000000002CE64C string=0x00000000001F3800 "P'"
 *   insn=0x00000000002CE664 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CE66C string=0x00000000002CE670 "7"
 *   insn=0x00000000002CE684 string=0x00000000002CE688 "U"
 *   insn=0x00000000002CE6A0 string=0x00000000002CE6E0 "hb@9"
 *   insn=0x00000000002CE6A4 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CE6B0 string=0x00000000002CE6B4 "#Q"
 *   insn=0x00000000002CE6B4 string=0x00000000002CE6B8 "N"
 *   insn=0x00000000002CE6B8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CE6BC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CE6C8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CE6D4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CE6DC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CE6E0 string=0x00000000002CE6E4 ""
 *   insn=0x00000000002CE6E4 string=0x00000000002CE6E8 ""
 *   insn=0x00000000002CE6F4 string=0x00000000002CE6F8 "i"
 *   insn=0x00000000002CE6F8 string=0x00000000002CE6FC ""
 *   insn=0x00000000002CE728 string=0x00000000002CE72C "i"
 *   insn=0x00000000002CE72C string=0x00000000002CE730 ""
 *   insn=0x00000000002CE738 string=0x00000000002CE73C "h"
 *   insn=0x00000000002CE744 string=0x00000000002CE748 "i"
 *   insn=0x00000000002CE748 string=0x00000000002CE74C ""
 *   insn=0x00000000002CE754 string=0x00000000002CE758 "h"
 *   insn=0x00000000002CE764 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CE774 string=0x00000000002CE778 "S"
 *   insn=0x00000000002CE780 string=0x00000000002CE784 ""
 *   insn=0x00000000002CE784 string=0x00000000002CE788 "A"
 *   insn=0x00000000002CE788 string=0x00000000002CE78C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 *this, const Caver::Proto::Vector3 *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C5A80;
  Caver::Proto::Vector3::MergeFrom();
}

