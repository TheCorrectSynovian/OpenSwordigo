/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D60B8
 * Mangled: _ZN5Caver5Proto10GUIMarginsC2ERKS1_
 * Demangled: Caver::Proto::GUIMargins::GUIMargins(Caver::Proto::GUIMargins const&)
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
 *   0x00000000001FD960  Caver::Proto::GUIMargins::MergeFrom(Caver::Proto::GUIMargins const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000002D60C0 string=0x00000000002D60C4 "h "
 *   insn=0x00000000002D60C4 string=0x00000000002D60C8 ""
 *   insn=0x00000000002D60D0 string=0x00000000002D60D4 "A"
 *   insn=0x00000000002D60D4 string=0x00000000002D60D8 "h~"
 *   insn=0x00000000002D60D8 string=0x00000000002D60DC "!"
 *   insn=0x00000000002D60DC string=0x00000000001FD960 "0'"
 *   insn=0x00000000002D60F0 string=0x00000000002D60F4 "C"
 *   insn=0x00000000002D60F4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D6114 string=0x00000000002D6118 "U"
 *   insn=0x00000000002D6130 string=0x00000000002D6170 "hr@9("
 *   insn=0x00000000002D6134 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D6140 string=0x00000000002D6144 "C"
 *   insn=0x00000000002D6148 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D614C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D6154 string=0x00000000002D6158 "."
 *   insn=0x00000000002D6158 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D6164 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D6168 string=0x00000000002D616C "!"
 *   insn=0x00000000002D616C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D6170 string=0x00000000002D6174 "("
 *   insn=0x00000000002D6174 string=0x00000000002D6178 "("
 *   insn=0x00000000002D6188 string=0x00000000002D618C "i"
 *   insn=0x00000000002D618C string=0x00000000002D6190 ""
 *   insn=0x00000000002D61A4 string=0x00000000002D6214 "/"
 *   insn=0x00000000002D61BC string=0x00000000002D61C0 "i"
 *   insn=0x00000000002D61C0 string=0x00000000002D61C4 ""
 *   insn=0x00000000002D61CC string=0x00000000002D61D0 "h"
 *   insn=0x00000000002D61D0 string=0x00000000002D61D4 "h"
 *   insn=0x00000000002D61D8 string=0x00000000002D61DC "i"
 *   insn=0x00000000002D61DC string=0x00000000002D61E0 ""
 *   insn=0x00000000002D61E8 string=0x00000000002D61EC "h"
 *   insn=0x00000000002D61F4 string=0x00000000002D61F8 "i"
 *   insn=0x00000000002D61F8 string=0x00000000002D61FC ""
 *   insn=0x00000000002D6204 string=0x00000000002D6208 "h"
 *   insn=0x00000000002D6214 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D6228 string=0x00000000002D622C "H"
 *   insn=0x00000000002D622C string=0x00000000002D6230 "h "
 *   insn=0x00000000002D6230 string=0x00000000002D6234 ""
 *   insn=0x00000000002D6234 string=0x00000000002D6238 "A"
 *   insn=0x00000000002D6238 string=0x00000000002D623C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GUIMargins::GUIMargins(
        Caver::Proto::GUIMargins *this,
        const Caver::Proto::GUIMargins *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C6020;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::GUIMargins::MergeFrom();
}

