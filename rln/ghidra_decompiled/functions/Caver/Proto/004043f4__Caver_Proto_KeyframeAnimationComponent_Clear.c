/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004043f4
 * Function: Caver::Proto::KeyframeAnimationComponent::Clear
 * Signature: undefined __thiscall Clear(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::Clear() */

void __thiscall Caver::Proto::KeyframeAnimationComponent::Clear(KeyframeAnimationComponent *this)

{
  long *plVar1;
  
  if (this[0x20] != (KeyframeAnimationComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)this[0x20] >> 1 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e5890)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined2 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


