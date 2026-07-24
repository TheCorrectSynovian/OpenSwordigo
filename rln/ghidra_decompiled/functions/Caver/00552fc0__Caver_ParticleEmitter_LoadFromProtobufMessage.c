/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00552fc0
 * Function: Caver::ParticleEmitter::LoadFromProtobufMessage
 * Signature: undefined __cdecl LoadFromProtobufMessage(ParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&) */

void Caver::ParticleEmitter::LoadFromProtobufMessage(ParticleEmitter *param_1)

{
  ParticleEmitter *pPVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FountainParticleEmitter *this;
  TrailParticleEmitter *this_00;
  WhooshParticleEmitter *this_01;
  ParticleEmitter *pPVar7;
  void *pvVar8;
  FloatColor *in_x1;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  FloatColor *extraout_x1_03;
  undefined8 *in_x8;
  long lVar9;
  void *pvVar10;
  ParticleEmitter *pPVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  long *local_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    pPVar7 = operator_new(0xd8);
                    /* try { // try from 0055302c to 00653037 has its CatchHandler @ 00552b64 */
                    /* catch() { ... } // from try @ 00552f14 with catch @ 00553034 */
    memset(pPVar7,0,0xd8);
                    /* try { // try from 0055303c to 00653083 has its CatchHandler @ 0055303c
                       catch() { ... } // from try @ 0055303c with catch @ 0055303c
                       catch() { ... } // from try @ 00553090 with catch @ 0055303c
                       catch() { ... } // from try @ 005530b8 with catch @ 0055303c
                       catch() { ... } // from try @ 00553a00 with catch @ 0055303c
                       catch() { ... } // from try @ 00553cb8 with catch @ 0055303c
                       catch() { ... } // from try @ 00553f70 with catch @ 0055303c */
    ParticleEmitter(pPVar7);
    *(undefined **)pPVar7 = PTR_vtable_007e6fa0 + 0x10;
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_78,(BlastParticleEmitter *)pPVar7);
    in_x1 = extraout_x1;
    break;
  case 2:
    pPVar7 = operator_new(0xd8);
    memset(pPVar7,0,0xd8);
    ParticleEmitter(pPVar7);
    *(undefined **)pPVar7 = PTR_vtable_007e6a90 + 0x10;
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_78,(SparkParticleEmitter *)pPVar7);
    in_x1 = extraout_x1_03;
    break;
  case 3:
                    /* try { // try from 00553084 to 0065308f has its CatchHandler @ 00553eb4 */
    this_00 = operator_new(0xe0);
                    /* try { // try from 00553090 to 006530b3 has its CatchHandler @ 0055303c */
    TrailParticleEmitter::TrailParticleEmitter(this_00);
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_78,this_00);
    in_x1 = extraout_x1_01;
    break;
  case 4:
    this_01 = operator_new(0xe0);
                    /* try { // try from 005530b4 to 006530b7 has its CatchHandler @ 00553ea0 */
                    /* try { // try from 005530b8 to 006530c7 has its CatchHandler @ 0055303c */
    WhooshParticleEmitter::WhooshParticleEmitter(this_01);
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_78,this_01);
    in_x1 = extraout_x1_02;
                    /* try { // try from 005530c8 to 00653133 has its CatchHandler @ 00553f24 */
    break;
  case 5:
    this = operator_new(0xe0);
    FountainParticleEmitter::FountainParticleEmitter(this);
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_78,this);
    in_x1 = extraout_x1_00;
    break;
  default:
    plVar12 = (long *)0x0;
    goto LAB_00553118;
  }
  plVar12 = local_78;
  local_78 = (long *)0x0;
  *in_x8 = plVar12;
  in_x8[1] = CONCAT44(local_6c,uStack_70);
LAB_00553118:
  pPVar11 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
  pPVar1 = pPVar11;
  if (*(long *)(param_1 + 0x10) != 0) {
    pPVar1 = param_1;
  }
  uVar2 = *(undefined4 *)(*(long *)(pPVar1 + 0x10) + 0x14);
  plVar12[7] = *(long *)(*(long *)(pPVar1 + 0x10) + 0xc);
                    /* try { // try from 00553140 to 00653147 has its CatchHandler @ 00553e9c */
  *(undefined4 *)(plVar12 + 8) = uVar2;
                    /* try { // try from 00553148 to 0065315b has its CatchHandler @ 00553e34 */
  if (*(long *)(param_1 + 0x18) != 0) {
    pPVar11 = param_1;
  }
  FloatColorFromProtobufMessage(*(Caver **)(pPVar11 + 0x18),in_x1);
                    /* try { // try from 0055315c to 0065316b has its CatchHandler @ 00553ddc */
  FloatColor::GetHSLComponents((FloatColor *)&local_78,(float *)(plVar12 + 0x15));
                    /* try { // try from 0055316c to 00653177 has its CatchHandler @ 00553d80 */
  *(undefined4 *)((long)plVar12 + 0xb4) = local_6c;
  plVar12[0x17] = *(long *)(param_1 + 0x20);
  *(undefined4 *)(plVar12 + 0x18) = *(undefined4 *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar4 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (iVar5 < iVar4) {
    iVar5 = *(int *)(param_1 + 0x38);
  }
  else {
                    /* try { // try from 005531b4 to 006531bb has its CatchHandler @ 00553d68 */
    iVar5 = (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (0 < iVar5) {
    lVar9 = plVar12[0x19];
                    /* try { // try from 005531c8 to 0065329f has its CatchHandler @ 00553f24 */
    lVar14 = 0;
    do {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar14 * 4);
      if (lVar9 == 0) {
        uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
        pvVar8 = operator_new__((ulong)uVar6 << 2);
        pvVar10 = (void *)plVar12[0x19];
        plVar12[0x19] = (long)pvVar8;
        if (pvVar10 != (void *)0x0) {
          operator_delete__(pvVar10);
        }
        if (uVar6 == 0) {
          lVar9 = plVar12[0x19];
        }
        else {
          uVar13 = 0;
          do {
            uVar15 = (**(code **)(*plVar12 + 0x20))(plVar12,uVar13 & 0xffffffff);
            lVar9 = plVar12[0x19];
            *(undefined4 *)(lVar9 + uVar13 * 4) = uVar15;
            uVar13 = uVar13 + 1;
          } while (uVar6 != uVar13);
        }
      }
      *(undefined4 *)(lVar9 + lVar14 * 4) = uVar2;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


