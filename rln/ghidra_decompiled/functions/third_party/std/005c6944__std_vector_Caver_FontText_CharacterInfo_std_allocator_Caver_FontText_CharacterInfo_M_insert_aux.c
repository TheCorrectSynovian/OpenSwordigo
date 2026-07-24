/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6944
 * Function: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>> * this, __normal_iterator param_1, CharacterInfo * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,
   std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo> > >,
   Caver::FontText::CharacterInfo const&) */

void __thiscall
std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::
_M_insert_aux(vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>
              *this,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined2 local_5c;
  undefined1 local_5a;
  
                    /* try { // try from 005c6960 to 006c6987 has its CatchHandler @ 005c7260 */
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  puVar11 = *(undefined1 **)(this + 8);
  if (puVar11 == *(undefined1 **)(this + 0x10)) {
    lVar13 = *(long *)this;
                    /* try { // try from 005c6a4c to 006c6a53 has its CatchHandler @ 005c73c8 */
                    /* try { // try from 005c6a54 to 006c6aaf has its CatchHandler @ 005c74ec */
    lVar15 = (long)puVar11 - lVar13;
    uVar9 = (lVar15 >> 2) * -0x71c71c71c71c71c7;
    uVar17 = uVar9;
    if (lVar15 == 0) {
      uVar17 = 1;
    }
    uVar2 = 0x71c71c71c71c71c;
    if (!CARRY8(uVar17,uVar9) && uVar17 + uVar9 < 0x71c71c71c71c71d) {
      uVar2 = uVar17 + uVar9;
    }
    if (0x71c71c71c71c71c < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005c6bc8 to 006c6bdb has its CatchHandler @ 005c731c */
      FUN_00665294();
    }
    puVar6 = operator_new(uVar2 * 0x24);
    puVar11 = puVar6 + ((long)param_2 - lVar13 >> 2) * 4;
    *puVar11 = *param_3;
    uVar8 = *(undefined8 *)(param_3 + 4);
                    /* try { // try from 005c6ad0 to 006c6b7b has its CatchHandler @ 005c754c */
    *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(puVar11 + 4) = uVar8;
    *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(param_3 + 0x1c);
    puVar1 = puVar6;
    for (puVar11 = *(undefined1 **)this; puVar11 != param_2; puVar11 = puVar11 + 0x24) {
      *puVar1 = *puVar11;
      uVar8 = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(puVar1 + 4) = uVar8;
      *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(puVar11 + 0x14);
      *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar11 + 0x18);
      *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
      puVar1 = puVar1 + 0x24;
    }
    puVar11 = *(undefined1 **)(this + 8);
    for (; puVar5 = puVar1 + 0x24, puVar11 != param_2; param_2 = param_2 + 0x24) {
      *puVar5 = *param_2;
      uVar8 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(puVar1 + 0x28) = uVar8;
      *(undefined4 *)(puVar1 + 0x38) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(puVar1 + 0x3c) = *(undefined4 *)(param_2 + 0x18);
      *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(param_2 + 0x1c);
      puVar1 = puVar5;
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
                    /* try { // try from 005c6b8c to 006c6b93 has its CatchHandler @ 005c73c4 */
    *(undefined1 **)this = puVar6;
    *(undefined1 **)(this + 8) = puVar5;
                    /* try { // try from 005c6b94 to 006c6ba3 has its CatchHandler @ 005c7368 */
    *(undefined1 **)(this + 0x10) = puVar6 + uVar2 * 0x24;
  }
  else {
    *puVar11 = puVar11[-0x24];
    *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(puVar11 + -0x18);
    *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar11 + -0x20);
    *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar11 + -0x10);
    *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(puVar11 + -0xc);
    *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(puVar11 + -8);
    lVar15 = *(long *)(this + 8);
                    /* try { // try from 005c69a8 to 006c69b3 has its CatchHandler @ 005c73cc */
    *(long *)(this + 8) = lVar15 + 0x24;
    uVar3 = *param_3;
    uVar8 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 0xc);
    uVar12 = *(undefined8 *)(param_3 + 0x14);
    uVar14 = *(undefined8 *)(param_3 + 0x1c);
    puVar16 = (undefined8 *)(lVar15 + -0x24);
    uVar17 = (long)puVar16 - (long)param_2;
    if (0 < (long)uVar17) {
                    /* try { // try from 005c69d4 to 006c69fb has its CatchHandler @ 005c725c */
      lVar15 = uVar17 / 0x24 + 1;
      do {
        lVar15 = lVar15 + -1;
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)((long)puVar16 + -0x14);
        puVar16[1] = *(undefined8 *)((long)puVar16 + -0x1c);
        *puVar16 = *(undefined8 *)((long)puVar16 + -0x24);
        *(undefined8 *)((long)puVar16 + 0x14) = puVar16[-2];
        *(undefined8 *)((long)puVar16 + 0x1c) = puVar16[-1];
        puVar16 = (undefined8 *)((long)puVar16 + -0x24);
      } while (1 < lVar15);
    }
    *param_2 = uVar3;
    param_2[3] = local_5a;
    *(undefined8 *)(param_2 + 4) = uVar8;
                    /* try { // try from 005c6a34 to 006c6a3f has its CatchHandler @ 005c754c */
    *(undefined8 *)(param_2 + 0xc) = uVar10;
    *(undefined8 *)(param_2 + 0x14) = uVar12;
    *(undefined2 *)(param_2 + 1) = local_5c;
    *(undefined8 *)(param_2 + 0x1c) = uVar14;
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005c6bc0 to 006c6bc7 has its CatchHandler @ 005c7354 */
  return;
}


