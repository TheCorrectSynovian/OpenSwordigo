/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00565804
 * Function: Caver::Scene::RegisterObjectForWorldBoundsUpdate
 * Signature: undefined __thiscall RegisterObjectForWorldBoundsUpdate(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
    */

void __thiscall Caver::Scene::RegisterObjectForWorldBoundsUpdate(Scene *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != *(long **)(this + 0x350)) {
    lVar2 = *(long *)param_1;
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
    *(long **)(this + 0x348) = plVar1 + 1;
    return;
  }
  std::
  vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
  ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                   *)(this + 0x340),plVar1,param_1);
  return;
}


