/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427a3c
 * Function: Caver::Proto::StaticMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(StaticMonsterControllerComponent * this, StaticMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::Swap(Caver::Proto::StaticMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::Swap
          (StaticMonsterControllerComponent *this,StaticMonsterControllerComponent *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  StaticMonsterControllerComponent *pSVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_1 != this) {
    uVar2 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar8 = *(undefined8 *)(this + 0x28);
    uVar6 = *(undefined8 *)(this + 0x20);
                    /* catch() { ... } // from try @ 0042737c with catch @ 00427a70 */
    pSVar5 = *(StaticMonsterControllerComponent **)(this + 0x10);
    uVar1 = *(undefined8 *)(this + 0x18);
                    /* catch() { ... } // from try @ 00427320 with catch @ 00427a74 */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = uVar7;
    *(StaticMonsterControllerComponent **)(param_1 + 0x10) = pSVar5;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    if (*(StaticMonsterControllerComponent **)(this + 0x10) == param_1 + 0x20) {
      *(StaticMonsterControllerComponent **)(this + 0x10) = this + 0x20;
      pSVar5 = *(StaticMonsterControllerComponent **)(param_1 + 0x10);
    }
    if (pSVar5 == this + 0x20) {
      *(StaticMonsterControllerComponent **)(param_1 + 0x10) = param_1 + 0x20;
                    /* catch() { ... } // from try @ 004272cc with catch @ 00427b08 */
    }
    uVar2 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined4 *)(this + 8);
                    /* catch() { ... } // from try @ 004272f0 with catch @ 00427ad0 */
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00427270 with catch @ 00427b0c */
  __stack_chk_fail();
}


