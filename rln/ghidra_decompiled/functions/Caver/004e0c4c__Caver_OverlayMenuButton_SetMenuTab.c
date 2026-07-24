/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0c4c
 * Function: Caver::OverlayMenuButton::SetMenuTab
 * Signature: undefined __cdecl SetMenuTab(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayMenuButton::SetMenuTab(std::string const&) */

void Caver::OverlayMenuButton::SetMenuTab(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  int *piVar5;
  int iVar6;
  long local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_0066a6a8(param_1 + 0x1f0);
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  FUN_0035a030(&local_50,"ui_tab_",param_1 + 0x1f0);
  TextureLibrary::TextureForName(psVar4,SUB81(&local_50,0));
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 004e0d1c to 005e0d1f has its CatchHandler @ 004e0d30 */
                    /* try { // try from 004e0d20 to 005e0d33 has its CatchHandler @ 004e0cfc */
    piVar5 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004e0d3c to 005e0d47 has its CatchHandler @ 004e0cfc */
      iVar6 = *piVar5;
                    /* catch() { ... } // from try @ 004e0d34 with catch @ 004e0d44 */
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
                    /* catch() { ... } // from try @ 004e0d1c with catch @ 004e0d30 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004e0d34 to 005e0d3b has its CatchHandler @ 004e0d44 */
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  GUIButton::SetImage((GUIButton *)param_1,(intrusive_ptr *)local_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e0b3c with catch @ 004e0ce4
                        */
  if ((local_48[0] != (long *)0x0) &&
     (iVar6 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar6, iVar6 == 0)) {
                    /* try { // try from 004e0ce8 to 005e0cef has its CatchHandler @ 004e0cf8 */
                    /* try { // try from 004e0cf0 to 005e0cfb has its CatchHandler @ 004e0af4 */
    (**(code **)(*local_48[0] + 8))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e0ce8 with catch @ 004e0cf8
                        */
                    /* catch() { ... } // from try @ 004e0d20 with catch @ 004e0cfc
                       catch() { ... } // from try @ 004e0d3c with catch @ 004e0cfc */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


