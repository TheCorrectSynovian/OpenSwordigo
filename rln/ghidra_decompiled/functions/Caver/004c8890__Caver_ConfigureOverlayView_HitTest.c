/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c8890
 * Function: Caver::ConfigureOverlayView::HitTest
 * Signature: undefined __cdecl HitTest(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&) */

void Caver::ConfigureOverlayView::HitTest(Vector2 *param_1)

{
  bool bVar1;
  long *plVar2;
  Vector2 *pVVar3;
  ulong uVar4;
  undefined8 extraout_x0;
  undefined8 *in_x1;
  long *in_x8;
  long lVar5;
  long lVar6;
  Vector2 *pVVar7;
  long *plVar8;
  long *plVar9;
  Vector2 *pVVar10;
  Vector2 *pVVar11;
  Vector2 *pVVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c0 [8];
  Vector2 *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  if (((param_1[0xe4] == (Vector2)0x0) && (param_1[0xe5] != (Vector2)0x0)) &&
     (uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1), (uVar4 & 1) != 0)) {
                    /* catch() { ... } // from try @ 004c87dc with catch @ 004c8938 */
    GUIView::HitTest(param_1);
    if (local_98 == *(long *)(param_1 + 0x108)) {
      *in_x8 = local_98;
      in_x8[1] = (long)local_90;
      if (local_90 != (long *)0x0) {
        bVar1 = true;
        local_90[1] = local_90[1] + 1;
        plVar9 = local_90;
        goto joined_r0x004c8b68;
      }
      bVar1 = true;
    }
    else {
      pVVar10 = param_1 + 0x20;
      if (*(Vector2 **)pVVar10 == pVVar10) {
                    /* try { // try from 004c8b70 to 005c8b7b has its CatchHandler @ 004c8e5c */
        plVar8 = (long *)0x0;
LAB_004c8b74:
        if (param_1[0xe6] == (Vector2)0x0) {
                    /* try { // try from 004c8b98 to 005c8bab has its CatchHandler @ 004c8e3c */
          plVar9 = *(long **)(param_1 + 0x10);
          if ((plVar9 == (long *)0x0) || (plVar9[1] == 0)) {
            local_a8 = (long *)(PTR_vtable_007e6120 + 0x10);
            boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_a8);
            std::exception::~exception((exception *)&local_a8);
            if ((plVar8 != (long *)0x0) &&
               (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 004c8dbc to 005c8dc3 has its CatchHandler @ 004c8ecc */
              (**(code **)(*plVar8 + 0x10))(plVar8);
              lVar6 = plVar8[2];
                    /* try { // try from 004c8dc4 to 005c8e9b has its CatchHandler @ 004c8aec */
                    /* catch() { ... } // from try @ 004c8bac with catch @ 004c8dc8 */
              plVar8[2] = lVar6 + -1;
              if (lVar6 + -1 == 0) {
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
            if ((local_90 != (long *)0x0) &&
               (lVar6 = local_90[1], local_90[1] = lVar6 + -1, lVar6 + -1 == 0)) {
              (**(code **)(*local_90 + 0x10))(local_90);
              lVar6 = local_90[2];
              local_90[2] = lVar6 + -1;
              if (lVar6 + -1 == 0) {
                (**(code **)(*local_90 + 0x18))(local_90);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_006818c4(extraout_x0);
          }
                    /* try { // try from 004c8bac to 005c8bb7 has its CatchHandler @ 004c8dc8 */
          lVar5 = plVar9[1] + 1;
          *in_x8 = *(long *)(param_1 + 8);
          in_x8[1] = (long)plVar9;
          plVar9[1] = lVar5;
          if (lVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar5 = plVar9[2];
                    /* try { // try from 004c8bd4 to 005c8bdf has its CatchHandler @ 004c8e78 */
            plVar9[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
                    /* try { // try from 004c8be0 to 005c8bf3 has its CatchHandler @ 004c8e58 */
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          bVar1 = true;
        }
        else {
                    /* try { // try from 004c8b7c to 005c8b83 has its CatchHandler @ 004c8e40 */
          bVar1 = false;
        }
        plVar9 = local_90;
        if (plVar8 == (long *)0x0) goto joined_r0x004c8b68;
      }
      else {
                    /* catch() { ... } // from try @ 004c880c with catch @ 004c8970 */
        pVVar12 = (Vector2 *)0x0;
        plVar9 = (long *)0x0;
        pVVar11 = pVVar10;
        fVar16 = DAT_0068431c;
        do {
          local_a8 = *(long **)(*(long *)(pVVar11 + 8) + 0x10);
          local_a0 = *(long **)(*(long *)(pVVar11 + 8) + 0x18);
          if (local_a0 != (long *)0x0) {
            local_a0[1] = local_a0[1] + 1;
          }
          uVar4 = GUIView::IsSubviewRemoved((GUIView *)param_1,(shared_ptr *)&local_a8);
          plVar2 = local_a8;
          plVar8 = plVar9;
          if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 004c87a4 with catch @ 004c89b0 */
            pcVar13 = *(code **)(*local_a8 + 0xe8);
            (**(code **)(*(long *)param_1 + 0x100))(auStack_c0,param_1);
            (*pcVar13)(&local_b8,plVar2,auStack_c0);
            pVVar3 = local_b8;
            if (local_b8 != (Vector2 *)0x0) {
              do {
                pVVar7 = pVVar3;
                pVVar3 = *(Vector2 **)(pVVar7 + 0x58);
              } while (*(Vector2 **)(pVVar7 + 0x58) != param_1);
              fVar14 = ((float)*(undefined8 *)(pVVar7 + 0x74) +
                       (float)*(undefined8 *)(pVVar7 + 0x7c) * 0.5) - (float)*in_x1;
              fVar15 = ((float)((ulong)*(undefined8 *)(pVVar7 + 0x74) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(pVVar7 + 0x7c) >> 0x20) * 0.5) -
                       (float)((ulong)*in_x1 >> 0x20);
              fVar14 = fVar14 * fVar14 + fVar15 * fVar15;
              if (fVar14 < fVar16) {
                if (local_b0 != (long *)0x0) {
                  local_b0[1] = local_b0[1] + 1;
                }
                plVar8 = local_b0;
                pVVar12 = local_b8;
                fVar16 = fVar14;
                if ((plVar9 != (long *)0x0) &&
                   (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  lVar5 = plVar9[2];
                  plVar9[2] = lVar5 + -1;
                  if (lVar5 + -1 == 0) {
                    (**(code **)(*plVar9 + 0x18))(plVar9);
                  }
                }
              }
            }
            plVar9 = local_b0;
            if ((local_b0 != (long *)0x0) &&
               (lVar5 = local_b0[1], local_b0[1] = lVar5 + -1, lVar5 + -1 == 0)) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
              lVar5 = plVar9[2];
              plVar9[2] = lVar5 + -1;
              if (lVar5 + -1 == 0) {
                (**(code **)(*plVar9 + 0x18))(plVar9);
              }
            }
          }
          plVar9 = local_a0;
          if ((local_a0 != (long *)0x0) &&
             (lVar5 = local_a0[1], local_a0[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004c8aec to 005c8b33 has its CatchHandler @ 004c8aec
                       catch() { ... } // from try @ 004c8aec with catch @ 004c8aec
                       catch() { ... } // from try @ 004c8b40 with catch @ 004c8aec
                       catch() { ... } // from try @ 004c8d08 with catch @ 004c8aec
                       catch() { ... } // from try @ 004c8dc4 with catch @ 004c8aec
                       catch() { ... } // from try @ 004c8ec4 with catch @ 004c8aec */
            (**(code **)(*local_a0 + 0x10))(local_a0);
            lVar5 = plVar9[2];
            plVar9[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          pVVar11 = *(Vector2 **)(pVVar11 + 8);
          plVar9 = plVar8;
        } while (*(Vector2 **)pVVar10 != pVVar11);
        if (pVVar12 == (Vector2 *)0x0) goto LAB_004c8b74;
        *in_x8 = (long)pVVar12;
        in_x8[1] = (long)plVar8;
        if (plVar8 == (long *)0x0) {
          bVar1 = true;
          plVar9 = local_90;
          goto joined_r0x004c8b68;
        }
                    /* try { // try from 004c8b34 to 005c8b3f has its CatchHandler @ 004c8e6c */
        bVar1 = true;
                    /* try { // try from 004c8b40 to 005c8b6f has its CatchHandler @ 004c8aec */
        plVar8[1] = plVar8[1] + 1;
      }
      lVar5 = plVar8[1];
      plVar8[1] = lVar5 + -1;
      plVar9 = local_90;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 004c8c08 to 005c8c13 has its CatchHandler @ 004c8d9c */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar5 = plVar8[2];
        plVar8[2] = lVar5 + -1;
        plVar9 = local_90;
        if (lVar5 + -1 == 0) {
                    /* try { // try from 004c8c30 to 005c8c37 has its CatchHandler @ 004c8e58 */
          (**(code **)(*plVar8 + 0x18))(plVar8);
          plVar9 = local_90;
        }
      }
joined_r0x004c8b68:
      if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004c8c58 to 005c8cc7 has its CatchHandler @ 004c8d98 */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar5 = plVar9[2];
        plVar9[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
    }
    if (bVar1) goto LAB_004c88dc;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
LAB_004c88dc:
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


