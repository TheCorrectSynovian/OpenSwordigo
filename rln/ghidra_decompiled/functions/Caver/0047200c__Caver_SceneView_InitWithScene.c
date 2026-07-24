/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047200c
 * Function: Caver::SceneView::InitWithScene
 * Signature: undefined __thiscall InitWithScene(SceneView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::InitWithScene(boost::shared_ptr<Caver::Scene> const&) */

void __thiscall Caver::SceneView::InitWithScene(SceneView *this,shared_ptr *param_1)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  
                    /* catch() { ... } // from try @ 00472000 with catch @ 00472018 */
                    /* catch() { ... } // from try @ 00471f00 with catch @ 0047201c
                       catch() { ... } // from try @ 00471fe8 with catch @ 0047201c */
  uVar6 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0xf8);
  *(undefined8 *)(this + 0xf0) = uVar6;
  *(long *)(this + 0xf8) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  Camera::SetPerspectiveProjection
            (*(Camera **)(this + 0x158),DAT_0068ea0c,1.0,DAT_00683480,DAT_0068ea10);
  uVar2 = DAT_006840e0;
  uVar6 = *(undefined8 *)(this + 0x158);
  lVar3 = *(long *)(this + 0x160);
  lVar4 = *(long *)(this + 0xf0);
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x11c) = 0x3f7c28f6;
  *(undefined8 *)(this + 0x148) = uVar2;
  *(undefined4 *)(this + 300) = 0x3f4ccccd;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(lVar4 + 0x248);
  *(undefined8 *)(lVar4 + 0x240) = uVar6;
  *(long *)(lVar4 + 0x248) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  CameraController::RegisterProgramLibrary
            ((CameraController *)(this + 0x100),(ProgramState *)(*(long *)(this + 0xf0) + 0x28));
  uVar6 = DAT_00690158;
  fVar1 = DAT_00683734;
  *(undefined8 *)(this + 0x104) = DAT_00690158;
  *(undefined4 *)(this + 0x10c) = 0x4494c000;
  fVar7 = DAT_00690150;
  if (fVar1 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
    uVar6 = *(undefined8 *)(this + 0x104);
                    /* try { // try from 00472194 to 0057221b has its CatchHandler @ 00472194
                       catch() { ... } // from try @ 00472194 with catch @ 00472194
                       catch() { ... } // from try @ 00472220 with catch @ 00472194 */
    uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) + 0.0,(float)uVar6 + 0.0);
    fVar7 = *(float *)(this + 0x10c) + 0.0;
  }
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x110) = uVar6;
  *(float *)(this + 0x118) = fVar7;
  *(undefined8 *)(this + 0x130) = uVar6;
  *(float *)(this + 0x138) = fVar7;
  return;
}


