/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bfdfc
 * Function: Caver::PlayerProfile::CreateProfile
 * Signature: undefined __thiscall CreateProfile(PlayerProfile * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::CreateProfile(std::string const&) */

void __thiscall Caver::PlayerProfile::CreateProfile(PlayerProfile *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_178 [8];
  long local_170;
  long local_168 [2];
  GameState aGStack_158 [288];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  Proto::GameState::GameState(aGStack_158);
                    /* try { // try from 004bfe30 to 005bfe3b has its CatchHandler @ 004bfea0 */
  FUN_00666bb8(&local_170,"gstate",auStack_178);
  PathForResourceOfType(param_1,(string *)&local_170);
  LoadProtobufMessageFromFile((MessageLite *)aGStack_158,(string *)local_168);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 004bfe5c to 005bfe5f has its CatchHandler @ 004bfe9c */
                    /* try { // try from 004bfe60 to 005bfec3 has its CatchHandler @ 004bfab8 */
  if ((undefined *)(local_168[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004bfd80 with catch @ 004bfed0 */
    piVar5 = (int *)(local_168[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
                    /* try { // try from 004bff1c to 005bffa7 has its CatchHandler @ 004bfab8 */
                    /* catch() { ... } // from try @ 004bfec4 with catch @ 004bff20 */
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
                    /* catch() { ... } // from try @ 004bfd5c with catch @ 004bff24 */
    if (iVar6 < 1) {
                    /* catch() { ... } // from try @ 004bfd78 with catch @ 004bff30
                       catch() { ... } // from try @ 004bfdac with catch @ 004bff30 */
      operator_delete((undefined *)(local_168[0] + -0x18));
                    /* catch() { ... } // from try @ 004bfd50 with catch @ 004bff34
                       catch() { ... } // from try @ 004bfdec with catch @ 004bff34 */
    }
  }
  if ((undefined *)(local_170 + -0x18) != puVar4) {
    piVar5 = (int *)(local_170 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 004bfb90 with catch @ 004bff38 */
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
      operator_delete((undefined *)(local_170 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004bfca0 with catch @ 004bfe88 */
                    /* catch() { ... } // from try @ 004bfc94 with catch @ 004bfe8c */
  LoadGameStateFromProtobufMessage(this,aGStack_158);
                    /* catch() { ... } // from try @ 004bfbe8 with catch @ 004bfe90 */
                    /* catch() { ... } // from try @ 004bfbdc with catch @ 004bfe94 */
                    /* catch() { ... } // from try @ 004bfc18 with catch @ 004bfe98 */
                    /* catch() { ... } // from try @ 004bfe5c with catch @ 004bfe9c */
  Save(this,true);
                    /* catch() { ... } // from try @ 004bfe30 with catch @ 004bfea0 */
  this[0x68] = (PlayerProfile)0x1;
  Proto::GameState::~GameState(aGStack_158);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004bfb84 with catch @ 004bff58 */
    __stack_chk_fail();
  }
                    /* try { // try from 004bfec4 to 005bff1b has its CatchHandler @ 004bff20 */
  return;
}


