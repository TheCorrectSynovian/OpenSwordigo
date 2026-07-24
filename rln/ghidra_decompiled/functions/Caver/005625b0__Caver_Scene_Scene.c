/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005625b0
 * Function: Caver::Scene::Scene
 * Signature: undefined __thiscall Scene(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Scene::Scene() */

void __thiscall Caver::Scene::Scene(Scene *this)

{
  ProgramState *this_00;
  ComponentManager *this_01;
  ComponentManager *this_02;
  SceneGrid *this_03;
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  ObjectLibrary *pOVar5;
  SoundLibrary *this_04;
  Scene *pSVar6;
  long lVar7;
  Scene *pSVar8;
  ObjectLibrary *pOVar9;
  ObjectLibrary *local_88;
  long *local_80;
  long local_78;
  
                    /* catch() { ... } // from try @ 005620a4 with catch @ 005625cc */
                    /* try { // try from 005625d0 to 006625f3 has its CatchHandler @ 005625d0
                       catch() { ... } // from try @ 005625d0 with catch @ 005625d0
                       catch() { ... } // from try @ 00562618 with catch @ 005625d0 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this_00 = (ProgramState *)(this + 0x28);
                    /* try { // try from 005625f4 to 00662607 has its CatchHandler @ 00562738 */
  *(undefined **)this = PTR_vtable_007e5720 + 0x10;
  *(undefined4 *)(this + 8) = 0x100;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 0056260c to 00662617 has its CatchHandler @ 005626c8 */
  ProgramState::ProgramState(this_00,(ProgramState *)0x0);
                    /* try { // try from 00562618 to 0066273b has its CatchHandler @ 005625d0 */
  pSVar6 = this + 0xe8;
  *(undefined8 *)pSVar6 = 0;
  pSVar8 = this + 0xb8;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)pSVar8 = 0;
  this_01 = (ComponentManager *)(this + 0x180);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(Scene **)(this + 0x148) = this + 0x138;
  *(Scene **)(this + 0x150) = this + 0x138;
  *(Scene **)(this + 200) = pSVar8;
  *(Scene **)(this + 0xd0) = pSVar8;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(Scene **)(this + 0xf8) = pSVar6;
  *(Scene **)(this + 0x100) = pSVar6;
  *(Scene **)(this + 0x110) = this + 0x110;
  *(Scene **)(this + 0x118) = this + 0x110;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(Scene **)(this + 0x160) = this + 0x160;
  *(Scene **)(this + 0x168) = this + 0x160;
  *(Scene **)(this + 0x170) = this + 0x170;
  *(Scene **)(this + 0x178) = this + 0x170;
  ComponentManager::ComponentManager(this_01);
  this_02 = (ComponentManager *)(this + 0x1e0);
  ComponentManager::ComponentManager(this_02);
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x250) = 0xffffffff;
  LightOverlay::LightOverlay((LightOverlay *)(this + 600));
  this_03 = (SceneGrid *)(this + 0x360);
                    /* catch() { ... } // from try @ 0056260c with catch @ 005626c8 */
  *(undefined8 *)(this + 0x334) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  this[0x404] = (Scene)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 800) = 0;
  this[0x358] = (Scene)0x0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  memset(this_03,0,0x91);
  pOVar5 = operator_new(0x88);
  *(undefined **)pOVar5 = PTR_DAT_007e5de8 + 0x18;
  pOVar9 = pOVar5 + 0x10;
  *(undefined8 *)pOVar9 = 0;
  *(undefined8 *)(pOVar5 + 0x18) = 0;
  *(ObjectLibrary **)(pOVar5 + 0x20) = pOVar9;
  *(ObjectLibrary **)(pOVar5 + 0x28) = pOVar9;
  *(undefined8 *)(pOVar5 + 0x30) = 0;
  memset(pOVar5 + 0x38,0,0x4a);
  local_88 = pOVar5;
                    /* catch() { ... } // from try @ 005625f4 with catch @ 00562738 */
                    /* try { // try from 0056273c to 00662767 has its CatchHandler @ 0056273c
                       catch() { ... } // from try @ 0056273c with catch @ 0056273c
                       catch() { ... } // from try @ 005627d0 with catch @ 0056273c
                       catch() { ... } // from try @ 00562998 with catch @ 0056273c */
  boost::detail::shared_count::shared_count<Caver::ObjectLibrary>((shared_count *)&local_80,pOVar5);
  boost::detail::sp_enable_shared_from_this(&local_88,pOVar5,pOVar5);
  pOVar5 = *(ObjectLibrary **)(this + 0xa0);
  plVar1 = *(long **)(this + 0xa8);
  *(ObjectLibrary **)(this + 0xa0) = local_88;
  *(long **)(this + 0xa8) = local_80;
                    /* try { // try from 00562768 to 0066277b has its CatchHandler @ 00562a14 */
  local_88 = pOVar5;
  local_80 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar7 = plVar1[1], plVar1[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00562780 to 0066278b has its CatchHandler @ 005629a0 */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = plVar1[2];
    plVar1[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  DefaultComponents::RegisterAll();
                    /* try { // try from 005627bc to 006627c3 has its CatchHandler @ 00562950 */
  ComponentManager::ManageInterface(this_01,(long)PTR_Interface_007e5a28);
                    /* try { // try from 005627c4 to 006627cf has its CatchHandler @ 005628e8 */
                    /* try { // try from 005627d0 to 0066296f has its CatchHandler @ 0056273c */
  ComponentManager::ManageInterface(this_01,(long)PTR_Interface_007e76f0);
  ComponentManager::ManageInterface(this_01,(long)PTR_Interface_007e68e8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e4d78);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e52d8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e4cd8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e5298);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e5cb8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e4828);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7528);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7498);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e6550);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7860);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7038);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e5968);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e6330);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7a68);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e7450);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e6b48);
                    /* catch() { ... } // from try @ 005627c4 with catch @ 005628e8 */
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e62f8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e68e8);
  ComponentManager::ManageInterface(this_02,(long)PTR_Interface_007e4f20);
  uVar4 = _LAB_00695bc0;
  *(undefined8 *)(this + 0x98) = _DAT_00695bc8;
  *(undefined8 *)(this + 0x90) = uVar4;
  fVar3 = DAT_00689170;
  SceneGrid::AddLayer(this_03,DAT_00689170,DAT_0068797c,DAT_00688638,DAT_00688638);
                    /* catch() { ... } // from try @ 005627bc with catch @ 00562950 */
  SceneGrid::AddLayer(this_03,DAT_00695be0,fVar3,DAT_00687978,DAT_00687978);
                    /* try { // try from 00562970 to 00662997 has its CatchHandler @ 0056299c */
  SceneGrid::AddLayer((SceneGrid *)(this + 0x3a0),0.0,0.0,DAT_00687990,DAT_00687990);
  RegisterLibrary(this);
  this_04 = (SoundLibrary *)SoundLibrary::sharedLibrary();
  SoundLibrary::RegisterProgramLibrary(this_04,this_00);
                    /* try { // try from 00562998 to 00662a17 has its CatchHandler @ 0056273c */
  lVar7 = AudioSystem::sharedSystem();
                    /* catch() { ... } // from try @ 00562970 with catch @ 0056299c */
                    /* catch() { ... } // from try @ 00562780 with catch @ 005629a0 */
  MusicPlayer::RegisterProgramLibrary(*(MusicPlayer **)(lVar7 + 0x68),this_00);
  SceneObjectLib::RegisterLibrary(this_00);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


