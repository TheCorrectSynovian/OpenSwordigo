/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056e980
 * Function: std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Vector3,std::allocator<Caver::Vector3>> * this, __normal_iterator param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Vector3, std::allocator<Caver::Vector3>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*, std::vector<Caver::Vector3,
   std::allocator<Caver::Vector3> > >, Caver::Vector3 const&) */

void __thiscall
std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
          (vector<Caver::Vector3,std::allocator<Caver::Vector3>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (puVar7 != *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 0056e9b0 to 0066ea33 has its CatchHandler @ 0056e914 */
    puVar6 = (undefined8 *)((long)puVar7 + -0xc);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)puVar7 + -4);
    *(long *)(this + 8) = (long)puVar7 + 0xc;
    uVar3 = *(undefined4 *)param_3;
    uVar9 = *(undefined8 *)((long)param_3 + 4);
    if (0 < (long)puVar6 - (long)param_2) {
      lVar11 = (ulong)((long)puVar6 - (long)param_2) / 0xc + 1;
      do {
        lVar11 = lVar11 + -1;
        *puVar6 = *(undefined8 *)((long)puVar6 + -0xc);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((long)puVar6 + -4);
        puVar6 = (undefined8 *)((long)puVar6 + -0xc);
      } while (1 < lVar11);
    }
    *(undefined4 *)param_2 = uVar3;
    *(undefined8 *)((long)param_2 + 4) = uVar9;
    return;
  }
  puVar6 = *(undefined8 **)this;
                    /* try { // try from 0056ea34 to 0066ea3b has its CatchHandler @ 0056f104 */
                    /* try { // try from 0056ea3c to 0066ea4f has its CatchHandler @ 0056f09c */
  uVar8 = ((long)puVar7 - (long)puVar6 >> 2) * -0x5555555555555555;
  uVar2 = uVar8;
  if ((long)puVar7 - (long)puVar6 == 0) {
    uVar2 = 1;
  }
                    /* try { // try from 0056ea50 to 0066eab3 has its CatchHandler @ 0056e914 */
  uVar1 = 0x1555555555555555;
  if (!CARRY8(uVar2,uVar8) && uVar2 + uVar8 < 0x1555555555555556) {
    uVar1 = uVar2 + uVar8;
  }
  if (uVar1 == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar7 = puVar6;
  }
  else {
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar5 = operator_new(uVar1 * 0xc);
    puVar7 = *(undefined8 **)this;
  }
  puVar6 = (undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar6 >> 2) * 4);
  *puVar6 = *param_3;
                    /* try { // try from 0056eab4 to 0066eab7 has its CatchHandler @ 0056f088 */
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
  puVar6 = puVar5;
                    /* try { // try from 0056eab8 to 0066eaff has its CatchHandler @ 0056e914 */
  if (puVar7 != param_2) {
    uVar8 = (ulong)((long)param_2 + (-0xc - (long)puVar7)) / 0xc;
    uVar2 = uVar8 + 1;
    puVar12 = puVar7;
    if (7 < uVar2) {
      lVar11 = uVar8 * 0xc;
                    /* try { // try from 0056ebac to 0066ec33 has its CatchHandler @ 0056e914 */
      if ((((undefined8 *)((long)puVar7 + lVar11 + 4) <= puVar5 ||
            (undefined8 *)((long)puVar5 + lVar11 + 4) <= puVar7) &&
          ((ulong)((long)puVar7 + lVar11 + 8) <= (long)puVar5 + 4U ||
           (undefined4 *)((long)puVar5 + lVar11 + 8) <= (undefined4 *)((long)puVar7 + 4U))) &&
         ((undefined8 *)((long)puVar7 + lVar11 + 0xc) <= puVar5 + 1 ||
          (undefined8 *)((long)puVar5 + lVar11 + 0xc) <= puVar7 + 1)) {
        uVar13 = uVar2 & 0x3ffffffffffffff8;
                    /* try { // try from 0056ec34 to 0066ec47 has its CatchHandler @ 0056efa4 */
        puVar6 = (undefined8 *)((long)puVar5 + uVar13 * 0xc);
        puVar12 = (undefined8 *)((long)puVar7 + uVar13 * 0xc);
        uVar8 = uVar13;
        puVar14 = puVar7;
        puVar10 = puVar5;
        do {
                    /* try { // try from 0056ec4c to 0066ec53 has its CatchHandler @ 0056ef3c */
          uVar9 = *puVar14;
          uVar16 = puVar14[3];
          uVar15 = puVar14[2];
          uVar18 = puVar14[5];
          uVar17 = puVar14[4];
          uVar20 = puVar14[7];
          uVar19 = puVar14[6];
                    /* try { // try from 0056ec54 to 0066ecbf has its CatchHandler @ 0056e914 */
          uVar22 = puVar14[9];
          uVar21 = puVar14[8];
          uVar24 = puVar14[0xb];
          uVar23 = puVar14[10];
          uVar8 = uVar8 - 8;
          puVar10[1] = puVar14[1];
          *puVar10 = uVar9;
          puVar10[3] = uVar16;
          puVar10[2] = uVar15;
          puVar10[5] = uVar18;
          puVar10[4] = uVar17;
          puVar10[7] = uVar20;
          puVar10[6] = uVar19;
          puVar10[9] = uVar22;
          puVar10[8] = uVar21;
          puVar10[0xb] = uVar24;
          puVar10[10] = uVar23;
          puVar10 = puVar10 + 0xc;
          puVar14 = puVar14 + 0xc;
        } while (uVar8 != 0);
        if (uVar2 == uVar13) goto LAB_0056eb0c;
      }
    }
    do {
      *puVar6 = *puVar12;
      puVar10 = (undefined8 *)((long)puVar12 + 0xc);
                    /* try { // try from 0056eb00 to 0066eb27 has its CatchHandler @ 0056ee78 */
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar12 + 1);
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
      puVar12 = puVar10;
    } while (puVar10 != param_2);
  }
