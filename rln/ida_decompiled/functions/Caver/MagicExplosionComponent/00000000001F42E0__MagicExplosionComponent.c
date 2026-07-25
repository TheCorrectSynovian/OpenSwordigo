/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F42E0
 * Mangled: ._ZN5Caver23MagicExplosionComponentC2Ev
 * Demangled: Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *
 * Callers: 1
 *   0x0000000000250938  Caver::MagicExplosionComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002868F4  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F42E8 string=0x00000000001F42EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicExplosionComponent::MagicExplosionComponent(Caver::MagicExplosionComponent *this)
{
  return _ZN5Caver23MagicExplosionComponentC2Ev(this);
}

