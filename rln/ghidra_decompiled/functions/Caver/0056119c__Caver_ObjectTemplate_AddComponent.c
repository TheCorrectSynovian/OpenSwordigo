/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056119c
 * Function: Caver::ObjectTemplate::AddComponent
 * Signature: undefined __thiscall AddComponent(ObjectTemplate * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::AddComponent(boost::intrusive_ptr<Caver::Component> const&) */

void __thiscall Caver::ObjectTemplate::AddComponent(ObjectTemplate *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lStack_10;
  long local_8;
  
  lVar3 = *(long *)param_1;
  if (*(int *)(lVar3 + 0x20) != 0) {
    SceneObject::AddComponent((SceneObject *)this,param_1);
    return;
  }
  plVar2 = *(long **)(this + 200);
  iVar4 = 1;
  for (plVar1 = *(long **)(this + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if (*(int *)(*plVar1 + 0x20) < iVar4) {
      plVar5 = &local_8;
    }
    else {
      if (iVar4 < *(int *)(*plVar1 + 0x20)) break;
      iVar4 = iVar4 + 1;
                    /* catch() { ... } // from try @ 00560e70 with catch @ 005611e4 */
      plVar5 = &lStack_10;
    }
                    /* try { // try from 005611e8 to 0066120f has its CatchHandler @ 005611e8
                       catch() { ... } // from try @ 005611e8 with catch @ 005611e8
                       catch() { ... } // from try @ 00561234 with catch @ 005611e8
                       catch() { ... } // from try @ 00561330 with catch @ 005611e8
                       catch() { ... } // from try @ 00561494 with catch @ 005611e8 */
    *plVar5 = (long)plVar1;
  }
  *(int *)(lVar3 + 0x20) = iVar4;
  SceneObject::AddComponent((SceneObject *)this,param_1);
  return;
}


