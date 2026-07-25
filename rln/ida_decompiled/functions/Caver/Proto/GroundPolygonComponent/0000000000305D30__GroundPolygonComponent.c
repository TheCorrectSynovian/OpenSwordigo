/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305D30
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponentC2ERKS1_
 * Demangled: Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *
 * Callers: 0
 *
 * Callees: 20
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB5E0  Caver::Proto::GroundPolygonComponent::MergeFrom(Caver::Proto::GroundPolygonComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FE8B0  Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003060E4  Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x0000000000305D3C string=0x0000000000305D40 ""
 *   insn=0x0000000000305D40 string=0x0000000000305D44 ""
 *   insn=0x0000000000305D4C string=0x0000000000305D50 "i*"
 *   insn=0x0000000000305D54 string=0x0000000000305D58 "t"
 *   insn=0x0000000000305D58 string=0x0000000000305D5C "A"
 *   insn=0x0000000000305D5C string=0x0000000000305D60 "ib"
 *   insn=0x0000000000305D60 string=0x0000000000305D64 "t"
 *   insn=0x0000000000305D78 string=0x0000000000305D7C "h"
 *   insn=0x0000000000305D84 string=0x00000000001FB5E0 "0'"
 *   insn=0x0000000000305D98 string=0x0000000000305D9C "h"
 *   insn=0x0000000000305DA0 string=0x0000000000305DA4 "?"
 *   insn=0x0000000000305DB4 string=0x0000000000305DB8 ""
 *   insn=0x0000000000305DB8 string=0x0000000000305DBC ""
 *   insn=0x0000000000305DC0 string=0x0000000000305DC4 "i&@"
 *   insn=0x0000000000305DC4 string=0x0000000000305DC8 "h"
 *   insn=0x0000000000305DDC string=0x0000000000305DE0 "h"
 *   insn=0x0000000000305DE4 string=0x0000000000305DE8 "^"
 *   insn=0x0000000000305DE8 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000305DF0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000305DF8 string=0x0000000000305DFC "T!"
 *   insn=0x0000000000305DFC string=0x0000000000305E00 "S!"
 *   insn=0x0000000000305E1C string=0x0000000000305E20 "X"
 *   insn=0x0000000000305E20 string=0x0000000000305E24 ""
 *   insn=0x0000000000305E38 string=0x0000000000305E3C """
 *   insn=0x0000000000305E3C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000305E4C string=0x0000000000305E50 "h"
 *   insn=0x0000000000305E50 string=0x0000000000305E54 "!"
 *   insn=0x0000000000305E50 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000305E54 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000305E60 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000305E6C string=0x00000000001FA500 "0'"
 *   insn=0x0000000000305E74 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000305E78 string=0x0000000000305E7C "i"@"
 *   insn=0x0000000000305E84 string=0x0000000000305E88 "!"
 *   insn=0x0000000000305E8C string=0x0000000000305E90 "h"@"
 *   insn=0x0000000000305E8C string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000305E98 string=0x0000000000305F30 "h"
 *   insn=0x0000000000305E9C string=0x0000000000305EA0 "j"
 *   insn=0x0000000000305EA4 string=0x0000000000305EA8 "Vyy"
 *   insn=0x0000000000305EA8 string=0x0000000000305EAC ")}@"
 *   insn=0x0000000000305EAC string=0x0000000000305EB0 "?"
 *   insn=0x0000000000305EB8 string=0x0000000000305EBC "*"
 *   insn=0x0000000000305ED4 string=0x0000000000305EE8 ""
 *   insn=0x0000000000305EF4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000305EF8 string=0x0000000000305EFC "u"
 *   insn=0x0000000000305EFC string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000305F04 string=0x0000000000305F08 "\n"
 *   insn=0x0000000000305F0C string=0x0000000000305F10 "7y("
 *   insn=0x0000000000305F1C string=0x0000000000305F20 "h""
 *   insn=0x0000000000305F20 string=0x0000000000305F24 "9"
 *   insn=0x0000000000305F24 string=0x0000000000305F28 "?"
 *   insn=0x0000000000305F34 string=0x0000000000306008 ""
 *   insn=0x0000000000305F40 string=0x0000000000305F44 ""
 *   insn=0x0000000000305F4C string=0x0000000000305F64 "\t"
 *   insn=0x0000000000305F58 string=0x0000000000305F5C ")"
 *   insn=0x0000000000305F5C string=0x00000000001F5000 "P'"
 *   insn=0x0000000000305F64 string=0x0000000000305F68 "h\n@"
 *   insn=0x0000000000305F68 string=0x0000000000305F6C ")"
 *   insn=0x0000000000305F74 string=0x0000000000305F78 ")"
 *   insn=0x0000000000305F78 string=0x0000000000305F7C "("
 *   insn=0x0000000000305F80 string=0x0000000000305F84 ""
 *   insn=0x0000000000305F84 string=0x0000000000305F88 "hn@"
 *   insn=0x0000000000305F84 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000305F94 string=0x0000000000305F98 ""
 *   insn=0x0000000000305FA0 string=0x0000000000305FB8 "\t"
 *   insn=0x0000000000305FB0 string=0x00000000001F73B0 "0'"
 *   insn=0x0000000000305FB8 string=0x0000000000305FBC "h*@"
 *   insn=0x0000000000305FBC string=0x0000000000305FC0 ")"
 *   insn=0x0000000000305FC8 string=0x0000000000305FCC ")"
 *   insn=0x0000000000305FCC string=0x0000000000305FD0 "("
 *   insn=0x0000000000305FD4 string=0x0000000000305FD8 "6"
 *   insn=0x0000000000305FD8 string=0x0000000000305FDC "hn@"
 *   insn=0x0000000000305FE0 string=0x0000000000305FE4 "h"
 *   insn=0x0000000000305FE4 string=0x0000000000305FE8 "("
 *   insn=0x0000000000305FF4 string=0x0000000000305FF8 "i"
 *   insn=0x0000000000305FF8 string=0x0000000000305FFC ""
 *   insn=0x0000000000306034 string=0x0000000000306038 "ibA9"
 *   insn=0x0000000000306038 string=0x000000000030603C ""
 *   insn=0x0000000000306044 string=0x0000000000306048 "hn@"
 *   insn=0x0000000000306050 string=0x0000000000306054 "i^@"
 *   insn=0x0000000000306054 string=0x0000000000306058 ""
 *   insn=0x0000000000306060 string=0x0000000000306064 "hn@"
 *   insn=0x0000000000306064 string=0x0000000000306068 "("
 *   insn=0x000000000030606C string=0x0000000000306070 "ib@"
 *   insn=0x0000000000306070 string=0x0000000000306074 ""
 *   insn=0x000000000030607C string=0x0000000000306080 "hn@"
 *   insn=0x0000000000306080 string=0x0000000000306084 "h"
 *   insn=0x0000000000306088 string=0x000000000030608C "if@"
 *   insn=0x000000000030608C string=0x0000000000306090 ""
 *   insn=0x0000000000306098 string=0x000000000030609C "hn@"
 *   insn=0x00000000003060A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003060B4 string=0x00000000003060B8 ""
 *   insn=0x00000000003060B8 string=0x00000000003060D8 "v"
 *   insn=0x00000000003060C0 string=0x00000000003060C4 "K"
 *   insn=0x00000000003060D8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(
        Caver::Proto::GroundPolygonComponent *this,
        const Caver::Proto::GroundPolygonComponent *a2)
{
  *((_DWORD *)this + 10) = 4;
  *((_BYTE *)this + 88) = 1;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_DWORD *)this + 27) = 0;
  *(_QWORD *)((char *)this + 97) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C77B8;
  *(_QWORD *)((char *)this + 92) = 0;
  Caver::Proto::GroundPolygonComponent::MergeFrom();
}

