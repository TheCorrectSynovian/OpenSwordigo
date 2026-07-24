/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7124
 * Function: Caver::ProfileManager::DeleteProfileWithIdentifier
 * Signature: undefined __thiscall DeleteProfileWithIdentifier(ProfileManager * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&) */

void __thiscall
Caver::ProfileManager::DeleteProfileWithIdentifier(ProfileManager *this,string *param_1)

{
  PlayerProfile *this_00;
  long *plVar1;
  long lVar2;
  ProfileManager *pPVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>> anStack_50 [8]
  ;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pPVar3 = (ProfileManager *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   *)(this + 0x48),param_1);
  if (this + 0x50 != pPVar3) {
    this_00 = *(PlayerProfile **)(pPVar3 + 0x28);
    plVar1 = *(long **)(pPVar3 + 0x30);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    uVar4 = PlayerProfile::ProfileExists(this_00);
    if ((uVar4 & 1) != 0) {
      PlayerProfile::DeleteProfile(this_00);
    }
    pvVar5 = (void *)FUN_0064ca60(pPVar3,this + 0x50);
    __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>::
    destroy(anStack_50,(pair *)((long)pvVar5 + 0x20));
    operator_delete(pvVar5);
    *(long *)(this + 0x70) = *(long *)(this + 0x70) + -1;
    if ((plVar1 != (long *)0x0) && (lVar6 = plVar1[1], plVar1[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar6 = plVar1[2];
      plVar1[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* try { // try from 004a71f0 to 005a71f3 has its CatchHandler @ 004a7238 */
                    /* try { // try from 004a71f4 to 005a724b has its CatchHandler @ 004a6f04 */
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


