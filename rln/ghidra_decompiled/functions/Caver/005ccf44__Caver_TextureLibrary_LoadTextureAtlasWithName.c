/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ccf44
 * Function: Caver::TextureLibrary::LoadTextureAtlasWithName
 * Signature: undefined __thiscall LoadTextureAtlasWithName(TextureLibrary * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::LoadTextureAtlasWithName(std::string const&) */

void __thiscall
Caver::TextureLibrary::LoadTextureAtlasWithName(TextureLibrary *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  undefined1 auStack_d0 [8];
  long local_c8;
  long *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  long local_a8 [14];
  long local_38;
  
  puVar4 = PTR_DAT_007e5de8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ccf18 with catch @ 005ccf48
                        */
                    /* try { // try from 005ccf4c to 006ccf93 has its CatchHandler @ 005ccf4c
                       catch() { ... } // from try @ 005ccf4c with catch @ 005ccf4c
                       catch() { ... } // from try @ 005cd08c with catch @ 005ccf4c
                       catch() { ... } // from try @ 005cd364 with catch @ 005ccf4c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_b8 = PTR_DAT_007e5de8 + 0x18;
  if (this[0x39] == (TextureLibrary)0x0) {
LAB_005cd010:
                    /* try { // try from 005cd018 to 006cd01b has its CatchHandler @ 005cd220 */
    FUN_00666bb8(&local_c0,"atlas",auStack_b0);
                    /* try { // try from 005cd02c to 006cd033 has its CatchHandler @ 005cd188 */
    PathForResourceOfType(param_1,(string *)&local_c0);
                    /* try { // try from 005cd034 to 006cd047 has its CatchHandler @ 005cd180 */
    FUN_0066a6a8(&local_b8,local_a8);
                    /* try { // try from 005cd048 to 006cd05b has its CatchHandler @ 005cd1e8 */
    if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
      piVar6 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar6;
        *piVar6 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
                    /* try { // try from 005cd05c to 006cd067 has its CatchHandler @ 005cd150 */
    if (local_c0 + -3 != (long *)puVar4) {
      plVar7 = local_c0 + -1;
                    /* catch() { ... } // from try @ 005cd05c with catch @ 005cd150 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = (int)*plVar7;
        *(int *)plVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = (int)*plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 005ccfd8 with catch @ 005cd220
                       catch() { ... } // from try @ 005cd018 with catch @ 005cd220 */
      if (iVar8 < 1) {
        operator_delete(local_c0 + -3);
      }
    }
    uVar5 = FileExistsAtPath((string *)&local_b8);
    if ((uVar5 & 1) == 0) goto LAB_005cd0c8;
  }
  else {
    FUN_0066a528(&local_c0,param_1);
                    /* try { // try from 005ccf94 to 006ccf9b has its CatchHandler @ 005cd1e0 */
                    /* try { // try from 005ccfa0 to 006ccfa7 has its CatchHandler @ 005cd1d0 */
    FUN_006677d4(&local_c0,&DAT_00697cf3,3);
    FUN_00666bb8(&local_c8,"atlas",auStack_d0);
                    /* try { // try from 005ccfbc to 006ccfc3 has its CatchHandler @ 005cd1c8 */
                    /* try { // try from 005ccfc4 to 006ccfd7 has its CatchHandler @ 005cd1c0 */
    PathForResourceOfType((string *)&local_c0,(string *)&local_c8);
    FUN_0066a6a8(&local_b8,local_a8);
                    /* try { // try from 005ccfd8 to 006ccfeb has its CatchHandler @ 005cd220 */
    if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
      piVar6 = (int *)(local_a8[0] + -8);
                    /* try { // try from 005cd174 to 006cd1bb has its CatchHandler @ 005cd430 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar6;
        *piVar6 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar6;
                    /* catch() { ... } // from try @ 005cd034 with catch @ 005cd180 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
                    /* try { // try from 005ccfec to 006ccff7 has its CatchHandler @ 005cd190 */
    if ((undefined *)(local_c8 + -0x18) != puVar4) {
                    /* catch() { ... } // from try @ 005ccfec with catch @ 005cd190 */
      piVar6 = (int *)(local_c8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar6;
        *piVar6 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_c8 + -0x18));
      }
    }
    if (local_c0 + -3 != (long *)puVar4) {
      plVar7 = local_c0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = (int)*plVar7;
        *(int *)plVar7 = iVar8 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 005ccfc4 with catch @ 005cd1c0 */
          iVar8 = (int)*plVar7;
                    /* catch() { ... } // from try @ 005ccfbc with catch @ 005cd1c8 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_c0 + -3);
      }
    }
    uVar5 = FileExistsAtPath((string *)&local_b8);
    if ((uVar5 & 1) == 0) goto LAB_005cd010;
  }
  Proto::Texture::Texture((Texture *)local_a8);
  LoadProtobufMessageFromFile((MessageLite *)local_a8,(string *)&local_b8);
                    /* try { // try from 005cd088 to 006cd08b has its CatchHandler @ 005cd1e8 */
                    /* try { // try from 005cd08c to 006cd173 has its CatchHandler @ 005ccf4c */
  TextureFromProtobufMessage((Texture *)this,SUB81(local_a8,0));
  *(undefined1 *)(local_c0 + 0x14) = 1;
  if ((local_c0 != (long *)0x0) &&
     (iVar8 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_c0 + 8))();
  }
  Proto::Texture::~Texture((Texture *)local_a8);
LAB_005cd0c8:
  if (local_b8 + -0x18 != puVar4) {
    piVar6 = (int *)(local_b8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar6;
      *piVar6 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 005ccf94 with catch @ 005cd1e0 */
    if (iVar8 < 1) {
                    /* catch() { ... } // from try @ 005cd048 with catch @ 005cd1e8
                       catch() { ... } // from try @ 005cd088 with catch @ 005cd1e8 */
      operator_delete(local_b8 + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


