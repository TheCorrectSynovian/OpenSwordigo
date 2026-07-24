/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005653c4
 * Function: Caver::Scene::RemoveObject
 * Signature: undefined __thiscall RemoveObject(Scene * this, intrusive_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&, bool) */

void __thiscall Caver::Scene::RemoveObject(Scene *this,intrusive_ptr *param_1,bool param_2)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
  *this_00;
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  Scene *pSVar6;
  SceneObject *pSVar7;
  Scene *pSVar8;
  Scene *pSVar9;
  undefined1 auVar10 [16];
  
                    /* catch() { ... } // from try @ 00565364 with catch @ 005653c4 */
  pSVar7 = *(SceneObject **)param_1;
                    /* try { // try from 005653e4 to 0066540b has its CatchHandler @ 00565414 */
  if (*(Scene **)(pSVar7 + 0x20) == this) {
    if (param_2) {
                    /* try { // try from 0056540c to 00665417 has its CatchHandler @ 005652f8 */
                    /* catch() { ... } // from try @ 005653e4 with catch @ 00565414 */
      for (pSVar9 = *(Scene **)(this + 0x110); this + 0x110 != pSVar9; pSVar9 = *(Scene **)pSVar9) {
        if (*(SceneObject **)(pSVar9 + 0x10) == pSVar7) {
          FUN_0062a9c8(pSVar9);
                    /* catch() { ... } // from try @ 005654ac with catch @ 0056543c
                       catch() { ... } // from try @ 00565550 with catch @ 0056543c */
          plVar4 = *(long **)(pSVar9 + 0x10);
          if ((plVar4 != (long *)0x0) &&
             (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
            (**(code **)(*plVar4 + 8))();
          }
          operator_delete(pSVar9);
          pSVar7 = *(SceneObject **)param_1;
          break;
        }
      }
    }
    if (*(SceneObject **)(pSVar7 + 0x30) != (SceneObject *)0x0) {
      SceneObject::RemoveChildObject(*(SceneObject **)(pSVar7 + 0x30),pSVar7,false);
      pSVar7 = *(SceneObject **)param_1;
    }
    SceneGrid::RemoveObject((SceneGrid *)(this + 0x360),(SceneGridEntry *)(pSVar7 + 0xf8));
    puVar3 = PTR_Interface_007e5b08;
    pSVar7 = *(SceneObject **)param_1;
    plVar4 = *(long **)(pSVar7 + 0xc0);
    plVar1 = *(long **)(pSVar7 + 200);
    if (plVar4 != plVar1) {
      do {
                    /* try { // try from 005654a8 to 006654ab has its CatchHandler @ 00565508 */
                    /* try { // try from 005654ac to 00665527 has its CatchHandler @ 0056543c */
        uVar5 = (**(code **)(*(long *)*plVar4 + 0xa0))((long *)*plVar4,puVar3);
        if ((uVar5 & 1) != 0) {
          SceneGrid::RemoveObject((SceneGrid *)(this + 0x3a0),(SceneGridEntry *)(*plVar4 + 400));
        }
        plVar4 = plVar4 + 1;
      } while (plVar1 != plVar4);
      pSVar7 = *(SceneObject **)param_1;
    }
    SceneObject::SetScene(pSVar7,(Scene *)0x0);
    SceneObject::RemoveAllComponents(*(SceneObject **)param_1);
    if (*(long *)(*(long *)(*(long *)param_1 + 0x50) + -0x18) != 0) {
      this_00 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                 *)(this + 0xb0);
                    /* catch() { ... } // from try @ 005654a8 with catch @ 00565508 */
      auVar10 = std::
                _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                ::equal_range(this_00,(string *)(*(long *)param_1 + 0x50));
      pSVar8 = auVar10._8_8_;
      pSVar9 = auVar10._0_8_;
                    /* try { // try from 00565528 to 0066554f has its CatchHandler @ 00565558 */
      if ((this + 0xb8 == pSVar8) && (*(Scene **)(this + 200) == pSVar9)) {
        std::
        _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
        ::_M_erase(this_00,*(_Rb_tree_node **)(this + 0xc0));
        *(undefined8 *)(this + 0xc0) = 0;
        *(Scene **)(this + 200) = pSVar8;
        *(Scene **)(this + 0xd0) = pSVar8;
        *(undefined8 *)(this + 0xd8) = 0;
      }
      else {
        while (pSVar9 != pSVar8) {
                    /* try { // try from 00565550 to 0066555b has its CatchHandler @ 0056543c */
          pSVar6 = (Scene *)FUN_0064c6a0(pSVar9);
                    /* catch() { ... } // from try @ 00565528 with catch @ 00565558 */
          std::
          _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
          ::_M_erase_aux(this_00,pSVar9);
          pSVar9 = pSVar6;
        }
      }
    }
  }
  return;
}


