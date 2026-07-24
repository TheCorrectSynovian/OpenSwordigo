/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c53e4
 * Function: Caver::FontText::AddText
 * Signature: undefined __thiscall AddText(FontText * this, string * param_1, float param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::AddText(std::string const&, float, Caver::Vector2 const&) */

void __thiscall
Caver::FontText::AddText(FontText *this,string *param_1,float param_2,Vector2 *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>> *pvVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  int iVar20;
  Sprite *this_00;
  undefined8 *puVar21;
  Rectangle *pRVar22;
  int *piVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  long local_128;
  long local_118 [2];
  float local_108;
  float local_104;
  ulong local_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  ulong local_d8;
  long *local_d0;
  Color aCStack_c8 [8];
  Color aCStack_c0 [8];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  FUN_0066a528(&local_a0);
  plVar7 = (long *)(local_a0 + -0x18);
  if (*plVar7 != 0) {
    if (*(int **)(this + 0x18) == (int *)0x0) {
      iVar12 = 2;
    }
    else {
      iVar12 = **(int **)(this + 0x18) * 2 + -2;
    }
                    /* catch() { ... } // from try @ 005c5550 with catch @ 005c5460
                       catch() { ... } // from try @ 005c5620 with catch @ 005c5460 */
    this_00 = (Sprite *)(this + 0x58);
    if (this[0x28] != (FontText)0x0) {
      iVar12 = iVar12 + 2;
    }
    iVar20 = (int)*plVar7 * iVar12 * 3;
    if (*(long *)this_00 == *(long *)(*(long *)this + 8)) {
                    /* try { // try from 005c54a4 to 006c54cb has its CatchHandler @ 005c557c */
      iVar20 = *(int *)(this + 0x84) + iVar20;
      if (*(int *)(this + 0x80) < iVar20) {
        Sprite::ResizeVertexBuffer(this_00,iVar20);
      }
    }
    else {
      Sprite::Init(this_00,(intrusive_ptr *)(*(long *)this + 8),0,iVar20,true);
    }
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    fVar28 = *(float *)(param_3 + 4);
    lVar9 = *(long *)(this + 0xb8);
    if (*(long *)(this + 0xb0) == lVar9) {
      uVar3 = *(undefined4 *)param_3;
      *(float *)(this + 0xe4) = fVar28;
      *(undefined4 *)(this + 0xe0) = uVar3;
    }
    else {
      fVar25 = *(float *)(lVar9 + -0x10);
      *(float *)(this + 0xe0) = fVar25;
      fVar26 = *(float *)(lVar9 + -0xc);
      *(float *)(this + 0xe4) = fVar26;
                    /* try { // try from 005c54ec to 006c5513 has its CatchHandler @ 005c556c */
      if (-1 < *(int *)(lVar9 + -4)) {
        fVar25 = fVar25 + (float)*(int *)(*(long *)(*(long *)this + 0x10) +
                                          (long)*(int *)(lVar9 + -4) * 0x2c + 0x18);
        *(float *)(this + 0xe0) = fVar25;
      }
      *(float *)(this + 0xe0) = *(float *)param_3 + fVar25;
      *(float *)(this + 0xe4) = *(float *)(param_3 + 4) + fVar26;
    }
    pvVar16 = (vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>> *)
              (this + 200);
    puVar8 = *(undefined8 **)pvVar16;
                    /* try { // try from 005c554c to 006c554f has its CatchHandler @ 005c5564 */
                    /* try { // try from 005c5550 to 006c559f has its CatchHandler @ 005c5460 */
    puVar21 = *(undefined8 **)(this + 0xd0);
    *(undefined4 *)(this + 0x3c) = 1;
    if (puVar8 == puVar21) {
      local_100 = 0;
                    /* catch() { ... } // from try @ 005c554c with catch @ 005c5564 */
                    /* catch() { ... } // from try @ 005c54ec with catch @ 005c556c */
      if (puVar8 == *(undefined8 **)(this + 0xd8)) {
        std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::
        _M_insert_aux(pvVar16,puVar8,&local_100);
        puVar21 = *(undefined8 **)(this + 0xd0);
      }
      else {
        *puVar8 = 0;
                    /* catch() { ... } // from try @ 005c54a4 with catch @ 005c557c */
        puVar21 = (undefined8 *)(*(long *)(this + 0xd0) + 8);
        *(undefined8 **)(this + 0xd0) = puVar21;
      }
    }
                    /* try { // try from 005c55a0 to 006c561f has its CatchHandler @ 005c5628 */
    Color::ColorByReversingAlphaPremultiplication((Color *)(this + 0x10));
    Color::ColorByReversingAlphaPremultiplication((Color *)(this + 0x29));
    local_d8 = 0;
    local_d0 = (long *)0x0;
    if (*(GradientColor **)(this + 0x18) != (GradientColor *)0x0) {
      GradientColor::GradientColorByReversingAlphaPremultiplication
                (*(GradientColor **)(this + 0x18));
      plVar7 = local_d0;
      if (plStack_f8 != (long *)0x0) {
        plStack_f8[1] = plStack_f8[1] + 1;
      }
      local_d8 = local_100;
      local_d0 = plStack_f8;
      if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar9 = plVar7[2];
        plVar7[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* try { // try from 005c5620 to 006c562b has its CatchHandler @ 005c5460 */
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = plStack_f8;
                    /* catch() { ... } // from try @ 005c55a0 with catch @ 005c5628 */
                    /* catch() { ... } // from try @ 005c5640 with catch @ 005c562c */
      if ((plStack_f8 != (long *)0x0) &&
         (lVar9 = plStack_f8[1], plStack_f8[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 005c563c to 006c563f has its CatchHandler @ 005c5650 */
                    /* try { // try from 005c5640 to 006c5663 has its CatchHandler @ 005c562c */
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        lVar9 = plVar7[2];
                    /* catch() { ... } // from try @ 005c563c with catch @ 005c5650 */
        plVar7[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* try { // try from 005c5664 to 006c56c3 has its CatchHandler @ 005c5664
                       catch() { ... } // from try @ 005c5664 with catch @ 005c5664
                       catch() { ... } // from try @ 005c5ac8 with catch @ 005c5664
                       catch() { ... } // from try @ 005c5f90 with catch @ 005c5664 */
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
    }
    fVar25 = DAT_00683734;
    if (*(long *)(local_a0 + -0x18) != 0) {
      uVar14 = 0;
      iVar20 = 0;
      piVar23 = (int *)(puVar21 + -1);
      bVar19 = true;
                    /* try { // try from 005c56c4 to 006c56d7 has its CatchHandler @ 005c5d4c */
      local_128 = 0xffffffff;
      do {
        uStack_e0 = 0;
        plStack_f8 = (long *)0x0;
        local_100 = 0;
        uStack_e8 = 0;
        local_e4 = 0;
        uStack_f0 = 0;
        if (local_b0 == puStack_a8) {
          std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>
          ::_M_insert_aux((vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>
                           *)&local_b8,local_b0,&local_100);
          iVar27 = *(int *)(local_a0 + -8);
        }
        else {
          *local_b0 = 0;
          *(undefined8 *)(local_b0 + 0x14) = 0;
          *(undefined8 *)(local_b0 + 0xc) = 0;
          *(undefined8 *)(local_b0 + 4) = 0;
          *(undefined8 *)(local_b0 + 0x1c) = 0;
          iVar27 = *(int *)(local_a0 + -8);
          local_b0 = local_b0 + 0x24;
        }
        if (-1 < iVar27) {
          FUN_00668ea8(&local_a0);
          iVar27 = *(int *)(local_a0 + -8);
        }
        pbVar11 = (byte *)(local_a0 + uVar14);
        local_b8[uVar14 * 0x24] = *pbVar11;
                    /* try { // try from 005c57f8 to 006c580b has its CatchHandler @ 005c5d0c */
        *(short *)(local_b8 + uVar14 * 0x24 + 0x1c) = (short)*(undefined4 *)(this + 0x50);
        lVar9 = *(long *)this;
        if (-1 < iVar27) {
          FUN_00668ea8(&local_a0);
          pbVar11 = (byte *)(local_a0 + uVar14);
        }
        lVar17 = *(long *)(lVar9 + 0x28);
        if ((ulong)*pbVar11 < (ulong)(*(long *)(lVar9 + 0x30) - lVar17 >> 2)) {
                    /* try { // try from 005c582c to 006c5837 has its CatchHandler @ 005c5b80 */
          iVar27 = *(int *)(lVar17 + (ulong)*pbVar11 * 4);
          *(int *)(local_b8 + uVar14 * 0x24 + 0x20) = iVar27;
          if (-1 < iVar27) {
            if (*(int *)(this + 0xe8) < 0) {
              local_108 = *(float *)(this + 0xe0);
            }
            else {
                    /* try { // try from 005c584c to 006c5853 has its CatchHandler @ 005c5d08 */
              iVar6 = Font::KerningBetweenGlyphsAtIndices
                                (*(Font **)this,*(int *)(this + 0xe8),iVar27);
              local_108 = *(float *)(this + 0xe0) + (float)iVar6;
              *(float *)(this + 0xe0) = local_108;
            }
            lVar17 = (long)iVar27;
            lVar9 = *(long *)(*(long *)this + 0x10);
            local_104 = *(float *)(this + 0xe4);
                    /* try { // try from 005c58a8 to 006c58cf has its CatchHandler @ 005c5bd8 */
            Rectangle::TranslatedRectangle((Vector2 *)(lVar9 + lVar17 * 0x2c + 8));
            *(undefined8 *)(local_b8 + uVar14 * 0x24 + 0x14) = *(undefined8 *)(this + 0xe0);
                    /* try { // try from 005c58d0 to 006c58e3 has its CatchHandler @ 005c5cb4 */
            fVar26 = *(float *)(*(long *)this + 0x50);
            uVar3 = *(undefined4 *)(*(long *)this + 0x58);
                    /* try { // try from 005c58e4 to 006c58f3 has its CatchHandler @ 005c5d5c */
            *(undefined4 *)(local_b8 + uVar14 * 0x24 + 4) = (undefined4)local_100;
            *(float *)(local_b8 + uVar14 * 0x24 + 8) = fVar26 + local_104;
            *(undefined4 *)(local_b8 + uVar14 * 0x24 + 0xc) = plStack_f8._0_4_;
            *(undefined4 *)(local_b8 + uVar14 * 0x24 + 0x10) = uVar3;
            if (this[0x28] == (FontText)0x0) {
              pRVar22 = (Rectangle *)(lVar9 + lVar17 * 0x2c + 0x1c);
              if (*(long *)(this + 0x18) != 0) goto LAB_005c5940;
LAB_005c5970:
                    /* try { // try from 005c5974 to 006c599b has its CatchHandler @ 005c5d5c */
              Sprite::AddRectangle(this_00,(Rectangle *)&local_100,pRVar22,aCStack_c0);
              iVar6 = 2;
            }
            else {
              Rectangle::TranslatedRectangle((Vector2 *)&local_100);
              pRVar22 = (Rectangle *)(lVar9 + lVar17 * 0x2c + 0x1c);
              Sprite::AddRectangle(this_00,(Rectangle *)local_118,pRVar22,aCStack_c8);
                    /* try { // try from 005c592c to 006c5953 has its CatchHandler @ 005c5b88 */
              *(int *)(this + 0x50) = *(int *)(this + 0x50) + 2;
              if (*(long *)(this + 0x18) == 0) goto LAB_005c5970;
LAB_005c5940:
              iVar6 = Sprite::AddGradientRectangle
                                (this_00,(Rectangle *)&local_100,pRVar22,(shared_ptr *)&local_d8);
            }
            *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar6;
            iVar6 = *(int *)(lVar9 + lVar17 * 0x2c + 0x18);
            *(int *)(this + 0xe8) = iVar27;
            *(float *)(this + 0xe0) = *(float *)(this + 0xe0) + (float)iVar6;
          }
        }
        else {
                    /* try { // try from 005c587c to 006c5887 has its CatchHandler @ 005c5cb8 */
          *(undefined4 *)(local_b8 + uVar14 * 0x24 + 0x20) = 0xffffffff;
        }
        iVar27 = iVar20 + 1;
        piVar23[1] = (iVar27 - *piVar23) +
                     (int)((ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0)) >> 2) *
                     0x38e38e39;
        if ((param_2 <= fVar25) || (*(float *)(this + 0xe0) <= param_2)) {
                    /* try { // try from 005c59f4 to 006c5a07 has its CatchHandler @ 005c5c80 */
          if (-1 < *(int *)(local_a0 + -8)) {
            FUN_00668ea8(&local_a0);
          }
          if (*(char *)(local_a0 + uVar14) == '\n') goto LAB_005c5a18;
        }
        else {
LAB_005c5a18:
          if (bVar19) {
                    /* try { // try from 005c5a28 to 006c5a33 has its CatchHandler @ 005c5b7c */
            if ((*(int *)(this + 0x38) < 1) || (*(int *)(this + 0x3c) < *(int *)(this + 0x38))) {
              lVar9 = local_a0;
              if ((int)local_128 < iVar20) {
                    /* try { // try from 005c5a44 to 006c5a4b has its CatchHandler @ 005c5c7c */
                iVar6 = 0;
                lVar17 = (long)iVar20;
                do {
                  if (-1 < *(int *)(lVar9 + -8)) {
                    FUN_00668ea8(&local_a0);
                    lVar9 = local_a0;
                  }
                  uVar13 = (ulong)*(byte *)(lVar9 + lVar17);
                    /* try { // try from 005c5a74 to 006c5a7f has its CatchHandler @ 005c5c2c */
                  if ((*(byte *)(lVar9 + lVar17) < 0x21) &&
                     ((1L << (uVar13 & 0x3f) & 0x100000600U) != 0)) {
                    if (iVar20 <= (int)lVar17) goto LAB_005c5af0;
                    goto LAB_005c5b10;
                  }
                  lVar18 = *(long *)this;
                  if (-1 < *(int *)(lVar9 + -8)) {
                    FUN_00668ea8(&local_a0);
                    /* try { // try from 005c5aa0 to 006c5ac7 has its CatchHandler @ 005c5b84 */
                    uVar13 = (ulong)*(byte *)(local_a0 + lVar17);
                    lVar9 = local_a0;
                  }
                  lVar1 = *(long *)(lVar18 + 0x28);
                  if (uVar13 < (ulong)(*(long *)(lVar18 + 0x30) - lVar1 >> 2)) {
                    iVar6 = (*(uint *)(lVar1 + uVar13 * 4) >> 0x1f ^ 1) + iVar6;
                  }
                    /* try { // try from 005c5ac8 to 006c5bab has its CatchHandler @ 005c5664 */
                  lVar17 = lVar17 + -1;
                } while ((int)local_128 < lVar17);
                lVar17 = 0;
                iVar20 = *(int *)(lVar9 + -8);
              }
              else {
                iVar6 = 0;
                lVar17 = 0;
LAB_005c5af0:
                iVar20 = *(int *)(lVar9 + -8);
              }
              if (-1 < iVar20) {
                FUN_00668ea8(&local_a0);
                lVar9 = local_a0;
              }
              if (*(char *)(lVar9 + uVar14) == '\n') {
LAB_005c5b10:
                *(int *)(this + 0x84) = *(int *)(this + 0x84) - iVar12 * 3 * iVar6;
                *(int *)(this + 0x50) = *(int *)(this + 0x50) - iVar6 * iVar12;
                iVar27 = (int)lVar17 + 1;
                uVar13 = ((long)local_b0 - (long)local_b8 >> 2) * -0x71c71c71c71c71c7;
                uVar14 = (ulong)iVar27;
                if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
                  do {
                    local_b0 = local_b0 + -0x24;
                    uVar13 = ((long)local_b0 - (long)local_b8 >> 2) * -0x71c71c71c71c71c7;
                  } while (uVar14 <= uVar13 && uVar13 - uVar14 != 0);
                }
                    /* catch() { ... } // from try @ 005c5a28 with catch @ 005c5b7c */
                    /* catch() { ... } // from try @ 005c582c with catch @ 005c5b80 */
                    /* catch() { ... } // from try @ 005c5aa0 with catch @ 005c5b84 */
                fVar26 = *(float *)(*(long *)this + 0x48);
                    /* catch() { ... } // from try @ 005c592c with catch @ 005c5b88 */
                *(undefined4 *)(this + 0xe0) = 0;
                *(undefined4 *)(this + 0xe8) = 0xffffffff;
                fVar26 = fVar26 + 1.0;
                *(float *)(this + 0xe4) = *(float *)(this + 0xe4) - fVar26;
                    /* try { // try from 005c5bac to 006c5df7 has its CatchHandler @ 005c5fe4 */
                iVar20 = (int)lVar17 +
                         (int)((ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0)) >> 2) *
                         0x38e38e39;
                piVar23[1] = (1 - *piVar23) + iVar20;
                local_100 = (ulong)(iVar20 + 1);
                puVar2 = *(ulong **)(this + 0xd0);
                    /* catch() { ... } // from try @ 005c58a8 with catch @ 005c5bd8 */
                if (puVar2 == *(ulong **)(this + 0xd8)) {
                  std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::
                  _M_insert_aux(pvVar16,puVar2,&local_100);
                  lVar9 = *(long *)(this + 0xd0);
                }
                else {
                    /* catch() { ... } // from try @ 005c5720 with catch @ 005c5bdc */
                  *puVar2 = local_100;
                  lVar9 = *(long *)(this + 0xd0) + 8;
                  *(long *)(this + 0xd0) = lVar9;
                }
                fVar28 = fVar28 - fVar26;
                piVar23 = (int *)(lVar9 + -8);
                *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
                local_128 = lVar17;
              }
                    /* catch() { ... } // from try @ 005c56d8 with catch @ 005c5d94
                       catch() { ... } // from try @ 005c5768 with catch @ 005c5d94 */
              bVar19 = true;
              goto LAB_005c5d98;
            }
            lVar9 = *(long *)this;
            if ((ulong)(*(long *)(lVar9 + 0x30) - *(long *)(lVar9 + 0x28) >> 2) < 0x2f) {
              iVar6 = -1;
            }
            else {
              iVar6 = *(int *)(*(long *)(lVar9 + 0x28) + 0xb8);
            }
            if ((fVar25 < param_2) && (0 < iVar20)) {
              uVar14 = (ulong)*(uint *)(this + 0xe0);
                    /* catch() { ... } // from try @ 005c5a74 with catch @ 005c5c2c */
              iVar27 = *(int *)(*(long *)(lVar9 + 0x10) + (long)iVar6 * 0x2c + 0x18);
              lVar9 = (long)iVar20;
              lVar17 = ((long)iVar20 + (long)iVar20 * 8) * 4;
              do {
                if ((float)iVar27 * 3.0 + (float)uVar14 <= param_2) {
                  if (-1 < *(int *)(local_a0 + -8)) {
                    FUN_00668ea8(&local_a0);
                  }
                    /* catch() { ... } // from try @ 005c5a44 with catch @ 005c5c7c */
                  lVar18 = lVar9;
                    /* catch() { ... } // from try @ 005c59f4 with catch @ 005c5c80 */
                  if ((0x20 < *(byte *)(local_a0 + lVar9)) ||
                     ((1L << ((ulong)*(byte *)(local_a0 + lVar9) & 0x3f) & 0x100000600U) == 0))
                  break;
                }
                lVar18 = lVar9 + -1;
                *(int *)(this + 0x84) = *(int *)(this + 0x84) + iVar12 * -3;
                *(int *)(this + 0x50) = *(int *)(this + 0x50) - iVar12;
                    /* catch() { ... } // from try @ 005c58d0 with catch @ 005c5cb4 */
                    /* catch() { ... } // from try @ 005c587c with catch @ 005c5cb8 */
                uVar14 = *(ulong *)(local_b8 + lVar17 + 0x14);
                local_b0 = local_b0 + -0x24;
                *(ulong *)(this + 0xe0) = uVar14;
                *(undefined4 *)(this + 0xe8) = *(undefined4 *)(local_b8 + lVar17 + -4);
                bVar19 = 0 < lVar9;
                lVar9 = lVar18;
                lVar17 = lVar17 + -0x24;
              } while (lVar18 != 0 && bVar19);
              iVar27 = (int)lVar18 + 1;
            }
                    /* catch() { ... } // from try @ 005c584c with catch @ 005c5d08 */
            FUN_00666784(local_118,&local_a0,0,(long)iVar27);
                    /* catch() { ... } // from try @ 005c57f8 with catch @ 005c5d0c */
            FUN_0066a528(&local_100,local_118);
            puVar15 = PTR_DAT_007e5de8;
            FUN_006677d4(&local_100,"...",3);
            FUN_0066a6a8(&local_a0,&local_100);
                    /* catch() { ... } // from try @ 005c56c4 with catch @ 005c5d4c */
            if ((undefined *)(local_100 - 0x18) != puVar15) {
                    /* try { // try from 005c56d8 to 006c56e7 has its CatchHandler @ 005c5d94 */
              piVar10 = (int *)(local_100 - 8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005c5720 to 006c5747 has its CatchHandler @ 005c5bdc */
                iVar20 = *piVar10;
                *piVar10 = iVar20 + -1;
              }
              else {
                do {
                  iVar20 = *piVar10;
                  cVar4 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar19) {
                    *piVar10 = iVar20 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              puVar15 = PTR_DAT_007e5de8;
              if (iVar20 < 1) {
                operator_delete((undefined *)(local_100 - 0x18));
              }
            }
                    /* catch() { ... } // from try @ 005c58e4 with catch @ 005c5d5c
                       catch() { ... } // from try @ 005c5974 with catch @ 005c5d5c */
            if ((undefined *)(local_118[0] + -0x18) != puVar15) {
              piVar10 = (int *)(local_118[0] + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar20 = *piVar10;
                *piVar10 = iVar20 + -1;
              }
              else {
                do {
                  iVar20 = *piVar10;
                  cVar4 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar19) {
                    *piVar10 = iVar20 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar20 < 1) {
                    /* try { // try from 005c5768 to 006c578f has its CatchHandler @ 005c5d94 */
                operator_delete((undefined *)(local_118[0] + -0x18));
              }
            }
          }
          bVar19 = false;
        }
LAB_005c5d98:
        iVar20 = iVar27;
        uVar14 = (ulong)iVar20;
      } while (uVar14 < *(ulong *)(local_a0 + -0x18));
    }
    if ((ABS(*(float *)(this + 0x48)) <= DAT_00683734) &&
       (ABS(*(float *)(this + 0x4c)) <= DAT_00683734)) {
      uVar24 = *(undefined8 *)(local_b8 + 4);
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(local_b8 + 0xc);
      *(undefined8 *)(this + 0x40) = uVar24;
    }
    if (local_b0 != local_b8) {
      uVar14 = 0;
      lVar9 = 4;
      iVar12 = *(int *)(local_a0 + -8);
      while( true ) {
        if (-1 < iVar12) {
                    /* try { // try from 005c5e24 to 006c5e4b has its CatchHandler @ 005c5ff0 */
          FUN_00668ea8(&local_a0);
        }
        if ((0x20 < *(byte *)(local_a0 + uVar14)) ||
           ((1L << ((ulong)*(byte *)(local_a0 + uVar14) & 0x3f) & 0x100000600U) == 0)) {
          Rectangle::ExpandToincludeRectangle
                    ((Rectangle *)(this + 0x40),(Rectangle *)(local_b8 + lVar9));
        }
        uVar14 = uVar14 + 1;
        if ((ulong)(((long)local_b0 - (long)local_b8 >> 2) * -0x71c71c71c71c71c7) <= uVar14) break;
        lVar9 = lVar9 + 0x24;
        iVar12 = *(int *)(local_a0 + -8);
      }
    }
                    /* try { // try from 005c5e88 to 006c5f8f has its CatchHandler @ 005c5fe4 */
    fVar25 = *(float *)(this + 0x44);
    *(float *)(this + 0x44) = fVar28;
    *(float *)(this + 0x4c) = (fVar25 + *(float *)(this + 0x4c)) - fVar28;
    std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::
    _M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>
              (this + 0xb0,*(undefined8 *)(this + 0xb8));
    plVar7 = local_d0;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = local_d0[1], local_d0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      lVar9 = plVar7[2];
      plVar7[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if (local_b8 != (undefined1 *)0x0) {
      operator_delete(local_b8);
    }
    plVar7 = (long *)(local_a0 + -0x18);
  }
  if (plVar7 != (long *)PTR_DAT_007e5de8) {
    piVar23 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar23;
      *piVar23 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar23;
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar19) {
          *piVar23 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar12 < 1) {
                    /* try { // try from 005c5f90 to 006c6013 has its CatchHandler @ 005c5664 */
      operator_delete(plVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


