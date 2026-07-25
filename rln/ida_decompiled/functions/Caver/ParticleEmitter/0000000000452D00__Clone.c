/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000452D00
 * Mangled: _ZN5Caver15ParticleEmitter5CloneEv
 * Demangled: Caver::ParticleEmitter::Clone(void)
 *
 * Callers: 2
 *   0x00000000001F72C0  Caver::ParticleEmitter::Clone(void)
 *   0x00000000004529E0  Caver::FountainParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 17
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4170  Caver::ParticleEmitter::SaveToProtobufMessage(Caver::Proto::ParticleEmitter *)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC900  Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *   0x00000000001FF0B0  Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *   0x0000000000201760  .memcpy
 *   0x0000000000201E50  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x0000000000452D10 string=0x0000000000452D14 "U"
 *   insn=0x0000000000452D38 string=0x00000000001F4170 "P'"
 *   insn=0x0000000000452D40 string=0x0000000000452D44 "C"
 *   insn=0x0000000000452D4C string=0x00000000001FC900 "0'"
 *   insn=0x0000000000452D5C string=0x0000000000452D74 "W"
 *   insn=0x0000000000452D74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000452D88 string=0x0000000000452D8C "p"
 *   insn=0x0000000000452DB0 string=0x0000000000452DB4 "W"
 *   insn=0x0000000000452DC4 string=0x0000000000452DC8 "h"
 *   insn=0x0000000000452DC8 string=0x0000000000452DCC "\t@"
 *   insn=0x0000000000452DD4 string=0x0000000000452DD8 "\t"
 *   insn=0x0000000000452DD8 string=0x0000000000452DDC "?"
 *   insn=0x0000000000452DE0 string=0x0000000000452DE4 ""
 *   insn=0x0000000000452DF0 string=0x0000000000452DF4 ""
 *   insn=0x0000000000452DFC string=0x0000000000452E14 "h"
 *   insn=0x0000000000452E04 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000452E08 string=0x0000000000452E0C "Q"
 *   insn=0x0000000000452E0C string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000452E1C string=0x0000000000452E20 "hB@"
 *   insn=0x0000000000452E20 string=0x0000000000452E24 ")\t"
 *   insn=0x0000000000452E28 string=0x0000000000452E2C "`"
 *   insn=0x0000000000452E2C string=0x0000000000452E30 "b"
 *   insn=0x0000000000452E38 string=0x00000000001F41A0 "P'"
 *   insn=0x0000000000452E40 string=0x0000000000452E44 ""
 *   insn=0x0000000000452E58 string=0x0000000000452E5C "1"
 *   insn=0x0000000000452E5C string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000452E6C string=0x0000000000452E70 "h^@"
 *   insn=0x0000000000452E78 string=0x0000000000452E7C "h"
 *   insn=0x0000000000452E7C string=0x0000000000452E80 ")\t"
 *   insn=0x0000000000452E88 string=0x0000000000452E8C "hf@"
 *   insn=0x0000000000452E8C string=0x0000000000452E90 ""
 *   insn=0x0000000000452E90 string=0x0000000000452E94 "h"
 *   insn=0x0000000000452E98 string=0x0000000000452E9C "@"
 *   insn=0x0000000000452EA0 string=0x0000000000452EA4 "`"
 *   insn=0x0000000000452EB0 string=0x0000000000452EB4 "hf@"
 *   insn=0x0000000000452EB4 string=0x0000000000452EB8 "h"
 *   insn=0x0000000000452EB8 string=0x0000000000452EBC "yu"
 *   insn=0x0000000000452EB8 string=0x0000000000452EC4 "h"
 *   insn=0x0000000000452EBC string=0x0000000000452EC0 ""
 *   insn=0x0000000000452ECC string=0x0000000000452ED0 ""
 *   insn=0x0000000000452ED4 string=0x0000000000452ED8 ""
 *   insn=0x0000000000452EDC string=0x0000000000452EE0 "_"
 *   insn=0x0000000000452EE4 string=0x0000000000452EE8 "H"
 *   insn=0x0000000000452EE8 string=0x0000000000452EEC "I{"
 *   insn=0x0000000000452EEC string=0x0000000000452EF0 "?"
 *   insn=0x0000000000452EF0 string=0x0000000000452EF4 "("
 *   insn=0x0000000000452EF4 string=0x0000000000452EF8 "\t}@"
 *   insn=0x0000000000452EFC string=0x0000000000452F00 ")}"
 *   insn=0x0000000000452F04 string=0x0000000000452F08 "}~"
 *   insn=0x0000000000452F10 string=0x0000000000452F14 "["
 *   insn=0x0000000000452F18 string=0x0000000000452F1C "b"
 *   insn=0x0000000000452F18 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000452F38 string=0x0000000000452F3C "\t"
 *   insn=0x0000000000452F3C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000452F44 string=0x0000000000452F48 "I"
 *   insn=0x0000000000452F50 string=0x0000000000452F54 ""
 *   insn=0x0000000000452F54 string=0x0000000000452F58 "h"
 *   insn=0x0000000000452F5C string=0x0000000000452F60 "@"
 *   insn=0x0000000000452F68 string=0x0000000000452F6C "C"
 *   insn=0x0000000000452F78 string=0x0000000000452F7C "A"
 *   insn=0x0000000000452FB4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000452FB8 string=0x0000000000452FBC "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitter::Clone(Caver::ParticleEmitter *this)
{
  const Caver::Proto::ParticleEmitter *v1; // x1
  _QWORD v2[12]; // [xsp+78h] [xbp-80h] BYREF

  v2[11] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Proto::ParticleEmitter::ParticleEmitter((Caver::Proto::ParticleEmitter *)v2);
  Caver::ParticleEmitter::SaveToProtobufMessage();
  Caver::ParticleEmitter::LoadFromProtobufMessage((Caver::ParticleEmitter *)v2, v1);
  Caver::Proto::ParticleEmitter::~ParticleEmitter((Caver::Proto::ParticleEmitter *)v2);
}

