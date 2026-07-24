/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585590
 * Function: Caver::SoundLibrary::AddEffect
 * Signature: undefined __thiscall AddEffect(SoundLibrary * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::AddEffect(boost::intrusive_ptr<Caver::SoundEffect> const&) */

void __thiscall Caver::SoundLibrary::AddEffect(SoundLibrary *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
                    /* try { // try from 0058559c to 006855a7 has its CatchHandler @ 005851cc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00585574 with catch @ 005855a4
                        */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(&local_60,*(long *)param_1 + 0x18);
  local_58 = *(long **)param_1;
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00585694 with catch @ 005855e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00585704 with catch @ 005855e0
                        */
  FUN_0066a528(&local_50,&local_60);
  local_48 = local_58;
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  ::_M_insert_equal((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                     *)this,(pair *)&local_50);
                    /* try { // try from 00585624 to 0068564b has its CatchHandler @ 005856b0 */
  if ((local_48 != (long *)0x0) &&
     (iVar6 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058566c with catch @ 005856a8
                        */
    piVar5 = (int *)(local_50 + -8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00585624 with catch @ 005856b0
                        */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
                    /* try { // try from 00585704 to 0068570f has its CatchHandler @ 005855e0 */
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005856d4 with catch @ 0058570c
                        */
  if ((local_58 != (long *)0x0) &&
     (iVar6 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar6, iVar6 == 0)) {
                    /* try { // try from 0058566c to 00685693 has its CatchHandler @ 005856a8 */
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar5 = (int *)(local_60 + -8);
                    /* try { // try from 005856d4 to 00685703 has its CatchHandler @ 0058570c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00585720 to 00685723 has its CatchHandler @ 00585734 */
                    /* try { // try from 00585724 to 00685747 has its CatchHandler @ 00585710 */
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00585720 with catch @ 00585734 */
    __stack_chk_fail();
  }
                    /* try { // try from 00585694 to 006856d3 has its CatchHandler @ 005855e0 */
  return;
}


