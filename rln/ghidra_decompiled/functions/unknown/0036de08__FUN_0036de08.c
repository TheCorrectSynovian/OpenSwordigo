/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036de08
 * Function: FUN_0036de08
 * Signature: undefined FUN_0036de08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036de08(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  Component *pCVar2;
  undefined8 uVar3;
  long lVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = 0;
    if ((SceneObject *)*puVar1 != (SceneObject *)0x0) {
      pCVar2 = (Component *)
               Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0);
      uVar3 = 0;
      if (pCVar2 != (Component *)0x0) {
        lVar4 = *(long *)(pCVar2 + 0xb0);
        if (lVar4 == 0) {
          Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar2 + 0xa0),pCVar2);
          lVar4 = *(long *)(pCVar2 + 0xb0);
          if (lVar4 == 0) {
            return 0;
          }
        }
        Caver::ProgramState::PushInt(this,*(int *)(lVar4 + 0x20));
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


