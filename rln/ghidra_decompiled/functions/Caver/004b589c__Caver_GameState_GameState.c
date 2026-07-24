/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b589c
 * Function: Caver::GameState::GameState
 * Signature: undefined __thiscall GameState(GameState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&) */

void __thiscall Caver::GameState::GameState(GameState *this,shared_ptr *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  GameState *pGVar6;
  long *plVar7;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar5;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  CharacterState::CharacterState((CharacterState *)(this + 0x10));
  pGVar6 = this + 0xd0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)pGVar6 = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(GameState **)(this + 0xe8) = pGVar6;
  *(undefined8 *)(this + 0xf0) = 0;
  *(GameState **)(this + 0xe0) = pGVar6;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(GameState **)(this + 0x110) = this + 0x100;
  *(GameState **)(this + 0x118) = this + 0x100;
  StateProperties::StateProperties((StateProperties *)(this + 0x128));
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this + 0x160) = puVar1;
  *(undefined **)(this + 0x158) = puVar1;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined **)(this + 0x168) = puVar1;
  *(undefined **)(this + 0x188) = puVar1;
  *(undefined **)(this + 0x180) = puVar1;
  *(undefined **)(this + 400) = puVar1;
  *(undefined2 *)(this + 0x198) = 0;
  *(undefined **)(this + 0x1a8) = puVar1;
  *(undefined **)(this + 0x1a0) = puVar1;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  uVar2 = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0x18);
  *(undefined8 *)(this + 0x10) = uVar2;
  *(long *)(this + 0x18) = lVar5;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


