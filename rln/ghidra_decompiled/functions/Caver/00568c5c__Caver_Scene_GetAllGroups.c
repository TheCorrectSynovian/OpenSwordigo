/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568c5c
 * Function: Caver::Scene::GetAllGroups
 * Signature: undefined __thiscall GetAllGroups(Scene * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,
   std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup> > >*) */

void __thiscall Caver::Scene::GetAllGroups(Scene *this,vector *param_1)

{
  long *plVar1;
  long lVar2;
  Scene *pSVar3;
  
  for (pSVar3 = *(Scene **)(this + 0xf8); this + 0xe8 != pSVar3;
      pSVar3 = (Scene *)FUN_0064c640(pSVar3)) {
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      std::
      vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>
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


