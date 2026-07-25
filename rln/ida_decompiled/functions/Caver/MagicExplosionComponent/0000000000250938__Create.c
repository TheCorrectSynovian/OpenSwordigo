/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250938
 * Mangled: _ZN5Caver23MagicExplosionComponent6CreateEv
 * Demangled: Caver::MagicExplosionComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002508F8  Caver::DimensionObjectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F42E0  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000250978  Caver::SkillComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000250944 string=0x0000000000250948 "&"
 *   insn=0x0000000000250948 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025094C string=0x0000000000250950 "d"
 *   insn=0x0000000000250950 string=0x00000000001F42E0 "P'"
 *   insn=0x0000000000250968 string=0x000000000025096C "Q"
 *   insn=0x000000000025096C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicExplosionComponent *__fastcall Caver::MagicExplosionComponent::Create(Caver::MagicExplosionComponent *this)
{
  Caver::MagicExplosionComponent *v1; // x19

  v1 = (Caver::MagicExplosionComponent *)operator new(0x188u);
  Caver::MagicExplosionComponent::MagicExplosionComponent(v1);
  return v1;
}

