/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057016c
 * Function: Caver::SceneObject::RemoveAllComponents
 * Signature: undefined __thiscall RemoveAllComponents(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveAllComponents() */

void __thiscall Caver::SceneObject::RemoveAllComponents(SceneObject *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(this + 0xc0);
  *(undefined4 *)(this + 0xd8) = 0;
  if (plVar2 != *(long **)(this + 200)) {
    lVar5 = 0;
    do {
      plVar1 = (long *)((long)plVar2 + lVar5);
      lVar5 = lVar5 + 8;
      *(undefined8 *)(*plVar1 + 0x28) = 0;
      plVar1 = plVar2;
    } while ((long)plVar2 + lVar5 != *(long *)(this + 200));
    for (; lVar5 != 0; lVar5 = lVar5 + -8) {
      plVar4 = (long *)*plVar1;
      if ((plVar4 != (long *)0x0) &&
         (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar1 = plVar1 + 1;
    }
  }
  *(long **)(this + 200) = plVar2;
  return;
}


