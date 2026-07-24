/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6bcc
 * Function: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>
 * Signature: void __cdecl _M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__normal_iterator param_1, __normal_iterator param_2, __normal_iterator param_3, forward_iterator_tag param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo>
   >::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,
   std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo> > >
   >(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,
   std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo> > >,
   __gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,
   std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo> > >,
   __gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,
   std::vector<Caver::FontText::CharacterInfo, std::allocator<Caver::FontText::CharacterInfo> > >,
   std::forward_iterator_tag) */

void std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::
     _M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  
                    /* try { // try from 005c6bf0 to 006c6c83 has its CatchHandler @ 005c7318 */
  if (param_3 != param_4) {
    puVar11 = (undefined8 *)param_1[1];
    uVar8 = (long)param_4 - (long)param_3;
    lVar12 = (long)uVar8 >> 2;
    uVar13 = lVar12 * -0x71c71c71c71c71c7;
    if ((ulong)((param_1[2] - (long)puVar11 >> 2) * -0x71c71c71c71c71c7) < uVar13) {
      puVar9 = (undefined8 *)*param_1;
      lVar12 = (long)puVar11 - (long)puVar9 >> 2;
      uVar8 = lVar12 * -0x71c71c71c71c71c7;
      if (lVar12 * 0x71c71c71c71c71c7 + 0x71c71c71c71c71cU < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_0066554c("vector::_M_range_insert");
      }
      if (uVar13 <= uVar8) {
        uVar13 = uVar8;
      }
      uVar4 = 0x71c71c71c71c71c;
      if (!CARRY8(uVar13,uVar8) && uVar13 + uVar8 < 0x71c71c71c71c71d) {
        uVar4 = uVar13 + uVar8;
      }
      if (uVar4 == 0) {
        puVar5 = (undefined1 *)0x0;
        puVar15 = puVar5;
      }
      else {
        if (0x71c71c71c71c71c < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00665294();
        }
        puVar5 = operator_new(uVar4 * 0x24);
                    /* try { // try from 005c6c94 to 006c6c9f has its CatchHandler @ 005c741c */
        puVar9 = (undefined8 *)*param_1;
        puVar15 = puVar5;
      }
      for (; puVar9 != param_2; puVar9 = (undefined8 *)((long)puVar9 + 0x24)) {
        *puVar5 = *(undefined1 *)puVar9;
        uVar16 = *(undefined8 *)((long)puVar9 + 4);
        *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)((long)puVar9 + 0xc);
        *(undefined8 *)(puVar5 + 4) = uVar16;
        *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)((long)puVar9 + 0x14);
        *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar9 + 3);
                    /* try { // try from 005c6e64 to 006c6e6b has its CatchHandler @ 005c7304 */
        *(undefined8 *)(puVar5 + 0x1c) = *(undefined8 *)((long)puVar9 + 0x1c);
        puVar5 = puVar5 + 0x24;
      }
                    /* try { // try from 005c6e74 to 006c6ebb has its CatchHandler @ 005c755c */
      lVar12 = 0;
      do {
        puVar2 = (undefined1 *)((long)param_3 + lVar12);
        puVar3 = puVar5 + lVar12;
        lVar12 = lVar12 + 0x24;
        *puVar3 = *puVar2;
        uVar16 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
        *(undefined8 *)(puVar3 + 4) = uVar16;
        *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
        *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
        *(undefined8 *)(puVar3 + 0x1c) = *(undefined8 *)(puVar2 + 0x1c);
      } while ((undefined8 *)(puVar2 + 0x24) != param_4);
      puVar11 = (undefined8 *)param_1[1];
      if (puVar11 == param_2) {
        pvVar6 = (void *)*param_1;
      }
      else {
        lVar14 = 0;
        do {
          puVar2 = (undefined1 *)((long)param_2 + lVar14);
          puVar3 = puVar5 + lVar12 + lVar14;
          lVar14 = lVar14 + 0x24;
          *puVar3 = *puVar2;
                    /* try { // try from 005c6ee0 to 006c6ee7 has its CatchHandler @ 005c7264 */
          uVar16 = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
          *(undefined8 *)(puVar3 + 4) = uVar16;
          *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
          *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
          *(undefined8 *)(puVar3 + 0x1c) = *(undefined8 *)(puVar2 + 0x1c);
                    /* try { // try from 005c6f08 to 006c6f2f has its CatchHandler @ 005c7258 */
        } while ((undefined8 *)(puVar2 + 0x24) != puVar11);
        lVar12 = lVar14 + lVar12;
        pvVar6 = (void *)*param_1;
      }
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      *param_1 = puVar15;
      param_1[1] = puVar5 + lVar12;
      param_1[2] = puVar15 + uVar4 * 0x24;
    }
    else {
                    /* try { // try from 005c6ca0 to 006c6ca7 has its CatchHandler @ 005c7308 */
      lVar14 = (long)puVar11 - (long)param_2 >> 2;
                    /* try { // try from 005c6ca8 to 006c6cb3 has its CatchHandler @ 005c741c */
      if (uVar13 < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
        puVar9 = puVar11;
        if (uVar8 != 0) {
          lVar14 = 0;
          do {
            puVar5 = (undefined1 *)((long)puVar11 + lVar14 + lVar12 * -4);
            puVar15 = (undefined1 *)((long)puVar11 + lVar14);
            lVar14 = lVar14 + 0x24;
            *puVar15 = *puVar5;
                    /* try { // try from 005c6ce8 to 006c6ceb has its CatchHandler @ 005c755c */
            uVar16 = *(undefined8 *)(puVar5 + 4);
            *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar5 + 0xc);
            *(undefined8 *)(puVar15 + 4) = uVar16;
                    /* try { // try from 005c6cf0 to 006c6cf7 has its CatchHandler @ 005c7358 */
            *(undefined4 *)(puVar15 + 0x14) = *(undefined4 *)(puVar5 + 0x14);
            *(undefined4 *)(puVar15 + 0x18) = *(undefined4 *)(puVar5 + 0x18);
            *(undefined8 *)(puVar15 + 0x1c) = *(undefined8 *)(puVar5 + 0x1c);
          } while (lVar12 * 4 - lVar14 != 0);
          puVar9 = (undefined8 *)param_1[1];
        }
        puVar5 = (undefined1 *)((long)puVar11 + (lVar12 * -4 - (long)param_2));
                    /* try { // try from 005c6f50 to 006c6f77 has its CatchHandler @ 005c741c */
        param_1[1] = (undefined1 *)((long)puVar9 + lVar12 * 4);
        if (0 < (long)puVar5) {
                    /* try { // try from 005c6f78 to 006c7013 has its CatchHandler @ 005c6574 */
          lVar14 = (ulong)puVar5 / 0x24 + 1;
          do {
            puVar7 = (undefined8 *)((long)puVar11 + -0x24);
            puVar9 = (undefined8 *)(lVar12 * -4 + (long)puVar7);
            lVar14 = lVar14 + -1;
            *(undefined4 *)((long)puVar11 + -0x14) = *(undefined4 *)(puVar9 + 2);
            uVar16 = *puVar9;
            *(undefined8 *)((long)puVar11 + -0x1c) = puVar9[1];
            *puVar7 = uVar16;
            puVar11[-2] = *(undefined8 *)((long)puVar9 + 0x14);
            puVar11[-1] = *(undefined8 *)((long)puVar9 + 0x1c);
            puVar11 = puVar7;
          } while (1 < lVar14);
        }
        if (0 < (long)uVar8) {
          lVar12 = uVar8 / 0x24 + 1;
          do {
            lVar12 = lVar12 + -1;
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
            uVar16 = *param_3;
            param_2[1] = param_3[1];
            *param_2 = uVar16;
            *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)((long)param_3 + 0x14);
            puVar11 = (undefined8 *)((long)param_3 + 0x1c);
            param_3 = (undefined8 *)((long)param_3 + 0x24);
            *(undefined8 *)((long)param_2 + 0x1c) = *puVar11;
            param_2 = (undefined8 *)((long)param_2 + 0x24);
          } while (1 < lVar12);
        }
      }
      else {
        puVar10 = (undefined8 *)((long)param_3 + lVar14 * 4);
        puVar9 = puVar11;
        puVar7 = puVar10;
        if (puVar10 != param_4) {
          do {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            uVar16 = *(undefined8 *)((long)puVar7 + 4);
            *(undefined8 *)((long)puVar9 + 0xc) = *(undefined8 *)((long)puVar7 + 0xc);
            *(undefined8 *)((long)puVar9 + 4) = uVar16;
                    /* try { // try from 005c6d40 to 006c6d6f has its CatchHandler @ 005c72b4 */
            *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)puVar7 + 0x14);
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar7 + 3);
            puVar1 = (undefined8 *)((long)puVar7 + 0x24);
            *(undefined8 *)((long)puVar9 + 0x1c) = *(undefined8 *)((long)puVar7 + 0x1c);
            puVar9 = (undefined8 *)((long)puVar9 + 0x24);
            puVar7 = puVar1;
          } while (puVar1 != param_4);
          puVar9 = (undefined8 *)param_1[1];
        }
        puVar5 = (undefined1 *)((long)puVar9 + (uVar13 + lVar14 * 0x71c71c71c71c71c7) * 0x24);
        param_1[1] = puVar5;
        puVar9 = param_2;
        if (puVar11 != param_2) {
          do {
            *puVar5 = *(undefined1 *)puVar9;
            uVar16 = *(undefined8 *)((long)puVar9 + 4);
            *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)((long)puVar9 + 0xc);
            *(undefined8 *)(puVar5 + 4) = uVar16;
                    /* try { // try from 005c6d90 to 006c6db7 has its CatchHandler @ 005c7358 */
            *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)((long)puVar9 + 0x14);
            *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar9 + 3);
            puVar7 = (undefined8 *)((long)puVar9 + 0x24);
            *(undefined8 *)(puVar5 + 0x1c) = *(undefined8 *)((long)puVar9 + 0x1c);
            puVar5 = puVar5 + 0x24;
            puVar9 = puVar7;
          } while (puVar7 != puVar11);
          puVar5 = (undefined1 *)param_1[1];
        }
        param_1[1] = puVar5 + lVar14 * 4;
        if (0 < (long)puVar10 - (long)param_3) {
          lVar12 = (ulong)((long)puVar10 - (long)param_3) / 0x24 + 1;
          do {
            lVar12 = lVar12 + -1;
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
            uVar16 = *param_3;
            param_2[1] = param_3[1];
            *param_2 = uVar16;
            *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)((long)param_3 + 0x14);
            puVar11 = (undefined8 *)((long)param_3 + 0x1c);
            param_3 = (undefined8 *)((long)param_3 + 0x24);
                    /* try { // try from 005c6e18 to 006c6e47 has its CatchHandler @ 005c755c */
            *(undefined8 *)((long)param_2 + 0x1c) = *puVar11;
            param_2 = (undefined8 *)((long)param_2 + 0x24);
          } while (1 < lVar12);
        }
      }
    }
  }
                    /* try { // try from 005c7014 to 006c701f has its CatchHandler @ 005c7188 */
                    /* try { // try from 005c7020 to 006c7107 has its CatchHandler @ 005c6574 */
  return;
}


