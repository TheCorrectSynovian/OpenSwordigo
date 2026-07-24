/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342228
 * Function: Caver::Component::AutoConnectOutlets
 * Signature: undefined __thiscall AutoConnectOutlets(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::AutoConnectOutlets() */

void __thiscall Caver::Component::AutoConnectOutlets(Component *this)

{
  int iVar1;
  long lVar2;
  Component *pCVar3;
  SceneObject *this_00;
  
  for (pCVar3 = *(Component **)(this + 0x58); pCVar3 != this + 0x48;
      pCVar3 = (Component *)FUN_0064c640(pCVar3)) {
    if ((pCVar3[0x40] != (Component)0x0) &&
       (iVar1 = (**(code **)(**(long **)(pCVar3 + 0x38) + 8))(), iVar1 == 0)) {
      this_00 = *(SceneObject **)(this + 0x28);
      lVar2 = (**(code **)**(undefined8 **)(pCVar3 + 0x38))();
      lVar2 = SceneObject::ComponentWithInterface(this_00,lVar2);
      if (lVar2 != 0) {
        (**(code **)(**(long **)(pCVar3 + 0x38) + 0x10))
                  (*(long **)(pCVar3 + 0x38),*(undefined4 *)(lVar2 + 0x20));
      }
    }
  }
  return;
}


