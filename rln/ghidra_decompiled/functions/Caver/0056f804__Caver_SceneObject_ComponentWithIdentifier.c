/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f804
 * Function: Caver::SceneObject::ComponentWithIdentifier
 * Signature: undefined __thiscall ComponentWithIdentifier(SceneObject * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::ComponentWithIdentifier(int) const */

long __thiscall Caver::SceneObject::ComponentWithIdentifier(SceneObject *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  
                    /* try { // try from 0056f808 to 0066f877 has its CatchHandler @ 0056f880 */
  plVar1 = *(long **)(this + 0xc0);
  if (*(long **)(this + 0xc0) == *(long **)(this + 200)) {
    return 0;
  }
  do {
    plVar2 = plVar1 + 1;
    if (*(int *)(*plVar1 + 0x20) == param_1) {
      return *plVar1;
    }
    plVar1 = plVar2;
  } while (*(long **)(this + 200) != plVar2);
  return 0;
}


