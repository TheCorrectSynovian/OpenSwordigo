/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437498
 * Function: Caver::Proto::DimensionObjectComponent::DimensionObjectComponent
 * Signature: undefined __thiscall DimensionObjectComponent(DimensionObjectComponent * this, DimensionObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::DimensionObjectComponent(Caver::Proto::DimensionObjectComponent
   const&) */

void __thiscall
Caver::Proto::DimensionObjectComponent::DimensionObjectComponent
          (DimensionObjectComponent *this,DimensionObjectComponent *param_1)

{
                    /* try { // try from 004374b0 to 005374c3 has its CatchHandler @ 004381e8 */
  *(undefined **)this = PTR_vtable_007e66d0 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


