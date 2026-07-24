/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004145f0
 * Function: Caver::Proto::EntityComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::SharedCtor() */

void __thiscall Caver::Proto::EntityComponent::SharedCtor(EntityComponent *this)

{
  undefined8 uVar1;
  
                    /* try { // try from 004145f0 to 00514617 has its CatchHandler @ 00414620 */
  uVar1 = DAT_0068aa60;
  this[0x10] = (EntityComponent)0x1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


