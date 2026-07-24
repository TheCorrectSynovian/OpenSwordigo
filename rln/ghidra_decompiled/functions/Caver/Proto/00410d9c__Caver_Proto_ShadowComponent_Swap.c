/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410d9c
 * Function: Caver::Proto::ShadowComponent::Swap
 * Signature: undefined __thiscall Swap(ShadowComponent * this, ShadowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::Swap(Caver::Proto::ShadowComponent*) */

void __thiscall Caver::Proto::ShadowComponent::Swap(ShadowComponent *this,ShadowComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0x20);
                    /* try { // try from 00410dac to 00510db7 has its CatchHandler @ 00410b9c */
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00410d84 with catch @ 00410db4
                        */
                    /* try { // try from 00410db8 to 00510dfb has its CatchHandler @ 00410db8
                       catch(type#1 @ 00000000) { ... } // from try @ 00410db8 with catch @ 00410db8
                       catch(type#1 @ 00000000) { ... } // from try @ 00410e00 with catch @ 00410db8
                       catch(type#1 @ 00000000) { ... } // from try @ 00410ed0 with catch @ 00410db8
                        */
    uVar2 = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return;
}


