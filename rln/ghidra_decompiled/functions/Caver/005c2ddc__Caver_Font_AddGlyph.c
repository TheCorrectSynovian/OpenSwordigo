/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2ddc
 * Function: Caver::Font::AddGlyph
 * Signature: undefined __thiscall AddGlyph(Font * this, Glyph * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Font::AddGlyph(Caver::Font::Glyph const&) */

void __thiscall Caver::Font::AddGlyph(Font *this,Glyph *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  vector<int,std::allocator<int>> *pvVar8;
  undefined8 uVar9;
  int local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x18);
  iVar1 = (int)((ulong)((long)puVar4 - *(long *)(this + 0x10)) >> 2) * -0x45d1745d;
  local_40[0] = iVar1;
  if (*(undefined8 **)(this + 0x20) == puVar4) {
    std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux
              ((vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>> *)(this + 0x10),puVar4
               ,param_1);
    lVar5 = *(long *)(this + 0x18);
  }
  else {
                    /* try { // try from 005c2e30 to 006c2e57 has its CatchHandler @ 005c2e9c */
    *puVar4 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 8);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    puVar4[4] = *(undefined8 *)(param_1 + 0x20);
    puVar4[3] = uVar9;
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_1 + 0x28);
    lVar5 = *(long *)(this + 0x18) + 0x2c;
    *(long *)(this + 0x18) = lVar5;
  }
  *(int *)(lVar5 + -0x2c) = iVar1;
                    /* catch() { ... } // from try @ 005c2cfc with catch @ 005c2e74
                       catch() { ... } // from try @ 005c2d3c with catch @ 005c2e74
                       catch() { ... } // from try @ 005c2db8 with catch @ 005c2e74 */
  uVar6 = (ulong)*(int *)(param_1 + 4);
  pvVar8 = (vector<int,std::allocator<int>> *)(this + 0x28);
                    /* catch() { ... } // from try @ 005c2d6c with catch @ 005c2e80 */
  piVar3 = *(int **)(this + 0x30);
  uVar7 = (long)piVar3 - *(long *)pvVar8 >> 2;
  if (uVar6 < uVar7) {
    *(int *)(*(long *)pvVar8 + uVar6 * 4) = local_40[0];
                    /* catch() { ... } // from try @ 005c2e30 with catch @ 005c2e9c */
  }
  else {
                    /* catch() { ... } // from try @ 005c2ed0 with catch @ 005c2eb0
                       catch() { ... } // from try @ 005c2f34 with catch @ 005c2eb0 */
    if ((uVar7 + 1 <= uVar6) && (local_40[1] = 0xffffffff, uVar7 < uVar6)) {
                    /* try { // try from 005c2ec8 to 006c2ecf has its CatchHandler @ 005c2f00 */
      std::vector<int,std::allocator<int>>::_M_fill_insert(pvVar8,piVar3,uVar6 - uVar7,local_40 + 1)
      ;
      piVar3 = *(int **)(this + 0x30);
    }
                    /* try { // try from 005c2ed0 to 006c2f07 has its CatchHandler @ 005c2eb0 */
    if (piVar3 == *(int **)(this + 0x38)) {
      std::vector<int,std::allocator<int>>::_M_insert_aux(pvVar8,piVar3,local_40);
    }
    else {
      *piVar3 = local_40[0];
      *(int **)(this + 0x30) = piVar3 + 1;
    }
  }
                    /* catch() { ... } // from try @ 005c2ec8 with catch @ 005c2f00 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c2f08 to 006c2f0f has its CatchHandler @ 005c2f1c */
                    /* try { // try from 005c2f18 to 006c2f1b has its CatchHandler @ 005c2f2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005c2f08 with catch @ 005c2f1c */
  __stack_chk_fail();
}


