/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002014B0
 * Mangled: ._ZN5Caver19HeroEntityComponent20HandleItemCollectionEPNS_11SceneObjectE
 * Demangled: Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002014B8 string=0x00000000002014BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::HandleItemCollection(
        Caver::HeroEntityComponent *this,
        Caver::SceneObject *a2)
{
  return _ZN5Caver19HeroEntityComponent20HandleItemCollectionEPNS_11SceneObjectE(this, a2);
}

