/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6DD0
 * Mangled: ._ZN5Caver5Scene15IsObjectVisibleEPNS_11SceneObjectE
 * Demangled: Caver::Scene::IsObjectVisible(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6DD8 string=0x00000000001F6DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Scene::IsObjectVisible()
{
  JUMPOUT(0x4663B4);
}

