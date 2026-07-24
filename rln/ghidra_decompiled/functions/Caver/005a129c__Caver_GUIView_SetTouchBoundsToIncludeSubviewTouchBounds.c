/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a129c
 * Function: Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds
 * Signature: undefined __thiscall SetTouchBoundsToIncludeSubviewTouchBounds(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds() */

void __thiscall Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(GUIView *this)

{
  undefined4 *puVar1;
  long lVar2;
  float fVar3;
  long lVar4;
  GUIView *pGVar5;
  GUIView *pGVar6;
  GUIView *pGVar7;
  undefined8 uVar8;
  long *plVar9;
  GUIView *pGVar10;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  fVar3 = DAT_00683734;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uStack_68 = *(undefined8 *)(this + 0x8c);
  local_70 = *(undefined8 *)(this + 0x84);
  pGVar6 = this + 0x20;
  pGVar7 = *(GUIView **)pGVar6;
  if (pGVar6 != pGVar7) {
    do {
      lVar4 = *(long *)(pGVar7 + 0x10);
      plVar9 = (long *)(lVar4 + 0x58);
      if ((GUIView *)*plVar9 == this) {
        puVar1 = (undefined4 *)(lVar4 + 0x94);
        if (*(float *)(lVar4 + 0x9c) <= fVar3) {
          puVar1 = (undefined4 *)(lVar4 + 0x84);
        }
        local_60 = *puVar1;
        uStack_5c = puVar1[1];
        uVar8 = *(undefined8 *)(puVar1 + 2);
        pGVar10 = this;
        if (lVar4 != 0) {
          while (pGVar10 != (GUIView *)0x0) {
            (**(code **)(*(long *)pGVar10 + 0x108))(&local_80,pGVar10,&local_60);
            plVar9 = (long *)(*plVar9 + 0x58);
            local_60 = local_80;
            uStack_5c = uStack_7c;
            pGVar10 = (GUIView *)*plVar9;
          }
        }
        plVar9 = *(long **)(this + 0x58);
        pGVar10 = this + 0x58;
        pGVar5 = this;
        while (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x100))(&local_80,plVar9,&local_60,pGVar5);
          pGVar5 = *(GUIView **)pGVar10;
          pGVar10 = pGVar5 + 0x58;
          local_60 = local_80;
          uStack_5c = uStack_7c;
          plVar9 = *(long **)pGVar10;
        }
        local_80 = local_60;
        uStack_7c = uStack_5c;
        local_78 = uVar8;
        Rectangle::ExpandToincludeRectangle((Rectangle *)&local_70,(Rectangle *)&local_80);
      }
      pGVar7 = *(GUIView **)pGVar7;
    } while (pGVar6 != pGVar7);
  }
  *(undefined8 *)(this + 0x9c) = uStack_68;
  *(undefined8 *)(this + 0x94) = local_70;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


