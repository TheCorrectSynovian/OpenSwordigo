/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031cf84
 * Function: FUN_0031cf84
 * Signature: undefined FUN_0031cf84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0031cf84(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  fVar5 = 0.0;
  if ((((puVar2 != (undefined8 *)0x0) && ((SceneObject *)*puVar2 != (SceneObject *)0x0)) &&
      (lVar3 = Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar2,(long)PTR_Interface_007e4f28), lVar3 != 0)) &&
     (plVar4 = *(long **)(lVar3 + 0xa0), plVar4 != (long *)0x0)) {
    if ((int)plVar4[1] == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar4 = *(long **)(lVar3 + 0xa0);
    }
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    fVar5 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  Caver::ProgramState::PushFloat(this,fVar5);
  return 1;
}


