/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044188c
 * Function: Caver::GameInterfaceBuilder::Switch
 * Signature: undefined __thiscall Switch(GameInterfaceBuilder * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::Switch() */

void __thiscall Caver::GameInterfaceBuilder::Switch(GameInterfaceBuilder *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  GUISwitch *this_00;
  shared_ptr<Caver::GUISwitch> *in_x8;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  long local_58;
  long *local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_50,"ui_guide_toggle_on",auStack_40);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
  puVar4 = PTR_DAT_007e5de8;
  if (local_50 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar6 = local_50 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar6;
      *(int *)plVar6 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_50 + -3);
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"ui_guide_toggle_off",auStack_60);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_58,0));
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
  this_00 = operator_new(0x160);
  GUISwitch::GUISwitch(this_00);
  boost::shared_ptr<Caver::GUISwitch>::shared_ptr<Caver::GUISwitch>(in_x8,this_00);
  GUISwitch::SetOnFrameTexture(*(GUISwitch **)in_x8,(intrusive_ptr *)&local_48);
  GUISwitch::SetOffFrameTexture(*(GUISwitch **)in_x8,(intrusive_ptr *)&local_50);
  lVar9 = *(long *)in_x8;
  FUN_00666bb8(&local_58,"click",auStack_60);
  FUN_0066a6a8(lVar9 + 0x150,&local_58);
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
  if ((local_50 != (long *)0x0) &&
     (iVar8 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if ((local_48 != (long *)0x0) &&
     (iVar8 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


