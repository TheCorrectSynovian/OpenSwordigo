/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003abb38
 * Function: FUN_003abb38
 * Signature: undefined FUN_003abb38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003abb38(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ProgramState *this;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  SceneObject *this_00;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar5;
    iVar4 = Caver::ProgramState::IntAtStackIndex(this,2);
    if ((this_00 != (SceneObject *)0x0) &&
       (lVar6 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar4), lVar6 != 0)) {
      lVar1 = *(long *)(lVar6 + 0x158);
      plVar2 = *(long **)(lVar6 + 0x160);
      if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar7 = plVar2[2];
        plVar2[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      if (lVar1 != 0) {
        local_58 = Caver::ProgramState::FloatAtStackIndex(this,3);
        local_54 = Caver::ProgramState::FloatAtStackIndex(this,4);
        local_50 = Caver::ProgramState::FloatAtStackIndex(this,5);
        local_4c = Caver::ProgramState::FloatAtStackIndex(this,6);
        lVar1 = *(long *)(lVar6 + 0x158);
        plVar2 = *(long **)(lVar6 + 0x160);
        if (plVar2 != (long *)0x0) {
          plVar2[1] = plVar2[1] + 1;
        }
        Caver::FloatColor::GetHSLComponents((FloatColor *)&local_58,(float *)(lVar1 + 0xa8));
        *(undefined4 *)(lVar1 + 0xb4) = local_4c;
        if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar6 = plVar2[2];
          plVar2[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


