/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005681e0
 * Function: Caver::Scene::ObjectIdentifierChanged
 * Signature: undefined __thiscall ObjectIdentifierChanged(Scene * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::ObjectIdentifierChanged(std::string const&, std::string const&) */

void __thiscall Caver::Scene::ObjectIdentifierChanged(Scene *this,string *param_1,string *param_2)

{
  map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
  *this_00;
  int iVar1;
  undefined8 *puVar2;
  Scene *pSVar3;
  Scene *pSVar4;
  long *plVar5;
  long *plVar6;
  Scene *pSVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  this_00 = (map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
             *)(this + 0xb0);
  puVar2 = (undefined8 *)
           std::
           map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
           ::operator[](this_00,param_1);
                    /* catch() { ... } // from try @ 005681ac with catch @ 0056820c */
  plVar8 = (long *)*puVar2;
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  auVar9 = std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
           ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                          *)this_00,param_1);
  pSVar7 = auVar9._8_8_;
  pSVar3 = auVar9._0_8_;
                    /* try { // try from 0056822c to 00668253 has its CatchHandler @ 0056825c */
  if ((this + 0xb8 == pSVar7) && (*(Scene **)(this + 200) == pSVar3)) {
                    /* try { // try from 00568254 to 0066825f has its CatchHandler @ 00568140 */
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                *)this_00,*(_Rb_tree_node **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
    *(Scene **)(this + 200) = pSVar7;
                    /* catch() { ... } // from try @ 0056822c with catch @ 0056825c */
    *(Scene **)(this + 0xd0) = pSVar7;
    *(undefined8 *)(this + 0xd8) = 0;
                    /* try { // try from 00568260 to 006682af has its CatchHandler @ 00568260
                       catch() { ... } // from try @ 00568260 with catch @ 00568260
                       catch() { ... } // from try @ 00568300 with catch @ 00568260 */
  }
  else {
    while (pSVar3 != pSVar7) {
      pSVar4 = (Scene *)FUN_0064c6a0(pSVar3);
      std::
      _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
      ::_M_erase_aux((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                      *)this_00,pSVar3);
      pSVar3 = pSVar4;
    }
  }
  plVar5 = (long *)std::
                   map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                   ::operator[](this_00,param_2);
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 005682b0 to 006682d3 has its CatchHandler @ 005682d4 */
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  plVar6 = (long *)*plVar5;
  *plVar5 = (long)plVar8;
  if ((plVar6 != (long *)0x0) &&
     (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005682b0 with catch @ 005682d4 */
    (**(code **)(*plVar6 + 8))();
  }
  if ((plVar8 != (long *)0x0) &&
     (iVar1 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005682f8 with catch @ 0056831c */
                    /* WARNING: Could not recover jumptable at 0x00568320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00568354 with catch @ 00568320 */
    (**(code **)(*plVar8 + 8))(plVar8);
    return;
  }
                    /* try { // try from 005682f8 to 006682ff has its CatchHandler @ 0056831c */
                    /* try { // try from 00568300 to 0066831f has its CatchHandler @ 00568260 */
  return;
}


