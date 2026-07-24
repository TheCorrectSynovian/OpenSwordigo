/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056ffe0
 * Function: Caver::SceneObject::SetScene
 * Signature: undefined __thiscall SetScene(SceneObject * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SetScene(Caver::Scene*) */

void __thiscall Caver::SceneObject::SetScene(SceneObject *this,Scene *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(Scene **)(this + 0x20) != param_1) {
    if (param_1 != (Scene *)0x0) {
      lVar3 = *(long *)(this + 0xc0);
      *(Scene **)(this + 0x20) = param_1;
      if (*(long *)(this + 200) != lVar3) {
        uVar4 = 0;
        do {
          (**(code **)(**(long **)(lVar3 + uVar4 * 8) + 0x40))();
          lVar3 = *(long *)(this + 0xc0);
          uVar4 = uVar4 + 1;
                    /* try { // try from 00570030 to 00670033 has its CatchHandler @ 00570090 */
                    /* try { // try from 00570034 to 006700af has its CatchHandler @ 0056ffc4 */
        } while (uVar4 < (ulong)(*(long *)(this + 200) - lVar3 >> 3));
        param_1 = *(Scene **)(this + 0x20);
      }
      this[0x19] = (SceneObject)0x1;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,this);
      lVar3 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
      if (lVar3 != 0) {
        plVar1 = (long *)**(undefined8 **)(this + 0xc0);
        uVar5 = lVar3 >> 3;
        uVar4 = (**(code **)(*plVar1 + 0xd0))(plVar1,1,0);
        if ((1 < uVar5) && ((uVar4 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00570030 with catch @ 00570090 */
          uVar4 = 1;
          do {
            plVar1 = *(long **)(*(long *)(this + 0xc0) + uVar4 * 8);
            uVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1,1,0);
                    /* try { // try from 005700b0 to 006700d7 has its CatchHandler @ 005700e0 */
            uVar4 = uVar4 + 1;
            if (uVar5 <= uVar4) break;
          } while ((uVar2 & 1) == 0);
        }
      }
      UpdateBounds(this);
      return;
    }
                    /* try { // try from 005700d8 to 006700e3 has its CatchHandler @ 0056ffc4 */
    lVar3 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
    if (lVar3 == 0) {
LAB_00570134:
      RemoveFromAllGroups(this,true);
      if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 00570150 to 00670153 has its CatchHandler @ 00570340 */
        SceneObjectLib::PerformCleanupForSceneObject
                  ((ProgramState *)(*(long *)(this + 0x20) + 0x28),this);
      }
    }
    else {
                    /* catch() { ... } // from try @ 005700b0 with catch @ 005700e0 */
      plVar1 = (long *)**(undefined8 **)(this + 0xc0);
      uVar4 = (**(code **)(*plVar1 + 0xd0))(plVar1,2,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = 1;
        do {
          if ((ulong)(lVar3 >> 3) <= uVar4) goto LAB_00570134;
          plVar1 = *(long **)(*(long *)(this + 0xc0) + uVar4 * 8);
                    /* try { // try from 00570120 to 0067014f has its CatchHandler @ 00570120
                       catch() { ... } // from try @ 00570120 with catch @ 00570120
                       catch() { ... } // from try @ 00570154 with catch @ 00570120
                       catch() { ... } // from try @ 00570280 with catch @ 00570120
                       catch() { ... } // from try @ 00570334 with catch @ 00570120 */
          uVar5 = (**(code **)(*plVar1 + 0xd0))(plVar1,2,0);
          uVar4 = uVar4 + 1;
        } while ((uVar5 & 1) == 0);
      }
    }
                    /* try { // try from 00570154 to 0067023f has its CatchHandler @ 00570120 */
    this[0x19] = (SceneObject)0x0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


