/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055d338
 * Function: Caver::ObjectLibrary::AddTemplate
 * Signature: undefined __thiscall AddTemplate(ObjectLibrary * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::AddTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&) */

void __thiscall Caver::ObjectLibrary::AddTemplate(ObjectLibrary *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  ObjectTemplate *pOVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ObjectTemplate *local_68;
  long *plStack_60;
  long local_58;
  
                    /* try { // try from 0055d350 to 0065d377 has its CatchHandler @ 0055d49c */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)param_1;
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 0055d378 to 0065d383 has its CatchHandler @ 0055d4f0 */
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  }
                    /* try { // try from 0055d384 to 0065d46f has its CatchHandler @ 0055d214 */
  pOVar3 = operator_new(0x20);
  Proto::ObjectTemplate::ObjectTemplate(pOVar3);
  boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>
            ((shared_ptr<Caver::Proto::ObjectTemplate> *)&local_68,pOVar3);
  pOVar3 = local_68;
  local_68 = (ObjectTemplate *)0x0;
  ObjectTemplate::SaveToProtobufMessage(*(ObjectTemplate **)param_1,pOVar3);
  puVar4 = (undefined8 *)
           std::
           map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
           ::operator[]((map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                         *)(this + 8),(string *)(*(long *)param_1 + 0x50));
  if (plStack_60 != (long *)0x0) {
    plStack_60[1] = plStack_60[1] + 1;
  }
  plVar7 = (long *)puVar4[1];
  *puVar4 = pOVar3;
  puVar4[1] = plStack_60;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (plVar6 != (long *)0x0) {
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  }
  plVar7 = (long *)puVar4[2];
  puVar4[2] = plVar6;
                    /* catch() { ... } // from try @ 0055d308 with catch @ 0055d44c */
  if ((plVar7 != (long *)0x0) &&
     (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar7 + 8))();
  }
  *(ObjectLibrary **)(*(long *)param_1 + 0x128) = this;
                    /* try { // try from 0055d470 to 0065d4e7 has its CatchHandler @ 0055d4ec */
  if ((plVar6 != (long *)0x0) &&
     (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
                    /* catch() { ... } // from try @ 0055d2d8 with catch @ 0055d49c
                       catch() { ... } // from try @ 0055d350 with catch @ 0055d49c */
  if ((plStack_60 != (long *)0x0) &&
     (lVar5 = plStack_60[1], plStack_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0055d2b0 with catch @ 0055d4a0 */
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
    lVar5 = plStack_60[2];
    plStack_60[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_60 + 0x18))(plStack_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0055d4e8 to 0065d5bf has its CatchHandler @ 0055d214 */
                    /* catch() { ... } // from try @ 0055d470 with catch @ 0055d4ec */
                    /* catch() { ... } // from try @ 0055d378 with catch @ 0055d4f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


