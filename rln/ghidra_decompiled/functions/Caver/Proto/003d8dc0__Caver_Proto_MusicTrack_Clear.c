/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8dc0
 * Function: Caver::Proto::MusicTrack::Clear
 * Signature: undefined __thiscall Clear(MusicTrack * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::Clear() */

void __thiscall Caver::Proto::MusicTrack::Clear(MusicTrack *this)

{
  long *plVar1;
  
  if (this[0x1c] != (MusicTrack)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_resource_name__007e7358)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined4 *)(this + 0x18) = 0x3f800000;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


