/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CBA8
 * Mangled: _ZN5Caver5Proto15ParticleEmitterC2ERKS1_
 * Demangled: Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FE980  Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 116
 *   insn=0x000000000031CBB0 string=0x000000000031CBB4 "H"
 *   insn=0x000000000031CBB4 string=0x000000000031CBB8 "=A"
 *   insn=0x000000000031CBB8 string=0x000000000031CBBC "i"
 *   insn=0x000000000031CBBC string=0x000000000031CBC0 " 9B"
 *   insn=0x000000000031CBC4 string=0x000000000031CBC8 "t"
 *   insn=0x000000000031CBC8 string=0x000000000031CBCC "A"
 *   insn=0x000000000031CBD8 string=0x000000000031CBDC "t"
 *   insn=0x000000000031CBDC string=0x000000000031CBE0 "h"
 *   insn=0x000000000031CBE0 string=0x000000000031CBE4 "`"
 *   insn=0x000000000031CBE8 string=0x000000000031CBEC "e"
 *   insn=0x000000000031CC08 string=0x000000000031CC0C "h"
 *   insn=0x000000000031CC14 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000031CC18 string=0x000000000031CC1C "yj"
 *   insn=0x000000000031CC1C string=0x00000000001F7600 "0'"
 *   insn=0x000000000031CC20 string=0x000000000031CC24 "("
 *   insn=0x000000000031CC44 string=0x000000000031CC48 "V"
 *   insn=0x000000000031CC60 string=0x000000000031CC64 "b"
 *   insn=0x000000000031CC60 string=0x000000000031CCA0 "x:@"
 *   insn=0x000000000031CC64 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031CC70 string=0x000000000031CC74 "C&"
 *   insn=0x000000000031CC78 string=0x000000000031CC7C "a"
 *   insn=0x000000000031CC78 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031CC7C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031CC84 string=0x000000000031CC88 "b}"
 *   insn=0x000000000031CC88 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031CC90 string=0x000000000031CC94 "v"
 *   insn=0x000000000031CC94 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031CC98 string=0x000000000031CC9C "Uu"
 *   insn=0x000000000031CC9C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031CCA4 string=0x000000000031CCA8 ""
 *   insn=0x000000000031CCA8 string=0x000000000031CCAC "?"
 *   insn=0x000000000031CCAC string=0x000000000031CCB0 "J"
 *   insn=0x000000000031CCB0 string=0x000000000031CCB4 ")y"
 *   insn=0x000000000031CCB4 string=0x000000000031CCB8 "?"
 *   insn=0x000000000031CCB8 string=0x000000000031CCBC ""
 *   insn=0x000000000031CCBC string=0x000000000031CCC0 "\t}@"
 *   insn=0x000000000031CCC8 string=0x000000000031CCCC ")}"
 *   insn=0x000000000031CCD0 string=0x000000000031CCD4 "}~"
 *   insn=0x000000000031CCE0 string=0x000000000031CCE4 "#n"
 *   insn=0x000000000031CCE4 string=0x000000000031CCE8 """
 *   insn=0x000000000031CCE4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000031CD10 string=0x000000000031CD14 "x:@"
 *   insn=0x000000000031CD18 string=0x000000000031CD1C "a"
 *   insn=0x000000000031CD28 string=0x000000000031CD2C "h:@"
 *   insn=0x000000000031CD30 string=0x000000000031CD34 "("
 *   insn=0x000000000031CD38 string=0x000000000031CD3C "hBA9H"
 *   insn=0x000000000031CD3C string=0x000000000031CD40 "H"
 *   insn=0x000000000031CD48 string=0x000000000031CD4C "i"
 *   insn=0x000000000031CD4C string=0x000000000031CD50 ""
 *   insn=0x000000000031CD58 string=0x000000000031CD5C "hR@"
 *   insn=0x000000000031CD68 string=0x000000000031CD6C ""
 *   insn=0x000000000031CD74 string=0x000000000031CD8C "I"
 *   insn=0x000000000031CD7C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031CD80 string=0x000000000031CD84 "sx"
 *   insn=0x000000000031CD84 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000031CD8C string=0x000000000031CD90 "h\n@"
 *   insn=0x000000000031CD90 string=0x000000000031CD94 ")yF"
 *   insn=0x000000000031CD9C string=0x000000000031CDA0 ")"
 *   insn=0x000000000031CDA0 string=0x000000000031CDA4 "("
 *   insn=0x000000000031CDAC string=0x000000000031CDB0 "hR@"
 *   insn=0x000000000031CDAC string=0x00000000001F3800 "P'"
 *   insn=0x000000000031CDB4 string=0x000000000031CE08 "h"
 *   insn=0x000000000031CDBC string=0x000000000031CDC0 ""
 *   insn=0x000000000031CDC8 string=0x000000000031CDE0 "I"
 *   insn=0x000000000031CDD4 string=0x000000000031CDD8 "R\"
 *   insn=0x000000000031CDD8 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000031CDE0 string=0x000000000031CDE4 "h"
 *   insn=0x000000000031CDE4 string=0x000000000031CDE8 ")yF"
 *   insn=0x000000000031CDF0 string=0x000000000031CDF4 ")"
 *   insn=0x000000000031CDF4 string=0x000000000031CDF8 "("
 *   insn=0x000000000031CE00 string=0x000000000031CE04 "hR@"
 *   insn=0x000000000031CE08 string=0x000000000031CE0C "("
 *   insn=0x000000000031CE14 string=0x000000000031CE18 "i*@"
 *   insn=0x000000000031CE18 string=0x000000000031CE1C ""
 *   insn=0x000000000031CE54 string=0x000000000031CE58 "i"@"
 *   insn=0x000000000031CE58 string=0x000000000031CE5C ""
 *   insn=0x000000000031CE64 string=0x000000000031CE68 "hR@"
 *   insn=0x000000000031CE68 string=0x000000000031CE6C "("
 *   insn=0x000000000031CE70 string=0x000000000031CE74 "i&@"
 *   insn=0x000000000031CE74 string=0x000000000031CE78 ""
 *   insn=0x000000000031CE80 string=0x000000000031CE84 "hR@"
 *   insn=0x000000000031CE84 string=0x000000000031CE88 "h"
 *   insn=0x000000000031CE90 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031CEA0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031CEBC string=0x000000000031CEC0 "#"
 *   insn=0x000000000031CECC string=0x000000000031CED0 "H"
 *   insn=0x000000000031CED0 string=0x000000000031CED4 "=A"
 *   insn=0x000000000031CED8 string=0x000000000031CEDC "A"
 *   insn=0x000000000031CEDC string=0x000000000031CEE0 "h"
 *   insn=0x000000000031CEE0 string=0x000000000031CEE4 "H"
 *   insn=0x000000000031CEE4 string=0x000000000031CEE8 "yF"
 *   insn=0x000000000031CEE8 string=0x000000000031CEEC ""
 *   insn=0x000000000031CEF0 string=0x000000000031CEF4 "`"
 *   insn=0x000000000031CEF4 string=0x000000000031CEF8 "`\n@"
 *   insn=0x000000000031CEF4 string=0x000000000031CF20 "`"
 *   insn=0x000000000031CEFC string=0x000000000031CF00 ""
 *   insn=0x000000000031CEFC string=0x000000000031CF0C "`"
 *   insn=0x000000000031CF00 string=0x000000000031CF04 ""
 *   insn=0x000000000031CF10 string=0x000000000031CF14 ""
 *   insn=0x000000000031CF14 string=0x000000000031CF18 ""
 *   insn=0x000000000031CF20 string=0x000000000031CF24 "h"
 *   insn=0x000000000031CF28 string=0x000000000031CF2C "`"
 *   insn=0x000000000031CF2C string=0x000000000031CF30 "@"
 *   insn=0x000000000031CF30 string=0x000000000031CF34 "`"
 *   insn=0x000000000031CF48 string=0x000000000031CF4C "i"
 *   insn=0x000000000031CF58 string=0x000000000031CF5C "h"
 *   insn=0x000000000031CF70 string=0x000000000031CF74 "T"
 *   insn=0x000000000031CF84 string=0x000000000031CF88 "H"
 *   insn=0x000000000031CF88 string=0x000000000031CF8C "yF"
 *   insn=0x000000000031CF90 string=0x000000000031CF94 ""
 *   insn=0x000000000031CF9C string=0x000000000031CFA0 "`\n@"
 *   insn=0x000000000031CFA4 string=0x000000000031CFA8 ""
 *   insn=0x000000000031CFA4 string=0x000000000031CFB4 "`"
 *   insn=0x000000000031CFA8 string=0x000000000031CFAC ""
 *   insn=0x000000000031CFB8 string=0x000000000031CFBC ""
 *   insn=0x000000000031CFC8 string=0x000000000031CFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleEmitter::ParticleEmitter(
        Caver::Proto::ParticleEmitter *this,
        const Caver::Proto::ParticleEmitter *a2)
{
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = (char *)this + 64;
  *(_QWORD *)this = off_6C8730;
  *((_QWORD *)this + 7) = 0x400000000LL;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::ParticleEmitter::MergeFrom(this, a2);
}

