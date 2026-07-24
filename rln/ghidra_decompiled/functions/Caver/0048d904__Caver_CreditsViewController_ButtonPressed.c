/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d904
 * Function: Caver::CreditsViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::CreditsViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  MainMenuViewController *this;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0048d918 to 0058d92b has its CatchHandler @ 0048da30 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0048d92c to 0058d943 has its CatchHandler @ 0048d9c8 */
  this = operator_new(0x128);
  MainMenuViewController::MainMenuViewController(this);
  boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>
            ((shared_ptr<Caver::MainMenuViewController> *)&local_48,this);
                    /* try { // try from 0048d944 to 0058da57 has its CatchHandler @ 0048d868 */
  plVar2 = *(long **)((long)param_1 + 0x40);
  pcVar3 = *(code **)(*plVar2 + 8);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar3)(DAT_00683484,DAT_00683484,plVar2,&local_58,1);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048d92c with catch @ 0048d9c8
                        */
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048d918 with catch @ 0048da30
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


