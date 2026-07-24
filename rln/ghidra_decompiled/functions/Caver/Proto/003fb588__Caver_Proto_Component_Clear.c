/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb588
 * Function: Caver::Proto::Component::Clear
 * Signature: undefined __thiscall Clear(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::Clear() */

void __thiscall Caver::Proto::Component::Clear(Component *this)

{
  Component CVar1;
  long *plVar2;
  uint uVar3;
  
  google::protobuf::internal::ExtensionSet::Clear((ExtensionSet *)(this + 8));
  CVar1 = this[0x58];
  uVar3 = (uint)(byte)CVar1;
  if (CVar1 != (Component)0x0) {
    if ((((byte)CVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x40), plVar2 != (long *)PTR__default_class_name__007e5328)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x58);
    }
    *(undefined8 *)(this + 0x48) = 0;
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x50), plVar2 != (long *)PTR__default_label__007e6320)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


