/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004145c4
 * Function: Caver::Proto::EntityComponent::EntityComponent
 * Signature: undefined __thiscall EntityComponent(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::EntityComponent() */

void __thiscall Caver::Proto::EntityComponent::EntityComponent(EntityComponent *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068aa60;
                    /* catch() { ... } // from try @ 00414548 with catch @ 004145cc */
  puVar1 = PTR_vtable_007e5ea8 + 0x10;
  this[0x10] = (EntityComponent)0x1;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


