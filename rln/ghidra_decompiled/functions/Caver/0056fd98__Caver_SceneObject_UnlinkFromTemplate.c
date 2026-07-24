/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056fd98
 * Function: Caver::SceneObject::UnlinkFromTemplate
 * Signature: undefined __thiscall UnlinkFromTemplate(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::UnlinkFromTemplate() */

void __thiscall Caver::SceneObject::UnlinkFromTemplate(SceneObject *this)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
                    /* catch() { ... } // from try @ 0056fe08 with catch @ 0056fd98
                       catch() { ... } // from try @ 0056feac with catch @ 0056fd98 */
  plVar6 = *(long **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if ((plVar6 != (long *)0x0) &&
     (iVar5 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar5, iVar5 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0xc0);
  plVar3 = *(long **)(this + 200);
  if (plVar6 != plVar3) {
    uVar2 = ((ulong)((long)plVar3 + (-8 - (long)plVar6)) >> 3) + 1;
    if (1 < uVar2) {
      uVar7 = uVar2 & 0x3ffffffffffffffe;
      plVar8 = plVar6 + 1;
                    /* try { // try from 0056fe04 to 0066fe07 has its CatchHandler @ 0056fe64 */
      uVar9 = uVar7;
      do {
        plVar1 = plVar8 + -1;
                    /* try { // try from 0056fe08 to 0066fe83 has its CatchHandler @ 0056fd98 */
        lVar4 = *plVar8;
        uVar9 = uVar9 - 2;
        plVar8 = plVar8 + 2;
        *(undefined1 *)(*plVar1 + 0x30) = 0;
        *(undefined1 *)(lVar4 + 0x30) = 0;
      } while (uVar9 != 0);
      plVar6 = plVar6 + uVar7;
      if (uVar2 == uVar7) {
        return;
      }
    }
    do {
      plVar8 = plVar6 + 1;
      *(undefined1 *)(*plVar6 + 0x30) = 0;
      plVar6 = plVar8;
    } while (plVar3 != plVar8);
  }
  return;
}


