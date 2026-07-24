/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573374
 * Function: Caver::SceneObject::AddChildObject
 * Signature: undefined __thiscall AddChildObject(SceneObject * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall Caver::SceneObject::AddChildObject(SceneObject *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  SceneObjectGroup *pSVar6;
  SceneObject *pSVar7;
  SceneObject *pSVar8;
  long lVar9;
  SceneObject *pSVar10;
  ulong uVar11;
  
                    /* try { // try from 00573384 to 006733b3 has its CatchHandler @ 00573c10 */
  pSVar8 = *(SceneObject **)param_1;
  pSVar7 = pSVar8 + 0x30;
  pSVar10 = *(SceneObject **)pSVar7;
  if (pSVar10 != (SceneObject *)0x0) {
    if (pSVar10 == this) {
      return;
    }
    lVar9 = *(long *)(pSVar10 + 200) - (long)*(undefined8 **)(pSVar10 + 0xc0);
    if (lVar9 != 0) {
      plVar3 = (long *)**(undefined8 **)(pSVar10 + 0xc0);
      uVar11 = lVar9 >> 3;
      uVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3,4,pSVar8);
                    /* try { // try from 005733d8 to 006733e3 has its CatchHandler @ 00573948 */
      if ((1 < uVar11) && ((uVar4 & 1) == 0)) {
        uVar4 = 1;
        do {
          plVar3 = *(long **)(*(long *)(pSVar10 + 0xc0) + uVar4 * 8);
          uVar5 = (**(code **)(*plVar3 + 0xd0))(plVar3,4,pSVar8);
          uVar4 = uVar4 + 1;
                    /* try { // try from 00573404 to 0067342b has its CatchHandler @ 005737f8 */
          if (uVar11 <= uVar4) break;
        } while ((uVar5 & 1) == 0);
      }
    }
    *(undefined8 *)(pSVar8 + 0x30) = 0;
    SceneObjectGroup::RemoveObject(*(SceneObjectGroup **)(pSVar10 + 0x38),pSVar8);
    pSVar8 = *(SceneObject **)param_1;
    pSVar7 = pSVar8 + 0x30;
  }
  *(SceneObject **)pSVar7 = this;
  pSVar6 = *(SceneObjectGroup **)(this + 0x38);
                    /* try { // try from 0057342c to 0067343f has its CatchHandler @ 00573944 */
  if (pSVar6 == (SceneObjectGroup *)0x0) {
    pSVar6 = operator_new(0x50);
    SceneObjectGroup::SceneObjectGroup(pSVar6);
    *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
                    /* try { // try from 0057344c to 0067345f has its CatchHandler @ 00573b28 */
    plVar3 = *(long **)(this + 0x38);
    *(SceneObjectGroup **)(this + 0x38) = pSVar6;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
      pSVar6 = *(SceneObjectGroup **)(this + 0x38);
    }
    pSVar6[0x4b] = (SceneObjectGroup)0x1;
    SceneObjectGroup::SetScene(pSVar6,*(Scene **)(this + 0x20));
    SceneObjectGroup::AddObject(*(SceneObjectGroup **)(this + 0x38),this);
                    /* try { // try from 00573498 to 006734bf has its CatchHandler @ 005737a8 */
    pSVar6 = *(SceneObjectGroup **)(this + 0x38);
    pSVar8 = *(SceneObject **)param_1;
  }
  SceneObjectGroup::AddObject(pSVar6,pSVar8);
  lVar9 = *(long *)param_1;
  if (*(long *)(lVar9 + 0x20) == 0) {
    (**(code **)(**(long **)(this + 0x20) + 0x28))(*(long **)(this + 0x20),param_1);
    lVar9 = *(long *)param_1;
  }
  lVar2 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
  if (lVar2 != 0) {
    plVar3 = (long *)**(undefined8 **)(this + 0xc0);
                    /* try { // try from 005734e0 to 00673507 has its CatchHandler @ 00573b28 */
    uVar11 = lVar2 >> 3;
    uVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3,3,lVar9);
    if ((1 < uVar11) && ((uVar4 & 1) == 0)) {
      uVar4 = 1;
      do {
        plVar3 = *(long **)(*(long *)(this + 0xc0) + uVar4 * 8);
                    /* try { // try from 0057351c to 0067353b has its CatchHandler @ 00573b24 */
        uVar5 = (**(code **)(*plVar3 + 0xd0))(plVar3,3,lVar9);
        uVar4 = uVar4 + 1;
        if (uVar11 <= uVar4) {
          return;
        }
      } while ((uVar5 & 1) == 0);
    }
  }
  return;
}


