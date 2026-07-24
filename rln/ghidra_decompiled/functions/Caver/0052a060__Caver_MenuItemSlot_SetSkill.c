/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a060
 * Function: Caver::MenuItemSlot::SetSkill
 * Signature: undefined __thiscall SetSkill(MenuItemSlot * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&, bool) */

void __thiscall Caver::MenuItemSlot::SetSkill(MenuItemSlot *this,shared_ptr *param_1,bool param_2)

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
  float fVar10;
  undefined8 uVar11;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar11 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = *(long **)(this + 0x118);
  *(undefined8 *)(this + 0x110) = uVar11;
  *(long *)(this + 0x118) = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar6 = *(long *)param_1;
      goto joined_r0x0052a26c;
    }
  }
  lVar6 = *(long *)param_1;
joined_r0x0052a26c:
  if (lVar6 == 0) {
    GUITexturedRect::Reset((GUITexturedRect *)(this + 0x208));
  }
  else {
    FUN_0066a528(&local_68);
    FUN_0035a030(&local_50,"ui_skill_",&local_68);
    puVar4 = PTR_DAT_007e5de8;
    if (local_68 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar9 = local_68 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = (int)*plVar9;
        *(int *)plVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = (int)*plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *(int *)plVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_68 + -3);
      }
    }
    if (param_2) {
      FUN_006677d4(&local_50,"_icon",5);
    }
    psVar5 = (string *)TextureLibrary::sharedLibrary();
    TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
    this_00 = (GUITexturedRect *)(this + 0x208);
    local_68 = (long *)0x0;
    local_60 = 0;
    GUITexturedRect::InitWithTexture
              (this_00,(intrusive_ptr *)&local_58,(Rectangle *)&local_68,false);
    if ((local_58 != (long *)0x0) &&
       (iVar8 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*local_58 + 8))();
    }
    plVar9 = *(long **)this_00;
    if (plVar9 != (long *)0x0) {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    }
    uVar11 = *(undefined8 *)((long)plVar9 + 0x54);
    fVar10 = *(float *)(this + 0xf8);
    if ((plVar9 != (long *)0x0) &&
       (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar9 + 8))();
    }
    Vector2::Rounded();
    local_68 = local_58;
    local_60 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar10,(float)uVar11 * fVar10);
    GUITexturedRect::CreateWithBounds(this_00,(Rectangle *)&local_68,false);
    if ((undefined *)(local_50 + -0x18) != puVar4) {
                    /* try { // try from 0052a23c to 0062a23f has its CatchHandler @ 0052a33c */
      piVar7 = (int *)(local_50 + -8);
                    /* try { // try from 0052a240 to 0062a34f has its CatchHandler @ 00529bd0 */
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
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


