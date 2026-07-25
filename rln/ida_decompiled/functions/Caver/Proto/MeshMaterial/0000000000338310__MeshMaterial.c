/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338310
 * Mangled: _ZN5Caver5Proto12MeshMaterialC2ERKS1_
 * Demangled: Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x00000000002019F0  Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&)
 *   0x0000000000202650  Caver::Proto::MeshMaterial::MergeFrom(Caver::Proto::MeshMaterial const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 97
 *   insn=0x0000000000338318 string=0x000000000033831C "h"
 *   insn=0x000000000033831C string=0x0000000000338320 "\tE"
 *   insn=0x000000000033832C string=0x0000000000338330 "A"
 *   insn=0x000000000033833C string=0x0000000000338340 "h"
 *   insn=0x0000000000338360 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000338364 string=0x0000000000338368 "W%\t"
 *   insn=0x0000000000338380 string=0x0000000000338384 "V"
 *   insn=0x000000000033839C string=0x00000000003383A0 "h"
 *   insn=0x00000000003383B0 string=0x00000000003383B4 ""
 *   insn=0x00000000003383BC string=0x00000000003383D4 "i"
 *   insn=0x00000000003383C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003383CC string=0x00000000001F3F20 "P'"
 *   insn=0x00000000003383D4 string=0x00000000003383D8 "h\n@"
 *   insn=0x00000000003383D8 string=0x00000000003383DC ")"
 *   insn=0x00000000003383E4 string=0x00000000003383E8 ")"
 *   insn=0x00000000003383E8 string=0x00000000003383EC "("
 *   insn=0x00000000003383F0 string=0x00000000003383F4 "g"
 *   insn=0x00000000003383F4 string=0x00000000003383F8 "h:@"
 *   insn=0x0000000000338404 string=0x0000000000338408 ""
 *   insn=0x0000000000338410 string=0x0000000000338428 "i"
 *   insn=0x0000000000338414 string=0x0000000000338418 "r"
 *   insn=0x0000000000338428 string=0x000000000033842C "h"
 *   insn=0x000000000033842C string=0x0000000000338430 ")"
 *   insn=0x0000000000338438 string=0x000000000033843C ")"
 *   insn=0x000000000033843C string=0x0000000000338440 "("
 *   insn=0x0000000000338444 string=0x0000000000338448 "R"
 *   insn=0x0000000000338448 string=0x000000000033844C "h:@"
 *   insn=0x0000000000338458 string=0x000000000033845C ""
 *   insn=0x0000000000338464 string=0x000000000033847C "i"
 *   insn=0x0000000000338468 string=0x000000000033846C "]"
 *   insn=0x000000000033847C string=0x0000000000338480 "h"
 *   insn=0x0000000000338480 string=0x0000000000338484 ")"
 *   insn=0x000000000033848C string=0x0000000000338490 ")"
 *   insn=0x0000000000338490 string=0x0000000000338494 "("
 *   insn=0x0000000000338498 string=0x000000000033849C "="
 *   insn=0x000000000033849C string=0x00000000003384A0 "h:@"
 *   insn=0x00000000003384A8 string=0x00000000003384AC "i*@"
 *   insn=0x00000000003384AC string=0x00000000003384B0 ""
 *   insn=0x00000000003384B8 string=0x00000000003384BC "h:@"
 *   insn=0x00000000003384C8 string=0x00000000003384CC ""
 *   insn=0x00000000003384D4 string=0x00000000003384EC "i"
 *   insn=0x00000000003384D8 string=0x00000000003384DC "A"
 *   insn=0x00000000003384E0 string=0x00000000003384E4 "7!"
 *   insn=0x00000000003384EC string=0x00000000003384F0 "h"
 *   insn=0x00000000003384F0 string=0x00000000003384F4 ")"
 *   insn=0x00000000003384FC string=0x0000000000338500 ")"
 *   insn=0x0000000000338500 string=0x0000000000338504 "("
 *   insn=0x0000000000338508 string=0x000000000033850C "9%"
 *   insn=0x0000000000338514 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000338528 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000033852C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000338534 string=0x0000000000338538 "6"
 *   insn=0x0000000000338538 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000338544 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000338548 string=0x000000000033854C ")"
 *   insn=0x000000000033854C string=0x0000000000338550 "h"
 *   insn=0x000000000033854C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000338564 string=0x000000000033857C "U"
 *   insn=0x000000000033857C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000338590 string=0x0000000000338594 "G"
 *   insn=0x0000000000338594 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003385B0 string=0x00000000003385B4 "fW"
 *   insn=0x00000000003385C0 string=0x00000000003385C4 "h"
 *   insn=0x00000000003385C4 string=0x00000000003385C8 "\tE"
 *   insn=0x00000000003385CC string=0x00000000003385D0 "A"
 *   insn=0x00000000003385D0 string=0x00000000003385D4 "h"
 *   insn=0x00000000003385D4 string=0x00000000003385D8 "h"
 *   insn=0x00000000003385D8 string=0x00000000003385DC ""
 *   insn=0x00000000003385DC string=0x00000000003385E0 ""
 *   insn=0x00000000003385E8 string=0x00000000003385EC "`\n@"
 *   insn=0x00000000003385F0 string=0x00000000003385F4 ""
 *   insn=0x00000000003385F0 string=0x0000000000338600 "`"
 *   insn=0x00000000003385F4 string=0x00000000003385F8 ""
 *   insn=0x0000000000338604 string=0x0000000000338608 ""
 *   insn=0x0000000000338604 string=0x0000000000338614 "`"
 *   insn=0x0000000000338608 string=0x000000000033860C ""
 *   insn=0x0000000000338618 string=0x000000000033861C ""
 *   insn=0x0000000000338618 string=0x0000000000338628 "`"
 *   insn=0x000000000033861C string=0x0000000000338620 ""
 *   insn=0x000000000033862C string=0x0000000000338630 ""
 *   insn=0x0000000000338630 string=0x0000000000338634 ""
 *   insn=0x000000000033865C string=0x0000000000338660 ";W"
 *   insn=0x000000000033866C string=0x0000000000338670 "h"
 *   insn=0x0000000000338670 string=0x0000000000338674 ""
 *   insn=0x0000000000338678 string=0x000000000033867C ""
 *   insn=0x0000000000338684 string=0x0000000000338688 "`\n@"
 *   insn=0x000000000033868C string=0x0000000000338690 ""
 *   insn=0x000000000033868C string=0x000000000033869C "`"
 *   insn=0x0000000000338690 string=0x0000000000338694 ""
 *   insn=0x00000000003386A0 string=0x00000000003386A4 ""
 *   insn=0x00000000003386A0 string=0x00000000003386B0 "`"
 *   insn=0x00000000003386A4 string=0x00000000003386A8 ""
 *   insn=0x00000000003386B4 string=0x00000000003386B8 ""
 *   insn=0x00000000003386B4 string=0x00000000003386C4 "`"
 *   insn=0x00000000003386B8 string=0x00000000003386BC ""
 *   insn=0x00000000003386C8 string=0x00000000003386CC ""
 *   insn=0x00000000003386D8 string=0x00000000003386DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshMaterial::MeshMaterial(
        Caver::Proto::MeshMaterial *this,
        const Caver::Proto::MeshMaterial *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9CC0;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::MeshMaterial::MergeFrom(this, a2);
}

