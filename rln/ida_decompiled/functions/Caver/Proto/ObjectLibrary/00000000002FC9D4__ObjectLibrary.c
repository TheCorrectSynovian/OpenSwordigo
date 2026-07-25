/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC9D4
 * Mangled: _ZN5Caver5Proto13ObjectLibraryC2ERKS1_
 * Demangled: Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *
 * Callers: 0
 *
 * Callees: 22
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *   0x00000000001F6DB0  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FE1F0  Caver::Proto::ObjectLibrary::MergeFrom(Caver::Proto::ObjectLibrary const&)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x00000000002019F0  Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002FCE78  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 154
 *   insn=0x00000000002FC9EC string=0x00000000002FC9F0 "H"
 *   insn=0x00000000002FC9F4 string=0x00000000002FC9F8 "eG"
 *   insn=0x00000000002FC9FC string=0x00000000002FCA00 "i*"
 *   insn=0x00000000002FCA00 string=0x00000000002FCA04 "ib"
 *   insn=0x00000000002FCA04 string=0x00000000002FCA08 "i"
 *   insn=0x00000000002FCA08 string=0x00000000002FCA0C "i"
 *   insn=0x00000000002FCA0C string=0x00000000002FCA10 "I"
 *   insn=0x00000000002FCA10 string=0x00000000002FCA14 ")"
 *   insn=0x00000000002FCA14 string=0x00000000002FCA18 "t"
 *   insn=0x00000000002FCA1C string=0x00000000002FCA20 "u"
 *   insn=0x00000000002FCA20 string=0x00000000002FCA24 "v"
 *   insn=0x00000000002FCA24 string=0x00000000002FCA28 "wb"
 *   insn=0x00000000002FCA28 string=0x00000000002FCA2C "A"
 *   insn=0x00000000002FCA2C string=0x00000000002FCA30 "iR"
 *   insn=0x00000000002FCA30 string=0x00000000002FCA34 "`"
 *   insn=0x00000000002FCA34 string=0x00000000002FCA38 "u*"
 *   insn=0x00000000002FCA38 string=0x00000000002FCA3C "`."
 *   insn=0x00000000002FCA3C string=0x00000000002FCA40 "vF"
 *   insn=0x00000000002FCA40 string=0x00000000002FCA44 "`J"
 *   insn=0x00000000002FCA44 string=0x00000000002FCA48 "wb"
 *   insn=0x00000000002FCA48 string=0x00000000002FCA4C "`f"
 *   insn=0x00000000002FCA4C string=0x00000000002FCA50 "h"
 *   insn=0x00000000002FCA74 string=0x00000000002FCA78 "hb@"
 *   insn=0x00000000002FCA7C string=0x00000000002FCA80 "?"
 *   insn=0x00000000002FCA90 string=0x00000000002FCA94 ""
 *   insn=0x00000000002FCA90 string=0x00000000002FCAA8 "9"
 *   insn=0x00000000002FCA94 string=0x00000000002FCA98 ""
 *   insn=0x00000000002FCA9C string=0x00000000002FCAA0 "i"
 *   insn=0x00000000002FCAA0 string=0x00000000002FCAA4 "hb@"
 *   insn=0x00000000002FCAA8 string=0x00000000002FCAAC "?"
 *   insn=0x00000000002FCAB8 string=0x00000000002FCABC "h"
 *   insn=0x00000000002FCAB8 string=0x00000000002FCAC8 "i"
 *   insn=0x00000000002FCAC0 string=0x00000000002FCAC4 "'"
 *   insn=0x00000000002FCAC4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002FCAC8 string=0x00000000002FCACC "`F@"
 *   insn=0x00000000002FCACC string=0x00000000002FCAD0 "?"
 *   insn=0x00000000002FCAD8 string=0x00000000002FCADC "xw"
 *   insn=0x00000000002FCAE0 string=0x00000000002FCAE4 "\t"
 *   insn=0x00000000002FCAE4 string=0x00000000002FCAE8 ")"
 *   insn=0x00000000002FCAEC string=0x00000000002FCAF0 " "
 *   insn=0x00000000002FCAF0 string=0x00000000002FCAF4 "i"
 *   insn=0x00000000002FCAF4 string=0x00000000002FCAF8 "`F@"
 *   insn=0x00000000002FCB08 string=0x00000000002FCB0C "`"
 *   insn=0x00000000002FCB0C string=0x00000000002FCB10 "@"
 *   insn=0x00000000002FCB0C string=0x00000000002FCB18 "h^@"
 *   insn=0x00000000002FCB18 string=0x00000000002FCB1C "`*@"
 *   insn=0x00000000002FCB20 string=0x00000000002FCB24 "+"
 *   insn=0x00000000002FCB2C string=0x00000000002FCB30 "`"
 *   insn=0x00000000002FCB30 string=0x00000000002FCB34 "h^"
 *   insn=0x00000000002FCB30 string=0x00000000001F6CB0 "0'"
 *   insn=0x00000000002FCB34 string=0x00000000002FCB38 "`*@"
 *   insn=0x00000000002FCB40 string=0x00000000002FCB44 "K"
 *   insn=0x00000000002FCB48 string=0x00000000002FCB4C "`"
 *   insn=0x00000000002FCB4C string=0x00000000002FCB50 "@"
 *   insn=0x00000000002FCB4C string=0x00000000002FCB58 "i&@"
 *   insn=0x00000000002FCB58 string=0x00000000002FCB5C "`"
 *   insn=0x00000000002FCB5C string=0x00000000002FCB60 "?"
 *   insn=0x00000000002FCB68 string=0x00000000002FCB6C "xu"
 *   insn=0x00000000002FCB70 string=0x00000000002FCB74 "\t"
 *   insn=0x00000000002FCB74 string=0x00000000002FCB78 ")"
 *   insn=0x00000000002FCB7C string=0x00000000002FCB80 " "
 *   insn=0x00000000002FCB80 string=0x00000000002FCB84 "i&@"
 *   insn=0x00000000002FCB84 string=0x00000000002FCB88 "`"
 *   insn=0x00000000002FCB98 string=0x00000000002FCB9C "`"
 *   insn=0x00000000002FCB9C string=0x00000000002FCBA0 "@"
 *   insn=0x00000000002FCBAC string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FCBB0 string=0x00000000002FCBB4 "D"
 *   insn=0x00000000002FCBE4 string=0x00000000002FCBE8 "X"
 *   insn=0x00000000002FCBE8 string=0x00000000002FCBEC ""
 *   insn=0x00000000002FCC00 string=0x00000000002FCC04 "b"
 *   insn=0x00000000002FCC00 string=0x00000000002FCC40 "`b"
 *   insn=0x00000000002FCC04 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000002FCC18 string=0x00000000002FCC1C "a"
 *   insn=0x00000000002FCC18 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002FCC1C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002FCC24 string=0x00000000002FCC28 "z"
 *   insn=0x00000000002FCC28 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002FCC30 string=0x00000000002FCC34 "3"
 *   insn=0x00000000002FCC34 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002FCC38 string=0x00000000002FCC3C "m"
 *   insn=0x00000000002FCC3C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002FCC44 string=0x00000000002FCC48 "Z"
 *   insn=0x00000000002FCC48 string=0x00000000002FCC4C "`B"
 *   insn=0x00000000002FCC48 string=0x00000000001F6DB0 "0'"
 *   insn=0x00000000002FCC54 string=0x00000000002FCC58 "h"
 *   insn=0x00000000002FCC54 string=0x00000000001FB3D0 "0'"
 *   insn=0x00000000002FCC5C string=0x00000000002FCC60 "u""
 *   insn=0x00000000002FCC64 string=0x00000000002FCC68 "!"
 *   insn=0x00000000002FCC68 string=0x00000000002FCC6C "-"
 *   insn=0x00000000002FCC6C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002FCC78 string=0x00000000002FCD10 "h"
 *   insn=0x00000000002FCC80 string=0x00000000002FCC84 "i"R)Vyy"
 *   insn=0x00000000002FCC84 string=0x00000000002FCC88 "Vyy"
 *   insn=0x00000000002FCC88 string=0x00000000002FCC8C ")}@"
 *   insn=0x00000000002FCC8C string=0x00000000002FCC90 "?"
 *   insn=0x00000000002FCC94 string=0x00000000002FCC98 "hF@"
 *   insn=0x00000000002FCC94 string=0x00000000002FCCAC "i"
 *   insn=0x00000000002FCC98 string=0x00000000002FCC9C "*"
 *   insn=0x00000000002FCC9C string=0x00000000002FCCA0 "j"
 *   insn=0x00000000002FCCB4 string=0x00000000002FCCC8 ""
 *   insn=0x00000000002FCCC0 string=0x00000000002FCCC4 "h"
 *   insn=0x00000000002FCCCC string=0x00000000002FCCD0 "h"
 *   insn=0x00000000002FCCD0 string=0x00000000002FCCD4 "C"
 *   insn=0x00000000002FCCD4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FCCD8 string=0x00000000002FCCDC "9"
 *   insn=0x00000000002FCCDC string=0x00000000002FCCE0 "h"
 *   insn=0x00000000002FCCE0 string=0x00000000002FCCE4 "iF@"
 *   insn=0x00000000002FCCE4 string=0x00000000002FCCE8 "\n"
 *   insn=0x00000000002FCCE8 string=0x00000000002FCCEC "j"
 *   insn=0x00000000002FCCEC string=0x00000000002FCCF0 "7y("
 *   insn=0x00000000002FCCF8 string=0x00000000002FCCFC "="
 *   insn=0x00000000002FCD00 string=0x00000000002FCD04 "9"
 *   insn=0x00000000002FCD04 string=0x00000000002FCD08 "?"
 *   insn=0x00000000002FCD14 string=0x00000000002FCD18 "u"
 *   insn=0x00000000002FCD1C string=0x00000000002FCD20 "!"
 *   insn=0x00000000002FCD38 string=0x00000000002FCD3C "i"Y)Vyy"
 *   insn=0x00000000002FCD3C string=0x00000000002FCD40 "Vyy"
 *   insn=0x00000000002FCD40 string=0x00000000002FCD44 ")}@"
 *   insn=0x00000000002FCD44 string=0x00000000002FCD48 "?"
 *   insn=0x00000000002FCD4C string=0x00000000002FCD50 "hb@"
 *   insn=0x00000000002FCD4C string=0x00000000002FCD64 "i"
 *   insn=0x00000000002FCD50 string=0x00000000002FCD54 "*"
 *   insn=0x00000000002FCD54 string=0x00000000002FCD58 "j"
 *   insn=0x00000000002FCD6C string=0x00000000002FCD80 ""
 *   insn=0x00000000002FCD78 string=0x00000000002FCD7C "h"
 *   insn=0x00000000002FCD84 string=0x00000000002FCD88 "h"
 *   insn=0x00000000002FCD94 string=0x00000000002FCD98 "h"
 *   insn=0x00000000002FCD94 string=0x00000000001F5000 "P'"
 *   insn=0x00000000002FCD98 string=0x00000000002FCD9C "ib@"
 *   insn=0x00000000002FCD9C string=0x00000000002FCDA0 "\n"
 *   insn=0x00000000002FCDA0 string=0x00000000002FCDA4 "j"
 *   insn=0x00000000002FCDA4 string=0x00000000002FCDA8 "7y("
 *   insn=0x00000000002FCDB0 string=0x00000000002FCDB4 "{"
 *   insn=0x00000000002FCDB4 string=0x00000000001F37A0 "P'"
 *   insn=0x00000000002FCDB8 string=0x00000000002FCDBC "9"
 *   insn=0x00000000002FCDBC string=0x00000000002FCDC0 "?"
 *   insn=0x00000000002FCDC8 string=0x00000000002FCDCC "h"
 *   insn=0x00000000002FCDCC string=0x00000000002FCDD0 "I"
 *   insn=0x00000000002FCDCC string=0x00000000002FCE18 ""
 *   insn=0x00000000002FCDD0 string=0x00000000002FCDD4 "h"
 *   insn=0x00000000002FCDD4 string=0x00000000002FCDD8 "`\n@"
 *   insn=0x00000000002FCDDC string=0x00000000002FCDE0 ")"
 *   insn=0x00000000002FCDE0 string=0x00000000002FCDE4 ""
 *   insn=0x00000000002FCDE4 string=0x00000000002FCDE8 "h"
 *   insn=0x00000000002FCDF8 string=0x00000000002FCDFC "H"
 *   insn=0x00000000002FCDFC string=0x00000000002FCE00 ""
 *   insn=0x00000000002FCE00 string=0x00000000002FCE04 "a"
 *   insn=0x00000000002FCE04 string=0x00000000002FCE08 ""
 *   insn=0x00000000002FCE08 string=0x00000000002FCE0C "`\n"
 *   insn=0x00000000002FCE10 string=0x00000000002FCE14 "%"
 *   insn=0x00000000002FCE24 string=0x00000000002FCE44 "#"
 *   insn=0x00000000002FCE44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FCE58 string=0x00000000002FCE5C "<E"
 *   insn=0x00000000002FCE6C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLibrary::ObjectLibrary(
        Caver::Proto::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 10) = 4;
  *((_DWORD *)this + 24) = 4;
  *((_DWORD *)this + 38) = 4;
  *((_DWORD *)this + 52) = 4;
  *((_QWORD *)this + 2) = &Caver::Proto::ObjectLibrary::_default_name_;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 17) = (char *)this + 160;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_QWORD *)this + 25) = 0;
  *(_QWORD *)this = off_6C7380;
  *((_DWORD *)this + 62) = 0;
  Caver::Proto::ObjectLibrary::MergeFrom(this, a2);
}

