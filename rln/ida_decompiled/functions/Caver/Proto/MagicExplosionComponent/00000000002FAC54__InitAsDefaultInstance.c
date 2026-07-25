/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAC54
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FAC64 string=0x00000000002FAC68 "`\n"
 *   insn=0x00000000002FAC64 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance(
        Caver::Proto::MagicExplosionComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

