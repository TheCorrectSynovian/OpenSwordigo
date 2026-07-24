/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330e74
 * Function: FUN_00330e74
 * Signature: undefined FUN_00330e74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00330e74(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((((puVar2 != (undefined8 *)0x0) && ((SceneObject *)*puVar2 != (SceneObject *)0x0)) &&
      (lVar3 = Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar2,(long)PTR_Interface_007e68e8), lVar3 != 0)) &&
     (plVar4 = *(long **)(lVar3 + 0xa0), plVar4 != (long *)0x0)) {
    *(undefined1 *)(plVar4 + 0x1d) = 1;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return 0;
}


