/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d87f8
 * Function: Caver::Proto::SoundLibrary::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SoundLibrary * this, SoundLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::CopyFrom(Caver::Proto::SoundLibrary const&) */

void __thiscall Caver::Proto::SoundLibrary::CopyFrom(SoundLibrary *this,SoundLibrary *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


