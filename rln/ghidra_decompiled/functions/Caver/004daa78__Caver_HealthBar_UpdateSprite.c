/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004daa78
 * Function: Caver::HealthBar::UpdateSprite
 * Signature: undefined __thiscall UpdateSprite(HealthBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::UpdateSprite() */

void __thiscall Caver::HealthBar::UpdateSprite(HealthBar *this)

{
  Sprite *this_00;
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  HealthBar **ppHVar5;
  float fVar6;
  HealthBar *pHVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  HealthBar *local_c0;
  HealthBar *local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  this_00 = (Sprite *)(this + 0x128);
  iVar2 = *(int *)(this + 0x10c);
  Sprite::Clear(this_00);
  fVar6 = DAT_0068493c;
  if (2 < iVar2 + 1U) {
    local_b8 = this + 0x100;
    local_c0 = this + 0xf8;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    lVar12 = 0;
    uVar10 = 0;
    do {
      pHVar7 = this + 0xf0;
      if (*(uint *)(this + 0x114) < (int)lVar12 + 2U) {
        ppHVar5 = &local_b8;
        if ((int)lVar12 + 1U <= *(uint *)(this + 0x114)) {
          ppHVar5 = &local_c0;
        }
        pHVar7 = *ppHVar5;
      }
      fVar14 = *(float *)(this + 0x11c);
      lVar13 = *(long *)pHVar7;
      if (this[0x108] == (HealthBar)0x0) {
        fVar15 = 0.0;
      }
      else {
        iVar3 = *(int *)(this + 0x10c);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        fVar15 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                 (fVar14 + fVar14 * fVar6 * (float)((iVar3 >> 1) + -1)) * 0.5;
      }
      local_98 = (float)(int)(fVar14 * fVar6 * (float)(int)uVar10 + fVar15) + fVar14 * 0.5;
      fStack_94 = *(float *)(this + 0x88) + *(float *)(this + 0x120) * 0.5;
      uVar1 = uVar10 + 1;
      Vector2::Rounded();
      uVar16 = *(undefined8 *)(this + 0x11c);
      if ((uVar10 < (ulong)(*(long *)(this + 0x198) - *(long *)(this + 400) >> 4)) &&
         (lVar8 = *(long *)(*(long *)(this + 400) + lVar12 * 8), lVar8 != 0)) {
        fVar14 = (float)((ulong)uVar16 >> 0x20);
        if (*(long *)(this + 0xf0) == lVar13) {
          local_a8 = CONCAT44((float)((ulong)local_90 >> 0x20) - fVar14 * 0.5,
                              (float)local_90 - (float)uVar16 * 0.5);
          local_ac = 0xffffffff;
          uStack_a0 = uVar16;
          Sprite::AddRectangle
                    (this_00,(Rectangle *)&local_a8,(Rectangle *)(*(long *)(this + 0x100) + 0x5c),
                     (Color *)&local_ac);
          lVar8 = *(long *)(*(long *)(this + 400) + lVar12 * 8);
          if (*(int *)(lVar8 + 0xa0) == 0) goto LAB_004dac94;
LAB_004dac08:
          pfVar9 = *(float **)(lVar8 + 0xa8);
          plVar11 = *(long **)(lVar8 + 0xb0);
joined_r0x004daca0:
          if (plVar11 == (long *)0x0) goto LAB_004daca4;
LAB_004dac10:
          fVar15 = *pfVar9;
          if (plVar11[1] == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            lVar8 = plVar11[2];
            plVar11[2] = lVar8 + -1;
            if (lVar8 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
        }
        else {
                    /* try { // try from 004dac00 to 005dac03 has its CatchHandler @ 004dadfc */
                    /* try { // try from 004dac04 to 005dacfb has its CatchHandler @ 004da884 */
          if (*(int *)(lVar8 + 0xa0) != 0) goto LAB_004dac08;
LAB_004dac94:
          if (*(char *)(lVar8 + 100) != '\0') {
            pfVar9 = *(float **)(lVar8 + 0x90);
            plVar11 = *(long **)(lVar8 + 0x98);
            goto joined_r0x004daca0;
          }
          pfVar9 = *(float **)(lVar8 + 0x78);
          plVar11 = *(long **)(lVar8 + 0x80);
          if (plVar11 != (long *)0x0) goto LAB_004dac10;
LAB_004daca4:
          fVar15 = *pfVar9;
        }
        uVar16 = CONCAT44(fVar14 * fVar15,(float)uVar16 * fVar15);
      }
      local_a8 = CONCAT44((float)((ulong)local_90 >> 0x20) - (float)((ulong)uVar16 >> 0x20) * 0.5,
                          (float)local_90 - (float)uVar16 * 0.5);
      local_ac = 0xffffffff;
      uStack_a0 = uVar16;
      Sprite::AddRectangle
                (this_00,(Rectangle *)&local_a8,(Rectangle *)(lVar13 + 0x5c),(Color *)&local_ac);
      lVar12 = lVar12 + 2;
      uVar10 = uVar1;
    } while (uVar1 < (uint)(iVar2 >> 1));
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
                    /* try { // try from 004dacfc to 005dacff has its CatchHandler @ 004dadf8 */
                    /* try { // try from 004dad00 to 005dae0f has its CatchHandler @ 004da884 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


