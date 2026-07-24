/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cebc
 * Function: FUN_0036cebc
 * Signature: undefined FUN_0036cebc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036cebc(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Component *pCVar3;
  EntityComponent *this_00;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    pCVar3 = (Component *)0x0;
  }
  else {
    pCVar3 = (Component *)
             Caver::SceneObject::ComponentWithInterface
                       ((SceneObject *)*puVar2,(long)PTR_Interface_007e7bc0);
  }
  iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
  fVar6 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  if (pCVar3 != (Component *)0x0) {
    if (fVar6 <= DAT_00683734) {
      this_00 = *(EntityComponent **)(pCVar3 + 0x80);
      *(undefined4 *)(pCVar3 + 0x130) = 0;
      *(int *)(pCVar3 + 0x128) = iVar1;
      if (this_00 == (EntityComponent *)0x0) {
        Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x70),pCVar3);
        this_00 = *(EntityComponent **)(pCVar3 + 0x80);
      }
      Caver::EntityComponent::SetFacingDirection(this_00,iVar1);
      lVar5 = *(long *)(pCVar3 + 0x100);
      if (lVar5 != 0) {
        lVar4 = *(long *)(pCVar3 + 0x80);
        iVar1 = *(int *)(pCVar3 + 0x108);
        if (lVar4 == 0) {
          Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x70),pCVar3);
          lVar4 = *(long *)(pCVar3 + 0x80);
        }
        *(bool *)(lVar5 + 0x39) = iVar1 != *(int *)(lVar4 + 0x70);
      }
    }
    else {
      if (*(int *)(pCVar3 + 0x128) == iVar1) {
        fVar7 = *(float *)(pCVar3 + 0x130);
        if (fVar6 <= *(float *)(pCVar3 + 0x130)) {
          fVar7 = fVar6;
        }
      }
      else {
        *(int *)(pCVar3 + 0x128) = iVar1;
        fVar7 = fVar6;
      }
      *(float *)(pCVar3 + 0x130) = fVar7;
    }
  }
  return 0;
}


