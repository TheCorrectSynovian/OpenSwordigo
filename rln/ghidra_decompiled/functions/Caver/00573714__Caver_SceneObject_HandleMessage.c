/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573714
 * Function: Caver::SceneObject::HandleMessage
 * Signature: undefined __thiscall HandleMessage(SceneObject * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::HandleMessage(int, void*) */

undefined8 __thiscall Caver::SceneObject::HandleMessage(SceneObject *this,int param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
  if (lVar1 == 0) {
LAB_00573798:
    if (param_1 == 2) {
                    /* catch() { ... } // from try @ 00573640 with catch @ 005737a4 */
                    /* catch() { ... } // from try @ 00573498 with catch @ 005737a8 */
      RemoveFromAllGroups(this,true);
      if (*(long *)(this + 0x20) != 0) {
        SceneObjectLib::PerformCleanupForSceneObject
                  ((ProgramState *)(*(long *)(this + 0x20) + 0x28),this);
      }
    }
    uVar5 = 0;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(this + 0xc0);
    uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2,param_1,param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = 1;
      do {
        if ((ulong)(lVar1 >> 3) <= uVar3) goto LAB_00573798;
        plVar2 = *(long **)(*(long *)(this + 0xc0) + uVar3 * 8);
        uVar4 = (**(code **)(*plVar2 + 0xd0))(plVar2,param_1,param_2);
        uVar3 = uVar3 + 1;
      } while ((uVar4 & 1) == 0);
    }
    uVar5 = 1;
  }
                    /* try { // try from 005737cc to 00673e13 has its CatchHandler @ 00573e1c */
  return uVar5;
}


