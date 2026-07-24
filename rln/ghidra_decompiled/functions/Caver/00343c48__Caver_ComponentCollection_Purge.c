/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343c48
 * Function: Caver::ComponentCollection::Purge
 * Signature: undefined __thiscall Purge(ComponentCollection * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentCollection::Purge() */

void __thiscall Caver::ComponentCollection::Purge(ComponentCollection *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)this;
  plVar5 = *(long **)(this + 8);
  if (plVar6 != plVar5) {
    do {
      plVar2 = plVar6 + 1;
      if (*(long *)(*plVar6 + 0x28) == 0) {
        if ((plVar2 != plVar5) && (0 < (long)plVar5 - (long)plVar2)) {
          lVar7 = ((ulong)((long)plVar5 - (long)plVar2) >> 3) + 1;
          plVar5 = plVar6;
          do {
            lVar4 = plVar5[1];
            if (lVar4 != 0) {
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            }
            plVar2 = (long *)*plVar5;
            *plVar5 = lVar4;
            if ((plVar2 != (long *)0x0) &&
               (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar2 + 8))();
            }
            lVar7 = lVar7 + -1;
            plVar5 = plVar5 + 1;
          } while (1 < lVar7);
          plVar5 = *(long **)(this + 8);
        }
        plVar2 = plVar5 + -1;
        *(long **)(this + 8) = plVar2;
        plVar3 = (long *)plVar5[-1];
        plVar5 = plVar2;
        plVar2 = plVar6;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar3 + 8))();
          plVar5 = *(long **)(this + 8);
        }
      }
      plVar6 = plVar2;
    } while (plVar2 != plVar5);
  }
  return;
}


