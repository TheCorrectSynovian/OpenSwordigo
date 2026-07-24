/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448920
 * Function: Caver::GameSceneController::InitWithScene
 * Signature: undefined __thiscall InitWithScene(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::InitWithScene(boost::shared_ptr<Caver::Scene> const&) */

void __thiscall
Caver::GameSceneController::InitWithScene(GameSceneController *this,shared_ptr *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_58;
  float local_50;
  long local_48;
  
                    /* try { // try from 00448938 to 00548947 has its CatchHandler @ 0044ec4c */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar3 = *(undefined8 *)param_1;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  plVar11 = *(long **)(this + 0x28);
                    /* try { // try from 00448960 to 0054896f has its CatchHandler @ 0044cf10 */
  *(undefined8 *)(this + 0x20) = uVar3;
  *(long *)(this + 0x28) = lVar9;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 00448984 to 00548997 has its CatchHandler @ 0044ec48 */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* try { // try from 004489b4 to 005489c3 has its CatchHandler @ 0044cf08 */
  Camera::SetPerspectiveProjection
            (*(Camera **)(this + 0x90),DAT_0068ea0c,1.0,DAT_00683480,DAT_0068ea10);
  uVar6 = DAT_006840e0;
                    /* try { // try from 004489d8 to 005489e7 has its CatchHandler @ 0044ebe4 */
  uVar3 = *(undefined8 *)(this + 0x90);
  lVar9 = *(long *)(this + 0x98);
  lVar10 = *(long *)(this + 0x20);
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x54) = 0x3f7c28f6;
  *(undefined8 *)(this + 0x80) = uVar6;
  *(undefined4 *)(this + 100) = 0x3f4ccccd;
                    /* try { // try from 00448a00 to 00548a0f has its CatchHandler @ 0044cf08 */
  if (lVar9 != 0) {
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  plVar11 = *(long **)(lVar10 + 0x248);
  *(undefined8 *)(lVar10 + 0x240) = uVar3;
  *(long *)(lVar10 + 0x248) = lVar9;
                    /* try { // try from 00448a24 to 00548a37 has its CatchHandler @ 0044ebe0 */
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 00448a54 to 00548a63 has its CatchHandler @ 0044cf00 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  CameraController::RegisterProgramLibrary
            ((CameraController *)(this + 0x38),(ProgramState *)(*(long *)(this + 0x20) + 0x28));
  iVar7 = CurrentDeviceType();
                    /* try { // try from 00448a78 to 00548a87 has its CatchHandler @ 0044eb7c */
  uVar1 = 0x43720000;
  uVar2 = 0x44c08000;
  if (iVar7 != 1) {
    uVar1 = 0x433b0000;
    uVar2 = 0x4494c000;
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
                    /* try { // try from 00448aa0 to 00548aaf has its CatchHandler @ 0044cf00 */
  plVar8 = (long *)ComponentManager::ComponentCollectionForInterface
                             ((ComponentManager *)(*(long *)(this + 0x20) + 0x180),
                              (long)PTR_Interface_007e52d8);
  plVar4 = (long *)plVar8[1];
  for (plVar11 = (long *)*plVar8; (plVar4 != plVar11 && (*(long *)(*plVar11 + 0x28) == 0));
      plVar11 = plVar11 + 1) {
                    /* try { // try from 00448ac4 to 00548ad7 has its CatchHandler @ 0044eb78 */
  }
  do {
    do {
      if (plVar4 == plVar11) {
                    /* try { // try from 00448b40 to 00548b4f has its CatchHandler @ 0044cef8 */
        if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
                    /* try { // try from 00448b64 to 00548b77 has its CatchHandler @ 0044eb10 */
        return;
      }
      local_58 = *(undefined8 *)(this + 0x3c);
      local_50 = *(float *)(this + 0x44);
      plVar12 = plVar11 + 1;
      lVar9 = *plVar11;
                    /* try { // try from 00448af4 to 00548b03 has its CatchHandler @ 0044cef8 */
      Vector3::Normalize((Vector3 *)&local_58);
      *(ulong *)(lVar9 + 0x70) = CONCAT44(-(float)((ulong)local_58 >> 0x20),-(float)local_58);
      *(float *)(lVar9 + 0x78) = -local_50;
                    /* try { // try from 00448b18 to 00548b27 has its CatchHandler @ 0044eb14 */
      plVar11 = plVar12;
    } while (plVar12 == (long *)plVar8[1]);
    do {
      if (*(long *)(*plVar11 + 0x28) != 0) break;
      plVar11 = plVar11 + 1;
    } while ((long *)plVar8[1] != plVar11);
  } while( true );
}


