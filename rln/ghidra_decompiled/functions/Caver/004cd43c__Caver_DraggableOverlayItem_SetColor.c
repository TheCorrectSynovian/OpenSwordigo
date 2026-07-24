/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cd43c
 * Function: Caver::DraggableOverlayItem::SetColor
 * Signature: undefined __thiscall SetColor(DraggableOverlayItem * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableOverlayItem::SetColor(Caver::Color) */

void __thiscall Caver::DraggableOverlayItem::SetColor(DraggableOverlayItem *this,byte *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)NEON_ucvtf((uint)*param_2);
  fVar7 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar8 = (float)NEON_ucvtf((uint)param_2[2]);
  iVar2 = (int)(fVar6 * 0.5);
  fVar6 = (float)NEON_ucvtf((uint)param_2[3]);
  iVar3 = (int)(fVar7 * 0.5);
  iVar4 = (int)(fVar8 * 0.5);
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  iVar5 = (int)(fVar6 * 0.5);
  if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  local_40 = (undefined1)iVar2;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  local_3f = (undefined1)iVar3;
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  local_3e = (undefined1)iVar4;
  local_3d = (undefined1)iVar5;
  GUIRoundedRect::SetColor((GUIRoundedRect *)(this + 0x108),&local_40);
  local_48 = *param_2;
  local_47 = param_2[1];
  local_46 = param_2[2];
  local_45 = param_2[3];
  GUIRoundedRect::SetColor((GUIRoundedRect *)(this + 0x1b0),&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


