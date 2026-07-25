/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B90
 * Mangled: ._ZN5Caver5Proto16SceneObjectGroupC2Ev
 * Demangled: Caver::Proto::SceneObjectGroup::SceneObjectGroup(void)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000300244  Caver::Proto::SceneObject::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203B94 string=0x000000000030029C ")"
 *   insn=0x0000000000203B98 string=0x0000000000203B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup *this)
{
  JUMPOUT(0x30029C);
}

