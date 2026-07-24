/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343d44
 * Function: Caver::ComponentCollection::PurgeInactive
 * Signature: undefined __thiscall PurgeInactive(ComponentCollection * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentCollection::PurgeInactive() */

void __thiscall Caver::ComponentCollection::PurgeInactive(ComponentCollection *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)this;
  plVar4 = *(long **)(this + 8);
  if (plVar6 != plVar4) {
    do {
      if ((*(long *)(*plVar6 + 0x28) == 0) || (*(char *)(*(long *)(*plVar6 + 0x28) + 0xf0) == '\0'))
      {
        if ((plVar6 + 1 != plVar4) && (uVar5 = (long)plVar4 - (long)(plVar6 + 1), 0 < (long)uVar5))
        {
          lVar7 = (uVar5 >> 3) + 1;
          plVar4 = plVar6;
          do {
            lVar3 = plVar4[1];
            if (lVar3 != 0) {
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            }
            plVar2 = (long *)*plVar4;
            *plVar4 = lVar3;
            if ((plVar2 != (long *)0x0) &&
               (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar2 + 8))();
            }
            lVar7 = lVar7 + -1;
            plVar4 = plVar4 + 1;
          } while (1 < lVar7);
          plVar4 = *(long **)(this + 8);
        }
        plVar2 = plVar4 + -1;
        *(long **)(this + 8) = plVar2;
        plVar4 = (long *)plVar4[-1];
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar4 + 8))();
          plVar2 = *(long **)(this + 8);
        }
      }
      else {
        plVar6 = plVar6 + 1;
        plVar2 = plVar4;
      }
      plVar4 = plVar2;
    } while (plVar6 != plVar2);
  }
  return;
}


