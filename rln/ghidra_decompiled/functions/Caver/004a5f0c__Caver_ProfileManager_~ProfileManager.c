/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5f0c
 * Function: Caver::ProfileManager::~ProfileManager
 * Signature: undefined __thiscall ~ProfileManager(ProfileManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::~ProfileManager() */

void __thiscall Caver::ProfileManager::~ProfileManager(ProfileManager *this)

{
  long lVar1;
  ProfileManager *pPVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pPVar2 = *(ProfileManager **)(this + 0x60);
  *(undefined **)this = PTR_vtable_007e7540 + 0x10;
                    /* try { // try from 004a5f64 to 005a5f8b has its CatchHandler @ 004a62ac */
  for (; this + 0x50 != pPVar2; pPVar2 = (ProfileManager *)FUN_0064c640(pPVar2)) {
    plVar5 = *(long **)(pPVar2 + 0x30);
    if (plVar5 == (long *)0x0) {
      **(undefined8 **)(pPVar2 + 0x28) = 0;
    }
    else {
      lVar4 = plVar5[1];
      **(undefined8 **)(pPVar2 + 0x28) = 0;
      plVar5[1] = lVar4;
      if (lVar4 == 0) {
                    /* try { // try from 004a5f8c to 005a5f9b has its CatchHandler @ 004a624c */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* try { // try from 004a5fa8 to 005a5fb7 has its CatchHandler @ 004a61f8 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
              *)(this + 0x48),*(_Rb_tree_node **)(this + 0x58));
  plVar5 = *(long **)(this + 0x40);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 004a5fe4 to 005a5fef has its CatchHandler @ 004a614c */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 004a5ff0 to 005a5ff7 has its CatchHandler @ 004a6134 */
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 004a6004 to 005a6077 has its CatchHandler @ 004a614c */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  std::
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  ::_M_erase((_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
              *)(this + 8),*(_Rb_tree_node **)(this + 0x18));
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


