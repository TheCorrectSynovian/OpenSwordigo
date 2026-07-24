/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00554d40
 * Function: std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::ParticleType,std::allocator<Caver::ParticleType>> * this, __normal_iterator param_1, ParticleType * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::ParticleType, std::allocator<Caver::ParticleType>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,
   std::vector<Caver::ParticleType, std::allocator<Caver::ParticleType> > >, Caver::ParticleType
   const&) */

void __thiscall
std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux
          (vector<Caver::ParticleType,std::allocator<Caver::ParticleType>> *this,
          ParticleType *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ParticleType *pPVar18;
  ParticleType *pPVar19;
  
  pPVar19 = *(ParticleType **)(this + 8);
                    /* try { // try from 00554d74 to 00654d7b has its CatchHandler @ 005558c8 */
  if (pPVar19 == *(ParticleType **)(this + 0x10)) {
    lVar14 = (long)pPVar19 - *(long *)this;
    uVar16 = (lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar2 = uVar16;
    if (lVar14 == 0) {
      uVar2 = 1;
    }
    uVar1 = 0x2e8ba2e8ba2e8ba;
    if (!CARRY8(uVar2,uVar16) && uVar2 + uVar16 < 0x2e8ba2e8ba2e8bb) {
      uVar1 = uVar2 + uVar16;
    }
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    lVar15 = (long)param_2 - *(long *)this >> 3;
    plVar17 = operator_new(uVar1 * 0x58);
    lVar14 = *param_3;
    plVar17[lVar15] = lVar14;
    if (lVar14 != 0) {
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    }
    lVar14 = param_3[1];
    plVar17[lVar15 + 2] = param_3[2];
    plVar17[lVar15 + 1] = lVar14;
    lVar14 = param_3[3];
    plVar17[lVar15 + 4] = param_3[4];
    plVar17[lVar15 + 3] = lVar14;
    lVar14 = param_3[5];
    plVar17[lVar15 + 6] = param_3[6];
    plVar17[lVar15 + 5] = lVar14;
    lVar14 = param_3[7];
    plVar17[lVar15 + 8] = param_3[8];
    plVar17[lVar15 + 7] = lVar14;
    lVar14 = param_3[9];
    plVar17[lVar15 + 10] = param_3[10];
    plVar17[lVar15 + 9] = lVar14;
    pPVar18 = *(ParticleType **)this;
    plVar13 = plVar17;
    for (pPVar19 = pPVar18; pPVar19 != param_2; pPVar19 = pPVar19 + 0x58) {
      lVar14 = *(long *)pPVar19;
      *plVar13 = lVar14;
      if (lVar14 != 0) {
                    /* try { // try from 00554f68 to 00654f6f has its CatchHandler @ 0055562c */
                    /* try { // try from 00554f70 to 00654f83 has its CatchHandler @ 005555a0 */
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      }
      lVar14 = *(long *)(pPVar19 + 8);
      plVar13[2] = *(long *)(pPVar19 + 0x10);
      plVar13[1] = lVar14;
      *(undefined4 *)(plVar13 + 3) = *(undefined4 *)(pPVar19 + 0x18);
      *(undefined4 *)((long)plVar13 + 0x1c) = *(undefined4 *)(pPVar19 + 0x1c);
      *(undefined4 *)(plVar13 + 4) = *(undefined4 *)(pPVar19 + 0x20);
      *(undefined4 *)((long)plVar13 + 0x24) = *(undefined4 *)(pPVar19 + 0x24);
      *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(pPVar19 + 0x28);
      *(undefined4 *)((long)plVar13 + 0x2c) = *(undefined4 *)(pPVar19 + 0x2c);
      *(undefined4 *)(plVar13 + 6) = *(undefined4 *)(pPVar19 + 0x30);
      *(undefined4 *)((long)plVar13 + 0x34) = *(undefined4 *)(pPVar19 + 0x34);
                    /* try { // try from 00554fc0 to 00654fe7 has its CatchHandler @ 0055556c */
      *(undefined4 *)(plVar13 + 7) = *(undefined4 *)(pPVar19 + 0x38);
      *(undefined4 *)((long)plVar13 + 0x3c) = *(undefined4 *)(pPVar19 + 0x3c);
      *(undefined4 *)(plVar13 + 8) = *(undefined4 *)(pPVar19 + 0x40);
      *(undefined4 *)((long)plVar13 + 0x44) = *(undefined4 *)(pPVar19 + 0x44);
      plVar13[9] = *(long *)(pPVar19 + 0x48);
      plVar13[10] = *(long *)(pPVar19 + 0x50);
      plVar13 = plVar13 + 0xb;
    }
    pPVar19 = *(ParticleType **)(this + 8);
                    /* try { // try from 00555008 to 0065500f has its CatchHandler @ 005554f4 */
    for (; plVar12 = plVar13 + 0xb, pPVar19 != param_2; param_2 = param_2 + 0x58) {
      lVar14 = *(long *)param_2;
      *plVar12 = lVar14;
                    /* try { // try from 00555014 to 00655033 has its CatchHandler @ 00555504 */
      if (lVar14 != 0) {
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      }
      lVar14 = *(long *)(param_2 + 8);
      plVar13[0xd] = *(long *)(param_2 + 0x10);
      plVar13[0xc] = lVar14;
      *(undefined4 *)(plVar13 + 0xe) = *(undefined4 *)(param_2 + 0x18);
                    /* try { // try from 00555038 to 0065504b has its CatchHandler @ 005553f8 */
      *(undefined4 *)((long)plVar13 + 0x74) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(plVar13 + 0xf) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)((long)plVar13 + 0x7c) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(plVar13 + 0x10) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)((long)plVar13 + 0x84) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(plVar13 + 0x11) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)((long)plVar13 + 0x8c) = *(undefined4 *)(param_2 + 0x34);
                    /* try { // try from 00555070 to 0065507b has its CatchHandler @ 0055542c */
      *(undefined4 *)(plVar13 + 0x12) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)((long)plVar13 + 0x94) = *(undefined4 *)(param_2 + 0x3c);
                    /* try { // try from 0055507c to 00655087 has its CatchHandler @ 00555400 */
      *(undefined4 *)(plVar13 + 0x13) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)((long)plVar13 + 0x9c) = *(undefined4 *)(param_2 + 0x44);
                    /* try { // try from 0055508c to 00655097 has its CatchHandler @ 005553fc */
      plVar13[0x14] = *(long *)(param_2 + 0x48);
      plVar13[0x15] = *(long *)(param_2 + 0x50);
      plVar13 = plVar12;
    }
    for (; pPVar18 != pPVar19; pPVar18 = pPVar18 + 0x58) {
      plVar13 = *(long **)pPVar18;
      if ((plVar13 != (long *)0x0) &&
         (iVar11 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar11, iVar11 == 0)) {
                    /* try { // try from 005550cc to 006550cf has its CatchHandler @ 0055542c */
        (**(code **)(*plVar13 + 8))();
      }
                    /* try { // try from 005550e0 to 006550e7 has its CatchHandler @ 005553f4 */
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
                    /* try { // try from 005550f4 to 00655103 has its CatchHandler @ 005553f0 */
    *(long **)this = plVar17;
    *(long **)(this + 8) = plVar12;
    *(long **)(this + 0x10) = plVar17 + uVar1 * 0xb;
  }
  else {
    lVar14 = *(long *)(pPVar19 + -0x58);
    *(long *)pPVar19 = lVar14;
    if (lVar14 != 0) {
                    /* try { // try from 00554d84 to 00654d8b has its CatchHandler @ 00555868 */
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    }
    *(undefined8 *)(pPVar19 + 0x10) = *(undefined8 *)(pPVar19 + -0x48);
    *(undefined8 *)(pPVar19 + 8) = *(undefined8 *)(pPVar19 + -0x50);
    *(undefined8 *)(pPVar19 + 0x20) = *(undefined8 *)(pPVar19 + -0x38);
    *(undefined8 *)(pPVar19 + 0x18) = *(undefined8 *)(pPVar19 + -0x40);
    *(undefined8 *)(pPVar19 + 0x30) = *(undefined8 *)(pPVar19 + -0x28);
    *(undefined8 *)(pPVar19 + 0x28) = *(undefined8 *)(pPVar19 + -0x30);
    *(undefined8 *)(pPVar19 + 0x40) = *(undefined8 *)(pPVar19 + -0x18);
    *(undefined8 *)(pPVar19 + 0x38) = *(undefined8 *)(pPVar19 + -0x20);
    *(undefined8 *)(pPVar19 + 0x50) = *(undefined8 *)(pPVar19 + -8);
    *(undefined8 *)(pPVar19 + 0x48) = *(undefined8 *)(pPVar19 + -0x10);
    *(ParticleType **)(this + 8) = pPVar19 + 0x58;
    plVar17 = (long *)*param_3;
    if (plVar17 != (long *)0x0) {
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    }
    lVar14 = param_3[7];
    lVar6 = param_3[8];
    lVar15 = param_3[1];
    lVar7 = param_3[2];
    lVar3 = param_3[3];
    lVar8 = param_3[4];
    lVar4 = param_3[5];
    lVar9 = param_3[6];
    lVar5 = param_3[9];
    lVar10 = param_3[10];
    copy_backward<Caver::ParticleType*,Caver::ParticleType*>(param_2,pPVar19 + -0x58,pPVar19);
                    /* try { // try from 00554df4 to 00654dfb has its CatchHandler @ 005556dc */
    if (plVar17 != (long *)0x0) {
                    /* try { // try from 00554dfc to 00654e0b has its CatchHandler @ 00555700 */
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    }
    plVar13 = *(long **)param_2;
    *(long **)param_2 = plVar17;
                    /* try { // try from 00554e0c to 00654e17 has its CatchHandler @ 005555fc */
    if ((plVar13 != (long *)0x0) &&
       (iVar11 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar11, iVar11 == 0)) {
      (**(code **)(*plVar13 + 8))();
    }
    *(long *)(param_2 + 8) = lVar15;
    *(long *)(param_2 + 0x10) = lVar7;
    *(long *)(param_2 + 0x18) = lVar3;
    *(long *)(param_2 + 0x20) = lVar8;
    *(long *)(param_2 + 0x28) = lVar4;
    *(long *)(param_2 + 0x30) = lVar9;
                    /* try { // try from 00554e38 to 00654e3b has its CatchHandler @ 00555700 */
    *(long *)(param_2 + 0x38) = lVar14;
    *(long *)(param_2 + 0x40) = lVar6;
    *(long *)(param_2 + 0x48) = lVar5;
    *(long *)(param_2 + 0x50) = lVar10;
    if ((plVar17 != (long *)0x0) &&
       (iVar11 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar11, iVar11 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00554e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 8))(plVar17);
      return;
    }
  }
  return;
}


