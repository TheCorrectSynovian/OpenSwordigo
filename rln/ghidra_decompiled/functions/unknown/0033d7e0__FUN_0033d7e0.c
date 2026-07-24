/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d7e0
 * Function: FUN_0033d7e0
 * Signature: undefined FUN_0033d7e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0033d7e0(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  ulong uVar5;
  TextBubbleComponent *this_00;
  int *piVar6;
  int iVar7;
  SceneObject *this_01;
  float fVar8;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    this_01 = (SceneObject *)0x0;
  }
  else {
    this_01 = (SceneObject *)*puVar4;
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  uVar5 = Caver::ProgramState::IsFloatAtStackIndex(this,3);
  fVar8 = _DAT_00684940;
  if ((uVar5 & 1) != 0) {
    fVar8 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  }
  if (((this_01 != (SceneObject *)0x0) && (*(long *)(local_48[0] + -0x18) != 0)) &&
     (this_00 = (TextBubbleComponent *)
                Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e4f20),
     this_00 != (TextBubbleComponent *)0x0)) {
    Caver::TextBubbleComponent::ShowText(this_00,(string *)local_48,fVar8);
  }
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


