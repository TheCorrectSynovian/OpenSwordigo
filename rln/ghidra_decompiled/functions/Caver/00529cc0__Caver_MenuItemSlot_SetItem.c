/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00529cc0
 * Function: Caver::MenuItemSlot::SetItem
 * Signature: undefined __thiscall SetItem(MenuItemSlot * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::MenuItemSlot::SetItem(MenuItemSlot *this,shared_ptr *param_1)

{
  GUITexturedRect *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  long *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar10;
  *(long *)(this + 0x108) = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  this_00 = (GUITexturedRect *)(this + 0x208);
  if (*(long *)param_1 == 0) {
    GUITexturedRect::Reset(this_00);
    goto LAB_00529e9c;
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_60,*(long *)param_1 + 8);
  FUN_0035a030(&local_58,"item_",&local_60);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_58,0));
  local_70 = (long *)0x0;
  local_68 = 0;
  GUITexturedRect::InitWithTexture(this_00,(intrusive_ptr *)&local_50,(Rectangle *)&local_70,false);
  if ((local_50 != (long *)0x0) &&
     (iVar8 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
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
  if ((undefined *)(local_60 + -0x18) == puVar4) {
LAB_00529e00:
    plVar9 = *(long **)this_00;
  }
  else {
    piVar7 = (int *)(local_60 + -8);
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
    if (0 < iVar8) goto LAB_00529e00;
    operator_delete((undefined *)(local_60 + -0x18));
    plVar9 = *(long **)this_00;
  }
  if (plVar9 != (long *)0x0) {
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  }
  uVar10 = *(undefined8 *)((long)plVar9 + 0x54);
  fVar11 = *(float *)(this + 0xf8);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  Vector2::Rounded();
  local_70 = local_50;
  local_68 = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar11,(float)uVar10 * fVar11);
  GUITexturedRect::CreateWithBounds(this_00,(Rectangle *)&local_70,false);
LAB_00529e9c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


