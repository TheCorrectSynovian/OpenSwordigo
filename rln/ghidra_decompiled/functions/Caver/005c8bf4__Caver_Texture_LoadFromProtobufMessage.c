/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8bf4
 * Function: Caver::Texture::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Texture * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&) */

uint __thiscall Caver::Texture::LoadFromProtobufMessage(Texture *this,Texture *param_1)

{
  string *psVar1;
  long lVar2;
  Texture *pTVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  TextureConversionInfo *this_00;
  ulong uVar12;
  void *pvVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long local_70;
  undefined8 uStack_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 005c8c0c to 006c8c33 has its CatchHandler @ 005c8cc8 */
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  psVar1 = (string *)(this + 0x30);
  FUN_0066a6a8(psVar1,*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 005c8c34 to 006c8c9f has its CatchHandler @ 005c8890 */
  if (((byte)param_1[0x68] >> 1 & 1) != 0) {
    uVar10 = PixelFormatFromProtobufValue(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(this + 0x44) = uVar10;
  }
  puVar9 = PTR_default_instance__007e6858;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar16 = 0;
    do {
      lVar17 = *(long *)(*(long *)(param_1 + 0x20) + lVar16 * 8);
      lVar2 = *(long *)puVar9;
      if (*(long *)(lVar17 + 0x18) != 0) {
        lVar2 = lVar17;
      }
      local_70 = *(long *)(*(long *)(lVar2 + 0x18) + 0xc);
      uStack_68 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x14);
      CreateSubtexture((Rectangle *)this,*(float *)(lVar17 + 0x20));
                    /* try { // try from 005c8ca0 to 006c8ca7 has its CatchHandler @ 005c8ca8 */
                    /* catch() { ... } // from try @ 005c8ca0 with catch @ 005c8ca8 */
      FUN_0066a6a8(local_60 + 6,*(undefined8 *)(lVar17 + 0x10));
                    /* catch() { ... } // from try @ 005c8bc4 with catch @ 005c8cbc */
      if ((local_60 != (long *)0x0) &&
         (iVar15 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar15, iVar15 == 0)) {
                    /* catch() { ... } // from try @ 005c8c0c with catch @ 005c8cc8 */
        (**(code **)(*local_60 + 8))();
      }
      lVar16 = lVar16 + 1;
                    /* catch() { ... } // from try @ 005c8a54 with catch @ 005c8cd8 */
    } while (lVar16 < *(int *)(param_1 + 0x28));
  }
  if (((byte)param_1[0x68] >> 4 & 1) != 0) {
    this_00 = operator_new(0x18);
    uVar8 = _UNK_00697dc8;
    uVar7 = _DAT_00697dc0;
                    /* try { // try from 005c8cfc to 006c8e27 has its CatchHandler @ 005c8e30 */
    *this_00 = (TextureConversionInfo)0x1;
    *(undefined8 *)(this_00 + 0xc) = uVar8;
    *(undefined8 *)(this_00 + 4) = uVar7;
    *(undefined4 *)(this_00 + 0x14) = 0x7fc00000;
    pvVar13 = *(void **)(this + 0x90);
    *(TextureConversionInfo **)(this + 0x90) = this_00;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
      this_00 = *(TextureConversionInfo **)(this + 0x90);
    }
    pTVar3 = *(Texture **)PTR_default_instance__007e7970;
    if (*(long *)(param_1 + 0x60) != 0) {
      pTVar3 = param_1;
    }
                    /* catch() { ... } // from try @ 005c8aa8 with catch @ 005c8d3c */
                    /* catch() { ... } // from try @ 005c8af0 with catch @ 005c8d40 */
    TextureConversionInfo::LoadFromProtobufMessage
              (this_00,*(Texture_ConversionInfo **)(pTVar3 + 0x60));
  }
  lVar16 = TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 005c89bc with catch @ 005c8d4c */
  if (*(char *)(lVar16 + 0x39) != '\0') {
                    /* catch() { ... } // from try @ 005c8998 with catch @ 005c8d50 */
    FUN_0066a528(&local_70,psVar1);
    FUN_006677d4(&local_70,&DAT_00697cf3,3);
    uVar12 = InitWithResource(this,(string *)&local_70,2.0);
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar14 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((uVar12 & 1) != 0) {
      uVar11 = 1;
      goto LAB_005c8dfc;
    }
  }
  uVar11 = InitWithResource(this,psVar1,1.0);
LAB_005c8dfc:
  if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 005c8e28 to 006c8e33 has its CatchHandler @ 005c8890 */
    return uVar11 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


