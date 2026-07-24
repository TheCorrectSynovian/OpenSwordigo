/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8be4
 * Function: Caver::AttributePointsView::UpdateSprite
 * Signature: undefined __thiscall UpdateSprite(AttributePointsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::UpdateSprite() */

void __thiscall Caver::AttributePointsView::UpdateSprite(AttributePointsView *this)

{
  Sprite *this_00;
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  AttributePointsView *pAVar5;
  AttributePointsView local_68;
  AttributePointsView local_67;
  AttributePointsView local_66;
  AttributePointsView local_65;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (Sprite *)(this + 0x4e8);
  if (*(long *)(this + 0x4e8) == 0) {
    Texture::SharedPtr();
    Sprite::Init(this_00,(intrusive_ptr *)&local_60,2,4,true);
    if ((local_60 != (long *)0x0) &&
       (iVar1 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_60 + 8))();
    }
  }
  Sprite::Clear(this_00);
  if (0 < *(int *)(this + 0x180)) {
    lVar4 = 0;
    pAVar5 = this + 0x1cf;
    do {
      uStack_58 = *(undefined8 *)(pAVar5 + -0xb);
      local_60 = *(long **)(pAVar5 + -0x13);
      plVar3 = *(long **)(pAVar5 + -0x47);
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      local_68 = pAVar5[-3];
      local_67 = pAVar5[-2];
      local_66 = pAVar5[-1];
      local_65 = *pAVar5;
      Sprite::AddRectangle
                (this_00,(Rectangle *)&local_60,(Rectangle *)((long)plVar3 + 0x5c),
                 (Color *)&local_68);
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar4 = lVar4 + 1;
      pAVar5 = pAVar5 + 0x48;
    } while (lVar4 < *(int *)(this + 0x180));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


