/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c3174
 * Function: std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>> * this, __normal_iterator param_1, Glyph * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Font::Glyph, std::allocator<Caver::Font::Glyph>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,
   std::vector<Caver::Font::Glyph, std::allocator<Caver::Font::Glyph> > >, Caver::Font::Glyph
   const&) */

void __thiscall
std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux
          (vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar11 = *(undefined8 **)(this + 8);
  if (puVar11 == *(undefined8 **)(this + 0x10)) {
    puVar13 = *(undefined8 **)this;
    uVar8 = ((long)puVar11 - (long)puVar13 >> 2) * 0x2e8ba2e8ba2e8ba3;
    uVar12 = uVar8;
    if ((long)puVar11 - (long)puVar13 == 0) {
      uVar12 = 1;
    }
    uVar1 = 0x5d1745d1745d174;
    if (!CARRY8(uVar12,uVar8) && uVar12 + uVar8 < 0x5d1745d1745d175) {
      uVar1 = uVar12 + uVar8;
    }
    if (uVar1 == 0) {
      puVar7 = (undefined8 *)0x0;
      puVar11 = puVar13;
    }
    else {
      if (0x5d1745d1745d174 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar7 = operator_new(uVar1 * 0x2c);
      puVar11 = *(undefined8 **)this;
    }
    puVar13 = (undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar13 >> 2) * 4);
    *puVar13 = *param_3;
    uVar14 = param_3[1];
    puVar13[2] = param_3[2];
    puVar13[1] = uVar14;
    uVar14 = param_3[3];
    puVar13[4] = param_3[4];
    puVar13[3] = uVar14;
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(param_3 + 5);
    puVar13 = puVar7;
    for (; puVar11 != param_2; puVar11 = (undefined8 *)((long)puVar11 + 0x2c)) {
      *puVar13 = *puVar11;
      uVar14 = puVar11[1];
      puVar13[2] = puVar11[2];
      puVar13[1] = uVar14;
      uVar14 = puVar11[3];
      puVar13[4] = puVar11[4];
      puVar13[3] = uVar14;
      *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar11 + 5);
      puVar13 = (undefined8 *)((long)puVar13 + 0x2c);
    }
    puVar11 = *(undefined8 **)(this + 8);
    for (; puVar6 = (undefined8 *)((long)puVar13 + 0x2c), puVar11 != param_2;
        param_2 = (undefined8 *)((long)param_2 + 0x2c)) {
      *puVar6 = *param_2;
      uVar14 = param_2[1];
      *(undefined8 *)((long)puVar13 + 0x3c) = param_2[2];
      *(undefined8 *)((long)puVar13 + 0x34) = uVar14;
      uVar14 = param_2[3];
      *(undefined8 *)((long)puVar13 + 0x4c) = param_2[4];
      *(undefined8 *)((long)puVar13 + 0x44) = uVar14;
      *(undefined4 *)((long)puVar13 + 0x54) = *(undefined4 *)(param_2 + 5);
      puVar13 = puVar6;
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar6;
    *(void **)(this + 0x10) = (void *)((long)puVar7 + uVar1 * 0x2c);
  }
  else {
    puVar11[2] = *(undefined8 *)((long)puVar11 + -0x1c);
    puVar11[1] = *(undefined8 *)((long)puVar11 + -0x24);
    *puVar11 = *(undefined8 *)((long)puVar11 + -0x2c);
    puVar11[4] = *(undefined8 *)((long)puVar11 + -0xc);
    puVar11[3] = *(undefined8 *)((long)puVar11 + -0x14);
    *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((long)puVar11 + -4);
    lVar10 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar10 + 0x2c;
    uVar14 = *param_3;
    uVar3 = param_3[1];
    uVar2 = param_3[2];
    uVar4 = param_3[3];
    uVar9 = param_3[4];
    uVar5 = *(undefined4 *)(param_3 + 5);
    puVar11 = (undefined8 *)(lVar10 + -0x2c);
    uVar12 = (long)puVar11 - (long)param_2;
    if (0 < (long)uVar12) {
      lVar10 = uVar12 / 0x2c + 1;
      do {
        lVar10 = lVar10 + -1;
        *(undefined8 *)((long)puVar11 + 0x24) = puVar11[-1];
        *(undefined8 *)((long)puVar11 + 0x1c) = puVar11[-2];
        puVar11[1] = *(undefined8 *)((long)puVar11 + -0x24);
        *puVar11 = *(undefined8 *)((long)puVar11 + -0x2c);
        puVar11[3] = *(undefined8 *)((long)puVar11 + -0x14);
        puVar11[2] = *(undefined8 *)((long)puVar11 + -0x1c);
        puVar11 = (undefined8 *)((long)puVar11 + -0x2c);
      } while (1 < lVar10);
    }
    *param_2 = uVar14;
    param_2[1] = uVar3;
    param_2[2] = uVar2;
    param_2[3] = uVar4;
    param_2[4] = uVar9;
    *(undefined4 *)(param_2 + 5) = uVar5;
  }
  return;
}


