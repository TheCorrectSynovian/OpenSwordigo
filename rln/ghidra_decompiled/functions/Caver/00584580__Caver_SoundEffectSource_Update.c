/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00584580
 * Function: Caver::SoundEffectSource::Update
 * Signature: undefined __thiscall Update(SoundEffectSource * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Update(float) */

void __thiscall Caver::SoundEffectSource::Update(SoundEffectSource *this,float param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00584588 to 0068459b has its CatchHandler @ 00584738 */
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + param_1;
                    /* try { // try from 0058459c to 0068468f has its CatchHandler @ 00584358 */
  uVar1 = isActive(this);
  if (((uVar1 & 1) == 0) && (this[0x18] == (SoundEffectSource)0x0)) {
    puVar2 = *(undefined8 **)(this + 0x10);
    this[0x18] = (SoundEffectSource)0x1;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005845dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,this);
      return;
    }
  }
  return;
}