LAB_0056eb0c:
  puVar10 = *(undefined8 **)(this + 8);
  puVar12 = (undefined8 *)((long)puVar6 + 0xc);
  lVar11 = (long)puVar10 - (long)param_2;
  if (lVar11 != 0) {
    uVar8 = (lVar11 - 0xcU) / 0xc;
    uVar2 = uVar8 + 1;
    puVar14 = param_2;
    if (7 < uVar2) {
      lVar11 = uVar8 * 0xc;
                    /* try { // try from 0056ecc0 to 0066ecd3 has its CatchHandler @ 0056eef0 */
                    /* try { // try from 0056ecd8 to 0066ecdf has its CatchHandler @ 0056ee88 */
                    /* try { // try from 0056ece0 to 0066ef0f has its CatchHandler @ 0056e914 */
      if ((((undefined8 *)((long)param_2 + lVar11 + 4) <= puVar12 ||
            (undefined8 *)((long)puVar6 + lVar11 + 0x10) <= param_2) &&
          ((undefined8 *)((long)param_2 + lVar11 + 8) <= puVar6 + 2 ||
           (undefined4 *)((long)puVar6 + lVar11 + 0x14) <= (undefined4 *)((long)param_2 + 4U))) &&
         ((ulong)((long)param_2 + lVar11 + 0xc) <= (long)puVar6 + 0x14U ||
          (undefined8 *)((long)puVar6 + lVar11 + 0x18) <= param_2 + 1)) {
        uVar13 = uVar2 & 0x3ffffffffffffff8;
        puVar12 = (undefined8 *)((long)puVar12 + uVar13 * 0xc);
        puVar14 = (undefined8 *)((long)param_2 + uVar13 * 0xc);
        puVar6 = (undefined8 *)((long)puVar6 + 0x3c);
        uVar8 = uVar13;
        do {
          uVar15 = param_2[1];
          uVar9 = *param_2;
          puVar4 = param_2 + 3;
          uVar16 = param_2[2];
          uVar18 = param_2[5];
          uVar17 = param_2[4];
          uVar20 = param_2[7];
          uVar19 = param_2[6];
          uVar22 = param_2[9];
          uVar21 = param_2[8];
          uVar24 = param_2[0xb];
          uVar23 = param_2[10];
          param_2 = param_2 + 0xc;
          uVar8 = uVar8 - 8;
          puVar6[-3] = *puVar4;
          puVar6[-4] = uVar16;
          puVar6[-1] = uVar18;
          puVar6[-2] = uVar17;
          puVar6[-5] = uVar15;
          puVar6[-6] = uVar9;
          puVar6[3] = uVar22;
          puVar6[2] = uVar21;
          puVar6[5] = uVar24;
          puVar6[4] = uVar23;
          puVar6[1] = uVar20;
          *puVar6 = uVar19;
          puVar6 = puVar6 + 0xc;
        } while (uVar8 != 0);
        if (uVar2 == uVar13) goto LAB_0056eb5c;
      }
    }
    do {
      *puVar12 = *puVar14;
      puVar6 = (undefined8 *)((long)puVar14 + 0xc);
                    /* try { // try from 0056eb4c to 0066eb63 has its CatchHandler @ 0056eff0 */
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar14 + 1);
      puVar12 = (undefined8 *)((long)puVar12 + 0xc);
      puVar14 = puVar6;
    } while (puVar6 != puVar10);
  }
LAB_0056eb5c:
  if (puVar7 != (undefined8 *)0x0) {
    operator_delete(puVar7);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar12;
  *(void **)(this + 0x10) = (void *)((long)puVar5 + uVar1 * 0xc);
                    /* try { // try from 0056eb84 to 0066ebab has its CatchHandler @ 0056ee74 */
  return;
}


