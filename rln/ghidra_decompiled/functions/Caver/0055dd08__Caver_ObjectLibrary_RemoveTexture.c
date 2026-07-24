/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055dd08
 * Function: Caver::ObjectLibrary::RemoveTexture
 * Signature: undefined __thiscall RemoveTexture(ObjectLibrary * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::RemoveTexture(Caver::Texture*) */

void __thiscall Caver::ObjectLibrary::RemoveTexture(ObjectLibrary *this,Texture *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar6;
  long *plVar5;
  
                    /* try { // try from 0055dd18 to 0065dd27 has its CatchHandler @ 0055de5c */
  plVar2 = *(long **)(this + 0x58);
  if (*(long **)(this + 0x50) != plVar2) {
    plVar4 = *(long **)(this + 0x50);
    do {
      plVar5 = plVar4 + 1;
      if ((Texture *)*plVar4 == param_1) {
                    /* try { // try from 0055dd60 to 0065dd87 has its CatchHandler @ 0055deac */
        if ((plVar2 + -1 != plVar4) && (0 < (long)plVar2 - (long)(plVar4 + 1))) {
          lVar6 = ((ulong)((long)plVar2 - (long)(plVar4 + 1)) >> 3) + 1;
          do {
            lVar3 = plVar4[1];
            if (lVar3 != 0) {
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            }
            plVar2 = (long *)*plVar4;
            *plVar4 = lVar3;
                    /* try { // try from 0055dd88 to 0065dd93 has its CatchHandler @ 0055df00 */
                    /* try { // try from 0055dd94 to 0065de7f has its CatchHandler @ 0055dc24 */
            if ((plVar2 != (long *)0x0) &&
               (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar2 + 8))();
            }
            lVar6 = lVar6 + -1;
            plVar4 = plVar4 + 1;
          } while (1 < lVar6);
          plVar2 = *(long **)(this + 0x58);
        }
        *(long **)(this + 0x58) = plVar2 + -1;
        plVar2 = (long *)plVar2[-1];
        if (plVar2 == (long *)0x0) {
          return;
        }
        iVar1 = (int)plVar2[1] + -1;
        *(int *)(plVar2 + 1) = iVar1;
        if (iVar1 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0055de00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
      plVar4 = plVar5;
    } while (plVar2 != plVar5);
  }
  return;
}


