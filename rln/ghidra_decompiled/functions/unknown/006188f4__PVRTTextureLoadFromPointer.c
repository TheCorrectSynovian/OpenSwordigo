/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006188f4
 * Function: PVRTTextureLoadFromPointer
 * Signature: undefined __cdecl PVRTTextureLoadFromPointer(void * param_1, uint * param_2, void * param_3, bool param_4, uint param_5, void * param_6, int * param_7, int * param_8)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureLoadFromPointer(void const*, unsigned int*, void const*, bool, unsigned int, void
   const*, int*, int*) */

void PVRTTextureLoadFromPointer
               (void *param_1,uint *param_2,void *param_3,bool param_4,uint param_5,void *param_6,
               int *param_7,int *param_8)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  void *__s;
  uchar *__ptr;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  void *pvVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  size_t __n;
  void *__src;
  int iVar22;
  uint uVar23;
  void *__dest;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint local_dc;
  uint local_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00618934 to 0071895b has its CatchHandler @ 0061906c */
  if (*(int *)param_1 != 0x34) {
    if (*(int *)param_1 == 0x2c) {
      PVRTErrorOutputDebug
                (
                "PVRTTextureLoadFromPointer warning: this is an old pvr - you can use PVRTexTool to update its header.\n"
                );
      goto LAB_0061897c;
    }
    pcVar11 = "PVRTTextureLoadFromPointer failed: not a valid pvr.\n";
    goto LAB_00618bbc;
  }
  uVar13 = *(uint *)((long)param_1 + 0x30);
  if (uVar13 == 0) {
LAB_0061897c:
                    /* try { // try from 0061897c to 0071897f has its CatchHandler @ 00618e7c */
    uVar13 = 6;
                    /* try { // try from 00618980 to 00718b57 has its CatchHandler @ 00617f1c */
    if ((*(byte *)((long)param_1 + 0x11) & 0x10) == 0) {
      uVar13 = 1;
    }
  }
  uVar9 = CPVRTglesExt::IsGLExtensionSupported("GL_IMG_texture_compression_pvrtc");
  uVar10 = CPVRTglesExt::IsGLExtensionSupported("GL_IMG_texture_format_BGRA8888");
  *param_2 = 0;
  uVar21 = *(uint *)((long)param_1 + 0x10);
  if (((uVar21 >> 9 & 1) != 0) && ((uVar21 & 0xfe) != 0x18)) {
    pcVar11 = "PVRTTextureLoadFromPointer failed: texture should be untwiddled.\n";
    goto LAB_00618bbc;
  }
  bVar5 = false;
  bVar6 = false;
  uVar19 = 0x8034;
  uVar20 = 0x1908;
  switch(uVar21 & 0xff) {
  case 0xc:
  case 0x18:
    if ((uVar9 & 1) != 0) {
      iVar7 = *(int *)((long)param_1 + 0x28);
      uVar17 = 0x8c03;
      uVar19 = 0x8c01;
LAB_00618a3c:
      uVar20 = 0x1907;
      bVar5 = true;
      if (iVar7 != 0) {
        uVar19 = uVar17;
      }
      bVar6 = true;
      break;
    }
                    /* catch() { ... } // from try @ 00618550 with catch @ 00618b34 */
    if (param_4) {
      pcVar11 = 
      "PVRTTextureLoadFromPointer warning: PVRTC2 not supported. Converting to RGBA8888 instead.\n";
LAB_00618b50:
      PVRTErrorOutputDebug(pcVar11);
      bVar6 = false;
                    /* try { // try from 00618b58 to 00718e17 has its CatchHandler @ 006190fc */
      uVar19 = 0x1401;
      uVar20 = 0x1908;
      bVar5 = true;
      break;
    }
    pcVar11 = "PVRTTextureLoadFromPointer error: PVRTC2 not supported.\n";
    goto LAB_00618bbc;
  case 0xd:
  case 0x19:
    if ((uVar9 & 1) != 0) {
      iVar7 = *(int *)((long)param_1 + 0x28);
      uVar17 = 0x8c02;
      uVar19 = 0x8c00;
      goto LAB_00618a3c;
    }
    if (param_4) {
      pcVar11 = 
      "PVRTTextureLoadFromPointer warning: PVRTC4 not supported. Converting to RGBA8888 instead.\n";
      goto LAB_00618b50;
    }
    pcVar11 = "PVRTTextureLoadFromPointer error: PVRTC4 not supported.\n";
    goto LAB_00618bbc;
  default:
    pcVar11 = "PVRTTextureLoadFromPointer failed: pixel type not supported.\n";
    goto LAB_00618bbc;
  case 0x10:
    PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_4_4_4_4.\n")
    ;
    uVar19 = 0x8033;
    goto LAB_00618af4;
  case 0x11:
    break;
  case 0x12:
    PVRTErrorOutputDebug
              ("PVRTTextureLoadFromPointer: textureFormat = OGL_RGBA_8888, size = %d x %d.\n",
               (ulong)*(uint *)((long)param_1 + 8),(ulong)*(uint *)((long)param_1 + 4));
    uVar19 = 0x1401;
LAB_00618af4:
    bVar6 = false;
    bVar5 = false;
    uVar20 = 0x1908;
    break;
  case 0x13:
    PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_5_6_5.\n");
    bVar5 = false;
    bVar6 = false;
    uVar19 = 0x8363;
    uVar20 = 0x1907;
    break;
  case 0x14:
    pcVar11 = "PVRTTextureLoadFromPointer failed: pixel type OGL_RGB_555 not supported.\n";
    goto LAB_00618bbc;
  case 0x15:
    bVar5 = false;
    bVar6 = false;
    uVar19 = 0x1401;
    uVar20 = 0x1907;
    break;
  case 0x16:
    bVar5 = false;
    bVar6 = false;
    uVar19 = 0x1401;
    uVar20 = 0x1909;
    break;
  case 0x17:
    bVar5 = false;
    bVar6 = false;
    uVar19 = 0x1401;
    uVar20 = 0x190a;
    break;
  case 0x1a:
    if ((uVar10 & 1) != 0) {
      bVar5 = false;
      bVar6 = false;
      uVar19 = 0x1401;
                    /* catch() { ... } // from try @ 006188ec with catch @ 00618b2c */
      uVar20 = 0x80e1;
                    /* catch() { ... } // from try @ 006186f0 with catch @ 00618b30 */
      break;
    }
    pcVar11 = 
    "PVRTTextureLoadFromPointer failed: Unable to load GL_BGRA texture as extension GL_IMG_texture_format_BGRA8888 is unsupported.\n"
    ;
    goto LAB_00618bbc;
  case 0x36:
    PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_ETC1_RGB8_OES.\n");
    uVar19 = 0x8d64;
    uVar20 = 0x1907;
    bVar5 = true;
    bVar6 = true;
  }
  glPixelStorei(0xcf5,1);
                    /* catch() { ... } // from try @ 006188c4 with catch @ 00618b84 */
  glGenTextures(1,&local_7c);
  if ((*(byte *)((long)param_1 + 0x11) >> 4 & 1) == 0) {
    glBindTexture(0xde1,local_7c);
    iVar7 = glGetError();
    uVar17 = DAT_0069ba10;
    if (iVar7 == 0) {
      if (*(int *)((long)param_1 + 0xc) == 0) {
                    /* catch() { ... } // from try @ 00618820 with catch @ 00618c34 */
        glTexParameterf(DAT_0069ba10,0xde1,0x2801);
                    /* catch() { ... } // from try @ 006187f0 with catch @ 00618c4c */
      }
      else {
        glTexParameterf(DAT_0069ba0c,0xde1,0x2801);
        uVar17 = DAT_0069ba10;
      }
      glTexParameterf(uVar17,0xde1,0x2800);
      local_dc = 0;
      do {
        pvVar16 = param_6;
        if (param_6 == (void *)0x0) {
                    /* catch() { ... } // from try @ 006187dc with catch @ 00618c84 */
                    /* catch() { ... } // from try @ 006187b4 with catch @ 00618c88 */
          pvVar16 = (void *)((long)param_1 + (ulong)*(uint *)param_1);
        }
        if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
          iVar7 = 0;
LAB_00618cb0:
          uVar21 = 0;
          pvVar16 = (void *)((long)pvVar16 + (ulong)(*(int *)((long)param_1 + 0x14) * local_dc));
          uVar24 = *(uint *)((long)param_1 + 4);
          uVar23 = *(uint *)((long)param_1 + 8);
          iVar22 = 0;
          do {
            if (bVar5) {
              cVar2 = *(char *)((long)param_1 + 0x10);
              if (cVar2 == '\x19') {
                uVar21 = 8;
                uVar18 = 8;
                    /* catch() { ... } // from try @ 006183fc with catch @ 00618dec */
              }
              else {
                    /* catch() { ... } // from try @ 0061873c with catch @ 00618ce4 */
                if (cVar2 == '\x18') {
                  uVar18 = 8;
                  uVar21 = 0x10;
                }
                else {
                  uVar21 = 4;
                  uVar18 = 4;
                }
              }
              uVar14 = uVar23;
              if (uVar23 <= uVar21) {
                uVar14 = uVar21;
              }
              uVar21 = uVar24;
              if (uVar24 <= uVar18) {
                uVar21 = uVar18;
              }
                    /* try { // try from 00618e18 to 00718e4f has its CatchHandler @ 00617f1c */
                    /* catch() { ... } // from try @ 006183d4 with catch @ 00618e1c */
                    /* catch() { ... } // from try @ 0061835c with catch @ 00618e20 */
              iVar8 = iVar22 - param_5;
              uVar21 = *(int *)((long)param_1 + 0x18) * uVar14 * uVar21 + 7 >> 3;
              if (-1 < iVar8) {
                    /* catch() { ... } // from try @ 00618070 with catch @ 00618e2c */
                if (bVar6) {
                    /* try { // try from 00618e50 to 00718e77 has its CatchHandler @ 006190fc */
                  glCompressedTexImage2D(0xde1,iVar8,uVar19,uVar23,uVar24,0,uVar21,pvVar16);
                }
                else {
                    /* catch() { ... } // from try @ 00618250 with catch @ 00618f3c */
                  __ptr = malloc((ulong)(uVar23 * uVar24 * 4));
                    /* try { // try from 00618f6c to 0071908f has its CatchHandler @ 00617f1c */
                  PVRTDecompressPVRTC(pvVar16,(uint)(cVar2 == '\x18'),uVar23,uVar24,__ptr);
                    /* catch() { ... } // from try @ 006181c4 with catch @ 00618f78 */
                  glTexImage2D(0xde1,iVar8,0x1908,uVar23,uVar24,0,0x1908,0x1401,__ptr);
                  if (__ptr != (uchar *)0x0) {
                    free(__ptr);
                  }
                }
              }
LAB_00618fc0:
              iVar8 = glGetError();
            }
            else {
              iVar8 = iVar22 - param_5;
              if (iVar8 < 0) goto LAB_00618fc0;
              uVar18 = 1;
              do {
                uVar14 = uVar18;
                uVar18 = uVar14 << 1;
              } while ((int)uVar14 < (int)uVar23);
              uVar18 = 1;
              do {
                uVar15 = uVar18;
                uVar18 = uVar15 << 1;
              } while ((int)uVar15 < (int)uVar24);
              uVar18 = *(uint *)((long)param_1 + 0x18) >> 3;
                    /* catch() { ... } // from try @ 0061871c with catch @ 00618d40 */
                    /* catch() { ... } // from try @ 006186c8 with catch @ 00618d44 */
              PVRTErrorOutputDebug
                        ("%d x %d -> %d x %d (%d)",(ulong)uVar23,(ulong)uVar24,(ulong)uVar14,
                         (ulong)uVar15,uVar18);
              if ((uVar23 == uVar14) && (uVar24 == uVar15)) {
                glTexImage2D(0xde1,iVar8,uVar20,uVar23,uVar24,0,uVar20,uVar19,pvVar16);
                iVar8 = glGetError();
                    /* catch() { ... } // from try @ 0061867c with catch @ 00618d94 */
              }
              else {
                if (param_7 != (int *)0x0) {
                  *param_7 = uVar14;
                }
                    /* try { // try from 00618e78 to 00718f0f has its CatchHandler @ 00617f1c */
                    /* catch() { ... } // from try @ 006187d4 with catch @ 00618e7c
                       catch() { ... } // from try @ 0061897c with catch @ 00618e7c */
                    /* catch() { ... } // from try @ 006183e8 with catch @ 00618e80
                       catch() { ... } // from try @ 0061842c with catch @ 00618e80 */
                if (param_8 != (int *)0x0) {
                  *param_8 = uVar15;
                }
                __n = (size_t)(int)(uVar15 * uVar14 * uVar18);
                uVar9 = __n;
                if ((long)__n < 0) {
                  uVar9 = 0xffffffffffffffff;
                }
                __s = operator_new__(uVar9);
                memset(__s,0,__n);
                if (0 < (int)uVar24) {
                  __src = pvVar16;
                  __dest = __s;
                  uVar3 = uVar24;
                  do {
                    memcpy(__dest,__src,(long)(int)uVar18 * (long)(int)uVar23);
                    __src = (void *)((long)__src + (long)(int)uVar18 * (long)(int)uVar23);
                    uVar3 = uVar3 - 1;
                    __dest = (void *)((long)__dest + (long)(int)uVar18 * (long)(int)uVar14);
                  } while (uVar3 != 0);
                }
                    /* catch() { ... } // from try @ 006182bc with catch @ 00618eec */
                    /* try { // try from 00618f10 to 00718f6b has its CatchHandler @ 006190fc */
                glTexImage2D(0xde1,iVar8,uVar20,uVar14,uVar15,0,uVar20,uVar19,__s);
                operator_delete__(__s);
                iVar8 = glGetError();
              }
            }
            if (iVar8 != 0) {
              PVRTErrorOutputDebug("PVRTTextureLoadFromPointer failed: glTexImage2D() failed.\n");
              goto LAB_00618bc0;
            }
            uVar18 = uVar21;
                    /* catch() { ... } // from try @ 00618488 with catch @ 00618d9c */
            if (!bVar5) {
              uVar18 = uVar24 * uVar23 * *(int *)((long)param_1 + 0x18) + 7 >> 3;
            }
                    /* catch() { ... } // from try @ 006184e8 with catch @ 00618d98 */
            uVar14 = uVar23 >> 1;
            uVar15 = uVar24 >> 1;
            if (uVar23 < 4) {
              uVar14 = 1;
            }
            if (uVar24 < 4) {
              uVar15 = 1;
            }
            pvVar16 = (void *)((long)pvVar16 + (ulong)uVar18);
            bVar1 = iVar22 < iVar7;
            uVar24 = uVar15;
            uVar23 = uVar14;
            iVar22 = iVar22 + 1;
          } while (bVar1);
        }
        else {
          iVar7 = *(int *)((long)param_1 + 0xc);
          if (-1 < iVar7) goto LAB_00618cb0;
        }
        local_dc = local_dc + 1;
                    /* catch() { ... } // from try @ 006181b0 with catch @ 00618fe8 */
                    /* catch() { ... } // from try @ 00617fa0 with catch @ 00618fec */
      } while (local_dc < uVar13);
      uVar12 = 0;
      *param_2 = local_7c;
      if (param_3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00618778 with catch @ 00619000 */
        uVar25 = *(undefined8 *)((long)param_1 + 0x1c);
        *(undefined8 *)((long)param_3 + 0x24) = *(undefined8 *)((long)param_1 + 0x24);
        *(undefined8 *)((long)param_3 + 0x1c) = uVar25;
        uVar25 = *(undefined8 *)((long)param_1 + 0x10);
        *(undefined8 *)((long)param_3 + 0x18) = *(undefined8 *)((long)param_1 + 0x18);
        *(undefined8 *)((long)param_3 + 0x10) = uVar25;
        uVar26 = *(undefined8 *)((long)param_1 + 8);
        uVar25 = *(undefined8 *)param_1;
        *(undefined4 *)((long)param_3 + 0x2c) = 0x21525650;
        *(undefined8 *)((long)param_3 + 8) = uVar26;
        *(undefined8 *)param_3 = uVar25;
        *(uint *)((long)param_3 + 0x30) = uVar13;
      }
      goto LAB_00618bc4;
    }
    pcVar11 = "PVRTTextureLoadFromPointer failed: glBindTexture() failed.\n";
  }
  else {
    pcVar11 = 
    "PVRTTextureLoadFromPointer failed: cube map textures are not available in OGLES1.x.\n";
  }
LAB_00618bbc:
  PVRTErrorOutputDebug(pcVar11);
LAB_00618bc0:
  uVar12 = 1;
LAB_00618bc4:
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00618898 with catch @ 00618bd4 */
                    /* catch() { ... } // from try @ 00618838 with catch @ 00618be4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


