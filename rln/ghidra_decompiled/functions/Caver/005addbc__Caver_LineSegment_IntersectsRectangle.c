/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005addbc
 * Function: Caver::LineSegment::IntersectsRectangle
 * Signature: undefined __thiscall IntersectsRectangle(LineSegment * this, Rectangle * param_1, Vector2 * param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&, Caver::Vector2*,
   Caver::Vector2*) const */

void __thiscall
Caver::LineSegment::IntersectsRectangle
          (LineSegment *this,Rectangle *param_1,Vector2 *param_2,Vector2 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = IntersectsRectangle(this,param_1,&local_3c,&local_40);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 != (Vector2 *)0x0) {
      fVar4 = (float)*(undefined8 *)this;
      fVar5 = (float)((ulong)*(undefined8 *)this >> 0x20);
      *(ulong *)param_2 =
           CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar5) * local_3c,
                    fVar4 + ((float)*(undefined8 *)(this + 8) - fVar4) * local_3c);
    }
    if (param_3 != (Vector2 *)0x0) {
      fVar4 = (float)*(undefined8 *)this;
      fVar5 = (float)((ulong)*(undefined8 *)this >> 0x20);
      *(ulong *)param_3 =
           CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar5) * local_40,
                    fVar4 + ((float)*(undefined8 *)(this + 8) - fVar4) * local_40);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


