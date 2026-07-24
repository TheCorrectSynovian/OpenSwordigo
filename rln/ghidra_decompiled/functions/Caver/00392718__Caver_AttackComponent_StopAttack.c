/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392718
 * Function: Caver::AttackComponent::StopAttack
 * Signature: undefined __thiscall StopAttack(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::StopAttack() */

void __thiscall Caver::AttackComponent::StopAttack(AttackComponent *this)

{
  long lVar1;
  
  if (this[0x100] != (AttackComponent)0x0) {
    lVar1 = *(long *)(this + 0xf8);
    this[0x101] = (AttackComponent)0x1;
    *(undefined2 *)(lVar1 + 0x2c) = 0x101;
                    /* WARNING: Could not recover jumptable at 0x00392744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x30))(0);
    return;
  }
  return;
}


