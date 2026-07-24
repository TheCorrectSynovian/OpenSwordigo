/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392408
 * Function: Caver::AttackComponent::WorldPointInsideAttackArea
 * Signature: undefined __cdecl WorldPointInsideAttackArea(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::WorldPointInsideAttackArea(Caver::Vector2 const&) */

void Caver::AttackComponent::WorldPointInsideAttackArea(Vector2 *param_1)

{
  Vector2 *pVVar1;
  
  pVVar1 = *(Vector2 **)(param_1 + 0xb0);
  if (pVVar1 == (Vector2 *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(param_1 + 0xa0),(Component *)param_1);
    pVVar1 = *(Vector2 **)(param_1 + 0xb0);
    if (pVVar1 == (Vector2 *)0x0) {
      return;
    }
  }
  ShapeComponent::ContainsWorldPoint(pVVar1);
  return;
}


