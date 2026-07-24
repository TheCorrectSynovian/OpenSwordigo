/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005caa74
 * Function: Caver::Texture::Load
 * Signature: undefined __thiscall Load(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Load() */

ulong __thiscall Caver::Texture::Load(Texture *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  RenderingContext *this_00;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  Texture *pTVar10;
  Texture *pTVar11;
  string *psVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  uint local_84;
  Image aIStack_80 [4];
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 local_6c;
  undefined8 local_68;
  long local_48;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 005caa70 with catch @ 005caa90 */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005caa4c with catch @ 005caa98 */
  if (*(Texture **)(this + 0x70) != (Texture *)0x0) {
    uVar5 = Load(*(Texture **)(this + 0x70));
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return (ulong)((uint)uVar5 & 1);
                    /* try { // try from 005caabc to 006caac3 has its CatchHandler @ 005caad4 */
    }
    goto LAB_005cad64;
  }
  uVar13 = TimerCurrentSeconds();
                    /* try { // try from 005caac4 to 006caad7 has its CatchHandler @ 005caa00 */
  psVar12 = (string *)(this + 0x20);
  *(undefined8 *)(this + 0x98) = uVar13;
                    /* catch() { ... } // from try @ 005caabc with catch @ 005caad4 */
  if (*(long *)(*(long *)psVar12 + -0x18) == 0) {
LAB_005cac54:
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(this + 0x28);
    if ((iVar4 == 1) || (iVar4 == 3)) {
      Image::Image(aIStack_80);
      uVar5 = Image::LoadFromFile(aIStack_80,psVar12,*(undefined4 *)(this + 0x28),1);
      if ((uVar5 & 1) == 0) {
        Image::~Image(aIStack_80);
        goto LAB_005cac54;
      }
      *(int *)(this + 0x44) = local_74;
                    /* try { // try from 005cac00 to 006cac03 has its CatchHandler @ 005cb19c */
                    /* try { // try from 005cac04 to 006cacaf has its CatchHandler @ 005cab34 */
      *(undefined4 *)(this + 0x4c) = 0;
      *(undefined4 *)(this + 0x50) = 0;
      uVar13 = NEON_scvtf(CONCAT44(iStack_78,local_7c),4);
      *(ulong *)(this + 0x54) =
           CONCAT44((float)((ulong)uVar13 >> 0x20) / *(float *)(this + 0x6c),
                    (float)uVar13 / *(float *)(this + 0x6c));
      InitWithData(this,local_68,local_7c,iStack_78);
      iVar4 = BytesPerPixelForPixelFormat(*(undefined4 *)(this + 0x44));
      *(int *)(this + 0x48) = *(int *)(this + 0x3c) * iVar4 * *(int *)(this + 0x40);
      Image::~Image(aIStack_80);
    }
    else if (iVar4 == 2) {
      pTVar10 = this + 0x40;
      *(undefined4 *)pTVar10 = 0;
      pTVar11 = this + 0x3c;
      *(undefined4 *)pTVar11 = 0;
      pvVar6 = (void *)NewByteBufferFromAndroidAsset(psVar12,&local_84);
      iVar4 = PVRTTextureLoadFromPVRBuffer
                        (pvVar6,(ulong)local_84,(uint *)(this + 0x38),aIStack_80,true,0,
                         (int *)pTVar11,(int *)pTVar10);
                    /* try { // try from 005cab34 to 006cabff has its CatchHandler @ 005cab34
                       catch() { ... } // from try @ 005cab34 with catch @ 005cab34
                       catch() { ... } // from try @ 005cac04 with catch @ 005cab34
                       catch() { ... } // from try @ 005cacb4 with catch @ 005cab34
                       catch() { ... } // from try @ 005cad94 with catch @ 005cab34
                       catch() { ... } // from try @ 005cae50 with catch @ 005cab34
                       catch() { ... } // from try @ 005cb078 with catch @ 005cab34
                       catch() { ... } // from try @ 005cb0f4 with catch @ 005cab34
                       catch() { ... } // from try @ 005cb24c with catch @ 005cab34 */
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      if (iVar4 != 0) goto LAB_005cac54;
      if ((*(int *)pTVar11 == 0) || (*(int *)pTVar10 == 0)) {
        *(int *)pTVar11 = iStack_78;
        *(int *)pTVar10 = local_7c;
      }
      this_00 = (RenderingContext *)RenderingContext::CurrentContext();
      RenderingContext::BindTexture(this_00,(Texture *)0x0);
      *(undefined8 *)(this + 0x4c) = 0;
      *(undefined8 *)(this + 0x5c) = 0;
      *(float *)(this + 0x54) = (float)iStack_78 / *(float *)(this + 0x6c);
      *(float *)(this + 0x58) = (float)local_7c / *(float *)(this + 0x6c);
      *(float *)(this + 100) = (float)iStack_78 / (float)*(int *)(this + 0x3c);
      *(float *)(this + 0x68) = (float)local_7c / (float)*(int *)(this + 0x40);
      if ((local_74 == 0) ||
         (lVar7 = RenderingContext::CurrentContext(), *(char *)(lVar7 + 100) == '\0')) {
        uVar13 = 0x2601;
      }
      else {
        uVar13 = 0x2701;
      }
      glTexParameteri(0xde1,0x2801,uVar13);
      glTexParameteri(0xde1,0x2800,0x2601);
      *(undefined4 *)(this + 0x48) = local_6c;
      glBindTexture(0xde1,0);
    }
    plVar2 = *(long **)(this + 0x80);
    for (plVar1 = *(long **)(this + 0x78); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar7 = *plVar1;
      lVar9 = *(long *)(lVar7 + 0x70);
      *(undefined8 *)(lVar7 + 0x98) = *(undefined8 *)(lVar9 + 0x98);
                    /* try { // try from 005cacb0 to 006cacb3 has its CatchHandler @ 005cb198 */
      *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(lVar9 + 0x38);
                    /* try { // try from 005cacb4 to 006cad8f has its CatchHandler @ 005cab34 */
      *(undefined4 *)(lVar7 + 0x44) = *(undefined4 *)(lVar9 + 0x44);
      uVar13 = *(undefined8 *)(lVar9 + 0x3c);
      *(undefined8 *)(lVar7 + 0x3c) = uVar13;
      if (((int)uVar13 != 0) && ((int)((ulong)uVar13 >> 0x20) != 0)) {
        fVar15 = *(float *)(lVar7 + 0x6c);
        uVar13 = NEON_scvtf(uVar13,4);
        fVar14 = (float)((ulong)uVar13 >> 0x20);
        *(ulong *)(lVar7 + 0x5c) =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar7 + 0x4c) >> 0x20) * fVar15) / fVar14,
                      ((float)*(undefined8 *)(lVar7 + 0x4c) * fVar15) / (float)uVar13);
        *(ulong *)(lVar7 + 100) =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar7 + 0x54) >> 0x20) * fVar15) / fVar14,
                      ((float)*(undefined8 *)(lVar7 + 0x54) * fVar15) / (float)uVar13);
      }
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      }
    }
    puVar8 = *(undefined8 **)(this + 0x18);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,this);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
LAB_005cad64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


