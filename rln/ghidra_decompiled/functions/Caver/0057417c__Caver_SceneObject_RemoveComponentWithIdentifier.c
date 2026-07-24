/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057417c
 * Function: Caver::SceneObject::RemoveComponentWithIdentifier
 * Signature: undefined __thiscall RemoveComponentWithIdentifier(SceneObject * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveComponentWithIdentifier(int) */

void __thiscall Caver::SceneObject::RemoveComponentWithIdentifier(SceneObject *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  FastVector<Caver::Component*> *this_00;
  long *plVar10;
  
                    /* try { // try from 00574180 to 00674183 has its CatchHandler @ 00574640 */
                    /* try { // try from 00574184 to 006741f3 has its CatchHandler @ 00574088 */
  plVar3 = *(long **)(this + 0xc0);
  plVar4 = *(long **)(this + 200);
  if (plVar4 == plVar3) {
    return;
  }
  while( true ) {
    plVar10 = plVar3 + 1;
    plVar9 = (long *)*plVar3;
    if (plVar9 != (long *)0x0) {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    }
    if ((int)plVar9[4] == param_1) break;
    iVar1 = (int)plVar9[1] + -1;
    *(int *)(plVar9 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
      plVar4 = *(long **)(this + 200);
    }
    plVar3 = plVar10;
                    /* try { // try from 005741f4 to 006741fb has its CatchHandler @ 0057459c */
    if (plVar10 == plVar4) {
      return;
    }
  }
                    /* try { // try from 005741fc to 00674277 has its CatchHandler @ 00574088 */
  uVar2 = (**(code **)(*plVar9 + 0xb8))(plVar9);
  if ((uVar2 & 1) != 0) {
    this_00 = (FastVector<Caver::Component*> *)(this + 0xd8);
    iVar1 = *(int *)this_00;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        plVar4 = (long *)0x0;
      }
      else {
        lVar7 = (long)iVar1 * 8;
        lVar6 = (long)iVar1 + 1;
        plVar8 = (long *)0x0;
        do {
          lVar7 = lVar7 + -8;
          plVar4 = *(long **)(*(long *)(this + 0xe0) + lVar7);
          *(long **)(*(long *)(this + 0xe0) + lVar7) = plVar8;
          if (plVar4 == plVar9) {
            *(int *)this_00 = iVar1 + -1;
            goto LAB_005742b0;
          }
          lVar6 = lVar6 + -1;
          plVar8 = plVar4;
        } while (1 < lVar6);
      }
      iVar5 = iVar1 + -1;
      *(int *)(this + 0xd8) = iVar5;
      if (*(int *)(this + 0xdc) < iVar1) {
                    /* try { // try from 00574278 to 00674287 has its CatchHandler @ 005747ec */
        iVar1 = *(int *)(this + 0xdc) * 2;
        if (iVar1 < 0xb) {
          iVar1 = 10;
        }
                    /* try { // try from 00574288 to 006742d7 has its CatchHandler @ 00574088 */
        FastVector<Caver::Component*>::Resize(this_00,iVar1);
        iVar5 = *(int *)this_00;
      }
      *(long **)(*(long *)(this + 0xe0) + (long)iVar5 * 8) = plVar4;
      *(int *)this_00 = iVar5 + 1;
    }
  }
LAB_005742b0:
  plVar9[5] = 0;
  uVar2 = (long)*(long **)(this + 200) - (long)plVar10;
  if ((uVar2 != 0) && (plVar10 = *(long **)(this + 200), 0 < (long)uVar2)) {
    lVar6 = (uVar2 >> 3) + 1;
    do {
      lVar7 = plVar3[1];
                    /* try { // try from 005742d8 to 006742e7 has its CatchHandler @ 005747b4 */
      if (lVar7 != 0) {
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      }
      plVar4 = (long *)*plVar3;
      *plVar3 = lVar7;
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
      lVar6 = lVar6 + -1;
      plVar3 = plVar3 + 1;
                    /* try { // try from 0057431c to 0067434f has its CatchHandler @ 00574848 */
    } while (1 < lVar6);
    plVar10 = *(long **)(this + 200);
  }
  *(long **)(this + 200) = plVar10 + -1;
  plVar3 = (long *)plVar10[-1];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 00574350 to 0067435b has its CatchHandler @ 005745fc */
    (**(code **)(*plVar3 + 8))();
  }
                    /* try { // try from 0057435c to 0067436f has its CatchHandler @ 005745c4 */
  uVar2 = (**(code **)(*plVar9 + 0xd8))(plVar9);
  if ((uVar2 & 1) != 0) {
    UpdateBounds(this);
  }
  iVar1 = (int)plVar9[1] + -1;
  *(int *)(plVar9 + 1) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* try { // try from 0057439c to 006743ab has its CatchHandler @ 00574700 */
                    /* try { // try from 005743ac to 006745b7 has its CatchHandler @ 00574088 */
                    /* WARNING: Could not recover jumptable at 0x005743b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 8))(plVar9);
  return;
}


