/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041460c
 * Function: Caver::Proto::EntityComponent::EntityComponent
 * Signature: undefined __thiscall EntityComponent(EntityComponent * this, EntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::EntityComponent(Caver::Proto::EntityComponent const&) */

void __thiscall
Caver::Proto::EntityComponent::EntityComponent(EntityComponent *this,EntityComponent *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068aa60;
                    /* catch() { ... } // from try @ 004145f0 with catch @ 00414620 */
                    /* try { // try from 00414624 to 00514657 has its CatchHandler @ 00414624
                       catch() { ... } // from try @ 00414624 with catch @ 00414624
                       catch() { ... } // from try @ 00414660 with catch @ 00414624
                       catch() { ... } // from try @ 004146dc with catch @ 00414624
                       catch() { ... } // from try @ 004147ac with catch @ 00414624 */
  puVar1 = PTR_vtable_007e5ea8 + 0x10;
  this[0x10] = (EntityComponent)0x1;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  MergeFrom(this,param_1);
  return;
}


