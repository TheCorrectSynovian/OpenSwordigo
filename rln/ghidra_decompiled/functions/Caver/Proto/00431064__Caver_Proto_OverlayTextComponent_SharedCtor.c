/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431064
 * Function: Caver::Proto::OverlayTextComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::SharedCtor() */

void __thiscall Caver::Proto::OverlayTextComponent::SharedCtor(OverlayTextComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00430fa8 with catch @ 00431064
                        */
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_sprite_name__007e6978;
  puVar1 = PTR__default_text__007e5e10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00430f4c with catch @ 0043106c
                        */
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


