/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414378
 * Function: Caver::Proto::CharControllerComponent::Swap
 * Signature: undefined __thiscall Swap(CharControllerComponent * this, CharControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::Swap(Caver::Proto::CharControllerComponent*) */

void __thiscall
Caver::Proto::CharControllerComponent::Swap
          (CharControllerComponent *this,CharControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  CharControllerComponent *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_1 != this) {
    uVar2 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
                    /* try { // try from 00414418 to 00514423 has its CatchHandler @ 00414524 */
    uVar2 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
                    /* try { // try from 00414444 to 0051446b has its CatchHandler @ 004144d0 */
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
                    /* try { // try from 0041446c to 005144f3 has its CatchHandler @ 00414220 */
    uVar2 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    uVar8 = *(undefined8 *)(this + 0x60);
    uVar6 = *(undefined8 *)(this + 0x58);
    pCVar5 = *(CharControllerComponent **)(this + 0x48);
    uVar2 = *(undefined4 *)(this + 0x50);
    uVar1 = *(undefined4 *)(this + 0x54);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar7;
    *(CharControllerComponent **)(param_1 + 0x48) = pCVar5;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    if (*(CharControllerComponent **)(this + 0x48) == param_1 + 0x58) {
      *(CharControllerComponent **)(this + 0x48) = this + 0x58;
      pCVar5 = *(CharControllerComponent **)(param_1 + 0x48);
    }
    if (pCVar5 == this + 0x58) {
      *(CharControllerComponent **)(param_1 + 0x48) = param_1 + 0x58;
    }
    uVar2 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
                    /* try { // try from 004144f4 to 0051451b has its CatchHandler @ 00414520 */
    uVar2 = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar6 = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
                    /* catch() { ... } // from try @ 004144f4 with catch @ 00414520 */
    *(undefined8 *)(param_1 + 0x78) = uVar6;
                    /* catch() { ... } // from try @ 00414418 with catch @ 00414524 */
    uVar2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
                    /* try { // try from 00414548 to 0051456f has its CatchHandler @ 004145cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


