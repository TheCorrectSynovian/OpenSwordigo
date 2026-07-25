/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3730
 * Mangled: ._ZN5Caver14SpellComponent12CasterObjectEv
 * Demangled: Caver::SpellComponent::CasterObject(void)
 *
 * Callers: 5
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002901A0  Caver::SpellComponent::CasterObject(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3734 string=0x00000000002901A0 "\t8@"
 *   insn=0x00000000001F3738 string=0x00000000001F373C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::CasterObject(Caver::SpellComponent *this)
{
  return _ZN5Caver14SpellComponent12CasterObjectEv(this);
}

