/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574404
 * Function: Caver::SceneObject::RemoveAllComponentsWithInterface
 * Signature: undefined __thiscall RemoveAllComponentsWithInterface(SceneObject * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveAllComponentsWithInterface(long) */

void __thiscall Caver::SceneObject::RemoveAllComponentsWithInterface(SceneObject *this,long param_1)

{
  FastVector<Caver::Component*> *this_00;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(this + 0xc0);
  if (*(long **)(this + 200) != plVar11) {
    this_00 = (FastVector<Caver::Component*> *)(this + 0xd8);
    do {
      uVar2 = (**(code **)(*(long *)*plVar11 + 0xa0))((long *)*plVar11,param_1);
      if ((uVar2 & 1) == 0) {
        plVar11 = plVar11 + 1;
      }
      else {
        uVar2 = (**(code **)(*(long *)*plVar11 + 0xb8))();
        if ((uVar2 & 1) != 0) {
          iVar1 = *(int *)this_00;
          if (iVar1 != 0) {
            if (iVar1 < 1) {
              lVar12 = 0;
            }
            else {
              lVar6 = *plVar11;
              lVar9 = (long)iVar1 * 8;
              lVar8 = (long)iVar1 + 1;
              lVar10 = 0;
              do {
                lVar9 = lVar9 + -8;
                lVar12 = *(long *)(*(long *)(this + 0xe0) + lVar9);
                *(long *)(*(long *)(this + 0xe0) + lVar9) = lVar10;
                if (lVar12 == lVar6) {
                  iVar5 = iVar1 + -1;
                  goto LAB_00574504;
                }
                lVar8 = lVar8 + -1;
                lVar10 = lVar12;
              } while (1 < lVar8);
            }
            iVar5 = iVar1 + -1;
            *(int *)(this + 0xd8) = iVar5;
            if (*(int *)(this + 0xdc) < iVar1) {
              iVar1 = *(int *)(this + 0xdc) * 2;
              if (iVar1 < 0xb) {
                iVar1 = 10;
              }
              FastVector<Caver::Component*>::Resize(this_00,iVar1);
              iVar5 = *(int *)this_00;
            }
            *(long *)(*(long *)(this + 0xe0) + (long)iVar5 * 8) = lVar12;
            iVar5 = iVar5 + 1;
LAB_00574504:
            *(int *)this_00 = iVar5;
          }
        }
        plVar3 = plVar11 + 1;
        *(undefined8 *)(*plVar11 + 0x28) = 0;
        plVar7 = *(long **)(this + 200);
        plVar4 = plVar3;
        if ((plVar3 != plVar7) && (plVar4 = plVar7, 0 < (long)plVar7 - (long)plVar3)) {
          lVar12 = ((ulong)((long)plVar7 - (long)plVar3) >> 3) + 1;
          plVar4 = plVar11;
          do {
            lVar8 = plVar4[1];
            if (lVar8 != 0) {
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            }
            plVar3 = (long *)*plVar4;
            *plVar4 = lVar8;
            if ((plVar3 != (long *)0x0) &&
               (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar3 + 8))();
            }
            lVar12 = lVar12 + -1;
            plVar4 = plVar4 + 1;
          } while (1 < lVar12);
          plVar4 = *(long **)(this + 200);
        }
        *(long **)(this + 200) = plVar4 + -1;
        plVar4 = (long *)plVar4[-1];
                    /* catch() { ... } // from try @ 005741f4 with catch @ 0057459c */
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar4 + 8))();
        }
      }
                    /* try { // try from 005745b8 to 0067462f has its CatchHandler @ 00574634 */
                    /* catch() { ... } // from try @ 0057435c with catch @ 005745c4 */
    } while (*(long **)(this + 200) != plVar11);
  }
  return;
}


