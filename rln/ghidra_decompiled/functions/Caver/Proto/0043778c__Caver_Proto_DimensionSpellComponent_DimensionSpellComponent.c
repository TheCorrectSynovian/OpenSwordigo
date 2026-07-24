/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043778c
 * Function: Caver::Proto::DimensionSpellComponent::DimensionSpellComponent
 * Signature: undefined __thiscall DimensionSpellComponent(DimensionSpellComponent * this, DimensionSpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::DimensionSpellComponent(Caver::Proto::DimensionSpellComponent
   const&) */

void __thiscall
Caver::Proto::DimensionSpellComponent::DimensionSpellComponent
          (DimensionSpellComponent *this,DimensionSpellComponent *param_1)

{
                    /* try { // try from 00437790 to 00537797 has its CatchHandler @ 00437eb8 */
  *(undefined **)this = PTR_vtable_007e64e8 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


