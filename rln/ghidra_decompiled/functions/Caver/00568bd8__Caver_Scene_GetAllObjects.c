/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568bd8
 * Function: Caver::Scene::GetAllObjects
 * Signature: undefined __thiscall GetAllObjects(Scene * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::GetAllObjects(std::vector<boost::intrusive_ptr<Caver::SceneObject>,
   std::allocator<boost::intrusive_ptr<Caver::SceneObject> > >*) */

void __thiscall Caver::Scene::GetAllObjects(Scene *this,vector *param_1)

{
  long *plVar1;
  long lVar2;
  Scene *pSVar3;
  
  for (pSVar3 = *(Scene **)(this + 200); this + 0xb8 != pSVar3;
      pSVar3 = (Scene *)FUN_0064c640(pSVar3)) {
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      std::
      vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                       *)param_1);
    }
    else {
      lVar2 = *(long *)(pSVar3 + 0x28);
      *plVar1 = lVar2;
      if (lVar2 != 0) {
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
      *(long **)(param_1 + 8) = plVar1 + 1;
    }
  }
  return;
}


