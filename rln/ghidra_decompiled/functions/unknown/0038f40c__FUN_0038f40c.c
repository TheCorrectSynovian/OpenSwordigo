/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f40c
 * Function: FUN_0038f40c
 * Signature: undefined FUN_0038f40c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0038f40c(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  Vector3 local_48 [8];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar4 = 0;
  if (((puVar2 != (undefined8 *)0x0) && (uVar4 = 0, (SceneObject *)*puVar2 != (SceneObject *)0x0))
     && (lVar3 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar2,(long)PTR_Interface_007e6ee0), uVar4 = 0,
        lVar3 != 0)) {
    Caver::SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(lVar3 + 0x28));
    local_40 = *(undefined4 *)(*(long *)(lVar3 + 0x28) + 0x78);
    Caver::ProgramState::PushVector3(this,local_48);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


