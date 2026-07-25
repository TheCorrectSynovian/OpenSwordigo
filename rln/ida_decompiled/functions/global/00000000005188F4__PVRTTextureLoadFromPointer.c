/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005188F4
 * Mangled: _Z26PVRTTextureLoadFromPointerPKvPjS0_bjS0_PiS2_
 * Demangled: PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callers: 1
 *   0x00000000001F3DE0  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 17
 *   0x00000000001F4160  PVRTErrorOutputDebug(char const*,...)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F59F0  .glTexParameterf
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6750  .glGetError
 *   0x00000000001F7B30  .glCompressedTexImage2D
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F89E0  .free
 *   0x00000000001F9230  PVRTDecompressPVRTC(void const*,int,int,int,uchar *)
 *   0x00000000001FADE0  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *   0x00000000001FB000  .glBindTexture
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC830  .glPixelStorei
 *   0x00000000001FE690  .glTexImage2D
 *   0x0000000000201760  .memcpy
 *   0x0000000000203900  .glGenTextures
 *
 * Referenced strings: 154
 *   insn=0x0000000000518914 string=0x0000000000518918 "T"
 *   insn=0x0000000000518954 string=0x000000000059BAC0 "PVRTTextureLoadFromPointer warning: this is an old pvr - you can use PVRTexTool to update its header.\n"
 *   insn=0x0000000000518960 string=0x00000000001F4160 "P'"
 *   insn=0x000000000051896C string=0x0000000000518970 "h"
 *   insn=0x0000000000518988 string=0x000000000051898C ""
 *   insn=0x0000000000518994 string=0x000000000059BB5C "GL_IMG_texture_compression_pvrtc"
 *   insn=0x000000000051899C string=0x00000000001FADE0 "0'"
 *   insn=0x00000000005189A4 string=0x00000000005189AC ""
 *   insn=0x00000000005189A4 string=0x000000000059BB7D "GL_IMG_texture_format_BGRA8888"
 *   insn=0x00000000005189BC string=0x00000000005189C0 "\t"
 *   insn=0x00000000005189BC string=0x00000000005189D8 ""
 *   insn=0x00000000005189C0 string=0x00000000005189C4 "?a"
 *   insn=0x00000000005189CC string=0x00000000005189D4 "z"
 *   insn=0x00000000005189CC string=0x000000000059BB9C "PVRTTextureLoadFromPointer failed: texture should be untwiddled.\n"
 *   insn=0x00000000005189D4 string=0x0000000000518BBC "im"
 *   insn=0x00000000005189D8 string=0x00000000005189DC "1"
 *   insn=0x00000000005189E0 string=0x00000000005189E4 "("
 *   insn=0x00000000005189E4 string=0x00000000005189E8 "\t"
 *   insn=0x00000000005189E8 string=0x00000000005189F0 "(y"
 *   insn=0x00000000005189FC string=0x0000000000518A00 ""
 *   insn=0x0000000000518A00 string=0x0000000000518A04 "!"
 *   insn=0x0000000000518A08 string=0x0000000000518A0C "U\t"
 *   insn=0x0000000000518A08 string=0x0000000000518B1C "@)"
 *   insn=0x0000000000518A10 string=0x0000000000518A14 "i"
 *   insn=0x0000000000518A14 string=0x0000000000518A18 "*"
 *   insn=0x0000000000518A18 string=0x0000000000518A1C ""
 *   insn=0x0000000000518A20 string=0x0000000000518A28 "e"
 *   insn=0x0000000000518A20 string=0x000000000059BB27 "PVRTTextureLoadFromPointer failed: not a valid pvr.\n"
 *   insn=0x0000000000518A30 string=0x0000000000518A34 "I"
 *   insn=0x0000000000518A34 string=0x0000000000518A38 "\n"
 *   insn=0x0000000000518A44 string=0x0000000000518A48 "J"
 *   insn=0x0000000000518A4C string=0x0000000000518A50 "E"
 *   insn=0x0000000000518A54 string=0x000000000059BC72 "PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_5_6_5.\n"
 *   insn=0x0000000000518A64 string=0x0000000000518A68 "jl"
 *   insn=0x0000000000518A6C string=0x0000000000518A70 "="
 *   insn=0x0000000000518A78 string=0x0000000000518A7C "*"
 *   insn=0x0000000000518A80 string=0x0000000000518A84 "8"
 *   insn=0x0000000000518A8C string=0x0000000000518A90 "*"
 *   insn=0x0000000000518A90 string=0x0000000000518A94 "-!"
 *   insn=0x0000000000518A94 string=0x0000000000518A98 "3"
 *   insn=0x0000000000518A9C string=0x000000000059BE2A "PVRTTextureLoadFromPointer: textureFormat = GL_ETC1_RGB8_OES.\n"
 *   insn=0x0000000000518AB4 string=0x0000000000518AB8 "+"
 *   insn=0x0000000000518ABC string=0x000000000059BBDE "PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_4_4_4_4.\n"
 *   insn=0x0000000000518ACC string=0x0000000000518AD0 "j"
 *   insn=0x0000000000518AD0 string=0x0000000000518AD4 ""
 *   insn=0x0000000000518AD4 string=0x0000000000518AF4 "!"
 *   insn=0x0000000000518ADC string=0x000000000059BC26 "PVRTTextureLoadFromPointer: textureFormat = OGL_RGBA_8888, size = %d x %d.\n"
 *   insn=0x0000000000518AEC string=0x0000000000518AF0 "*"
 *   insn=0x0000000000518AF4 string=0x0000000000518AF8 ""
 *   insn=0x0000000000518AFC string=0x0000000000518B04 "."
 *   insn=0x0000000000518AFC string=0x000000000059BCB8 "PVRTTextureLoadFromPointer failed: pixel type OGL_RGB_555 not supported.\n"
 *   insn=0x0000000000518B0C string=0x0000000000518B10 "*"
 *   insn=0x0000000000518B10 string=0x0000000000518B14 "M!"
 *   insn=0x0000000000518B24 string=0x0000000000518B28 "*"
 *   insn=0x0000000000518B28 string=0x0000000000518B2C "-"
 *   insn=0x0000000000518B2C string=0x0000000000518B30 ""
 *   insn=0x0000000000518B38 string=0x000000000059BD02 "PVRTTextureLoadFromPointer warning: PVRTC2 not supported. Converting to RGBA8888 instead.\n"
 *   insn=0x0000000000518B48 string=0x000000000059BD96 "PVRTTextureLoadFromPointer warning: PVRTC4 not supported. Converting to RGBA8888 instead.\n"
 *   insn=0x0000000000518B54 string=0x0000000000518B58 "*"
 *   insn=0x0000000000518B58 string=0x0000000000518B5C "!"
 *   insn=0x0000000000518B74 string=0x0000000000518B78 "."
 *   insn=0x0000000000518B78 string=0x00000000001FC830 "0'"
 *   insn=0x0000000000518B80 string=0x0000000000518B84 "_"
 *   insn=0x0000000000518B88 string=0x0000000000518B8C ""
 *   insn=0x0000000000518B8C string=0x0000000000518B90 "("
 *   insn=0x0000000000518B94 string=0x0000000000518B98 " "
 *   insn=0x0000000000518B9C string=0x00000000001FB000 "0'"
 *   insn=0x0000000000518BA0 string=0x00000000001F6750 "0'"
 *   insn=0x0000000000518BA8 string=0x000000000059BF7B "PVRTTextureLoadFromPointer failed: glBindTexture() failed.\n"
 *   insn=0x0000000000518BB4 string=0x000000000059BF26 "PVRTTextureLoadFromPointer failed: cube map textures are not available in OGLES1.x.\n"
 *   insn=0x0000000000518BFC string=0x0000000000518C00 ""
 *   insn=0x0000000000518BFC string=0x0000000000518C34 ""
 *   insn=0x0000000000518C04 string=0x0000000000518C08 " "
 *   insn=0x0000000000518C08 string=0x0000000000518C0C "!"
 *   insn=0x0000000000518C0C string=0x0000000000518C10 "xs"
 *   insn=0x0000000000518C10 string=0x0000000000518C14 ""
 *   insn=0x0000000000518C10 string=0x00000000001F59F0 "P'"
 *   insn=0x0000000000518C18 string=0x0000000000518C1C " "
 *   insn=0x0000000000518C20 string=0x0000000000518C24 ""
 *   insn=0x0000000000518C24 string=0x0000000000518C58 "fs"
 *   insn=0x0000000000518C28 string=0x000000000059BEE8 "PVRTTextureLoadFromPointer failed: pixel type not supported.\n"
 *   insn=0x0000000000518C34 string=0x0000000000518C38 ""
 *   insn=0x0000000000518C38 string=0x0000000000518C3C " "
 *   insn=0x0000000000518C3C string=0x0000000000518C40 "!"
 *   insn=0x0000000000518C44 string=0x0000000000518C48 "js"
 *   insn=0x0000000000518C48 string=0x0000000000518C4C " "
 *   insn=0x0000000000518C7C string=0x0000000000518C80 "y"
 *   insn=0x0000000000518CBC string=0x0000000000518CC0 ")}\n"
 *   insn=0x0000000000518CC8 string=0x0000000000518CCC "y"
 *   insn=0x0000000000518CDC string=0x0000000000518CE0 " "
 *   insn=0x0000000000518CE4 string=0x0000000000518CE8 "A"
 *   insn=0x0000000000518CF0 string=0x0000000000518CF4 "A"
 *   insn=0x0000000000518CF8 string=0x0000000000518CFC "$"
 *   insn=0x0000000000518D04 string=0x0000000000518D08 "_"
 *   insn=0x0000000000518D08 string=0x0000000000518D0C "H{"
 *   insn=0x0000000000518D18 string=0x0000000000518D1C "?"
 *   insn=0x0000000000518D1C string=0x0000000000518D20 "({"
 *   insn=0x0000000000518D2C string=0x000000000059BFB7 "%d x %d -> %d x %d (%d)"
 *   insn=0x0000000000518D58 string=0x0000000000518D5C "a"
 *   insn=0x0000000000518D64 string=0x0000000000518D68 " "
 *   insn=0x0000000000518D80 string=0x0000000000518D84 "C"
 *   insn=0x0000000000518D8C string=0x0000000000518D90 "pv"
 *   insn=0x0000000000518DA0 string=0x0000000000518DA4 "i"
 *   insn=0x0000000000518DA8 string=0x0000000000518DAC "()}"
 *   insn=0x0000000000518DAC string=0x0000000000518DB0 "}"
 *   insn=0x0000000000518DB8 string=0x0000000000518DBC "j"
 *   insn=0x0000000000518DBC string=0x0000000000518DC0 "7"
 *   insn=0x0000000000518DC8 string=0x0000000000518DCC "["
 *   insn=0x0000000000518DD0 string=0x0000000000518DD4 "sB("
 *   insn=0x0000000000518DDC string=0x0000000000518DE0 "{"
 *   insn=0x0000000000518E04 string=0x0000000000518E08 "i"
 *   insn=0x0000000000518E08 string=0x0000000000518E0C "H}"
 *   insn=0x0000000000518E10 string=0x0000000000518E14 ")\t"
 *   insn=0x0000000000518E34 string=0x0000000000518E38 " "
 *   insn=0x0000000000518E50 string=0x0000000000518E54 "7{"
 *   insn=0x0000000000518E54 string=0x0000000000518E58 "W"
 *   insn=0x0000000000518E54 string=0x00000000001F7B30 "0'"
 *   insn=0x0000000000518E60 string=0x0000000000518E64 "U"
 *   insn=0x0000000000518E68 string=0x0000000000518E6C "H"
 *   insn=0x0000000000518E7C string=0x0000000000518E80 "H"
 *   insn=0x0000000000518E80 string=0x0000000000518E88 "("
 *   insn=0x0000000000518E88 string=0x0000000000518E8C "}"
 *   insn=0x0000000000518E9C string=0x00000000001F8570 "0'"
 *   insn=0x0000000000518EA8 string=0x0000000000518EAC "e"
 *   insn=0x0000000000518EAC string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000518ED4 string=0x0000000000518ED8 """
 *   insn=0x0000000000518EE4 string=0x0000000000518EE8 "!"
 *   insn=0x0000000000518EF8 string=0x0000000000518EFC " "
 *   insn=0x0000000000518F1C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000518F2C string=0x0000000000518F30 "v"
 *   insn=0x0000000000518F30 string=0x0000000000518F34 " "
 *   insn=0x0000000000518F34 string=0x0000000000518F38 ">"
 *   insn=0x0000000000518F44 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000518F74 string=0x0000000000518F78 " "
 *   insn=0x0000000000518F74 string=0x00000000001F9230 "0'"
 *   insn=0x0000000000518F80 string=0x0000000000518F84 "'"
 *   insn=0x0000000000518FA0 string=0x0000000000518FA4 "x"
 *   insn=0x0000000000518FAC string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000518FD8 string=0x0000000000518FDC ")"
 *   insn=0x0000000000518FE0 string=0x0000000000518FE4 "?"
 *   insn=0x0000000000518FF4 string=0x0000000000518FF8 "h"
 *   insn=0x0000000000518FF8 string=0x0000000000518FFC "I"
 *   insn=0x0000000000519000 string=0x0000000000519004 ""
 *   insn=0x0000000000519004 string=0x000000000051900C " "
 *   insn=0x0000000000519010 string=0x0000000000519014 " "
 *   insn=0x0000000000519018 string=0x000000000051901C "(-"
 *   insn=0x0000000000519020 string=0x0000000000519024 " "
 *   insn=0x0000000000519024 string=0x0000000000519028 "(1"
 *   insn=0x0000000000519030 string=0x0000000000519038 "Jl"
 *   insn=0x0000000000519030 string=0x000000000059BFCF "PVRTTextureLoadFromPointer failed: glTexImage2D() failed.\n"
 *   insn=0x0000000000519044 string=0x000000000059BE69 "PVRTTextureLoadFromPointer failed: Unable to load GL_BGRA texture as extension GL_IMG_texture_format_BGRA8888 is unsupported.\n"
 *   insn=0x0000000000519050 string=0x000000000059BD5D "PVRTTextureLoadFromPointer error: PVRTC2 not supported.\n"
 *   insn=0x000000000051905C string=0x000000000059BDF1 "PVRTTextureLoadFromPointer error: PVRTC4 not supported.\n"
 *   insn=0x0000000000519068 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTextureLoadFromPointer(
        _DWORD *a1,
        const char *a2,
        _OWORD *a3,
        char a4,
        int a5,
        char *a6,
        int *a7,
        int *a8)
{
  unsigned int *v8; // x28
  int v15; // w8
  char *v16; // x22
  char IsGLExtensionSupported; // w21
  const char *v18; // x1
  char v19; // w0
  const char *v20; // x0
  int v21; // w11
  int v22; // w12
  const char *v23; // x0
  __int64 result; // x0
  char *v25; // x8
  int v26; // w25
  signed int v27; // w24
  unsigned int v28; // w23
  int v29; // w27
  unsigned int v30; // w20
  signed int v31; // w22
  char *v32; // x19
  int v33; // w20
  unsigned int v34; // w9
  unsigned int v35; // w8
  int v36; // w8
  int v37; // w26
  bool v38; // cc
  int v39; // w8
  int v40; // w25
  signed int v41; // w24
  unsigned int v42; // w8
  unsigned int v43; // w10
  signed int v44; // w21
  int v45; // w28
  int v46; // w22
  unsigned int v47; // w26
  int v48; // w8
  size_t v49; // x20
  unsigned __int64 v50; // x0
  size_t v51; // x21
  __int64 v52; // x22
  char *v53; // x24
  int v54; // w28
  char *v55; // x20
  unsigned __int8 *v56; // x24
  int v57; // w1
  char *v58; // x0
  __int128 v59; // q0
  char *v60; // [xsp+8h] [xbp-E8h]
  char *v61; // [xsp+10h] [xbp-E0h]
  int v62; // [xsp+24h] [xbp-CCh]
  int *v63; // [xsp+28h] [xbp-C8h]
  int *v64; // [xsp+30h] [xbp-C0h]
  unsigned int v65; // [xsp+3Ch] [xbp-B4h]
  signed int v66; // [xsp+40h] [xbp-B0h]
  int v67; // [xsp+44h] [xbp-ACh]
  char *v68; // [xsp+48h] [xbp-A8h]
  unsigned int v69; // [xsp+54h] [xbp-9Ch]
  signed int v70; // [xsp+58h] [xbp-98h]
  int v71; // [xsp+5Ch] [xbp-94h]
  _OWORD *v72; // [xsp+60h] [xbp-90h]
  int v73; // [xsp+6Ch] [xbp-84h]
  unsigned int *v74; // [xsp+70h] [xbp-80h]
  unsigned __int8 *v75; // [xsp+78h] [xbp-78h]
  int v76; // [xsp+84h] [xbp-6Ch]

  _ReadStatusReg(TPIDR_EL0);
  v8 = a1;
  if ( *a1 == 52 )
  {
    v15 = a1[12];
    v72 = a3;
    if ( v15 )
    {
      v16 = (char *)(a1 + 4);
LABEL_9:
      v69 = v15;
      IsGLExtensionSupported = CPVRTglesExt::IsGLExtensionSupported(
                                 (CPVRTglesExt *)"GL_IMG_texture_compression_pvrtc",
                                 a2);
      v19 = CPVRTglesExt::IsGLExtensionSupported((CPVRTglesExt *)"GL_IMG_texture_format_BGRA8888", v18);
      *(_DWORD *)a2 = 0;
      v75 = (unsigned __int8 *)v16;
      if ( (*(_DWORD *)v16 & 0x200) != 0 && (*(_DWORD *)v16 & 0xFE) != 0x18 )
      {
        v20 = "PVRTTextureLoadFromPointer failed: texture should be untwiddled.\n";
        goto LABEL_38;
      }
      v21 = 0;
      v22 = 0;
      switch ( (unsigned __int8)*(_DWORD *)v16 )
      {
        case 0xCu:
        case 0x18u:
          if ( (IsGLExtensionSupported & 1) != 0 )
            goto LABEL_17;
          if ( (a4 & 1) != 0 )
          {
            v23 = "PVRTTextureLoadFromPointer warning: PVRTC2 not supported. Converting to RGBA8888 instead.\n";
            goto LABEL_33;
          }
          v20 = "PVRTTextureLoadFromPointer error: PVRTC2 not supported.\n";
          goto LABEL_38;
        case 0xDu:
        case 0x19u:
          if ( (IsGLExtensionSupported & 1) != 0 )
          {
LABEL_17:
            v21 = 1;
            v22 = 1;
            goto LABEL_34;
          }
          if ( (a4 & 1) == 0 )
          {
            v20 = "PVRTTextureLoadFromPointer error: PVRTC4 not supported.\n";
            goto LABEL_38;
          }
          v23 = "PVRTTextureLoadFromPointer warning: PVRTC4 not supported. Converting to RGBA8888 instead.\n";
LABEL_33:
          PVRTErrorOutputDebug(v23);
          v22 = 0;
          v21 = 1;
          goto LABEL_34;
        case 0x10u:
          PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_4_4_4_4.\n");
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x11u:
          goto LABEL_34;
        case 0x12u:
          PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = OGL_RGBA_8888, size = %d x %d.\n");
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x13u:
          PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_UNSIGNED_SHORT_5_6_5.\n");
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x14u:
          v20 = "PVRTTextureLoadFromPointer failed: pixel type OGL_RGB_555 not supported.\n";
          goto LABEL_38;
        case 0x15u:
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x16u:
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x17u:
          v21 = 0;
          v22 = 0;
          goto LABEL_34;
        case 0x1Au:
          if ( (v19 & 1) == 0 )
          {
            v20 = "PVRTTextureLoadFromPointer failed: Unable to load GL_BGRA texture as extension GL_IMG_texture_format_B"
                  "GRA8888 is unsupported.\n";
            goto LABEL_38;
          }
          v21 = 0;
          v22 = 0;
LABEL_34:
          v73 = v22;
          v71 = v21;
          glPixelStorei();
          glGenTextures();
          if ( (v16[1] & 0x10) != 0 )
          {
            v20 = "PVRTTextureLoadFromPointer failed: cube map textures are not available in OGLES1.x.\n";
            goto LABEL_38;
          }
          glBindTexture();
          if ( (unsigned int)glGetError() )
          {
            v20 = "PVRTTextureLoadFromPointer failed: glBindTexture() failed.\n";
            goto LABEL_38;
          }
          glTexParameterf();
          glTexParameterf();
          v62 = 0;
          v61 = a6;
          v74 = v8;
          v63 = a7;
          v64 = a8;
          v67 = a5;
          v60 = (char *)a2;
          break;
        case 0x36u:
          PVRTErrorOutputDebug("PVRTTextureLoadFromPointer: textureFormat = GL_ETC1_RGB8_OES.\n");
          v21 = 1;
          v22 = 1;
          goto LABEL_34;
        default:
          v20 = "PVRTTextureLoadFromPointer failed: pixel type not supported.\n";
          goto LABEL_38;
      }
      while ( 1 )
      {
        v25 = a6;
        if ( !a6 )
          v25 = (char *)v8 + *v8;
        if ( (*((_BYTE *)v8 + 17) & 1) == 0 )
          break;
        v27 = v8[3];
        v26 = v71;
        if ( (v27 & 0x80000000) == 0 )
          goto LABEL_48;
LABEL_103:
        a6 = v61;
        if ( ++v62 >= v69 )
        {
          result = 0;
          *(_DWORD *)v60 = v76;
          if ( v72 )
          {
            *(_OWORD *)((char *)v72 + 28) = *(_OWORD *)(v8 + 7);
            v72[1] = *((_OWORD *)v8 + 1);
            v59 = *(_OWORD *)v8;
            *((_DWORD *)v72 + 11) = 559044176;
            *v72 = v59;
            *((_DWORD *)v72 + 12) = v69;
          }
          return result;
        }
      }
      v26 = v71;
      v27 = 0;
LABEL_48:
      v29 = v8[1];
      v28 = v8[2];
      v30 = 0;
      v31 = 0;
      v32 = &v25[v8[5] * v62];
      v70 = v27;
      while ( 1 )
      {
        if ( v26 )
        {
          v33 = *v75;
          if ( v33 == 25 )
          {
            v35 = 8;
            v34 = 8;
          }
          else if ( v33 == 24 )
          {
            v34 = 8;
            v35 = 16;
          }
          else
          {
            v35 = 4;
            v34 = 4;
          }
          v43 = v8[6];
          if ( v28 > v35 )
            v35 = v28;
          if ( v29 > v34 )
            v34 = v29;
          v44 = v31;
          v45 = a5;
          v46 = v31 - a5;
          v47 = (v43 * v35 * v34 + 7) >> 3;
          if ( v46 < 0 )
          {
            v31 = v44;
            v30 = (v43 * v35 * v34 + 7) >> 3;
          }
          else
          {
            if ( v73 )
            {
              v30 = (v43 * v35 * v34 + 7) >> 3;
              glCompressedTexImage2D();
            }
            else
            {
              v56 = (unsigned __int8 *)malloc(4 * v28 * v29);
              if ( v33 == 24 )
              {
                v57 = 1;
                v58 = v32;
              }
              else
              {
                v58 = v32;
                v57 = 0;
              }
              PVRTDecompressPVRTC(v58, v57, v28, v29, v56);
              glTexImage2D();
              v30 = v47;
              if ( v56 )
                free(v56);
              v27 = v70;
            }
            v31 = v44;
          }
          a5 = v45;
          v8 = v74;
        }
        else if ( v31 - a5 >= 0 )
        {
          v36 = 1;
          do
          {
            v37 = v36;
            v38 = v36 < (int)v28;
            v36 *= 2;
          }
          while ( v38 );
          v39 = 1;
          do
          {
            v40 = v39;
            v38 = v39 < v29;
            v39 *= 2;
          }
          while ( v38 );
          v41 = v8[6] >> 3;
          PVRTErrorOutputDebug("%d x %d -> %d x %d (%d)");
          if ( v28 == v37 && v29 == v40 )
          {
            glTexImage2D();
            a5 = v67;
            v27 = v70;
            v26 = v71;
            if ( (unsigned int)glGetError() )
              goto LABEL_106;
          }
          else
          {
            if ( v63 )
              *v63 = v37;
            v65 = v30;
            v66 = v31;
            if ( v64 )
              *v64 = v40;
            v48 = v40 * v37 * v41;
            v49 = v48;
            if ( v48 < 0LL )
              v50 = -1;
            else
              v50 = v48;
            v68 = (char *)operator new[](v50);
            memset(v68, 0, v49);
            if ( v29 >= 1 )
            {
              v51 = v41 * (__int64)(int)v28;
              v52 = v41 * (__int64)v37;
              v53 = v68;
              v54 = v29;
              v55 = v32;
              do
              {
                memcpy(v53, v55, v51);
                v55 += v51;
                --v54;
                v53 += v52;
              }
              while ( v54 );
            }
            glTexImage2D();
            operator delete[](v68);
            v8 = v74;
            v31 = v66;
            a5 = v67;
            v27 = v70;
            v26 = v71;
            v30 = v65;
            if ( (unsigned int)glGetError() )
            {
LABEL_106:
              PVRTErrorOutputDebug("PVRTTextureLoadFromPointer failed: glTexImage2D() failed.\n");
              return 1;
            }
          }
          goto LABEL_61;
        }
        if ( (unsigned int)glGetError() )
          goto LABEL_106;
LABEL_61:
        v42 = v30;
        if ( (v26 & 1) == 0 )
          v42 = (v29 * v28 * v8[6] + 7) >> 3;
        if ( v28 <= 3 )
          v28 = 1;
        else
          v28 >>= 1;
        if ( (unsigned int)v29 <= 3 )
          v29 = 1;
        else
          v29 = (unsigned int)v29 >> 1;
        v38 = v31 < v27;
        v32 += v42;
        ++v31;
        if ( !v38 )
          goto LABEL_103;
      }
    }
LABEL_6:
    v16 = (char *)(v8 + 4);
    if ( (*((_BYTE *)v8 + 17) & 0x10) != 0 )
      v15 = 6;
    else
      v15 = 1;
    goto LABEL_9;
  }
  if ( *a1 == 44 )
  {
    v72 = a3;
    PVRTErrorOutputDebug("PVRTTextureLoadFromPointer warning: this is an old pvr - you can use PVRTexTool to update its header.\n");
    goto LABEL_6;
  }
  v20 = "PVRTTextureLoadFromPointer failed: not a valid pvr.\n";
LABEL_38:
  PVRTErrorOutputDebug(v20);
  return 1;
}

