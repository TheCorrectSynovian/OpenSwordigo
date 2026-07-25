/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84D0
 * Mangled: ._ZN5Caver23MagicExplosionComponent15SetCasterObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *
 * Callees: 1
 *   0x0000000000287AD4  Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F84D4 string=0x0000000000287AD4 ")"
 *   insn=0x00000000001F84D8 string=0x00000000001F84DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MagicExplosionComponent::SetCasterObject()
{
  return _ZN5Caver23MagicExplosionComponent15SetCasterObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

