/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055d7e0
 * Function: Caver::ObjectLibrary::GetAllImportedLibraries
 * Signature: undefined __thiscall GetAllImportedLibraries(ObjectLibrary * this, vector * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::GetAllImportedLibraries(std::vector<boost::shared_ptr<Caver::ObjectLibrary>,
   std::allocator<boost::shared_ptr<Caver::ObjectLibrary> > >*, bool) */

void __thiscall
Caver::ObjectLibrary::GetAllImportedLibraries(ObjectLibrary *this,vector *param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  set<std::string,std::less<std::string>,std::allocator<std::string>> asStack_88 [8];
  undefined8 local_80;
  _Rb_tree_node *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58;
  
                    /* try { // try from 0055d7f0 to 0065d86b has its CatchHandler @ 0055d8c4 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uStack_60 = 0;
  local_80 = 0;
  local_78 = (_Rb_tree_node *)0x0;
                    /* catch() { ... } // from try @ 0055d684 with catch @ 0055d81c
                       catch() { ... } // from try @ 0055d6e0 with catch @ 0055d81c */
  puVar2 = *(undefined8 **)(this + 0x40);
  local_70 = &local_80;
  local_68 = &local_80;
                    /* catch() { ... } // from try @ 0055d65c with catch @ 0055d824 */
  for (puVar1 = *(undefined8 **)(this + 0x38); puVar1 != puVar2; puVar1 = puVar1 + 2) {
    puVar9 = *(undefined8 **)(param_1 + 8);
    if (puVar9 == *(undefined8 **)(param_1 + 0x10)) {
                    /* try { // try from 0055d86c to 0065d93b has its CatchHandler @ 0055d5c0 */
      std::
      vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
                       *)param_1,puVar9,puVar1);
    }
    else {
      *puVar9 = *puVar1;
      lVar8 = puVar1[1];
      puVar9[1] = lVar8;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      }
      *(undefined8 **)(param_1 + 8) = puVar9 + 2;
    }
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              (asStack_88,(string *)*puVar1);
  }
  if (param_2) {
    puVar2 = *(undefined8 **)(this + 0x40);
    for (puVar1 = *(undefined8 **)(this + 0x38); puVar1 != puVar2; puVar1 = puVar1 + 2) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      local_a0 = (undefined8 *)0x0;
                    /* catch() { ... } // from try @ 0055d7f0 with catch @ 0055d8c4 */
      GetAllImportedLibraries((ObjectLibrary *)*puVar1,(vector *)&local_a0,true);
      puVar5 = local_98;
                    /* catch() { ... } // from try @ 0055d600 with catch @ 0055d8c8 */
      puVar7 = local_a0;
      puVar9 = local_a0;
      if (local_a0 != local_98) {
        do {
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                   ::find((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                           *)asStack_88,(string *)*puVar9);
          if (&local_80 == puVar7) {
            puVar7 = *(undefined8 **)(param_1 + 8);
            if (puVar7 == *(undefined8 **)(param_1 + 0x10)) {
              std::
              vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
              ::_M_insert_aux((vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
                               *)param_1,puVar7,puVar9);
            }
            else {
              *puVar7 = *puVar9;
              lVar8 = puVar9[1];
              puVar7[1] = lVar8;
              if (lVar8 != 0) {
                *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
              }
              *(undefined8 **)(param_1 + 8) = puVar7 + 2;
            }
            std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                      (asStack_88,(string *)*puVar9);
          }
                    /* catch() { ... } // from try @ 0055d5e8 with catch @ 0055d938 */
          puVar6 = local_98;
          puVar9 = puVar9 + 2;
                    /* try { // try from 0055d93c to 0065d967 has its CatchHandler @ 0055d93c
                       catch() { ... } // from try @ 0055d93c with catch @ 0055d93c
                       catch() { ... } // from try @ 0055d98c with catch @ 0055d93c
                       catch() { ... } // from try @ 0055da3c with catch @ 0055d93c
                       catch() { ... } // from try @ 0055db4c with catch @ 0055d93c */
          puVar4 = local_a0;
          puVar7 = local_98;
        } while (puVar5 != puVar9);
        for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
          plVar10 = (long *)puVar4[1];
          if ((plVar10 != (long *)0x0) &&
             (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0055d968 to 0065d97b has its CatchHandler @ 0055dbbc */
            (**(code **)(*plVar10 + 0x10))(plVar10);
            lVar8 = plVar10[2];
                    /* try { // try from 0055d980 to 0065d98b has its CatchHandler @ 0055db54 */
            plVar10[2] = lVar8 + -1;
            if (lVar8 + -1 == 0) {
                    /* try { // try from 0055d98c to 0065d9d7 has its CatchHandler @ 0055d93c */
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          puVar7 = local_a0;
        }
      }
      if (puVar7 != (undefined8 *)0x0) {
        operator_delete(puVar7);
      }
    }
  }
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)asStack_88,local_78);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0055d9d8 to 0065d9e3 has its CatchHandler @ 0055db04 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


