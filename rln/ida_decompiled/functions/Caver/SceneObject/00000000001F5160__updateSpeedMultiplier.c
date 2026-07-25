/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5160
 * Mangled: ._ZNK5Caver11SceneObject21updateSpeedMultiplierEv
 * Demangled: Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Callers: 5
 *   0x000000000026753C  Caver::EntityActionComponent::Update(float)
 *   0x00000000002675D8  Caver::SceneObject::updateSpeedMultiplier(void)
 *   0x0000000000267610  `non-virtual thunk to'Caver::EntityActionComponent::Update(float)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *
 * Callees: 1
 *   0x00000000002675D8  Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5168 string=0x00000000001F516C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::updateSpeedMultiplier(Caver::SceneObject *this)
{
  return _ZNK5Caver11SceneObject21updateSpeedMultiplierEv(this);
}

