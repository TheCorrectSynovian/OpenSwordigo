/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004de41c
 * Function: Caver::ItemOverlay::UpdateSprites
 * Signature: undefined __thiscall UpdateSprites(ItemOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::UpdateSprites() */

void __thiscall Caver::ItemOverlay::UpdateSprites(ItemOverlay *this)

{
  Sprite *this_00;
  Sprite *this_01;
  intrusive_ptr *this_02;
  FontText *this_03;
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  string *psVar10;
  undefined *puVar11;
  char *pcVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined *local_e0;
  long local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  long *local_c0;
  undefined8 local_b0;
  char acStack_9c [4];
  long local_98;
  
                    /* try { // try from 004de41c to 005de41f has its CatchHandler @ 004de450 */
  lVar8 = tpidr_el0;
                    /* catch() { ... } // from try @ 004de41c with catch @ 004de450 */
  local_98 = *(long *)(lVar8 + 0x28);
                    /* catch() { ... } // from try @ 004de3b0 with catch @ 004de454 */
                    /* try { // try from 004de458 to 005de45f has its CatchHandler @ 004de468 */
  this_00 = (Sprite *)(this + 0x150);
                    /* try { // try from 004de460 to 005de46b has its CatchHandler @ 004de364 */
  Sprite::Clear(this_00);
                    /* catch() { ... } // from try @ 004de458 with catch @ 004de468 */
  this_01 = (Sprite *)(this + 0x1a8);
  Sprite::Clear(this_01);
  puVar9 = PTR_DAT_007e5de8;
  if (*(long *)(this + 0x110) != *(long *)(this + 0x108)) {
    this_02 = (intrusive_ptr *)(this + 600);
    this_03 = (FontText *)(this + 0x200);
    uVar17 = 0;
    do {
      psVar10 = (string *)TextureLibrary::sharedLibrary();
      FUN_0066a528(&local_d0,*(long *)(*(long *)(this + 0x108) + uVar17 * 0x18) + 8);
                    /* catch() { ... } // from try @ 004de648 with catch @ 004de634 */
                    /* try { // try from 004de644 to 005de647 has its CatchHandler @ 004de658 */
      FUN_0035a030(&local_b0,"overlayitem_",&local_d0);
                    /* try { // try from 004de648 to 005de66b has its CatchHandler @ 004de634 */
                    /* catch() { ... } // from try @ 004de644 with catch @ 004de658 */
      TextureLibrary::TextureForName(psVar10,SUB81(&local_b0,0));
      if (local_b0 + -3 != (long *)puVar9) {
        plVar13 = local_b0 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar16 = (int)*plVar13;
          *(int *)plVar13 = iVar16 + -1;
        }
        else {
          do {
            iVar16 = (int)*plVar13;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *(int *)plVar13 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (iVar16 < 1) {
          operator_delete(local_b0 + -3);
        }
      }
      puVar11 = (undefined *)(CONCAT44(fStack_cc,local_d0) + -0x18);
      if (puVar11 != puVar9) {
        piVar14 = (int *)(CONCAT44(fStack_cc,local_d0) + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar16 = *piVar14;
          *piVar14 = iVar16 + -1;
        }
        else {
          do {
            iVar16 = *piVar14;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar7) {
              *piVar14 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (iVar16 < 1) {
          operator_delete(puVar11);
        }
      }
      fVar3 = *(float *)((long)local_c0 + 0x54);
      fVar4 = *(float *)(local_c0 + 0xb);
      if (*(long *)this_00 == 0) {
        Texture::SharedPtr();
        Sprite::Init(this_00,(intrusive_ptr *)&local_b0,2,4,true);
        if ((local_b0 != (long *)0x0) &&
           (iVar16 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar16, iVar16 == 0)) {
          (**(code **)(*local_b0 + 8))();
        }
      }
      uVar1 = uVar17 + 1;
      local_d0 = *(float *)(this + 0x84) + 3.0;
      fStack_cc = (*(float *)(this + 0x88) + *(float *)(this + 0x90)) -
                  (fVar4 + 10.0) * (float)uVar1;
      local_b0 = (long *)CONCAT44(local_b0._4_4_,0xffffffff);
      local_c8 = fVar3;
      fStack_c4 = fVar4;
      Sprite::AddRectangle
                (this_00,(Rectangle *)&local_d0,(Rectangle *)((long)local_c0 + 0x5c),
                 (Color *)&local_b0);
      FontText::Clear(this_03);
      uVar5 = *(uint *)(*(long *)(this + 0x108) + uVar17 * 0x18 + 0x10);
      uVar2 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar2 = uVar5;
      }
      local_e0 = puVar9 + 0x18;
      pcVar12 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                          (uVar2,acStack_9c);
      puVar11 = puVar9 + 0x18;
      if ((int)uVar5 < 0) {
        pcVar12 = pcVar12 + -1;
        *pcVar12 = '-';
        puVar11 = local_e0;
      }
      FUN_00669e1c(&local_e0,0,*(undefined8 *)(puVar11 + -0x18),pcVar12,
                   (long)acStack_9c - (long)pcVar12);
      FUN_0035a030(&local_d8,"x ",&local_e0);
      local_b0 = (long *)0x0;
      FontText::AddText(this_03,(string *)&local_d8,0.0,(Vector2 *)&local_b0);
      if ((undefined *)(local_d8 + -0x18) != puVar9) {
        piVar14 = (int *)(local_d8 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar16 = *piVar14;
          *piVar14 = iVar16 + -1;
        }
        else {
          do {
            iVar16 = *piVar14;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar7) {
              *piVar14 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (iVar16 < 1) {
          operator_delete((undefined *)(local_d8 + -0x18));
        }
      }
      if (local_e0 + -0x18 == puVar9) {
LAB_004de7d4:
        lVar15 = *(long *)this_01;
      }
      else {
        piVar14 = (int *)(local_e0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar16 = *piVar14;
          *piVar14 = iVar16 + -1;
        }
        else {
          do {
            iVar16 = *piVar14;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar7) {
              *piVar14 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (0 < iVar16) goto LAB_004de7d4;
        operator_delete(local_e0 + -0x18);
        lVar15 = *(long *)this_01;
      }
      if (lVar15 == 0) {
        Sprite::Init(this_01,this_02,0,0,true);
      }
      local_b0 = (long *)CONCAT44(fStack_cc +
                                  (float)(int)(((fStack_c4 - *(float *)(*(long *)this_03 + 0x48)) +
                                               2.0) * 0.5),local_d0 + local_c8 + 5.0);
      Sprite::Translate((Sprite *)this_02,(Vector2 *)&local_b0);
      Sprite::AddTrianglesFromSprite(this_01,(Sprite *)this_02);
      if ((local_c0 != (long *)0x0) &&
         (iVar16 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar16, iVar16 == 0)) {
        (**(code **)(*local_c0 + 8))();
      }
      uVar17 = uVar1;
    } while (uVar1 < (ulong)((*(long *)(this + 0x110) - *(long *)(this + 0x108) >> 3) *
                            -0x5555555555555555));
  }
  if (*(long *)(lVar8 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


