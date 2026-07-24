/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568ce0
 * Function: Caver::Scene::LineSegmentIntersectsGround
 * Signature: undefined __thiscall LineSegmentIntersectsGround(Scene * this, LineSegment * param_1, float param_2, float param_3, Vector2 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&, float, float,
   Caver::Vector2*) */

undefined4 __thiscall
Caver::Scene::LineSegmentIntersectsGround
          (Scene *this,LineSegment *param_1,float param_2,float param_3,Vector2 *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  CollisionShape *this_00;
  CollisionShapeComponent *this_01;
  SceneObject *this_02;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_98;
  float fStack_94;
  Rectangle aRStack_90 [8];
  float local_88;
  float local_84;
  void **local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  LineSegment::Bounds();
  if (local_88 < DAT_00683944) {
    local_88 = 0.01;
  }
  if (local_84 < DAT_00683944) {
    local_84 = 0.01;
  }
  uVar2 = SceneGrid::GetObjectsInBounds((SceneGrid *)(this + 0x3a0),aRStack_90,&local_80);
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    fVar7 = DAT_0068431c;
    do {
      this_01 = local_80[lVar4];
      if (((((this_01[0x17a] != (CollisionShapeComponent)0x0) &&
            (this_01[0x178] != (CollisionShapeComponent)0x0)) &&
           (this_02 = *(SceneObject **)(this_01 + 0x28), this_02 != (SceneObject *)0x0)) &&
          ((uVar3 = SceneObject::isHidden(this_02), (uVar3 & 1) == 0 &&
           (*(float *)(this_02 + 0x78) + *(float *)(this_02 + 0xb8) <= param_3)))) &&
         (param_2 <= *(float *)(this_02 + 0x78) + *(float *)(this_02 + 0xbc))) {
        this_00 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_01);
                    /* try { // try from 00568de8 to 00668f37 has its CatchHandler @ 00568de8
                       catch() { ... } // from try @ 00568de8 with catch @ 00568de8
                       catch() { ... } // from try @ 00569058 with catch @ 00568de8
                       catch() { ... } // from try @ 005691e8 with catch @ 00568de8 */
        uVar3 = CollisionShape::IntersectsWithLineSegment
                          (this_00,param_1,(Vector2 *)&local_98,(Vector2 *)0x0,(int *)0x0);
        if (((uVar3 & 1) != 0) &&
           (fVar6 = (*(float *)param_1 - local_98) * (*(float *)param_1 - local_98) +
                    (*(float *)(param_1 + 4) - fStack_94) * (*(float *)(param_1 + 4) - fStack_94),
           fVar6 < fVar7)) {
          if (param_4 == (Vector2 *)0x0) {
            uVar5 = 1;
            break;
          }
          uVar5 = 1;
          *(float *)param_4 = local_98;
          *(float *)(param_4 + 4) = fStack_94;
          fVar7 = fVar6;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


