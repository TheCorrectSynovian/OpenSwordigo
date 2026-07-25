/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B6B4
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponentC2ERKS1_
 * Demangled: Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(Caver::Proto::CollisionShapeComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF610  Caver::Proto::CollisionShapeComponent::MergeFrom(Caver::Proto::CollisionShapeComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 115
 *   insn=0x000000000030B6C4 string=0x000000000030B6C8 "h2"
 *   insn=0x000000000030B6CC string=0x000000000030B6D0 ""
 *   insn=0x000000000030B6DC string=0x000000000030B6E0 "A"
 *   insn=0x000000000030B6F0 string=0x000000000030B6F4 "h"
 *   insn=0x000000000030B714 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030B718 string=0x000000000030B71C "j"
 *   insn=0x000000000030B71C string=0x000000000030B720 ""
 *   insn=0x000000000030B734 string=0x000000000030B738 "V"
 *   insn=0x000000000030B750 string=0x000000000030B790 "hB@"
 *   insn=0x000000000030B754 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030B760 string=0x000000000030B764 "#E"
 *   insn=0x000000000030B764 string=0x000000000030B768 """
 *   insn=0x000000000030B768 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030B76C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030B778 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030B780 string=0x000000000030B784 "_"
 *   insn=0x000000000030B784 string=0x00000000001FA500 "0'"
 *   insn=0x000000000030B78C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030B7A0 string=0x000000000030B7A4 "H"
 *   insn=0x000000000030B7A4 string=0x000000000030B7A8 ""
 *   insn=0x000000000030B7B0 string=0x000000000030B7B4 "H07"
 *   insn=0x000000000030B7BC string=0x000000000030B7C0 "i"
 *   insn=0x000000000030B7C0 string=0x000000000030B7C4 ""
 *   insn=0x000000000030B7CC string=0x000000000030B7D0 "hB@"
 *   insn=0x000000000030B7D8 string=0x000000000030B7DC "@7"
 *   insn=0x000000000030B7E4 string=0x000000000030B7E8 "X7"
 *   insn=0x000000000030B7EC string=0x000000000030B7F0 "~"
 *   insn=0x000000000030B7F4 string=0x000000000030B7F8 "i2@9"
 *   insn=0x000000000030B7F8 string=0x000000000030B7FC ""
 *   insn=0x000000000030B804 string=0x000000000030B808 "hB@"
 *   insn=0x000000000030B810 string=0x000000000030B814 "i6@9"
 *   insn=0x000000000030B814 string=0x000000000030B818 ""
 *   insn=0x000000000030B820 string=0x000000000030B824 "hB@"
 *   insn=0x000000000030B824 string=0x000000000030B828 ""
 *   insn=0x000000000030B82C string=0x000000000030B830 "i:@9"
 *   insn=0x000000000030B830 string=0x000000000030B834 ""
 *   insn=0x000000000030B83C string=0x000000000030B840 "hB@"
 *   insn=0x000000000030B840 string=0x000000000030B844 "H"
 *   insn=0x000000000030B848 string=0x000000000030B84C "i>@9"
 *   insn=0x000000000030B84C string=0x000000000030B850 ""
 *   insn=0x000000000030B858 string=0x000000000030B85C "hB@"
 *   insn=0x000000000030B864 string=0x000000000030B868 "iB@9"
 *   insn=0x000000000030B868 string=0x000000000030B86C ""
 *   insn=0x000000000030B874 string=0x000000000030B878 "hB@"
 *   insn=0x000000000030B880 string=0x000000000030B884 "i"
 *   insn=0x000000000030B884 string=0x000000000030B888 ""
 *   insn=0x000000000030B890 string=0x000000000030B894 "hB@"
 *   insn=0x000000000030B894 string=0x000000000030B898 ""
 *   insn=0x000000000030B89C string=0x000000000030B8A0 "i"
 *   insn=0x000000000030B8A0 string=0x000000000030B8A4 ""
 *   insn=0x000000000030B8AC string=0x000000000030B8B0 "hB@"
 *   insn=0x000000000030B8B0 string=0x000000000030B8B4 "H"
 *   insn=0x000000000030B8BC string=0x000000000030B8C0 "i"@"
 *   insn=0x000000000030B8C0 string=0x000000000030B8C4 ""
 *   insn=0x000000000030B8CC string=0x000000000030B8D0 "hB@"
 *   insn=0x000000000030B8D8 string=0x000000000030B8DC "i"
 *   insn=0x000000000030B8DC string=0x000000000030B8E0 ""
 *   insn=0x000000000030B8E8 string=0x000000000030B8EC "hB@"
 *   insn=0x000000000030B8F8 string=0x000000000030B8FC ""
 *   insn=0x000000000030B908 string=0x000000000030B90C "5"
 *   insn=0x000000000030B90C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030B914 string=0x00000000001F5000 "P'"
 *   insn=0x000000000030B91C string=0x000000000030B920 "h"
 *   insn=0x000000000030B920 string=0x000000000030B924 ")"
 *   insn=0x000000000030B92C string=0x000000000030B930 ")"
 *   insn=0x000000000030B930 string=0x000000000030B934 "("
 *   insn=0x000000000030B93C string=0x000000000030B940 "hB@"
 *   insn=0x000000000030B93C string=0x00000000001F37A0 "P'"
 *   insn=0x000000000030B940 string=0x000000000030B944 "H"
 *   insn=0x000000000030B94C string=0x000000000030B950 ""
 *   insn=0x000000000030B95C string=0x000000000030B960 " "
 *   insn=0x000000000030B970 string=0x000000000030B974 "h"
 *   insn=0x000000000030B974 string=0x000000000030B978 ")"
 *   insn=0x000000000030B980 string=0x000000000030B984 ")"
 *   insn=0x000000000030B984 string=0x000000000030B988 "("
 *   insn=0x000000000030B990 string=0x000000000030B994 "hB@"
 *   insn=0x000000000030B9A0 string=0x000000000030B9A4 ""
 *   insn=0x000000000030B9B0 string=0x000000000030B9B4 ""
 *   insn=0x000000000030B9C4 string=0x000000000030B9C8 "h"
 *   insn=0x000000000030B9C8 string=0x000000000030B9CC ")"
 *   insn=0x000000000030B9D4 string=0x000000000030B9D8 ")"
 *   insn=0x000000000030B9D8 string=0x000000000030B9DC "("
 *   insn=0x000000000030B9E0 string=0x000000000030B9E4 "o"
 *   insn=0x000000000030B9F4 string=0x000000000030BA0C "1"
 *   insn=0x000000000030BA0C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030BA1C string=0x000000000030BA20 "$"
 *   insn=0x000000000030BA20 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030BA3C string=0x000000000030BA40 "C\n"
 *   insn=0x000000000030BA50 string=0x000000000030BA54 ""
 *   insn=0x000000000030BA58 string=0x000000000030BA5C "A"
 *   insn=0x000000000030BA5C string=0x000000000030BA60 "h"
 *   insn=0x000000000030BA64 string=0x000000000030BA68 ""
 *   insn=0x000000000030BA68 string=0x000000000030BA6C ""
 *   insn=0x000000000030BA74 string=0x000000000030BA78 "`"
 *   insn=0x000000000030BA7C string=0x000000000030BA80 ""
 *   insn=0x000000000030BA7C string=0x000000000030BA8C "`"
 *   insn=0x000000000030BA80 string=0x000000000030BA84 ""
 *   insn=0x000000000030BA90 string=0x000000000030BA94 ""
 *   insn=0x000000000030BA90 string=0x000000000030BAA0 "`"
 *   insn=0x000000000030BA94 string=0x000000000030BA98 ""
 *   insn=0x000000000030BAA4 string=0x000000000030BAA8 ""
 *   insn=0x000000000030BAA8 string=0x000000000030BAAC ""
 *   insn=0x000000000030BAD0 string=0x000000000030BAD4 "|"
 *   insn=0x000000000030BAE8 string=0x000000000030BAEC ""
 *   insn=0x000000000030BAF0 string=0x000000000030BAF4 ""
 *   insn=0x000000000030BAF8 string=0x000000000030BAFC "@"
 *   insn=0x000000000030BAFC string=0x000000000030BB00 "`"
 *   insn=0x000000000030BB04 string=0x000000000030BB08 ""
 *   insn=0x000000000030BB04 string=0x000000000030BB14 "`"
 *   insn=0x000000000030BB08 string=0x000000000030BB0C ""
 *   insn=0x000000000030BB18 string=0x000000000030BB1C ""
 *   insn=0x000000000030BB18 string=0x000000000030BB28 "`"
 *   insn=0x000000000030BB1C string=0x000000000030BB20 ""
 *   insn=0x000000000030BB2C string=0x000000000030BB30 ""
 *   insn=0x000000000030BB3C string=0x000000000030BB40 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(
        Caver::Proto::CollisionShapeComponent *this,
        const Caver::Proto::CollisionShapeComponent *a2)
{
  *((_BYTE *)this + 12) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)((char *)this + 13) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 20) = 0;
  *((_BYTE *)this + 36) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0;
  *(_QWORD *)this = off_6C7A88;
  *((_DWORD *)this + 16) = 0;
  Caver::Proto::CollisionShapeComponent::MergeFrom();
}

