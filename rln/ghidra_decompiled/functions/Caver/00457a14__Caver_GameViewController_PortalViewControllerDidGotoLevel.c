/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457a14
 * Function: Caver::GameViewController::PortalViewControllerDidGotoLevel
 * Signature: undefined __thiscall PortalViewControllerDidGotoLevel(GameViewController * this, PortalViewController * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController*,
   std::string const&) */

void __thiscall
Caver::GameViewController::PortalViewControllerDidGotoLevel
          (GameViewController *this,PortalViewController *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GameEvent *pGVar5;
  DidEnterPortalGameEvent *this_00;
  int *piVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
                    /* try { // try from 00457a28 to 00557aeb has its CatchHandler @ 00457a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00457a28 with catch @ 00457a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00457b00 with catch @ 00457a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00457b74 with catch @ 00457a28
                        */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_58,&DAT_0068eec0,auStack_60);
  pGVar5 = (GameEvent *)GameEvent::NewCounterEvent((string *)local_58,1);
  GameEvent::SendEvent(pGVar5);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 00457b00 to 00557b6b has its CatchHandler @ 00457a28 */
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00457aec with catch @ 00457b48
                        */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  this_00 = operator_new(0x80);
  FUN_00666bb8(local_58,"portal",auStack_60);
  DidEnterPortalGameEvent::DidEnterPortalGameEvent(this_00,param_2,(string *)local_58);
  GameEvent::SendEvent((GameEvent *)this_00);
  if ((undefined *)(local_58[0] + -0x18) != puVar4) {
    piVar6 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
                    /* try { // try from 00457b6c to 00557b73 has its CatchHandler @ 00457b7c */
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* try { // try from 00457b74 to 00557b7f has its CatchHandler @ 00457a28 */
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00457aec to 00557aff has its CatchHandler @ 00457b48 */
  return;
}


