/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F81D0
 * Mangled: ._ZN5Caver11SceneObject15SetAlwaysActiveEb
 * Demangled: Caver::SceneObject::SetAlwaysActive(bool)
 *
 * Callers: 8
 *   0x000000000021DEC8  Caver::BackgroundComponent::Prepare(void)
 *   0x0000000000221B34  Caver::LightComponent::Prepare(void)
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *   0x0000000000285DC0  Caver::MagicBombComponent::Prepare(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000047704C  sub_47704C
 *
 * Callees: 1
 *   0x0000000000474A28  Caver::SceneObject::Activate(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F81D4 string=0x0000000000474AF4 "\t"
 *   insn=0x00000000001F81D8 string=0x00000000001F81DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::SetAlwaysActive(Caver::SceneObject *this)
{
  JUMPOUT(0x474AF4);
}

