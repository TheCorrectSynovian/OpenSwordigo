/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad3d8
 * Function: Caver::CircleIntersectsCircle
 * Signature: undefined __cdecl CircleIntersectsCircle(Circle * param_1, Vector2 * param_2, float param_3, float param_4, Circle * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CircleIntersectsCircle(Caver::Circle const&, Caver::Vector2 const&, float, float,
   Caver::Circle const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*) */

void Caver::CircleIntersectsCircle
               (Circle *param_1,Vector2 *param_2,float param_3,float param_4,Circle *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  float fVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  Vector2::Transformed((Vector2 *)param_1,param_3,param_4);
  fVar4 = *(float *)(param_1 + 8);
  Vector2::Transformed((Vector2 *)param_5,param_7,param_8);
  fVar7 = (float)((ulong)local_78 >> 0x20);
  fVar5 = (float)local_78 - (float)uStack_70;
  fVar8 = (float)((ulong)uStack_70 >> 0x20);
  fVar6 = fVar7 - fVar8;
  fVar9 = fVar4 * param_4 + *(float *)(param_5 + 8) * param_8;
  fVar4 = fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar9 * fVar9 <= fVar4) {
    uVar2 = 0;
  }
  else {
    if ((param_9 != (Vector2 *)0x0) || (param_10 != (float *)0x0)) {
      fVar5 = SQRT(fVar4);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar4);
      }
      if (param_9 != (Vector2 *)0x0) {
        *(ulong *)param_9 =
             CONCAT44((fVar8 - fVar7) * (1.0 / fVar5),
                      ((float)uStack_70 - (float)local_78) * (1.0 / fVar5));
      }
      if (param_10 != (float *)0x0) {
        *param_10 = fVar9 - fVar5;
      }
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
                    /* try { // try from 005ad4dc to 006ad53b has its CatchHandler @ 005ad4dc
                       catch() { ... } // from try @ 005ad4dc with catch @ 005ad4dc
                       catch() { ... } // from try @ 005ad544 with catch @ 005ad4dc */
  return;
}


