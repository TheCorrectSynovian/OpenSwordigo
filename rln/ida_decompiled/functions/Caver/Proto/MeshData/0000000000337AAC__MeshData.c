/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337AAC
 * Mangled: _ZN5Caver5Proto8MeshDataC2ERKS1_
 * Demangled: Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002015D0  Caver::Proto::MeshData::MergeFrom(Caver::Proto::MeshData const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000337AC0 string=0x0000000000337AC4 ""
 *   insn=0x0000000000337AC8 string=0x0000000000337ACC "`"
 *   insn=0x0000000000337AD0 string=0x0000000000337AD4 "A"
 *   insn=0x0000000000337AD4 string=0x0000000000337AD8 "h"
 *   insn=0x0000000000337AF4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000337AF8 string=0x0000000000337AFC "r'\t"
 *   insn=0x0000000000337B14 string=0x0000000000337B18 "U"
 *   insn=0x0000000000337B30 string=0x0000000000337B70 "hr@9("
 *   insn=0x0000000000337B34 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000337B44 string=0x0000000000337B48 "*"
 *   insn=0x0000000000337B48 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000337B4C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000337B58 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000337B60 string=0x0000000000337B64 "g\n"
 *   insn=0x0000000000337B64 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000337B6C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000337B70 string=0x0000000000337B74 "("
 *   insn=0x0000000000337B74 string=0x0000000000337B78 "("
 *   insn=0x0000000000337B88 string=0x0000000000337B8C "i"
 *   insn=0x0000000000337B8C string=0x0000000000337B90 ""
 *   insn=0x0000000000337BBC string=0x0000000000337BC0 "i"
 *   insn=0x0000000000337BC0 string=0x0000000000337BC4 ""
 *   insn=0x0000000000337BCC string=0x0000000000337BD0 "h"
 *   insn=0x0000000000337BD0 string=0x0000000000337BD4 "h"
 *   insn=0x0000000000337BD8 string=0x0000000000337BDC "i"
 *   insn=0x0000000000337BDC string=0x0000000000337BE0 ""
 *   insn=0x0000000000337BE8 string=0x0000000000337BEC "h"
 *   insn=0x0000000000337BF4 string=0x0000000000337BF8 "i"
 *   insn=0x0000000000337BF8 string=0x0000000000337BFC ""
 *   insn=0x0000000000337C04 string=0x0000000000337C08 "h"
 *   insn=0x0000000000337C14 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000337C1C string=0x0000000000337C20 "t\t"
 *   insn=0x0000000000337C24 string=0x0000000000337C28 "''\t"
 *   insn=0x0000000000337C30 string=0x0000000000337C34 ""
 *   insn=0x0000000000337C34 string=0x0000000000337C38 "A"
 *   insn=0x0000000000337C38 string=0x0000000000337C3C ""
 *   insn=0x0000000000337C3C string=0x0000000000337C40 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData *this, const Caver::Proto::MeshData *a2)
{
  *((_QWORD *)this + 1) = 0x100000000LL;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C9C48;
  Caver::Proto::MeshData::MergeFrom();
}

