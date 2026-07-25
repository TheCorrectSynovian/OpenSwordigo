/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF80
 * Mangled: ._ZN5Caver15AttackComponent11StartAttackERKN5boost13intrusive_ptrINS_8AnimNodeEEEPNS_11SceneObjectE
 * Demangled: Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000002976D8  Caver::GenericMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000292454  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF88 string=0x00000000001FFF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttackComponent::StartAttack(Caver::Component *a1)
{
  return _ZN5Caver15AttackComponent11StartAttackERKN5boost13intrusive_ptrINS_8AnimNodeEEEPNS_11SceneObjectE(a1);
}

