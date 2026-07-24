/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de714
 * Function: Caver::Proto::MapZone::Clear
 * Signature: undefined __thiscall Clear(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::Clear() */

void __thiscall Caver::Proto::MapZone::Clear(MapZone *this)

{
  MapZone MVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  MVar1 = this[0x68];
  uVar3 = (uint)(byte)MVar1;
  if (MVar1 != (MapZone)0x0) {
    if ((((byte)MVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e5428)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x68);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_title__007e7d78)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x68);
    }
    *(undefined4 *)(this + 0x58) = 0;
    if (((uVar3 >> 4 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x60), plVar2 != (long *)PTR__default_music__007e5568)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


