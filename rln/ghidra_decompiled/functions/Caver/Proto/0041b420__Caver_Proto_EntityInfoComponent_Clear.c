/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b420
 * Function: Caver::Proto::EntityInfoComponent::Clear
 * Signature: undefined __thiscall Clear(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::Clear() */

void __thiscall Caver::Proto::EntityInfoComponent::Clear(EntityInfoComponent *this)

{
  long *plVar1;
  
  if ((((byte)this[0x18] & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_entity_class__007e6138)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
                    /* try { // try from 0041b460 to 0051b46f has its CatchHandler @ 0041b4c8 */
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


