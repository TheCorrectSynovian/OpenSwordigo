/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cd540
 * Function: Caver::DraggableOverlayItem::DrawRect
 * Signature: undefined __thiscall DrawRect(DraggableOverlayItem * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DraggableOverlayItem::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::DraggableOverlayItem::DrawRect
          (DraggableOverlayItem *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  DraggableOverlayItem *pDVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float local_68;
  undefined8 local_64;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pDVar5 = this + 0x94;
  if (*(float *)(this + 0x9c) <= DAT_00683734) {
    pDVar5 = this + 0x84;
  }
  fVar7 = *(float *)pDVar5;
  fVar1 = *(float *)(pDVar5 + 4);
  if ((((DAT_00683488 < ABS(*(float *)(this + 0xf8) - fVar7)) ||
       (DAT_00683488 < ABS(*(float *)(this + 0xfc) - fVar1))) ||
      (DAT_00683488 < ABS(*(float *)(this + 0x100) - *(float *)(pDVar5 + 8)))) ||
     (DAT_00683488 < ABS(*(float *)(this + 0x104) - *(float *)(pDVar5 + 0xc)))) {
    uVar6 = *(undefined8 *)(pDVar5 + 8);
    *(float *)(this + 0xf8) = fVar7;
    *(float *)(this + 0xfc) = fVar1;
    *(undefined8 *)(this + 0x100) = uVar6;
    uVar6 = *(undefined8 *)(pDVar5 + 4);
    fVar1 = *(float *)(pDVar5 + 0xc);
    plVar4 = *(long **)(this + 0x108);
    local_68 = fVar7;
    local_64 = uVar6;
    local_5c = fVar1;
    fVar7 = _DAT_00000058;
    if ((plVar4 != (long *)0x0) && (fVar7 = *(float *)(plVar4 + 0xb), (int)plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    if (0.0 < fVar7 - fVar1) {
      fVar7 = (fVar7 - fVar1) * 0.5;
      fVar8 = (float)uVar6 - fVar7;
      local_5c = (fVar7 + fVar8 + (((float)uVar6 + fVar1) - fVar8)) - fVar8;
      uVar3 = (ulong)local_64 >> 0x20;
      local_64 = CONCAT44((int)uVar3,fVar8);
    }
    GUIRoundedRect::CreateWithOuterBounds((GUIRoundedRect *)(this + 0x108),(Rectangle *)&local_68);
    GUIRoundedRect::CreateWithOuterBounds((GUIRoundedRect *)(this + 0x1b0),(Rectangle *)&local_68);
  }
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  if (*(long *)(this + 0x260) == 0) {
    pDVar5 = this + 0x108;
  }
  else {
    pDVar5 = this + 0x1b0;
  }
  GUIRoundedRect::Draw((GUIRoundedRect *)pDVar5,param_1);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


