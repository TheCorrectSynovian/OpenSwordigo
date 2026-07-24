/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379d94
 * Function: FUN_00379d94
 * Signature: undefined FUN_00379d94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00379d94(lua_State *param_1)

{
  string *psVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  GameState *this_00;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) ||
     (lVar3 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e60a0), lVar3 == 0)) {
LAB_00379e44:
    bVar6 = false;
  }
  else {
    iVar7 = *(int *)(lVar3 + 0x88);
    if (0 < iVar7) {
      lVar8 = 0;
      lVar9 = 8;
      do {
        psVar1 = (string *)(*(long *)(lVar3 + 0x90) + lVar9);
        if (*(long *)(*(long *)psVar1 + -0x18) != 0) {
          this_00 = *(GameState **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x20) + 0x10);
          if (this_00 == (GameState *)0x0) goto LAB_00379e44;
          lVar4 = Caver::GameState::CurrentLevelState(this_00,true);
          uVar5 = Caver::StateProperties::HasFlag((StateProperties *)(lVar4 + 0x10),psVar1);
          if ((uVar5 & 1) == 0) goto LAB_00379e44;
          iVar7 = *(int *)(lVar3 + 0x88);
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (lVar8 < iVar7);
    }
    bVar6 = true;
  }
  Caver::ProgramState::PushBool(this,bVar6);
  return 1;
}


