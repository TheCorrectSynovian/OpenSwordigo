/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f36c
 * Function: FUN_0038f36c
 * Signature: undefined FUN_0038f36c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0038f36c(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if ((SceneObject *)*puVar2 == (SceneObject *)0x0) {
    return 0;
  }
  lVar3 = Caver::SceneObject::ComponentWithInterface
                    ((SceneObject *)*puVar2,(long)PTR_Interface_007e6ee0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(long **)(lVar3 + 200) == (long *)0x0) ||
     (uVar4 = (**(code **)(**(long **)(lVar3 + 200) + 0x110))(), (uVar4 & 1) == 0)) {
    plVar5 = *(long **)(lVar3 + 0xb0);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    *(undefined1 *)(plVar5 + 0x1d) = 1;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    iVar1 = (int)plVar5[1] + -1;
    *(int *)(plVar5 + 1) = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
    pcVar6 = *(code **)(*plVar5 + 8);
  }
  else {
    pcVar6 = *(code **)(**(long **)(lVar3 + 200) + 0x120);
  }
  (*pcVar6)();
  return 0;
}


