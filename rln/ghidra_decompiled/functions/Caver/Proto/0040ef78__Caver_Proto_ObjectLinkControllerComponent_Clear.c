/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ef78
 * Function: Caver::Proto::ObjectLinkControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::Clear() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::Clear(ObjectLinkControllerComponent *this)

{
  ObjectLinkControllerComponent OVar1;
  long *plVar2;
  uint uVar3;
  
  OVar1 = this[0x38];
  uVar3 = (uint)(byte)OVar1;
  if (OVar1 != (ObjectLinkControllerComponent)0x0) {
    if ((((byte)OVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10),
       plVar2 != (long *)PTR__default_target_object_identifier__007e4c30)) {
                    /* try { // try from 0040efb4 to 0050efdb has its CatchHandler @ 0041028c */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x38);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18),
       plVar2 != (long *)PTR__default_target_bone_identifier__007e7b50)) {
                    /* try { // try from 0040efe0 to 0050efeb has its CatchHandler @ 004100f0 */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
                    /* try { // try from 0040efec to 0050eff3 has its CatchHandler @ 0040fdac */
      uVar3 = *(uint *)(this + 0x38);
    }
                    /* try { // try from 0040eff4 to 0050efff has its CatchHandler @ 004100f0 */
    if (((uVar3 >> 2 & 1) != 0) && (*(Vector3 **)(this + 0x20) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x20));
      uVar3 = *(uint *)(this + 0x38);
    }
    if (((uVar3 >> 3 & 1) != 0) && (*(Vector3 **)(this + 0x28) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x28));
      uVar3 = *(uint *)(this + 0x38);
    }
                    /* try { // try from 0040f01c to 0050f023 has its CatchHandler @ 0040fd14 */
    if (((uVar3 >> 4 & 1) != 0) && (*(Vector3 **)(this + 0x30) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x30));
    }
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


