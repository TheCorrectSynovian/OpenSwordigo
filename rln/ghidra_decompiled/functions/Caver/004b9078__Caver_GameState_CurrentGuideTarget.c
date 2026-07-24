/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b9078
 * Function: Caver::GameState::CurrentGuideTarget
 * Signature: undefined __cdecl CurrentGuideTarget(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::CurrentGuideTarget() */

void Caver::GameState::CurrentGuideTarget(void)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  GameState *in_x0;
  shared_ptr *in_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 004b9080 to 005b9083 has its CatchHandler @ 004b9104 */
                    /* try { // try from 004b9084 to 005b9137 has its CatchHandler @ 004b8f94 */
  lVar4 = *(long *)in_x0;
  if (0 < (int)((ulong)(*(long *)(lVar4 + 0xd8) - *(long *)(lVar4 + 0xd0)) >> 4)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0xd0) + lVar5);
      plVar2 = (long *)puVar1[1];
      *(undefined8 *)in_x8 = *puVar1;
      *(long **)(in_x8 + 8) = plVar2;
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      uVar3 = GuideTargetCompleted(in_x0,in_x8);
      if (((plVar2 != (long *)0x0) && (((uVar3 ^ 1) & 1) == 0)) &&
         (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004b9080 with catch @ 004b9104 */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar4 = plVar2[2];
                    /* catch() { ... } // from try @ 004b8ffc with catch @ 004b9114 */
        plVar2[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)in_x0;
                    /* try { // try from 004b9138 to 005b91d3 has its CatchHandler @ 004b9200 */
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)((ulong)(*(long *)(lVar4 + 0xd8) - *(long *)(lVar4 + 0xd0)) >> 4));
  }
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
                    /* catch() { ... } // from try @ 004b9020 with catch @ 004b9164 */
  return;
}


