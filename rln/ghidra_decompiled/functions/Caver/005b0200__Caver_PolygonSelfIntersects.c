/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b0200
 * Function: Caver::PolygonSelfIntersects
 * Signature: undefined __cdecl PolygonSelfIntersects(Vector2 * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PolygonSelfIntersects(Caver::Vector2 const*, int) */

void Caver::PolygonSelfIntersects(Vector2 *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 005b00c0 with catch @ 005b0208 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (1 < param_2) {
    lVar7 = 0;
    lVar8 = 1;
    do {
      local_60 = *(undefined8 *)(param_1 + lVar7 * 8);
      lVar7 = lVar7 + 1;
      local_68 = *(undefined8 *)(param_1 + lVar7 * 8);
      lVar4 = lVar8;
      lVar1 = lVar7;
      while (lVar1 < param_2) {
        lVar1 = lVar4 + 1;
        uStack_70 = *(undefined8 *)(param_1 + lVar4 * 8);
        lVar2 = 0;
        if (lVar1 < param_2) {
          lVar2 = lVar4 + 1;
        }
                    /* try { // try from 005b0278 to 006b02ab has its CatchHandler @ 005b0278
                       catch() { ... } // from try @ 005b0278 with catch @ 005b0278
                       catch() { ... } // from try @ 005b0318 with catch @ 005b0278 */
        local_78 = *(undefined8 *)(param_1 + lVar2 * 8);
        uVar5 = LineSegmentsIntersect
                          ((Vector2 *)&local_60,(Vector2 *)&local_68,(Vector2 *)&uStack_70,
                           (Vector2 *)&local_78,(float *)0x0,(float *)0x0,false);
        lVar4 = lVar1;
        if ((uVar5 & 1) != 0) {
          uVar6 = 1;
          goto LAB_005b02c8;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar7 < param_2 + -1);
  }
  uVar6 = 0;
LAB_005b02c8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


