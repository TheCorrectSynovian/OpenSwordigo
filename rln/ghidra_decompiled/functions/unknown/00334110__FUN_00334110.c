/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334110
 * Function: FUN_00334110
 * Signature: undefined FUN_00334110(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00334110(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ProgramState *this;
  undefined8 *puVar5;
  PropertiesComponent *this_00;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long local_58;
  long local_50;
  undefined *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  puVar4 = PTR_DAT_007e5de8;
  if (puVar5 == (undefined8 *)0x0) {
    local_48[0] = PTR_DAT_007e5de8 + 0x18;
  }
  else {
    local_48[0] = PTR_DAT_007e5de8 + 0x18;
    if (((SceneObject *)*puVar5 != (SceneObject *)0x0) &&
       (this_00 = (PropertiesComponent *)
                  Caver::SceneObject::ComponentWithInterface
                            ((SceneObject *)*puVar5,(long)PTR_Interface_007e59f0),
       this_00 != (PropertiesComponent *)0x0)) {
      Caver::ProgramState::StringAtStackIndex((int)this);
      if (this_00[0x70] == (PropertiesComponent)0x0) {
        Caver::PropertiesComponent::Load(this_00);
      }
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)(this_00 + 0xa0),(string *)&local_58);
      FUN_0066a528(&local_50,uVar6);
      FUN_0066a6a8(local_48,&local_50);
      if ((undefined *)(local_50 + -0x18) != puVar4) {
        piVar7 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar7;
          *piVar7 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
        }
      }
      if ((undefined *)(local_58 + -0x18) != puVar4) {
        piVar7 = (int *)(local_58 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar7;
          *piVar7 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_58 + -0x18));
        }
      }
    }
  }
  Caver::ProgramState::PushString(this,(string *)local_48);
  if (local_48[0] + -0x18 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_48[0] + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


