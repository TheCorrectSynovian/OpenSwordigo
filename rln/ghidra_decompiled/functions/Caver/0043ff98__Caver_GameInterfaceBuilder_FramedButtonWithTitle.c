/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ff98
 * Function: Caver::GameInterfaceBuilder::FramedButtonWithTitle
 * Signature: undefined __cdecl FramedButtonWithTitle(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameInterfaceBuilder::FramedButtonWithTitle(std::string const&, bool) */

void Caver::GameInterfaceBuilder::FramedButtonWithTitle(string *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  long *plVar5;
  intrusive_ptr *in_x2;
  undefined8 *in_x8;
  long *plVar6;
  int iVar7;
  GUIButton *pGVar8;
  long *local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_70 = (long *)0x0;
  local_58[0] = (long *)0x0;
  PlainButton((GameInterfaceBuilder *)&local_70,(intrusive_ptr *)local_58,in_x2);
  if ((local_58[0] != (long *)0x0) &&
     (iVar7 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_58[0] + 8))();
  }
  if ((local_70 == (long *)0x0) ||
     (iVar7 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar7, iVar7 != 0)) {
    pGVar8 = (GUIButton *)*in_x8;
    if (!param_2) goto LAB_004400d8;
LAB_00440024:
    psVar4 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(local_58,"ui_button_light",auStack_60);
    TextureLibrary::TextureForName(psVar4,SUB81(local_58,0));
                    /* catch() { ... } // from try @ 0044009c with catch @ 00440060
                       catch() { ... } // from try @ 004400b8 with catch @ 00440060 */
    GUIButton::SetFrameTextureForState(pGVar8,0,&local_70);
    if ((local_70 != (long *)0x0) &&
       (iVar7 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
    plVar5 = local_58[0] + -3;
                    /* try { // try from 00440098 to 0054009b has its CatchHandler @ 004400ac */
                    /* try { // try from 0044009c to 005400af has its CatchHandler @ 00440060 */
    if (plVar5 == (long *)PTR_DAT_007e5de8) goto LAB_00440154;
    plVar6 = local_58[0] + -1;
                    /* catch() { ... } // from try @ 00440098 with catch @ 004400ac */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00440268:
      iVar7 = (int)*plVar6;
      *(int *)plVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 004400b0 to 005400b7 has its CatchHandler @ 004400c0 */
        iVar7 = (int)*plVar6;
                    /* try { // try from 004400b8 to 005400c3 has its CatchHandler @ 00440060 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
                    /* catch() { ... } // from try @ 0044012c with catch @ 004400c4 */
    (**(code **)(*local_70 + 8))();
    pGVar8 = (GUIButton *)*in_x8;
    if (param_2) goto LAB_00440024;
LAB_004400d8:
    psVar4 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(local_58,"ui_button",auStack_60);
                    /* try { // try from 004400fc to 005400ff has its CatchHandler @ 00440120 */
                    /* try { // try from 00440100 to 00540107 has its CatchHandler @ 00440118 */
    TextureLibrary::TextureForName(psVar4,SUB81(local_58,0));
    GUIButton::SetFrameTextureForState(pGVar8,0,&local_70);
                    /* catch() { ... } // from try @ 00440100 with catch @ 00440118 */
                    /* catch() { ... } // from try @ 004400fc with catch @ 00440120 */
                    /* try { // try from 00440124 to 0054012b has its CatchHandler @ 0044013c */
                    /* try { // try from 0044012c to 0054013f has its CatchHandler @ 004400c4 */
    if ((local_70 != (long *)0x0) &&
       (iVar7 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
                    /* catch() { ... } // from try @ 00440124 with catch @ 0044013c */
    plVar5 = local_58[0] + -3;
    if (plVar5 == (long *)PTR_DAT_007e5de8) goto LAB_00440154;
                    /* try { // try from 0044024c to 0054025f has its CatchHandler @ 00440284 */
    plVar6 = local_58[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00440268;
    do {
      iVar7 = (int)*plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 00440260 to 00540287 has its CatchHandler @ 00440230 */
    } while (cVar1 != '\0');
  }
  if (iVar7 < 1) {
    operator_delete(plVar5);
                    /* catch() { ... } // from try @ 0044024c with catch @ 00440284 */
  }
LAB_00440154:
  pGVar8 = (GUIButton *)*in_x8;
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_58,"ui_frame",auStack_60);
  TextureLibrary::TextureForName(psVar4,SUB81(local_58,0));
  GUIButton::SetFrameTextureForState(pGVar8,1,&local_70);
  if ((local_70 != (long *)0x0) &&
     (iVar7 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if (local_58[0] + -3 != (long *)PTR_DAT_007e5de8) {
    plVar5 = local_58[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar5;
      *(int *)plVar5 = iVar7 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00440260 with catch @ 00440230 */
        iVar7 = (int)*plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_58[0] + -3);
    }
  }
  GUIButton::SetTitle((GUIButton *)*in_x8,param_1);
  uStack_68 = _DAT_0068e258;
  local_70 = _DAT_0068e250;
  GUIView::SetFrame((GUIView *)*in_x8,(Rectangle *)&local_70);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


