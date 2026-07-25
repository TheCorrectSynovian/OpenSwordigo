/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D807C
 * Mangled: _ZN5Caver5Proto12SoundLibraryC2ERKS1_
 * Demangled: Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4300  google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FEB40  Caver::Proto::SoundLibrary::MergeFrom(Caver::Proto::SoundLibrary const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x00000000002D8088 string=0x00000000002D808C "h "
 *   insn=0x00000000002D808C string=0x00000000002D8090 "uD"
 *   insn=0x00000000002D8094 string=0x00000000002D8098 "t"
 *   insn=0x00000000002D809C string=0x00000000002D80A0 "A"
 *   insn=0x00000000002D80A0 string=0x00000000002D80A4 "t~"
 *   insn=0x00000000002D80A8 string=0x00000000002D80AC "i""
 *   insn=0x00000000002D80AC string=0x00000000002D80B0 "h"
 *   insn=0x00000000002D80CC string=0x00000000002D80D0 "h\n@"
 *   insn=0x00000000002D80D4 string=0x00000000002D80D8 "?"
 *   insn=0x00000000002D80E8 string=0x00000000002D80EC ""
 *   insn=0x00000000002D80EC string=0x00000000002D80F0 ""
 *   insn=0x00000000002D80F4 string=0x00000000002D80F8 "i"
 *   insn=0x00000000002D80F8 string=0x00000000002D80FC "h\n@"
 *   insn=0x00000000002D8110 string=0x00000000002D8114 "h"
 *   insn=0x00000000002D811C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002D8120 string=0x00000000002D8124 "7}"
 *   insn=0x00000000002D8124 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D8148 string=0x00000000002D814C "U"
 *   insn=0x00000000002D8168 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D817C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D8180 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D8188 string=0x00000000002D818C "!"
 *   insn=0x00000000002D818C string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D8198 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D81A0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D81A4 string=0x00000000002D81A8 "aB"
 *   insn=0x00000000002D81A8 string=0x00000000002D81AC "Up"
 *   insn=0x00000000002D81AC string=0x00000000001F4300 "P'"
 *   insn=0x00000000002D81BC string=0x00000000002D81D4 "?x"
 *   insn=0x00000000002D81D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D81E8 string=0x00000000002D81EC "X"
 *   insn=0x00000000002D81FC string=0x00000000002D8200 "h "
 *   insn=0x00000000002D8200 string=0x00000000002D8204 "i"
 *   insn=0x00000000002D8204 string=0x00000000002D8208 "uD"
 *   insn=0x00000000002D8208 string=0x00000000002D820C "`\n@"
 *   insn=0x00000000002D820C string=0x00000000002D8210 "?"
 *   insn=0x00000000002D8210 string=0x00000000002D8214 "A"
 *   insn=0x00000000002D8214 string=0x00000000002D8218 "h"
 *   insn=0x00000000002D821C string=0x00000000002D8250 "h"
 *   insn=0x00000000002D8220 string=0x00000000002D8224 "xt"
 *   insn=0x00000000002D8228 string=0x00000000002D822C "\t"
 *   insn=0x00000000002D822C string=0x00000000002D8230 ")"
 *   insn=0x00000000002D8234 string=0x00000000002D8238 " "
 *   insn=0x00000000002D8238 string=0x00000000002D823C "i"
 *   insn=0x00000000002D823C string=0x00000000002D8240 "`\n@"
 *   insn=0x00000000002D8254 string=0x00000000002D8258 "`"
 *   insn=0x00000000002D8258 string=0x00000000002D825C "@"
 *   insn=0x00000000002D825C string=0x00000000002D8260 "@s"
 *   insn=0x00000000002D8284 string=0x00000000002D8288 "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundLibrary::SoundLibrary(
        Caver::Proto::SoundLibrary *this,
        const Caver::Proto::SoundLibrary *a2)
{
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)this = off_6C6188;
  *((_DWORD *)this + 18) = 0;
  Caver::Proto::SoundLibrary::MergeFrom(this, a2);
}

