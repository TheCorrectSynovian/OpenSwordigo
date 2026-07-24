/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c9900
 * Function: Caver::Texture::GetBindings
 * Signature: undefined __thiscall GetBindings(Texture * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding> >*) */

void __thiscall Caver::Texture::GetBindings(Texture *this,vector *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_90 [8];
  long local_88 [2];
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x38) == 0) {
                    /* try { // try from 005c99c4 to 006c99d7 has its CatchHandler @ 005c9b34 */
    Load(this);
    lVar9 = *(long *)(this + 0x90);
  }
  else {
    lVar9 = *(long *)(this + 0x90);
                    /* try { // try from 005c9940 to 006c9947 has its CatchHandler @ 005c9b70 */
  }
  if (lVar9 == 0) {
                    /* try { // try from 005c99d8 to 006c99eb has its CatchHandler @ 005c9b80 */
    puVar8 = operator_new(0x18);
    fVar12 = *(float *)(this + 0x54);
    fVar13 = *(float *)(this + 0x58);
    uVar2 = *(undefined4 *)(this + 0x44);
    *puVar8 = 1;
                    /* try { // try from 005c99ec to 006c99fb has its CatchHandler @ 005c9b04 */
    *(undefined4 *)(puVar8 + 0xc) = 3;
    *(undefined4 *)(puVar8 + 0x10) = uVar2;
    *(int *)(puVar8 + 4) = (int)fVar12;
    *(int *)(puVar8 + 8) = (int)fVar13;
    *(float *)(puVar8 + 0x14) = (float)(int)fVar12 / (float)(int)fVar13;
    *(undefined1 **)(this + 0x90) = puVar8;
  }
                    /* try { // try from 005c9948 to 006c995b has its CatchHandler @ 005c9b6c */
  FUN_00666bb8(local_88,"name",auStack_90);
                    /* try { // try from 005c995c to 006c996f has its CatchHandler @ 005c9bb8 */
  local_78[0] = 0;
  FUN_0066a528(&local_70,local_88);
                    /* try { // try from 005c9970 to 006c997f has its CatchHandler @ 005c9b3c */
  local_68 = 0x100000001;
  local_60 = 2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
                    /* try { // try from 005c9a1c to 006c9a1f has its CatchHandler @ 005c9b80 */
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
                    /* try { // try from 005c99a0 to 006c99a3 has its CatchHandler @ 005c9bb8 */
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
                    /* try { // try from 005c99bc to 006c99c3 has its CatchHandler @ 005c9b38 */
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar7 = PTR_DAT_007e5de8;
                    /* try { // try from 005c9a3c to 006c9a47 has its CatchHandler @ 005c9b00 */
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 005ca264 to 006ca277 has its CatchHandler @ 005ca764 */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
                    /* try { // try from 005c9a48 to 006c9b27 has its CatchHandler @ 005c98fc */
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
                    /* try { // try from 005ca03c to 006ca063 has its CatchHandler @ 005ca0b8 */
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
                    /* try { // try from 005ca278 to 006ca283 has its CatchHandler @ 005ca72c */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"imageType",auStack_90);
  local_78[0] = 1;
  FUN_0066a528(&local_70,local_88);
  uVar6 = DAT_00683968;
  local_60 = 3;
  local_68 = DAT_00683968;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
                    /* try { // try from 005ca064 to 006ca157 has its CatchHandler @ 005c9eb4 */
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 005ca2a4 to 006ca2a7 has its CatchHandler @ 005ca764 */
    if (iVar11 < 1) {
                    /* try { // try from 005ca2a8 to 006ca2db has its CatchHandler @ 005ca1b8 */
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005c9a3c with catch @ 005c9b00 */
                    /* catch() { ... } // from try @ 005c99ec with catch @ 005c9b04 */
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"pixelFormat",auStack_90);
                    /* try { // try from 005c9b28 to 006c9c9b has its CatchHandler @ 005c9cbc */
  local_78[0] = 2;
                    /* catch() { ... } // from try @ 005c99c4 with catch @ 005c9b34 */
  FUN_0066a528(&local_70,local_88);
                    /* catch() { ... } // from try @ 005c99bc with catch @ 005c9b38 */
                    /* catch() { ... } // from try @ 005c9970 with catch @ 005c9b3c */
  local_68 = uVar6;
  local_60 = 3;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
                    /* catch() { ... } // from try @ 005c9948 with catch @ 005c9b6c */
    puVar1[6] = local_60;
                    /* catch() { ... } // from try @ 005c9940 with catch @ 005c9b70 */
    *(undefined8 *)(puVar1 + 4) = local_68;
                    /* catch() { ... } // from try @ 005c99d8 with catch @ 005c9b80
                       catch() { ... } // from try @ 005c9a1c with catch @ 005c9b80 */
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
                    /* catch() { ... } // from try @ 005ca004 with catch @ 005ca0b0 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
                    /* try { // try from 005ca2dc to 006ca2df has its CatchHandler @ 005ca718 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005c9f54 with catch @ 005ca0b4 */
        iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 005ca03c with catch @ 005ca0b8 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 005ca2e0 to 006ca327 has its CatchHandler @ 005ca1b8 */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
                    /* catch() { ... } // from try @ 005c9f94 with catch @ 005ca0d4 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005c995c with catch @ 005c9bb8
                       catch() { ... } // from try @ 005c99a0 with catch @ 005c9bb8 */
  FUN_00666bb8(local_88,"width",auStack_90);
  local_78[0] = 3;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar6;
  local_60 = 2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
                    /* try { // try from 005ca328 to 006ca337 has its CatchHandler @ 005ca714 */
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 005c9f8c with catch @ 005ca128 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
                    /* try { // try from 005ca34c to 006ca35b has its CatchHandler @ 005ca830 */
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"height",auStack_90);
  local_78[0] = 4;
  FUN_0066a528(&local_70,local_88);
                    /* try { // try from 005c9c9c to 006c9cbf has its CatchHandler @ 005c98fc */
  local_68 = uVar6;
  local_60 = 2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
                    /* catch() { ... } // from try @ 005c9b28 with catch @ 005c9cbc */
                    /* catch() { ... } // from try @ 005c9d8c with catch @ 005c9cc0
                       catch() { ... } // from try @ 005c9ea8 with catch @ 005c9cc0 */
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
                    /* try { // try from 005ca158 to 006ca17f has its CatchHandler @ 005ca19c */
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"targetImageType",auStack_90);
                    /* try { // try from 005c9d34 to 006c9d37 has its CatchHandler @ 005c9e18 */
  local_78[0] = 5;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar6;
  local_60 = 5;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
                    /* try { // try from 005c9d68 to 006c9d6b has its CatchHandler @ 005c9e08 */
    FUN_0066a528(puVar1 + 2,&local_70);
                    /* try { // try from 005c9d78 to 006c9d7b has its CatchHandler @ 005c9e8c */
    puVar1[6] = local_60;
                    /* try { // try from 005c9d80 to 006c9d83 has its CatchHandler @ 005c9e84 */
    *(undefined8 *)(puVar1 + 4) = local_68;
                    /* try { // try from 005c9d88 to 006c9d8b has its CatchHandler @ 005c9e7c */
                    /* try { // try from 005c9d8c to 006c9e4f has its CatchHandler @ 005c9cc0 */
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
                    /* try { // try from 005ca39c to 006ca3c3 has its CatchHandler @ 005ca694 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
                    /* try { // try from 005ca1b8 to 006ca24f has its CatchHandler @ 005ca1b8
                       catch() { ... } // from try @ 005ca1b8 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca2a8 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca2e0 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca4f0 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca568 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca710 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca758 with catch @ 005ca1b8
                       catch() { ... } // from try @ 005ca88c with catch @ 005ca1b8 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(int *)(*(long *)(this + 0x90) + 0xc) == 3) {
    FUN_00666bb8(local_88,"targetPixelFormat",auStack_90);
    local_78[0] = 6;
    FUN_0066a528(&local_70,local_88);
                    /* catch() { ... } // from try @ 005c9d68 with catch @ 005c9e08 */
    local_68 = uVar6;
    local_60 = 1;
    puVar1 = *(undefined4 **)(param_1 + 8);
                    /* catch() { ... } // from try @ 005c9d34 with catch @ 005c9e18 */
    if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
                    /* try { // try from 005c9e60 to 006c9ea7 has its CatchHandler @ 005c9eb0 */
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
    }
    else {
      *puVar1 = local_78[0];
      FUN_0066a528(puVar1 + 2,&local_70);
      puVar1[6] = local_60;
      *(undefined8 *)(puVar1 + 4) = local_68;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
                    /* try { // try from 005c9e50 to 006c9e53 has its CatchHandler @ 005c9e68 */
    }
                    /* catch() { ... } // from try @ 005c9e50 with catch @ 005c9e68 */
    if ((undefined *)(local_70 + -0x18) != puVar7) {
      piVar10 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
                    /* try { // try from 005ca4a4 to 006ca4cb has its CatchHandler @ 005ca82c */
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
                    /* try { // try from 005ca3e4 to 006ca40b has its CatchHandler @ 005ca830 */
          iVar11 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
                    /* catch() { ... } // from try @ 005c9d88 with catch @ 005c9e7c */
    if ((undefined *)(local_88[0] + -0x18) != puVar7) {
      piVar10 = (int *)(local_88[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
                    /* try { // try from 005ca410 to 006ca41b has its CatchHandler @ 005ca82c */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_88[0] + -0x18));
      }
    }
  }
                    /* catch() { ... } // from try @ 005c9d80 with catch @ 005c9e84 */
                    /* catch() { ... } // from try @ 005c9d78 with catch @ 005c9e8c */
  FUN_00666bb8(local_88,"targetWidth",auStack_90);
  local_78[0] = 7;
                    /* try { // try from 005c9ea8 to 006c9eb3 has its CatchHandler @ 005c9cc0 */
                    /* catch() { ... } // from try @ 005c9e60 with catch @ 005c9eb0 */
  FUN_0066a528(&local_70,local_88);
                    /* try { // try from 005c9eb4 to 006c9f53 has its CatchHandler @ 005c9eb4
                       catch() { ... } // from try @ 005c9eb4 with catch @ 005c9eb4
                       catch() { ... } // from try @ 005ca064 with catch @ 005c9eb4 */
  local_68 = uVar6;
  local_60 = 4;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"targetHeight",auStack_90);
                    /* try { // try from 005c9f54 to 006c9f5f has its CatchHandler @ 005ca0b4 */
  local_78[0] = 8;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar6;
  local_60 = 4;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
                    /* try { // try from 005c9f8c to 006c9f93 has its CatchHandler @ 005ca128 */
    FUN_0066a528(puVar1 + 2,&local_70);
                    /* try { // try from 005c9f94 to 006c9fa3 has its CatchHandler @ 005ca0d4 */
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005ca45c to 006ca483 has its CatchHandler @ 005ca644 */
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar10 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 005ca004 to 006ca00f has its CatchHandler @ 005ca0b0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005ca4dc to 006ca4ef has its CatchHandler @ 005ca840 */
  __stack_chk_fail();
}


