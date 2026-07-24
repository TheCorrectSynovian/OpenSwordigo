/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052784c
 * Function: Caver::MapView::AddPathSprite
 * Signature: undefined __thiscall AddPathSprite(MapView * this, MapViewNode * param_1, MapViewNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::AddPathSprite(Caver::MapViewNode*, Caver::MapViewNode*) */

void __thiscall
Caver::MapView::AddPathSprite(MapView *this,MapViewNode *param_1,MapViewNode *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_78 [2];
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(*(long *)param_1 + 8);
  fVar4 = *(float *)(*(long *)param_1 + 0xc);
  fVar5 = *(float *)(*(long *)param_2 + 8);
  fVar6 = *(float *)(*(long *)param_2 + 0xc);
  local_70 = fVar5 - fVar3;
  fStack_6c = fVar6 - fVar4;
  uVar2 = Vector2::Normalize((Vector2 *)&local_70);
  local_60 = *(float *)(param_1 + 0x2c) * local_70 + fVar3;
  fStack_5c = *(float *)(param_1 + 0x2c) * fStack_6c + fVar4;
  local_68 = fVar5 - local_70 * *(float *)(param_2 + 0x2c);
  fStack_64 = fVar6 - fStack_6c * *(float *)(param_2 + 0x2c);
  if ((param_1[0x19] == (MapViewNode)0x0) || (param_2[0x19] == (MapViewNode)0x0)) {
    local_78[0] = 0x7f;
  }
  else {
    local_78[0] = 0xff;
  }
  local_78[0] = local_78[0] * 0x1010101;
  AddPathSegmentToSprite
            ((MapView *)0x40800000,uVar2,this + 0x1e0,&local_60,&local_68,this + 0x368,local_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


