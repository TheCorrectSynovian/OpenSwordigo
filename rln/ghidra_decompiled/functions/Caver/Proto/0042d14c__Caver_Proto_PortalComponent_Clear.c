/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d14c
 * Function: Caver::Proto::PortalComponent::Clear
 * Signature: undefined __thiscall Clear(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::Clear() */

void __thiscall Caver::Proto::PortalComponent::Clear(PortalComponent *this)

{
  PortalComponent PVar1;
  long *plVar2;
  uint uVar3;
  
  PVar1 = this[0x24];
  uVar3 = (uint)(byte)PVar1;
  if (PVar1 != (PortalComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 0042d174 to 0052d177 has its CatchHandler @ 0042d228 */
                    /* try { // try from 0042d178 to 0052d1f7 has its CatchHandler @ 0042d0c0 */
    if ((((byte)PVar1 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10),
       plVar2 != (long *)PTR__default_destination_scene_name__007e6a68)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x24);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_spawn_point_name__007e72a0)
       ) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    this[0x20] = (PortalComponent)0x0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


