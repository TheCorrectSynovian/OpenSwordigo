/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00526380
 * Function: Caver::MapView::UpdateSelectionSprite
 * Signature: undefined __thiscall UpdateSelectionSprite(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdateSelectionSprite() */

void __thiscall Caver::MapView::UpdateSelectionSprite(MapView *this)

{
  long lVar1;
  float fVar2;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Sprite::Clear((Sprite *)(this + 0x2f0));
  if (this[0x3f8] != (MapView)0x0) {
    if (this[0x418] == (MapView)0x0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = DAT_00684430;
      if (*(char *)(*(long *)(*(long *)(this + 0x118) + *(long *)(this + 0x400) * 0x10) + 0x29) !=
          '\0') {
        fVar2 = 1.0;
      }
    }
    local_48 = 0;
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)(this + 0x2e8) + 0x54) >> 0x20) *
                        fVar2,(float)*(undefined8 *)(*(long *)(this + 0x2e8) + 0x54) * fVar2);
    Vector2::Rounded();
    Rectangle::Translate((Rectangle *)&local_48,(Vector2 *)local_50);
    local_50[0] = 0xffffffff;
    Sprite::AddRectangle
              ((Sprite *)(this + 0x2f0),(Rectangle *)&local_48,
               (Rectangle *)(*(long *)(this + 0x2e8) + 0x5c),(Color *)local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


