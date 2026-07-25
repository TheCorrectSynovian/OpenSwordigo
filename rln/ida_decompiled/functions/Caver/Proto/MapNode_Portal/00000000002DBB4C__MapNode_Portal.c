/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBB4C
 * Mangled: _ZN5Caver5Proto14MapNode_PortalC2ERKS1_
 * Demangled: Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal const&)
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
 *   0x0000000000200DC0  Caver::Proto::MapNode_Portal::MergeFrom(Caver::Proto::MapNode_Portal const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x00000000002DBB58 string=0x00000000002DBB5C "h "
 *   insn=0x00000000002DBB5C string=0x00000000002DBB60 "aD"
 *   insn=0x00000000002DBB64 string=0x00000000002DBB68 "I "
 *   insn=0x00000000002DBB68 string=0x00000000002DBB6C "j"
 *   insn=0x00000000002DBB6C string=0x00000000002DBB70 ")"
 *   insn=0x00000000002DBB70 string=0x00000000002DBB74 "@"
 *   insn=0x00000000002DBB74 string=0x00000000002DBB78 "A"
 *   insn=0x00000000002DBB7C string=0x00000000002DBB80 "i\n"
 *   insn=0x00000000002DBB80 string=0x00000000002DBB84 "h"
 *   insn=0x00000000002DBB84 string=0x00000000002DBB88 "`"
 *   insn=0x00000000002DBBA8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002DBBAC string=0x00000000002DBBB0 "E"
 *   insn=0x00000000002DBBC8 string=0x00000000002DBBCC "V"
 *   insn=0x00000000002DBBE4 string=0x00000000002DBBE8 "b"
 *   insn=0x00000000002DBBE4 string=0x00000000002DBC24 "h"
 *   insn=0x00000000002DBBE8 string=0x000000000058AB7C "./../../../../Source/Caver/Content/Proto/GameData.pb.cc"
 *   insn=0x00000000002DBBF4 string=0x00000000002DBBF8 "#."
 *   insn=0x00000000002DBBFC string=0x00000000002DBC00 "a"
 *   insn=0x00000000002DBBFC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002DBC00 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002DBC0C string=0x00000000001FC210 "0'"
 *   insn=0x00000000002DBC14 string=0x00000000002DBC18 ":z"
 *   insn=0x00000000002DBC18 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002DBC1C string=0x00000000002DBC20 "ty"
 *   insn=0x00000000002DBC20 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002DBC24 string=0x00000000002DBC28 "H"
 *   insn=0x00000000002DBC28 string=0x00000000002DBC2C "H"
 *   insn=0x00000000002DBC2C string=0x00000000002DBC74 "I "
 *   insn=0x00000000002DBC30 string=0x00000000002DBC34 "h"
 *   insn=0x00000000002DBC3C string=0x00000000002DBC40 "i"
 *   insn=0x00000000002DBC40 string=0x00000000002DBC44 ""
 *   insn=0x00000000002DBC58 string=0x00000000002DBC5C "!"
 *   insn=0x00000000002DBC5C string=0x00000000002DBD00 "ti"
 *   insn=0x00000000002DBC7C string=0x00000000002DBC80 "u\n@"
 *   insn=0x00000000002DBC80 string=0x00000000002DBC84 ")"
 *   insn=0x00000000002DBC84 string=0x00000000002DBC88 ""
 *   insn=0x00000000002DBC98 string=0x00000000002DBC9C "Qf"
 *   insn=0x00000000002DBC9C string=0x00000000002DBCA0 "H "
 *   insn=0x00000000002DBC9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DBCA0 string=0x00000000002DBCA4 ""
 *   insn=0x00000000002DBCA4 string=0x00000000002DBCA8 "a"
 *   insn=0x00000000002DBCA8 string=0x00000000002DBCAC ""
 *   insn=0x00000000002DBCB4 string=0x00000000002DBCB8 "|:\n"
 *   insn=0x00000000002DBCB8 string=0x00000000002DBCBC "h&@"
 *   insn=0x00000000002DBCC4 string=0x00000000002DBCC8 "i"
 *   insn=0x00000000002DBCC8 string=0x00000000002DBCCC ""
 *   insn=0x00000000002DBCD4 string=0x00000000002DBCD8 "h&@"
 *   insn=0x00000000002DBCE0 string=0x00000000002DBCE4 "i"
 *   insn=0x00000000002DBCE4 string=0x00000000002DBCE8 ""
 *   insn=0x00000000002DBCF0 string=0x00000000002DBCF4 "h&@"
 *   insn=0x00000000002DBCF4 string=0x00000000002DBCF8 "("
 *   insn=0x00000000002DBD00 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DBD08 string=0x00000000002DBD0C "9y"
 *   insn=0x00000000002DBD28 string=0x00000000002DBD2C "T"
 *   insn=0x00000000002DBD34 string=0x00000000002DBD38 "I "
 *   insn=0x00000000002DBD3C string=0x00000000002DBD40 "h "
 *   insn=0x00000000002DBD40 string=0x00000000002DBD44 "`\n@"
 *   insn=0x00000000002DBD44 string=0x00000000002DBD48 "aD"
 *   insn=0x00000000002DBD48 string=0x00000000002DBD4C ")"
 *   insn=0x00000000002DBD4C string=0x00000000002DBD50 "A"
 *   insn=0x00000000002DBD54 string=0x00000000002DBD58 "h"
 *   insn=0x00000000002DBD58 string=0x00000000002DBD5C " "
 *   insn=0x00000000002DBD60 string=0x00000000002DBD64 "\t"
 *   insn=0x00000000002DBD64 string=0x00000000002DBD68 "J "
 *   insn=0x00000000002DBD68 string=0x00000000002DBD6C "J"
 *   insn=0x00000000002DBD6C string=0x00000000002DBD70 "(a"
 *   insn=0x00000000002DBD78 string=0x00000000002DBD7C "Mm"
 *   insn=0x00000000002DBD78 string=0x00000000002DBDA8 "J "
 *   insn=0x00000000002DBD7C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DBD90 string=0x00000000002DBD94 "!"
 *   insn=0x00000000002DBD94 string=0x00000000002DBDF8 "6i"
 *   insn=0x00000000002DBDA8 string=0x00000000002DBDAC "J=G"
 *   insn=0x00000000002DBDAC string=0x00000000002DBDB0 ")!"
 *   insn=0x00000000002DBDB4 string=0x00000000002DBDB8 "*"
 *   insn=0x00000000002DBDB4 string=0x00000000002DBDCC "*"
 *   insn=0x00000000002DBDB8 string=0x00000000002DBDBC "K"
 *   insn=0x00000000002DBDBC string=0x00000000002DBDC0 "+"
 *   insn=0x00000000002DBDC8 string=0x00000000002DBDD8 "_"
 *   insn=0x00000000002DBDCC string=0x00000000002DBDD0 "K"
 *   insn=0x00000000002DBDD0 string=0x00000000002DBDD4 "+"
 *   insn=0x00000000002DBDE8 string=0x00000000002DBDEC "n9\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode_Portal::MapNode_Portal(
        Caver::Proto::MapNode_Portal *this,
        const Caver::Proto::MapNode_Portal *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
  *(_QWORD *)this = off_6C6610;
  *((_QWORD *)this + 3) = 1;
  *((_DWORD *)this + 9) = 0;
  Caver::Proto::MapNode_Portal::MergeFrom();
}

