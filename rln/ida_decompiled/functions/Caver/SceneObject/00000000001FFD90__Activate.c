/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD90
 * Mangled: ._ZN5Caver11SceneObject8ActivateEv
 * Demangled: Caver::SceneObject::Activate(void)
 *
 * Callers: 10
 *   0x000000000027F710  Caver::PhysicsObjectComponent::SetPhysicsEnabled(bool)
 *   0x000000000027F954  sub_27F954
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *   0x000000000028CBCC  Caver::ProjectileControllerComponent::Prepare(void)
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000469290  sub_469290
 *   0x0000000000474A28  Caver::SceneObject::Activate(void)
 *   0x0000000000476F4C  sub_476F4C
 *   0x00000000004770AC  sub_4770AC
 *
 * Callees: 1
 *   0x0000000000474A28  Caver::SceneObject::Activate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD98 string=0x00000000001FFD9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::Activate(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObject8ActivateEv(this);
}

