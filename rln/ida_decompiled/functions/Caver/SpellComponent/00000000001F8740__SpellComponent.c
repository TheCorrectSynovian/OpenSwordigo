/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8740
 * Mangled: ._ZN5Caver14SpellComponentC2Ev
 * Demangled: Caver::SpellComponent::SpellComponent(void)
 *
 * Callers: 7
 *   0x0000000000281E60  Caver::DimensionSpellComponent::DimensionSpellComponent(void)
 *   0x0000000000281F14  Caver::SpellComponent::~SpellComponent()
 *   0x0000000000282208  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x000000000028580C  Caver::MagicBoltComponent::className(void)
 *   0x0000000000286774  Caver::MagicBombComponent::Clone(void)
 *   0x0000000000288D9C  Caver::MagicExplosionComponent::className(void)
 *
 * Callees: 1
 *   0x000000000028F95C  Caver::SpellComponent::SpellComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8748 string=0x00000000001F874C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::SpellComponent(Caver::SpellComponent *this)
{
  return _ZN5Caver14SpellComponentC2Ev(this);
}

