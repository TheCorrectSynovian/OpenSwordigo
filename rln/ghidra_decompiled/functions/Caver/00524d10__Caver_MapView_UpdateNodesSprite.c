/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524d10
 * Function: Caver::MapView::UpdateNodesSprite
 * Signature: undefined __thiscall UpdateNodesSprite(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdateNodesSprite() */

void __thiscall Caver::MapView::UpdateNodesSprite(MapView *this)

{
  Sprite *this_00;
  bool bVar1;
  long lVar2;
  MapViewNode MVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  long lVar7;
  MapViewNode *pMVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  long local_98;
  
                    /* catch() { ... } // from try @ 00524ce0 with catch @ 00524d18 */
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 00524d8c with catch @ 00524d48 */
  Sprite::Clear((Sprite *)(this + 0x130));
  this_00 = (Sprite *)(this + 0x188);
  Sprite::Clear(this_00);
  fVar6 = DAT_00684430;
  lVar11 = *(long *)(this + 0x118);
                    /* try { // try from 00524d70 to 00624d73 has its CatchHandler @ 00524d80 */
  if (0 < (int)((ulong)(*(long *)(this + 0x120) - lVar11) >> 4)) {
                    /* catch() { ... } // from try @ 00524d70 with catch @ 00524d80 */
                    /* try { // try from 00524d84 to 00624d8b has its CatchHandler @ 00524d94 */
    lVar12 = 0;
    lVar13 = 0;
                    /* try { // try from 00524d8c to 00624d97 has its CatchHandler @ 00524d48 */
                    /* catch() { ... } // from try @ 00524d84 with catch @ 00524d94 */
    do {
      pMVar8 = *(MapViewNode **)(lVar11 + lVar12);
      if (pMVar8[0x18] != (MapViewNode)0x0) {
        lVar11 = *(long *)pMVar8;
        plVar9 = *(long **)(**(long **)(this + 0x108) + 0x48);
        plVar10 = *(long **)(**(long **)(this + 0x108) + 0x50);
        if (plVar10 != (long *)0x0) {
                    /* try { // try from 00524de0 to 00624dfb has its CatchHandler @ 00524ecc */
          plVar10[1] = plVar10[1] + 1;
        }
        plVar9 = (long *)(*plVar9 + lVar12);
        lVar2 = *plVar9;
        plVar9 = (long *)plVar9[1];
                    /* try { // try from 00524dfc to 00624ecf has its CatchHandler @ 00524d98 */
        if ((plVar9 != (long *)0x0) && (plVar9[1] == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar7 = plVar9[2];
          plVar9[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        if ((plVar10 != (long *)0x0) &&
           (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          lVar7 = plVar10[2];
          plVar10[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))(plVar10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00524de0 with catch @ 00524ecc
                        */
          }
        }
        if (lVar11 == lVar2) {
          local_a0 = 0xffffffff;
          local_9c = 0xffffffff;
          lVar11 = *(long *)(this + 0x348);
          uVar15 = *(undefined8 *)(lVar11 + 0x54);
          if ((this[0x418] == (MapView)0x0) || (pMVar8[0x29] != (MapViewNode)0x0)) {
            fVar17 = 1.0;
            if (pMVar8[0x19] == (MapViewNode)0x0) {
              local_9c = 0x59595959;
              local_a0 = 0x19191919;
            }
          }
          else {
                    /* try { // try from 00524ed8 to 00624ee3 has its CatchHandler @ 00524d98 */
            local_9c = 0x99999999;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00524ed0 with catch @ 00524ee0
                        */
            local_a0 = 0x66666666;
            *(undefined4 *)(pMVar8 + 0x2c) = 0x41333333;
            fVar17 = fVar6;
          }
          fVar14 = (float)uVar15 * fVar17;
          fVar16 = (float)((ulong)uVar15 >> 0x20) * fVar17;
          uStack_a8 = CONCAT44(fVar16,fVar14);
                    /* catch() { ... } // from try @ 00524f20 with catch @ 00524efc */
          local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)pMVar8 + 8) >> 0x20) -
                              fVar16 * 0.5,
                              (float)*(undefined8 *)(*(long *)pMVar8 + 8) - fVar14 * 0.5);
                    /* try { // try from 00524f1c to 00624f1f has its CatchHandler @ 00524f30 */
                    /* try { // try from 00524f20 to 00624f43 has its CatchHandler @ 00524efc */
          Sprite::AddRectangle
                    ((Sprite *)(this + 0x130),(Rectangle *)&local_b0,(Rectangle *)(lVar11 + 0x5c),
                     (Color *)&local_9c);
          if (pMVar8[0x1a] == (MapViewNode)0x0) {
            if (*(int *)(*(long *)pMVar8 + 0x20) == 3) {
                    /* try { // try from 00524d98 to 00624ddf has its CatchHandler @ 00524d98
                       catch(type#1 @ 00000000) { ... } // from try @ 00524d98 with catch @ 00524d98
                       catch(type#1 @ 00000000) { ... } // from try @ 00524dfc with catch @ 00524d98
                       catch(type#1 @ 00000000) { ... } // from try @ 00524ed8 with catch @ 00524d98
                        */
              plVar9 = *(long **)(this + 0x358);
              goto joined_r0x00524fb4;
            }
            if (*(int *)(*(long *)pMVar8 + 0x20) == 1) {
              plVar9 = *(long **)(this + 0x350);
              goto joined_r0x00524fb4;
            }
            plVar9 = (long *)0x0;
            bVar1 = true;
            MVar3 = pMVar8[0x19];
          }
          else {
                    /* catch() { ... } // from try @ 00524f1c with catch @ 00524f30 */
            plVar9 = *(long **)(this + 0x360);
joined_r0x00524fb4:
            if (plVar9 != (long *)0x0) {
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            }
            bVar1 = plVar9 == (long *)0x0;
            if (!bVar1) {
              fVar14 = fVar17 * (float)*(undefined8 *)((long)plVar9 + 0x54);
              fVar16 = fVar17 * (float)((ulong)*(undefined8 *)((long)plVar9 + 0x54) >> 0x20);
              local_d0 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)pMVar8 + 8) >> 0x20) -
                                  fVar16 * 0.5,
                                  (float)*(undefined8 *)(*(long *)pMVar8 + 8) - fVar14 * 0.5);
              Vector2::Rounded();
              local_c0 = local_c8;
              local_b8 = CONCAT44(fVar16,fVar14);
              Sprite::AddRectangle
                        (this_00,(Rectangle *)&local_c0,(Rectangle *)((long)plVar9 + 0x5c),
                         (Color *)&local_a0);
            }
            MVar3 = pMVar8[0x19];
          }
          if (MVar3 != (MapViewNode)0x0) {
            AddNodeIconsToSprite(this,pMVar8,(Rectangle *)&local_b0,fVar17);
          }
          if (pMVar8[0x1c] == (MapViewNode)0x0) {
            if (pMVar8[0x1d] != (MapViewNode)0x0) {
              plVar10 = *(long **)(this + 0x378);
              goto joined_r0x00525080;
            }
          }
          else {
            plVar10 = *(long **)(this + 0x370);
joined_r0x00525080:
            if (plVar10 != (long *)0x0) {
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              fVar14 = fVar17 * (float)*(undefined8 *)((long)plVar10 + 0x54);
              fVar17 = fVar17 * (float)((ulong)*(undefined8 *)((long)plVar10 + 0x54) >> 0x20);
              local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)pMVar8 + 8) >> 0x20) -
                                  fVar17 * 0.5,
                                  (float)*(undefined8 *)(*(long *)pMVar8 + 8) - fVar14 * 0.5);
              Vector2::Rounded();
              local_c0 = local_c8;
              local_dc = 0xffffffff;
              local_b8 = CONCAT44(fVar17,fVar14);
              Sprite::AddRectangle
                        (this_00,(Rectangle *)&local_c0,(Rectangle *)((long)plVar10 + 0x5c),
                         (Color *)&local_dc);
              iVar4 = (int)plVar10[1] + -1;
              *(int *)(plVar10 + 1) = iVar4;
              if (iVar4 == 0) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
            }
          }
          if ((!bVar1) && (iVar4 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar4, iVar4 == 0)) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      lVar11 = *(long *)(this + 0x118);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar13 < (int)((ulong)(*(long *)(this + 0x120) - lVar11) >> 4));
  }
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


