/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAF20
 * Mangled: _ZN5Caver5Proto12MeshMaterial21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MeshMaterial::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FC970  Caver::Proto::Texture::default_instance(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAF30 string=0x00000000002FAF34 "`\n"
 *   insn=0x00000000002FAF30 string=0x00000000001F6310 "0'"
 *   insn=0x00000000002FAF38 string=0x00000000002FAF3C "`"
 *   insn=0x00000000002FAF40 string=0x00000000002FAF44 "`"
 *   insn=0x00000000002FAF48 string=0x00000000002FAF4C "`"
 *   insn=0x00000000002FAF48 string=0x00000000001FC970 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::InitAsDefaultInstance(Caver::Proto::MeshMaterial *this)
{
  Caver::Proto::FloatColor *v2; // x0
  Caver::Proto::FloatColor *v3; // x0
  Caver::Proto::Texture *v4; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  v3 = (Caver::Proto::FloatColor *)Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 3) = v3;
  v4 = (Caver::Proto::Texture *)Caver::Proto::FloatColor::default_instance(v3);
  *((_QWORD *)this + 4) = v4;
  result = Caver::Proto::Texture::default_instance(v4);
  *((_QWORD *)this + 6) = result;
  return result;
}

