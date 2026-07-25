/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBC9C
 * Mangled: _ZN5Caver5Proto14ObjectTemplateC2ERKS1_
 * Demangled: Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 1
 *   0x0000000000200180  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC7D0  Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&)
 *   0x00000000001FE420  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 61
 *   insn=0x00000000002FBCA4 string=0x00000000002FBCA8 "H"
 *   insn=0x00000000002FBCA8 string=0x00000000002FBCAC "AG"
 *   insn=0x00000000002FBCB8 string=0x00000000002FBCBC "A"
 *   insn=0x00000000002FBCBC string=0x00000000002FBCC0 "h"
 *   insn=0x00000000002FBCC8 string=0x00000000001FC7D0 "0'"
 *   insn=0x00000000002FBCDC string=0x00000000002FBCE0 "H"
 *   insn=0x00000000002FBCE0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FBD00 string=0x00000000002FBD04 "U"
 *   insn=0x00000000002FBD1C string=0x00000000002FBD5C "hr@9"
 *   insn=0x00000000002FBD20 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000002FBD34 string=0x00000000002FBD38 "a"
 *   insn=0x00000000002FBD34 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002FBD38 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002FBD40 string=0x00000000002FBD44 "3"
 *   insn=0x00000000002FBD44 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002FBD50 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002FBD54 string=0x00000000002FBD58 "&"
 *   insn=0x00000000002FBD58 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002FBD5C string=0x00000000002FBD60 ""
 *   insn=0x00000000002FBD60 string=0x00000000002FBD64 "H"
 *   insn=0x00000000002FBD6C string=0x00000000002FBD70 ""
 *   insn=0x00000000002FBD78 string=0x00000000002FBDE8 "I"
 *   insn=0x00000000002FBD80 string=0x00000000002FBD84 ""
 *   insn=0x00000000002FBD80 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FBD84 string=0x00000000002FBD88 ""
 *   insn=0x00000000002FBD88 string=0x00000000002FBD8C "H"
 *   insn=0x00000000002FBD8C string=0x00000000002FBD90 "9@"
 *   insn=0x00000000002FBD94 string=0x00000000002FBD98 "\t0"
 *   insn=0x00000000002FBDA0 string=0x00000000002FBDA4 "h"
 *   insn=0x00000000002FBDA4 string=0x00000000002FBDA8 "H"
 *   insn=0x00000000002FBDA8 string=0x00000000002FBDAC "!A"
 *   insn=0x00000000002FBDB4 string=0x00000000002FBDB8 "A"
 *   insn=0x00000000002FBDB8 string=0x00000000002FBDBC ""
 *   insn=0x00000000002FBDBC string=0x00000000002FBDC0 "H"
 *   insn=0x00000000002FBDC0 string=0x00000000002FBDC4 ""
 *   insn=0x00000000002FBDE8 string=0x00000000002FBDEC "h\n@"
 *   insn=0x00000000002FBDEC string=0x00000000002FBDF0 ")ME"
 *   insn=0x00000000002FBDF4 string=0x00000000002FBDF8 ")"
 *   insn=0x00000000002FBDF8 string=0x00000000002FBDFC "("
 *   insn=0x00000000002FBE04 string=0x00000000002FBE08 "h"
 *   insn=0x00000000002FBE10 string=0x00000000002FBE14 "i"
 *   insn=0x00000000002FBE14 string=0x00000000002FBE18 ""
 *   insn=0x00000000002FBE2C string=0x00000000002FBE44 "#"
 *   insn=0x00000000002FBE44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FBE58 string=0x00000000002FBE5C "<I"
 *   insn=0x00000000002FBE68 string=0x00000000002FBE6C "H"
 *   insn=0x00000000002FBE6C string=0x00000000002FBE70 "AG"
 *   insn=0x00000000002FBE74 string=0x00000000002FBE78 "A"
 *   insn=0x00000000002FBE78 string=0x00000000002FBE7C "h"
 *   insn=0x00000000002FBE7C string=0x00000000002FBE80 "H"
 *   insn=0x00000000002FBE80 string=0x00000000002FBE84 "ME"
 *   insn=0x00000000002FBE84 string=0x00000000002FBE88 ""
 *   insn=0x00000000002FBE90 string=0x00000000002FBE94 "`\n@"
 *   insn=0x00000000002FBE98 string=0x00000000002FBE9C ""
 *   insn=0x00000000002FBE9C string=0x00000000002FBEA0 ""
 *   insn=0x00000000002FBEC8 string=0x00000000002FBECC " I"
 *   insn=0x00000000002FBECC string=0x00000000002FBED0 "H"
 *   insn=0x00000000002FBED0 string=0x00000000002FBED4 "ME"
 *   insn=0x00000000002FBED4 string=0x00000000002FBED8 ""
 *   insn=0x00000000002FBEE8 string=0x00000000002FBEEC ""
 *   insn=0x00000000002FBEF0 string=0x00000000002FBEF4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectTemplate::ObjectTemplate(
        Caver::Proto::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7308;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 1065353216;
  Caver::Proto::ObjectTemplate::MergeFrom(this, a2);
}

