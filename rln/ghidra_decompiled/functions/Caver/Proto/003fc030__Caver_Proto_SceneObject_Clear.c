/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc030
 * Function: Caver::Proto::SceneObject::Clear
 * Signature: undefined __thiscall Clear(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::Clear() */

void __thiscall Caver::Proto::SceneObject::Clear(SceneObject *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 & 0xff) != 0) {
    if (((uVar2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_template_name__007e5070)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x88);
    }
    if (((uVar2 >> 1 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)PTR__default_identifier__007e5320)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x88);
    }
    if (((uVar2 >> 3 & 1) != 0) && (*(Vector2 **)(this + 0x58) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x58));
      uVar2 = *(uint *)(this + 0x88);
    }
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 0x3f800000;
    if (((uVar2 >> 7 & 1) != 0) && (*(Rectangle **)(this + 0x70) != (Rectangle *)0x0)) {
      Rectangle::Clear(*(Rectangle **)(this + 0x70));
      uVar2 = *(uint *)(this + 0x88);
    }
  }
  if ((((uVar2 & 0xff00) != 0) && (this[0x78] = (SceneObject)0x0, (uVar2 >> 9 & 1) != 0)) &&
     (*(Program **)(this + 0x80) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x80));
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


