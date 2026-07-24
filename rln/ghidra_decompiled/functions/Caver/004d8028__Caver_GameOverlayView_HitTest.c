/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d8028
 * Function: Caver::GameOverlayView::HitTest
 * Signature: undefined __cdecl HitTest(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::HitTest(Caver::Vector2 const&) */

void Caver::GameOverlayView::HitTest(Vector2 *param_1)

{
  long *plVar1;
  Vector2 *pVVar2;
  ulong uVar3;
  undefined8 extraout_x0;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long lVar4;
  long lVar5;
  Vector2 *pVVar6;
  long *plVar7;
  long *plVar8;
  Vector2 *pVVar9;
  Vector2 *pVVar10;
  Vector2 *pVVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_b0 [8];
  Vector2 *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  
                    /* catch() { ... } // from try @ 004d8008 with catch @ 004d8040 */
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004d80b8 to 005d80bb has its CatchHandler @ 004d80cc */
  if (((param_1[0xe4] == (Vector2)0x0) && (param_1[0xe5] != (Vector2)0x0)) &&
     (uVar3 = (**(code **)(*(long *)param_1 + 0xe0))(param_1), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 004d80b8 with catch @ 004d80cc */
    pVVar9 = param_1 + 0x20;
    if (*(Vector2 **)pVVar9 == pVVar9) {
      plVar7 = (long *)0x0;
LAB_004d82bc:
      if (param_1[0xe6] != (Vector2)0x0) {
        if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar4 = plVar7[2];
          plVar7[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
        goto LAB_004d8070;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
        local_98 = (long *)(PTR_vtable_007e6120 + 0x10);
        boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_98);
        std::exception::~exception((exception *)&local_98);
        if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar5 = plVar7[2];
          plVar7[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_006818c4(extraout_x0);
      }
      lVar4 = plVar8[1] + 1;
      *in_x8 = *(undefined8 *)(param_1 + 8);
      in_x8[1] = plVar8;
      plVar8[1] = lVar4;
      if (lVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar4 = plVar8[2];
        plVar8[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      if (plVar7 == (long *)0x0) goto LAB_004d8074;
      lVar4 = plVar7[1] + -1;
      plVar7[1] = lVar4;
    }
    else {
      pVVar11 = (Vector2 *)0x0;
      plVar8 = (long *)0x0;
      pVVar10 = pVVar9;
      fVar15 = DAT_0068431c;
      do {
                    /* try { // try from 004d80f4 to 005d80f7 has its CatchHandler @ 004d8134 */
        local_98 = *(long **)(*(long *)(pVVar10 + 8) + 0x10);
        local_90 = *(long **)(*(long *)(pVVar10 + 8) + 0x18);
        if (local_90 != (long *)0x0) {
          local_90[1] = local_90[1] + 1;
        }
        uVar3 = GUIView::IsSubviewRemoved((GUIView *)param_1,(shared_ptr *)&local_98);
        plVar1 = local_98;
        plVar7 = plVar8;
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 004d8120 to 005d8127 has its CatchHandler @ 004d8130 */
                    /* try { // try from 004d8128 to 005d8137 has its CatchHandler @ 004d807c */
                    /* catch() { ... } // from try @ 004d8120 with catch @ 004d8130 */
          pcVar12 = *(code **)(*local_98 + 0xe8);
                    /* catch() { ... } // from try @ 004d80f4 with catch @ 004d8134 */
                    /* try { // try from 004d8138 to 005d817f has its CatchHandler @ 004d8138
                       catch(type#1 @ 00000000) { ... } // from try @ 004d8138 with catch @ 004d8138
                       catch(type#1 @ 00000000) { ... } // from try @ 004d819c with catch @ 004d8138
                       catch(type#1 @ 00000000) { ... } // from try @ 004d81e4 with catch @ 004d8138
                        */
          (**(code **)(*(long *)param_1 + 0x100))(auStack_b0,param_1);
          (*pcVar12)(&local_a8,plVar1,auStack_b0);
          pVVar2 = local_a8;
          if (local_a8 != (Vector2 *)0x0) {
            do {
              pVVar6 = pVVar2;
              pVVar2 = *(Vector2 **)(pVVar6 + 0x58);
            } while (*(Vector2 **)(pVVar6 + 0x58) != param_1);
                    /* try { // try from 004d8180 to 005d819b has its CatchHandler @ 004d81d8 */
            fVar13 = ((float)*(undefined8 *)(pVVar6 + 0x74) +
                     (float)*(undefined8 *)(pVVar6 + 0x7c) * 0.5) - (float)*in_x1;
            fVar14 = ((float)((ulong)*(undefined8 *)(pVVar6 + 0x74) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(pVVar6 + 0x7c) >> 0x20) * 0.5) -
                     (float)((ulong)*in_x1 >> 0x20);
            fVar13 = fVar13 * fVar13 + fVar14 * fVar14;
            if (fVar13 < fVar15) {
                    /* try { // try from 004d819c to 005d81db has its CatchHandler @ 004d8138 */
              if (local_a0 != (long *)0x0) {
                local_a0[1] = local_a0[1] + 1;
              }
              plVar7 = local_a0;
              pVVar11 = local_a8;
              fVar15 = fVar13;
              if ((plVar8 != (long *)0x0) &&
                 (lVar4 = plVar8[1], plVar8[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                lVar4 = plVar8[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d8180 with catch @ 004d81d8
                        */
                    /* try { // try from 004d81dc to 005d81e3 has its CatchHandler @ 004d81ec */
                plVar8[2] = lVar4 + -1;
                if (lVar4 + -1 == 0) {
                    /* try { // try from 004d81e4 to 005d81ef has its CatchHandler @ 004d8138 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d81dc with catch @ 004d81ec
                        */
                    /* catch() { ... } // from try @ 004d823c with catch @ 004d81f0
                       catch() { ... } // from try @ 004d8280 with catch @ 004d81f0 */
                  (**(code **)(*plVar8 + 0x18))(plVar8);
                }
              }
            }
          }
          plVar8 = local_a0;
          if ((local_a0 != (long *)0x0) &&
             (lVar4 = local_a0[1], local_a0[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
            lVar4 = plVar8[2];
            plVar8[2] = lVar4 + -1;
                    /* try { // try from 004d8234 to 005d823b has its CatchHandler @ 004d8274 */
            if (lVar4 + -1 == 0) {
                    /* try { // try from 004d823c to 005d8277 has its CatchHandler @ 004d81f0 */
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
        }
        plVar8 = local_90;
        if ((local_90 != (long *)0x0) &&
           (lVar4 = local_90[1], local_90[1] = lVar4 + -1, lVar4 + -1 == 0)) {
          (**(code **)(*local_90 + 0x10))(local_90);
          lVar4 = plVar8[2];
                    /* catch() { ... } // from try @ 004d8234 with catch @ 004d8274 */
                    /* try { // try from 004d8278 to 005d827f has its CatchHandler @ 004d8288 */
          plVar8[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
                    /* try { // try from 004d8280 to 005d828b has its CatchHandler @ 004d81f0 */
                    /* catch() { ... } // from try @ 004d8278 with catch @ 004d8288 */
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
        }
                    /* catch() { ... } // from try @ 004d82a4 with catch @ 004d8290 */
        pVVar10 = *(Vector2 **)(pVVar10 + 8);
        plVar8 = plVar7;
      } while (*(Vector2 **)pVVar9 != pVVar10);
                    /* try { // try from 004d82a0 to 005d82a3 has its CatchHandler @ 004d82b4 */
      if (pVVar11 == (Vector2 *)0x0) goto LAB_004d82bc;
                    /* try { // try from 004d82a4 to 005d82c7 has its CatchHandler @ 004d8290 */
      *in_x8 = pVVar11;
      in_x8[1] = plVar7;
      if (plVar7 == (long *)0x0) goto LAB_004d8074;
      lVar4 = plVar7[1];
    }
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  else {
LAB_004d8070:
    *in_x8 = 0;
    in_x8[1] = 0;
  }
LAB_004d8074:
                    /* catch() { ... } // from try @ 004d8128 with catch @ 004d807c */
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


