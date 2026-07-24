/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f95c
 * Function: Caver::GUIView::InsertSubviewAtIndex
 * Signature: undefined __thiscall InsertSubviewAtIndex(GUIView * this, int param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::InsertSubviewAtIndex(int, boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall Caver::GUIView::InsertSubviewAtIndex(GUIView *this,int param_1,shared_ptr *param_2)

{
  long *plVar1;
  void *pvVar2;
  GUIView *pGVar3;
  long lVar4;
  int iVar5;
  GUIView *pGVar6;
  
  pGVar3 = this + 0x20;
  pGVar6 = *(GUIView **)pGVar3;
                    /* try { // try from 0059f97c to 0069f97f has its CatchHandler @ 0059fb38 */
                    /* try { // try from 0059f980 to 0069fa0f has its CatchHandler @ 0059f944 */
  if (pGVar3 != pGVar6) {
    iVar5 = param_1 + 1;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        plVar1 = *(long **)param_2;
        if ((char)plVar1[10] == '\0') {
          pvVar2 = operator_new(0x20);
          *(undefined8 *)((long)pvVar2 + 0x10) = *(undefined8 *)param_2;
          lVar4 = *(long *)(param_2 + 8);
          *(long *)((long)pvVar2 + 0x18) = lVar4;
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
          }
          FUN_0062a9ac(pvVar2,pGVar6);
          plVar1 = *(long **)param_2;
        }
        else {
          *(undefined1 *)(plVar1 + 10) = 0;
        }
        plVar1[0xb] = (long)this;
                    /* try { // try from 0059fa10 to 0069fa1f has its CatchHandler @ 0059fae4 */
        (**(code **)(*plVar1 + 0x80))();
                    /* try { // try from 0059fa20 to 0069fb07 has its CatchHandler @ 0059f944 */
        if ((*(int *)(*(long *)param_2 + 0x70) != 0) && (DAT_00683734 < *(float *)(this + 0x8c))) {
                    /* WARNING: Could not recover jumptable at 0x0059fa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this + 0x58))(this);
          return;
        }
        return;
      }
      pGVar6 = *(GUIView **)pGVar6;
    } while (pGVar3 != pGVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0059f9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this,param_2);
  return;
}


