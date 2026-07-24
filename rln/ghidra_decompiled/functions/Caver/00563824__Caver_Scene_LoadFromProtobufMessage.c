/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00563824
 * Function: Caver::Scene::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Scene * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::LoadFromProtobufMessage(Caver::Proto::Scene const&) */

void __thiscall Caver::Scene::LoadFromProtobufMessage(Scene *this,Scene *param_1)

{
  undefined *puVar1;
  Scene *pSVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  SceneObject *pSVar6;
  SceneObjectGroup *this_00;
  Scene *pSVar7;
  Program *pPVar8;
  SceneObject *pSVar9;
  long lVar10;
  SceneObjectGroup *pSVar11;
  long lVar12;
  long *local_80;
  SceneObject *local_78;
  long *local_70;
  long local_68;
  
                    /* try { // try from 00563824 to 0066382b has its CatchHandler @ 0056388c */
                    /* try { // try from 0056382c to 0066396b has its CatchHandler @ 005637f4 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  DefaultComponents::RegisterAll();
  puVar1 = PTR_default_instance__007e7a20;
  pSVar2 = *(Scene **)PTR_default_instance__007e7a20;
  if (*(long *)(param_1 + 0x88) != 0) {
    pSVar2 = param_1;
  }
  local_78 = *(SceneObject **)(*(long *)(pSVar2 + 0x88) + 0xc);
  local_70 = *(long **)(*(long *)(pSVar2 + 0x88) + 0x14);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00563824 with catch @ 0056388c
                        */
  (**(code **)(*(long *)this + 0x38))(this,&local_78);
  pSVar2 = *(Scene **)puVar1;
  if (*(long *)(param_1 + 0x80) != 0) {
    pSVar2 = param_1;
  }
  ObjectLibrary::LoadFromProtobufMessage
            (*(ObjectLibrary **)(this + 0xa0),*(ObjectLibrary **)(pSVar2 + 0x80));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar10 = 0;
    do {
      pSVar9 = *(SceneObject **)(*(long *)(param_1 + 0x10) + lVar10 * 8);
      pSVar6 = operator_new(0x128);
      SceneObject::SceneObject(pSVar6);
      *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
      local_78 = pSVar6;
      SceneObject::LoadFromProtobufMessage(pSVar6,pSVar9);
      if ((((byte)pSVar9[0x88] & 1) != 0) &&
         (ObjectLibrary::TemplateForName
                    (*(string **)(this + 0xa0),SUB81(*(undefined8 *)(pSVar9 + 0x10),0)),
         local_80 != (long *)0x0)) {
        SceneObject::InitWithTemplate(local_78,(intrusive_ptr *)&local_80);
        if ((local_80 != (long *)0x0) &&
           (iVar4 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*local_80 + 8))();
        }
      }
      (**(code **)(*(long *)this + 0x28))(this,&local_78);
                    /* try { // try from 0056396c to 0066396f has its CatchHandler @ 00563988 */
      if ((local_78 != (SceneObject *)0x0) &&
         (iVar4 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*(long *)local_78 + 8))();
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0056396c with catch @ 00563988
                        */
      lVar10 = lVar10 + 1;
                    /* try { // try from 0056398c to 0066398f has its CatchHandler @ 00563998 */
                    /* try { // try from 00563990 to 0066399b has its CatchHandler @ 005637f4 */
    } while (lVar10 < *(int *)(param_1 + 0x18));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0056398c with catch @ 00563998
                        */
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar10 = 0;
    do {
      pSVar11 = *(SceneObjectGroup **)(*(long *)(param_1 + 0x48) + lVar10 * 8);
      this_00 = operator_new(0x50);
      SceneObjectGroup::SceneObjectGroup(this_00);
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      local_78 = (SceneObject *)this_00;
      SceneObjectGroup::LoadFromProtobufMessage(this_00,pSVar11);
      if (0 < *(int *)(pSVar11 + 0x20)) {
        lVar12 = 0;
        do {
          pSVar7 = (Scene *)std::
                            _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                            ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                                    *)(this + 0xb0),
                                   *(string **)(*(long *)(pSVar11 + 0x18) + lVar12 * 8));
          if ((this + 0xb8 != pSVar7) &&
             (pSVar6 = *(SceneObject **)(pSVar7 + 0x28), pSVar6 != (SceneObject *)0x0)) {
            *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
            SceneObjectGroup::AddObject(this_00,pSVar6);
            iVar4 = *(int *)(pSVar6 + 8);
            *(int *)(pSVar6 + 8) = iVar4 + -1;
            if (iVar4 + -1 == 0) {
              (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(pSVar11 + 0x20));
      }
      AddGroup(this,(intrusive_ptr *)&local_78);
      iVar4 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x50));
  }
  if (((byte)param_1[0x98] >> 4 & 1) != 0) {
    pPVar8 = operator_new(0x28);
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    *(undefined8 *)(pPVar8 + 0x18) = 0;
    *(undefined8 *)(pPVar8 + 0x20) = 0;
    *(undefined8 *)(pPVar8 + 8) = 0;
    *(undefined8 *)(pPVar8 + 0x10) = 0;
    *(undefined **)pPVar8 = puVar1;
    local_78 = (SceneObject *)pPVar8;
    boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_70,pPVar8);
    boost::detail::sp_enable_shared_from_this(&local_78,pPVar8,pPVar8);
    pSVar6 = *(SceneObject **)(this + 0x80);
    plVar3 = *(long **)(this + 0x88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00563c40 with catch @ 00563aec
                       catch(type#1 @ 00000000) { ... } // from try @ 00563ebc with catch @ 00563aec
                        */
    *(SceneObject **)(this + 0x80) = local_78;
    *(long **)(this + 0x88) = local_70;
    local_78 = pSVar6;
    local_70 = plVar3;
    if ((plVar3 != (long *)0x0) && (lVar10 = plVar3[1], plVar3[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar10 = plVar3[2];
      plVar3[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    pSVar2 = *(Scene **)PTR_default_instance__007e7a20;
    if (*(long *)(param_1 + 0x90) != 0) {
      pSVar2 = param_1;
    }
    Program::LoadFromProtobufMessage(*(Program **)(this + 0x80),*(Program **)(pSVar2 + 0x90));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


