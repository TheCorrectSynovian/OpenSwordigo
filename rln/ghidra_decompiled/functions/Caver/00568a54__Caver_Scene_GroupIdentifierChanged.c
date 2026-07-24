/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568a54
 * Function: Caver::Scene::GroupIdentifierChanged
 * Signature: undefined __thiscall GroupIdentifierChanged(Scene * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::GroupIdentifierChanged(std::string const&, std::string const&) */

void __thiscall Caver::Scene::GroupIdentifierChanged(Scene *this,string *param_1,string *param_2)

{
  map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
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
  
  this_00 = (map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
             *)(this + 0xe0);
  puVar2 = (undefined8 *)
           std::
           map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
           ::operator[](this_00,param_1);
  plVar8 = (long *)*puVar2;
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  auVar9 = std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
           ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                          *)this_00,param_1);
  pSVar7 = auVar9._8_8_;
  pSVar3 = auVar9._0_8_;
  if ((this + 0xe8 == pSVar7) && (*(Scene **)(this + 0xf8) == pSVar3)) {
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                *)this_00,*(_Rb_tree_node **)(this + 0xf0));
    *(undefined8 *)(this + 0xf0) = 0;
    *(Scene **)(this + 0xf8) = pSVar7;
    *(Scene **)(this + 0x100) = pSVar7;
    *(undefined8 *)(this + 0x108) = 0;
  }
  else {
    while (pSVar3 != pSVar7) {
      pSVar4 = (Scene *)FUN_0064c6a0(pSVar3);
      std::
      _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
      ::_M_erase_aux((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                      *)this_00,pSVar3);
      pSVar3 = pSVar4;
    }
  }
  plVar5 = (long *)std::
                   map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                   ::operator[](this_00,param_2);
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  plVar6 = (long *)*plVar5;
  *plVar5 = (long)plVar8;
  if ((plVar6 != (long *)0x0) &&
     (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((plVar8 != (long *)0x0) &&
     (iVar1 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00568b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 8))(plVar8);
    return;
  }
  return;
}


