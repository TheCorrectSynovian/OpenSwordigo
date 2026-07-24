/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00564574
 * Function: Caver::Scene::AddObject
 * Signature: undefined __thiscall AddObject(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall Caver::Scene::AddObject(Scene *this,intrusive_ptr *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  SceneObject *this_00;
  CollisionShapeComponent *this_01;
  undefined8 *puVar13;
  long local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
                    /* try { // try from 00564578 to 0066457b has its CatchHandler @ 005646ac */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0056459c to 006645c3 has its CatchHandler @ 0056470c */
  this_00 = *(SceneObject **)param_1;
  if (*(long *)(*(long *)(this_00 + 0x50) + -0x18) != 0) {
    MakeUniqueObjectIdentifier((string *)this);
                    /* try { // try from 005645c8 to 006645cb has its CatchHandler @ 0056472c */
    SceneObject::SetIdentifier(this_00,(string *)&local_70);
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
                    /* try { // try from 005645ec to 006645ef has its CatchHandler @ 005646a4 */
                    /* try { // try from 005645f4 to 006645f7 has its CatchHandler @ 0056471c */
    plVar6 = (long *)std::
                     map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                     ::operator[]((map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                                   *)(this + 0xb0),(string *)(*(long *)param_1 + 0x50));
    lVar12 = *(long *)param_1;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
    plVar7 = (long *)*plVar6;
    *plVar6 = lVar12;
                    /* try { // try from 00564618 to 0066463f has its CatchHandler @ 005646fc */
    if ((plVar7 != (long *)0x0) &&
       (iVar11 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar11, iVar11 == 0)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
                    /* try { // try from 00564640 to 006646cf has its CatchHandler @ 00564534 */
  SceneObject::SetScene(*(SceneObject **)param_1,this);
  lVar12 = *(long *)param_1;
  uStack_68 = *(undefined8 *)(lVar12 + 0x9c);
  local_70 = *(undefined8 *)(lVar12 + 0x94);
  if (*(char *)(lVar12 + 0x90) != '\0') {
    Rectangle::FlipHorizontally((Rectangle *)&local_70);
  }
  local_60 = *(undefined4 *)(lVar12 + 0x8c);
  uStack_5c = local_60;
  Rectangle::Transform
            ((Rectangle *)&local_70,(Vector2 *)(lVar12 + 0x70),*(float *)(lVar12 + 0x80),
             (Vector2 *)&local_60);
  *(undefined1 *)(lVar12 + 0xb4) = 0;
  *(undefined8 *)(lVar12 + 0xac) = uStack_68;
  *(long *)(lVar12 + 0xa4) = local_70;
  lVar12 = *(long *)param_1;
                    /* catch() { ... } // from try @ 005645ec with catch @ 005646a4 */
  SceneGrid::AddObject
            ((SceneGrid *)(this + 0x360),(SceneGridEntry *)(lVar12 + 0xf8),
             (Rectangle *)(lVar12 + 0xa4),*(float *)(lVar12 + 0x78) + *(float *)(lVar12 + 0xb8));
  puVar5 = PTR_Interface_007e5b08;
                    /* catch() { ... } // from try @ 00564578 with catch @ 005646ac */
  puVar13 = *(undefined8 **)(*(long *)param_1 + 0xc0);
  puVar1 = *(undefined8 **)(*(long *)param_1 + 200);
  if (puVar13 != puVar1) {
    do {
                    /* try { // try from 005646d0 to 006647eb has its CatchHandler @ 005647f4 */
      uVar8 = (**(code **)(*(long *)*puVar13 + 0xa0))((long *)*puVar13,puVar5);
      if ((uVar8 & 1) != 0) {
        this_01 = (CollisionShapeComponent *)*puVar13;
        CollisionShapeComponent::UpdateWorldAABB(this_01);
        SceneGrid::AddObject
                  ((SceneGrid *)(this + 0x3a0),(SceneGridEntry *)(this_01 + 400),
                   (Rectangle *)(this_01 + 0x168),0.0);
      }
                    /* catch() { ... } // from try @ 00564618 with catch @ 005646fc */
      puVar13 = puVar13 + 1;
    } while (puVar1 != puVar13);
  }
                    /* catch() { ... } // from try @ 0056459c with catch @ 0056470c */
  if (this[8] != (Scene)0x0) {
    SceneObject::FinishLoad(*(SceneObject **)param_1);
  }
                    /* catch() { ... } // from try @ 005645f4 with catch @ 0056471c */
  if ((*(char *)(*(long *)param_1 + 0xf1) != '\0') ||
     (*(long *)(*(long *)(*(long *)param_1 + 0x50) + -0x18) == 0)) {
                    /* catch() { ... } // from try @ 005645c8 with catch @ 0056472c */
    pvVar9 = operator_new(0x18);
    lVar12 = *(long *)param_1;
    *(long *)((long)pvVar9 + 0x10) = lVar12;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
    FUN_0062a9ac(pvVar9,this + 0x170);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


