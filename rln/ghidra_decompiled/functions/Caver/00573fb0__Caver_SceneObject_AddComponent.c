/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573fb0
 * Function: Caver::SceneObject::AddComponent
 * Signature: undefined __thiscall AddComponent(SceneObject * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&) */

void __thiscall Caver::SceneObject::AddComponent(SceneObject *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  FastVector<Caver::Component*> *this_00;
  
                    /* try { // try from 00573fc4 to 00673fc7 has its CatchHandler @ 0057403c */
  lVar2 = *(long *)param_1;
  iVar4 = *(int *)(lVar2 + 0x20);
  if (iVar4 == 0) {
                    /* try { // try from 00573fe8 to 00673feb has its CatchHandler @ 00574038 */
    plVar3 = *(long **)(this + 200);
    iVar4 = 100;
    plVar1 = *(long **)(this + 0xc0);
    if ((plVar1 != plVar3) && (0x62 < *(int *)(plVar3[-1] + 0x20))) {
      iVar4 = *(int *)(plVar3[-1] + 0x20) + 1;
    }
    *(int *)(lVar2 + 0x20) = iVar4;
  }
  else {
    plVar1 = *(long **)(this + 0xc0);
    plVar3 = *(long **)(this + 200);
  }
  uVar5 = (long)plVar3 - (long)plVar1;
                    /* try { // try from 0057401c to 0067401f has its CatchHandler @ 00574070 */
  if (0 < (int)(uVar5 >> 3)) {
                    /* try { // try from 00574028 to 0067402f has its CatchHandler @ 00574084 */
    lVar6 = (long)(uVar5 * 0x20000000) >> 0x1d;
                    /* try { // try from 00574030 to 0067405f has its CatchHandler @ 00573e20 */
    lVar7 = ((long)(uVar5 * 0x20000000) >> 0x20) + 1;
    do {
                    /* catch() { ... } // from try @ 00573fe8 with catch @ 00574038 */
                    /* catch() { ... } // from try @ 00573fc4 with catch @ 0057403c */
      if (*(int *)(*(long *)((long)plVar1 + lVar6 + -8) + 0x20) < iVar4) {
        if (((long)plVar3 - (long)plVar1 != lVar6) || (plVar3 == *(long **)(this + 0xd0))) {
          plVar1 = (long *)((long)plVar1 + lVar6);
          goto LAB_005740c0;
        }
        *plVar3 = lVar2;
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        *(long **)(this + 200) = plVar3 + 1;
        goto LAB_005740c8;
      }
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + -8;
    } while (1 < lVar7);
  }
                    /* try { // try from 00574060 to 00674067 has its CatchHandler @ 0057406c */
  if ((plVar3 == plVar1) && (plVar3 != *(long **)(this + 0xd0))) {
                    /* catch() { ... } // from try @ 00574060 with catch @ 0057406c */
    *plVar3 = lVar2;
                    /* catch() { ... } // from try @ 0057401c with catch @ 00574070 */
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
                    /* catch() { ... } // from try @ 00574028 with catch @ 00574084 */
    *(long **)(this + 200) = plVar3 + 1;
                    /* try { // try from 00574088 to 00674127 has its CatchHandler @ 00574088
                       catch() { ... } // from try @ 00574088 with catch @ 00574088
                       catch() { ... } // from try @ 00574184 with catch @ 00574088
                       catch() { ... } // from try @ 005741fc with catch @ 00574088
                       catch() { ... } // from try @ 00574288 with catch @ 00574088
                       catch() { ... } // from try @ 005743ac with catch @ 00574088
                       catch() { ... } // from try @ 00574630 with catch @ 00574088 */
  }
  else {
LAB_005740c0:
    std::
    vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
    ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                     *)(this + 0xc0),plVar1,param_1);
  }
LAB_005740c8:
  plVar1 = *(long **)param_1;
  plVar1[5] = (long)this;
  if ((*(long *)(this + 0x20) != 0) && (this[0x19] != (SceneObject)0x0)) {
    (**(code **)(*plVar1 + 0x40))();
    Scene::RegisterNewComponent(*(Scene **)(this + 0x20),param_1);
    plVar1 = *(long **)param_1;
  }
  uVar5 = (**(code **)(*plVar1 + 0xd8))();
  if ((uVar5 & 1) != 0) {
    UpdateBounds(this);
  }
  uVar5 = (**(code **)(**(long **)param_1 + 0xb8))();
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00574128 to 0067413b has its CatchHandler @ 00574638 */
    this_00 = (FastVector<Caver::Component*> *)(this + 0xd8);
    iVar4 = *(int *)this_00;
    uVar8 = *(undefined8 *)param_1;
                    /* try { // try from 0057413c to 0067414f has its CatchHandler @ 00574640 */
    if (*(int *)(this + 0xdc) <= iVar4) {
      iVar4 = *(int *)(this + 0xdc) * 2;
      if (iVar4 < 0xb) {
        iVar4 = 10;
      }
                    /* try { // try from 00574150 to 0067415f has its CatchHandler @ 00574604 */
      FastVector<Caver::Component*>::Resize(this_00,iVar4);
      iVar4 = *(int *)this_00;
    }
    *(undefined8 *)(*(long *)(this + 0xe0) + (long)iVar4 * 8) = uVar8;
    *(int *)(this + 0xd8) = iVar4 + 1;
  }
  return;
}


