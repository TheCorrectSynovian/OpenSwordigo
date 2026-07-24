/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031cdb8
 * Function: FUN_0031cdb8
 * Signature: undefined FUN_0031cdb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0031cdb8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  SceneObject *this_00;
  code *pcVar6;
  undefined8 uVar7;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar3;
  }
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
  uVar7 = Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_00 != (SceneObject *)0x0) {
    plVar4 = (long *)Caver::SceneObject::ComponentWithInterface
                               (this_00,(long)PTR_Interface_007e4f28);
    plVar5 = (long *)Caver::SceneObject::ComponentWithIdentifier(this_00,iVar2);
    if ((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) {
      pcVar6 = *(code **)(*plVar4 + 0x108);
      if ((float)uVar7 <= DAT_00683734) {
        local_50 = (long *)(**(code **)(*plVar5 + 0x108))();
        if (local_50 != (long *)0x0) {
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        }
        (*pcVar6)(_DAT_00683c38,plVar4,&local_50);
      }
      else {
        local_50 = (long *)(**(code **)(*plVar5 + 0x108))();
        if (local_50 != (long *)0x0) {
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        }
        (*pcVar6)(uVar7,plVar4,&local_50);
      }
      if ((local_50 != (long *)0x0) &&
         (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


