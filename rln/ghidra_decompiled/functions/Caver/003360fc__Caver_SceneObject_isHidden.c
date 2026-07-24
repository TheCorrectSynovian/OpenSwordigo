/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003360fc
 * Function: Caver::SceneObject::isHidden
 * Signature: undefined __thiscall isHidden(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::isHidden() const */

undefined8 __thiscall Caver::SceneObject::isHidden(SceneObject *this)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (((this[0xf4] == (SceneObject)0x0) &&
      ((*(SceneObject **)(this + 0x30) == (SceneObject *)0x0 ||
       (uVar2 = isHidden(*(SceneObject **)(this + 0x30)), (uVar2 & 1) == 0)))) &&
     ((*(long *)(this + 0x28) == 0 || (uVar2 = IsInHiddenGroup(this), (uVar2 & 1) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


