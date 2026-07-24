/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363958
 * Function: FUN_00363958
 * Signature: undefined FUN_00363958(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00363958(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  GameState *this_00;
  long lVar4;
  undefined8 uVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar5 = 0;
  if (((puVar2 != (undefined8 *)0x0) && (uVar5 = 0, (SceneObject *)*puVar2 != (SceneObject *)0x0))
     && (lVar3 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar2,(long)PTR_Interface_007e57a8), uVar5 = 0,
        lVar3 != 0)) {
    if (*(long *)(*(long *)(lVar3 + 0x80) + -0x18) == 0) {
      bVar1 = 0;
    }
    else {
      this_00 = *(GameState **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x20) + 0x10);
      bVar1 = 0;
      if (this_00 != (GameState *)0x0) {
        lVar4 = Caver::GameState::CurrentLevelState(this_00,true);
        bVar1 = Caver::StateProperties::HasFlag
                          ((StateProperties *)(lVar4 + 0x10),(string *)(lVar3 + 0x80));
      }
    }
    Caver::ProgramState::PushBool(this,(bool)(bVar1 & 1));
    uVar5 = 1;
  }
  return uVar5;
}


