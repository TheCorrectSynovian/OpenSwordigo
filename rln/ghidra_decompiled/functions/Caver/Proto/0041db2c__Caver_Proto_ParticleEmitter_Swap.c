/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041db2c
 * Function: Caver::Proto::ParticleEmitter::Swap
 * Signature: undefined __thiscall Swap(ParticleEmitter * this, ParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::Swap(Caver::Proto::ParticleEmitter*) */

void __thiscall Caver::Proto::ParticleEmitter::Swap(ParticleEmitter *this,ParticleEmitter *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ParticleEmitter *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar5 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    uVar5 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
                    /* catch() { ... } // from try @ 0041d954 with catch @ 0041db8c */
    uVar1 = *(undefined4 *)(this + 0x24);
                    /* try { // try from 0041db94 to 0051dbeb has its CatchHandler @ 0041db94
                       catch() { ... } // from try @ 0041db94 with catch @ 0041db94
                       catch() { ... } // from try @ 0041dc10 with catch @ 0041db94 */
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar8 = *(undefined8 *)(this + 0x48);
    uVar6 = *(undefined8 *)(this + 0x40);
    pPVar4 = *(ParticleEmitter **)(this + 0x30);
    uVar5 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x40) = uVar7;
    *(ParticleEmitter **)(param_1 + 0x30) = pPVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar6;
                    /* try { // try from 0041dbec to 0051dbff has its CatchHandler @ 0041dc94 */
    if (*(ParticleEmitter **)(this + 0x30) == param_1 + 0x40) {
      *(ParticleEmitter **)(this + 0x30) = this + 0x40;
      pPVar4 = *(ParticleEmitter **)(param_1 + 0x30);
    }
    if (pPVar4 == this + 0x40) {
      *(ParticleEmitter **)(param_1 + 0x30) = param_1 + 0x40;
    }
    uVar1 = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
                    /* try { // try from 0041dc04 to 0051dc0f has its CatchHandler @ 0041dc98 */
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
                    /* try { // try from 0041dc10 to 0051dd07 has its CatchHandler @ 0041db94 */
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


