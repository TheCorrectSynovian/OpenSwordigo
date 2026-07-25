/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D79C
 * Mangled: _ZN5Caver5Proto19SpawnPointComponentC2ERKS1_
 * Demangled: Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6E80  Caver::Proto::SpawnPointComponent::MergeFrom(Caver::Proto::SpawnPointComponent const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000032D7A8 string=0x000000000032D7AC "mG"
 *   insn=0x000000000032D7B8 string=0x000000000032D7BC "A"
 *   insn=0x000000000032D7BC string=0x000000000032D7C0 "h"
 *   insn=0x000000000032D7C4 string=0x00000000001F6E80 "0'"
 *   insn=0x000000000032D7DC string=0x00000000001F7600 "0'"
 *   insn=0x000000000032D7E0 string=0x000000000032D7E4 "8P\t"
 *   insn=0x000000000032D7FC string=0x000000000032D800 "V"
 *   insn=0x000000000032D818 string=0x000000000032D81C "hb@9"
 *   insn=0x000000000032D828 string=0x000000000032D82C "i"
 *   insn=0x000000000032D82C string=0x000000000032D830 ""
 *   insn=0x000000000032D838 string=0x000000000032D83C "h"
 *   insn=0x000000000032D848 string=0x000000000032D84C ""
 *   insn=0x000000000032D858 string=0x000000000032D85C "a"
 *   insn=0x000000000032D85C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032D864 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000032D86C string=0x000000000032D870 "h\n@"
 *   insn=0x000000000032D870 string=0x000000000032D874 ")%@"
 *   insn=0x000000000032D87C string=0x000000000032D880 ")"
 *   insn=0x000000000032D880 string=0x000000000032D884 "("
 *   insn=0x000000000032D88C string=0x00000000001F3800 "P'"
 *   insn=0x000000000032D894 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032D8A8 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032D8AC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032D8B4 string=0x000000000032D8B8 "V:"
 *   insn=0x000000000032D8B8 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032D8C4 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032D8C8 string=0x000000000032D8CC "I2"
 *   insn=0x000000000032D8CC string=0x000000000032D8D0 "hb@9"
 *   insn=0x000000000032D8CC string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032D8E4 string=0x000000000032D8FC "u""
 *   insn=0x000000000032D8FC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032D904 string=0x000000000032D908 "j&"
 *   insn=0x000000000032D908 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032D918 string=0x000000000032D91C "52"
 *   insn=0x000000000032D938 string=0x000000000032D93C "mG"
 *   insn=0x000000000032D940 string=0x000000000032D944 "A"
 *   insn=0x000000000032D944 string=0x000000000032D948 "h"
 *   insn=0x000000000032D94C string=0x000000000032D950 "%@"
 *   insn=0x000000000032D950 string=0x000000000032D954 ""
 *   insn=0x000000000032D95C string=0x000000000032D960 "`\n@"
 *   insn=0x000000000032D964 string=0x000000000032D968 ""
 *   insn=0x000000000032D968 string=0x000000000032D96C ""
 *   insn=0x000000000032D97C string=0x000000000032D980 " '"
 *   insn=0x000000000032D994 string=0x000000000032D998 "m"
 *   insn=0x000000000032D99C string=0x000000000032D9A0 "%@"
 *   insn=0x000000000032D9A0 string=0x000000000032D9A4 ""
 *   insn=0x000000000032D9B4 string=0x000000000032D9B8 ""
 *   insn=0x000000000032D9BC string=0x000000000032D9C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpawnPointComponent::SpawnPointComponent(
        Caver::Proto::SpawnPointComponent *this,
        const Caver::Proto::SpawnPointComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C93D8;
  Caver::Proto::SpawnPointComponent::MergeFrom();
}

