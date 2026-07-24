/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00562fa4
 * Function: Caver::Scene::~Scene
 * Signature: undefined __thiscall ~Scene(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::~Scene() */

void __thiscall Caver::Scene::~Scene(Scene *this)

{
  int iVar1;
  Scene *pSVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  Scene *pSVar7;
  
                    /* catch() { ... } // from try @ 00562e84 with catch @ 00562fc0 */
  *(undefined **)this = PTR_vtable_007e5720 + 0x10;
  if (*(void **)(this + 1000) != (void *)0x0) {
    operator_delete__(*(void **)(this + 1000));
  }
  SceneGrid::~SceneGrid((SceneGrid *)(this + 0x3a0));
  SceneGrid::~SceneGrid((SceneGrid *)(this + 0x360));
  plVar5 = *(long **)(this + 0x340);
  plVar6 = *(long **)(this + 0x348);
  if (plVar5 != plVar6) {
    do {
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
    plVar5 = *(long **)(this + 0x340);
  }
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00562e6c with catch @ 00563030 */
                    /* try { // try from 00563034 to 0066305b has its CatchHandler @ 00563034
                       catch() { ... } // from try @ 00563034 with catch @ 00563034
                       catch() { ... } // from try @ 00563080 with catch @ 00563034
                       catch() { ... } // from try @ 00563128 with catch @ 00563034
                       catch() { ... } // from try @ 00563254 with catch @ 00563034 */
    operator_delete(plVar5);
  }
  if (*(void **)(this + 0x2f0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2f0));
  }
  VertexArrayObject::~VertexArrayObject((VertexArrayObject *)(this + 0x2a0));
  if (*(void **)(this + 0x280) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x280));
  }
  plVar5 = *(long **)(this + 0x248);
                    /* try { // try from 0056305c to 0066306f has its CatchHandler @ 005632c4 */
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00563074 to 0066307f has its CatchHandler @ 0056325c */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 00563080 to 006630a7 has its CatchHandler @ 00563034 */
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 005630a8 to 006630c7 has its CatchHandler @ 005632c8 */
  std::
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  ::_M_erase((_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)(this + 0x210),*(_Rb_tree_node **)(this + 0x220));
  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase
            ((_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>> *)
             (this + 0x1e0),*(_Rb_tree_node **)(this + 0x1f0));
  std::
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  ::_M_erase((_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)(this + 0x1b0),*(_Rb_tree_node **)(this + 0x1c0));
  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase
            ((_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>> *)
             (this + 0x180),*(_Rb_tree_node **)(this + 400));
                    /* try { // try from 005630dc to 006630e3 has its CatchHandler @ 005631fc */
  pSVar2 = *(Scene **)(this + 0x170);
  while (pSVar2 != this + 0x170) {
    plVar5 = *(long **)(pSVar2 + 0x10);
    pSVar7 = *(Scene **)pSVar2;
                    /* try { // try from 00563100 to 00663127 has its CatchHandler @ 005632c8 */
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(pSVar2);
    pSVar2 = pSVar7;
  }
                    /* try { // try from 00563128 to 0066322b has its CatchHandler @ 00563034 */
  pSVar2 = *(Scene **)(this + 0x160);
  while (pSVar2 != this + 0x160) {
    plVar5 = *(long **)(pSVar2 + 0x10);
    pSVar7 = *(Scene **)pSVar2;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(pSVar2);
    pSVar2 = pSVar7;
  }
  std::
  _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
  ::_M_erase((_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
              *)(this + 0x130),*(_Rb_tree_node **)(this + 0x140));
  if (*(void **)(this + 0x128) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x128));
  }
  pSVar2 = *(Scene **)(this + 0x110);
  while (pSVar2 != this + 0x110) {
    plVar5 = *(long **)(pSVar2 + 0x10);
    pSVar7 = *(Scene **)pSVar2;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(pSVar2);
    pSVar2 = pSVar7;
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
              *)(this + 0xe0),*(_Rb_tree_node **)(this + 0xf0));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
              *)(this + 0xb0),*(_Rb_tree_node **)(this + 0xc0));
  plVar5 = *(long **)(this + 0xa8);
                    /* catch() { ... } // from try @ 005630dc with catch @ 005631fc */
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 0056322c to 00663253 has its CatchHandler @ 00563258 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x88);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00563254 to 0066332b has its CatchHandler @ 00563034 */
                    /* catch() { ... } // from try @ 0056322c with catch @ 00563258 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 00563074 with catch @ 0056325c */
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  ProgramState::~ProgramState((ProgramState *)(this + 0x28));
  plVar5 = *(long **)(this + 0x18);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005632ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
                    /* catch() { ... } // from try @ 0056305c with catch @ 005632c4 */
                    /* catch() { ... } // from try @ 005630a8 with catch @ 005632c8
                       catch() { ... } // from try @ 00563100 with catch @ 005632c8 */
  return;
}


