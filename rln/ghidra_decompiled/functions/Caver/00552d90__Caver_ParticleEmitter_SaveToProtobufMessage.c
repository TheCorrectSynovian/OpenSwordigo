/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00552d90
 * Function: Caver::ParticleEmitter::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ParticleEmitter * this, ParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::SaveToProtobufMessage(Caver::Proto::ParticleEmitter*) */

void __thiscall
Caver::ParticleEmitter::SaveToProtobufMessage(ParticleEmitter *this,ParticleEmitter *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  int iVar3;
  FloatColor *this_00;
  void *__dest;
  uint uVar4;
  ulong uVar5;
  Vector3 *this_01;
  FloatColor *this_02;
  ulong uVar6;
  ParticleEmitter *__src;
  undefined4 uVar7;
  FloatColor aFStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (FloatColor *)(**(code **)(*(long *)this + 0x10))();
  uVar4 = *(uint *)(param_1 + 0x50);
  if ((int)this_00 - 1U < 5) {
    uVar4 = uVar4 | 1;
    *(uint *)(param_1 + 0x50) = uVar4;
    *(int *)(param_1 + 0xc) = (int)this_00;
  }
  this_01 = *(Vector3 **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x50) = uVar4 | 2;
  if (this_01 == (Vector3 *)0x0) {
    this_01 = operator_new(0x20);
    this_00 = (FloatColor *)Proto::Vector3::Vector3(this_01);
    *(Vector3 **)(param_1 + 0x10) = this_01;
  }
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0x38);
  *(undefined4 *)(this_01 + 0x14) = *(undefined4 *)(this + 0x40);
  *(uint *)(this_01 + 0x18) = *(uint *)(this_01 + 0x18) | 7;
  FloatColor::FromHSLA
            (this_00,*(float *)(this + 0xa8),*(float *)(this + 0xac),*(float *)(this + 0xb0),
             *(float *)(this + 0xb4));
  this_02 = *(FloatColor **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 4;
  if (this_02 == (FloatColor *)0x0) {
    this_02 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_02);
    *(FloatColor **)(param_1 + 0x18) = this_02;
  }
  FloatColorToProtobufMessage(aFStack_78,this_02);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0xb8);
  uVar7 = *(undefined4 *)(this + 0xc0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x38;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  if ((*(long *)(this + 200) != 0) &&
     (iVar3 = (**(code **)(*(long *)this + 0x18))(this), iVar3 != 0)) {
    uVar6 = 0;
    do {
      if (*(long *)(this + 200) == 0) {
        uVar7 = (**(code **)(*(long *)this + 0x20))(this,uVar6 & 0xffffffff);
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(this + 200) + uVar6 * 4);
      }
      iVar3 = *(int *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 00552d3c with catch @ 00552ee4 */
      if (iVar3 == *(int *)(param_1 + 0x3c)) {
                    /* catch() { ... } // from try @ 00552ce8 with catch @ 00552eec */
        uVar4 = iVar3 * 2;
                    /* catch() { ... } // from try @ 00552c78 with catch @ 00552ef4 */
        if ((int)uVar4 < iVar3 + 1) {
          uVar4 = iVar3 + 1;
        }
        __src = *(ParticleEmitter **)(param_1 + 0x30);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (long)(int)uVar4;
        *(uint *)(param_1 + 0x3c) = uVar4;
        uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
          uVar5 = 0xffffffffffffffff;
        }
                    /* try { // try from 00552f14 to 0065302b has its CatchHandler @ 00553034 */
        __dest = operator_new__(uVar5);
        *(void **)(param_1 + 0x30) = __dest;
        memcpy(__dest,__src,(long)iVar3 << 2);
        if ((__src != param_1 + 0x40) && (__src != (ParticleEmitter *)0x0)) {
          operator_delete__(__src);
          iVar3 = *(int *)(param_1 + 0x38);
        }
      }
      *(int *)(param_1 + 0x38) = iVar3 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 4) = uVar7;
      uVar6 = uVar6 + 1;
      uVar5 = (**(code **)(*(long *)this + 0x18))(this);
    } while (uVar6 < (uVar5 & 0xffffffff));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00552c58 with catch @ 00552fa4 */
  __stack_chk_fail();
}


