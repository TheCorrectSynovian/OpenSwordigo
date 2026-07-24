/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432164
 * Function: Caver::Proto::PortalEffectComponent::Clear
 * Signature: undefined __thiscall Clear(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::Clear() */

void __thiscall Caver::Proto::PortalEffectComponent::Clear(PortalEffectComponent *this)

{
  PortalEffectComponent PVar1;
  uint uVar2;
  
                    /* try { // try from 00432170 to 00532197 has its CatchHandler @ 0043230c */
  PVar1 = this[0x28];
  uVar2 = (uint)(byte)PVar1;
  if (PVar1 != (PortalEffectComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)PVar1 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x28);
    }
                    /* try { // try from 00432198 to 005321df has its CatchHandler @ 00431fc8 */
    if (((uVar2 >> 3 & 1) != 0) && (*(Vector3 **)(this + 0x20) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


