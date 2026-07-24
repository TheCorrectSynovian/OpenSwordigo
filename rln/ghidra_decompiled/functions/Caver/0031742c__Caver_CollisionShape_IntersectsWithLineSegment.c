/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031742c
 * Function: Caver::CollisionShape::IntersectsWithLineSegment
 * Signature: undefined __thiscall IntersectsWithLineSegment(CollisionShape * this, LineSegment * param_1, Vector2 * param_2, Vector2 * param_3, int * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&, Caver::Vector2*,
   Caver::Vector2*, int*) const */

uint __thiscall
Caver::CollisionShape::IntersectsWithLineSegment
          (CollisionShape *this,LineSegment *param_1,Vector2 *param_2,Vector2 *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)this;
  if (iVar1 == 1) {
    uStack_48 = (*(undefined8 **)(this + 8))[1];
    local_50 = **(undefined8 **)(this + 8);
    if (this[0x28] != (CollisionShape)0x0) {
      Rectangle::FlipHorizontally((Rectangle *)&local_50);
    }
    uVar4 = LineSegmentIntersectsRectangle
                      (param_1,(Rectangle *)&local_50,(Vector2 *)(this + 0x18),
                       *(float *)(this + 0x20),*(float *)(this + 0x24),(float *)0x0,param_2);
  }
  else if (iVar1 == 2) {
    local_50 = **(undefined8 **)(this + 8);
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(*(undefined8 **)(this + 8) + 1));
    if (this[0x28] != (CollisionShape)0x0) {
      fVar5 = (float)local_50;
      uVar3 = (ulong)local_50 >> 0x20;
      local_50 = CONCAT44((int)uVar3,-fVar5);
    }
    uVar4 = LineSegmentIntersectsCircle
                      (param_1,(Circle *)&local_50,(Vector2 *)(this + 0x18),*(float *)(this + 0x20),
                       *(float *)(this + 0x24),(float *)0x0,param_2);
  }
  else if (iVar1 == 3) {
    uVar4 = LineSegmentIntersectsPolygon
                      (param_1,*(Polygon **)(this + 8),(Vector2 *)(this + 0x18),
                       *(float *)(this + 0x20),*(float *)(this + 0x24),(float *)0x0,param_2,param_3,
                       param_4);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


