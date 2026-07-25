/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CBA08
 * Mangled: _ZN5Caver7Texture12InitWithDataEPKviiNS_11PixelFormatE
 * Demangled: Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Callers: 1
 *   0x00000000001F6980  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FB000  .glBindTexture
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC960  .glGetIntegerv
 *   0x00000000001FE690  .glTexImage2D
 *   0x0000000000201760  .memcpy
 *   0x00000000002030A0  .glTexParameteri
 *   0x0000000000203900  .glGenTextures
 *   0x00000000004CBF58  Caver::Texture::LoadFromParentTexture(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 128
 *   insn=0x00000000004CBA24 string=0x00000000004CBA28 "T"
 *   insn=0x00000000004CBA34 string=0x00000000004CBA38 " "
 *   insn=0x00000000004CBA50 string=0x00000000004CBA54 "!"
 *   insn=0x00000000004CBA50 string=0x00000000001FC960 "0'"
 *   insn=0x00000000004CBA60 string=0x00000000004CBA64 "!;@"
 *   insn=0x00000000004CBA64 string=0x00000000004CBA68 " "
 *   insn=0x00000000004CBA68 string=0x00000000004CBA6C "e"
 *   insn=0x00000000004CBA6C string=0x00000000004CBA70 " "
 *   insn=0x00000000004CBA6C string=0x00000000001FB000 "0'"
 *   insn=0x00000000004CBA70 string=0x00000000004CBA74 "!"
 *   insn=0x00000000004CBA74 string=0x00000000004CBA78 """
 *   insn=0x00000000004CBA7C string=0x00000000004CBA80 " "
 *   insn=0x00000000004CBA84 string=0x00000000004CBA88 """
 *   insn=0x00000000004CBAB0 string=0x00000000004CBAB4 "<G@"
 *   insn=0x00000000004CBAB4 string=0x00000000004CBAB8 "6"
 *   insn=0x00000000004CBAC4 string=0x00000000004CBAC8 "i"
 *   insn=0x00000000004CBAC8 string=0x00000000004CBACC "j"
 *   insn=0x00000000004CBACC string=0x00000000004CBAD0 "k"
 *   insn=0x00000000004CBACC string=0x0000000000597F20 ""
 *   insn=0x00000000004CBAD0 string=0x00000000004CBAD4 "}~"
 *   insn=0x00000000004CBAD4 string=0x00000000004CBAD8 ")"
 *   insn=0x00000000004CBAD8 string=0x00000000004CBADC "J"
 *   insn=0x00000000004CBADC string=0x00000000004CBAE0 "k"
 *   insn=0x00000000004CBAE0 string=0x00000000004CBAE4 "/ih"
 *   insn=0x00000000004CBAE4 string=0x00000000004CBAE8 "Zih"
 *   insn=0x00000000004CBAE8 string=0x00000000004CBAEC "gih"
 *   insn=0x00000000004CBAF8 string=0x00000000004CBAFC "y~"
 *   insn=0x00000000004CBB00 string=0x00000000004CBB04 "}@"
 *   insn=0x00000000004CBB18 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004CBB1C string=0x00000000004CBB20 " "
 *   insn=0x00000000004CBB20 string=0x00000000004CBBC4 "("
 *   insn=0x00000000004CBB2C string=0x00000000004CBBA4 ")"
 *   insn=0x00000000004CBB30 string=0x00000000004CBB34 "!"
 *   insn=0x00000000004CBB34 string=0x00000000004CBB38 ")"
 *   insn=0x00000000004CBB40 string=0x00000000004CBB44 "("
 *   insn=0x00000000004CBB4C string=0x00000000004CBC5C "jK)"
 *   insn=0x00000000004CBB50 string=0x00000000004CBB54 "K"
 *   insn=0x00000000004CBB7C string=0x00000000004CBB80 "#"
 *   insn=0x00000000004CBB80 string=0x00000000004CBB84 " "
 *   insn=0x00000000004CBBA8 string=0x00000000004CBBAC "("
 *   insn=0x00000000004CBBB8 string=0x00000000004CBC08 "jK)"
 *   insn=0x00000000004CBBC8 string=0x00000000004CBBCC "k"
 *   insn=0x00000000004CBBCC string=0x00000000004CBBD0 ""
 *   insn=0x00000000004CBBDC string=0x00000000004CBCB4 ")"
 *   insn=0x00000000004CBBF0 string=0x00000000004CBBF4 "E"
 *   insn=0x00000000004CBBF4 string=0x00000000004CBD08 "*"
 *   insn=0x00000000004CBC00 string=0x00000000004CBC04 "G"
 *   insn=0x00000000004CBC08 string=0x00000000004CBC0C "J"
 *   insn=0x00000000004CBC18 string=0x00000000004CBE68 ")"
 *   insn=0x00000000004CBC1C string=0x00000000004CBC20 ")"
 *   insn=0x00000000004CBC20 string=0x00000000004CBC24 "j"
 *   insn=0x00000000004CBC24 string=0x00000000004CBC28 "_"
 *   insn=0x00000000004CBC3C string=0x00000000004CBC40 ")"
 *   insn=0x00000000004CBC40 string=0x00000000004CBC44 "J"
 *   insn=0x00000000004CBC44 string=0x00000000004CBC48 "KE@8)"
 *   insn=0x00000000004CBC48 string=0x00000000004CBC4C ")"
 *   insn=0x00000000004CBC4C string=0x00000000004CBC50 ""
 *   insn=0x00000000004CBC54 string=0x00000000004CBC58 "1"
 *   insn=0x00000000004CBC5C string=0x00000000004CBC60 "J"
 *   insn=0x00000000004CBC70 string=0x00000000004CBC74 ")\t"
 *   insn=0x00000000004CBC74 string=0x00000000004CBC78 "?"
 *   insn=0x00000000004CBC78 string=0x00000000004CBC7C "\t"
 *   insn=0x00000000004CBC88 string=0x00000000004CBC8C ")"
 *   insn=0x00000000004CBC8C string=0x00000000004CBC90 "j"
 *   insn=0x00000000004CBC90 string=0x00000000004CBC94 ")"
 *   insn=0x00000000004CBC94 string=0x00000000004CBC98 "\n"
 *   insn=0x00000000004CBC98 string=0x00000000004CBC9C "j"
 *   insn=0x00000000004CBC9C string=0x00000000004CBCA0 "{"
 *   insn=0x00000000004CBCA0 string=0x00000000004CBCA4 "\n"
 *   insn=0x00000000004CBCA4 string=0x00000000004CBCA8 "\t"
 *   insn=0x00000000004CBCA8 string=0x00000000004CBCAC "!"
 *   insn=0x00000000004CBCAC string=0x00000000004CBCB0 ""
 *   insn=0x00000000004CBCB4 string=0x00000000004CBCB8 "?"
 *   insn=0x00000000004CBCBC string=0x00000000004CBCC0 "L"
 *   insn=0x00000000004CBCC0 string=0x00000000004CBCC4 "\n"
 *   insn=0x00000000004CBCCC string=0x00000000004CBCD0 "i\n"
 *   insn=0x00000000004CBCD0 string=0x00000000004CBCD4 "m"
 *   insn=0x00000000004CBCE8 string=0x00000000004CBCEC "k"
 *   insn=0x00000000004CBCEC string=0x00000000004CBCF0 "_"
 *   insn=0x00000000004CBD08 string=0x00000000004CBD0C "+E@8J"
 *   insn=0x00000000004CBD0C string=0x00000000004CBD10 "J"
 *   insn=0x00000000004CBD10 string=0x00000000004CBD14 ""
 *   insn=0x00000000004CBD2C string=0x00000000004CBDDC " "
 *   insn=0x00000000004CBD30 string=0x00000000004CBD34 "}"
 *   insn=0x00000000004CBD3C string=0x00000000004CBD40 "?"
 *   insn=0x00000000004CBD48 string=0x00000000004CBD4C " "
 *   insn=0x00000000004CBD50 string=0x00000000004CBD54 ""
 *   insn=0x00000000004CBD68 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004CBD8C string=0x00000000004CBD90 "t"
 *   insn=0x00000000004CBD90 string=0x00000000004CBD94 "{"
 *   insn=0x00000000004CBD98 string=0x00000000004CBD9C "Z"
 *   insn=0x00000000004CBD9C string=0x00000000004CBDA0 "!"
 *   insn=0x00000000004CBDA4 string=0x00000000004CBDA8 " "
 *   insn=0x00000000004CBDC0 string=0x00000000004CBDC4 "3"
 *   insn=0x00000000004CBDC8 string=0x00000000004CBDCC "e"
 *   insn=0x00000000004CBDCC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004CBDD4 string=0x00000000004CBDD8 "\n"
 *   insn=0x00000000004CBDF8 string=0x00000000004CBDFC "%"
 *   insn=0x00000000004CBE04 string=0x00000000004CBE08 "b"
 *   insn=0x00000000004CBE10 string=0x00000000004CBE14 "A"
 *   insn=0x00000000004CBE14 string=0x00000000004CBE18 "?"
 *   insn=0x00000000004CBE18 string=0x00000000004CBE1C " "
 *   insn=0x00000000004CBE20 string=0x00000000004CBE24 " "
 *   insn=0x00000000004CBE24 string=0x00000000004CBE28 "v"
 *   insn=0x00000000004CBE28 string=0x00000000004CBE2C "|"
 *   insn=0x00000000004CBE30 string=0x00000000004CBE34 "K"
 *   insn=0x00000000004CBE68 string=0x00000000004CBE6C "?"
 *   insn=0x00000000004CBE74 string=0x00000000004CBE78 "L"
 *   insn=0x00000000004CBE78 string=0x00000000004CBE7C "\t"
 *   insn=0x00000000004CBE84 string=0x00000000004CBE88 "j\t"
 *   insn=0x00000000004CBE88 string=0x00000000004CBE8C "m"
 *   insn=0x00000000004CBE9C string=0x00000000004CBEA0 "k"
 *   insn=0x00000000004CBEA0 string=0x00000000004CBEA4 "?"
 *   insn=0x00000000004CBEB0 string=0x00000000004CBEB4 "l"
 *   insn=0x00000000004CBEBC string=0x00000000004CBEC0 "*"
 *   insn=0x00000000004CBEC0 string=0x00000000004CBEC4 "\t"
 *   insn=0x00000000004CBEC4 string=0x00000000004CBEC8 "k"
 *   insn=0x00000000004CBECC string=0x00000000004CBED0 "{\t"
 *   insn=0x00000000004CBED8 string=0x00000000004CBEDC "n"
 *   insn=0x00000000004CBEDC string=0x00000000004CBEE0 "`"
 *   insn=0x00000000004CBEE8 string=0x00000000004CBEEC "k"
 *   insn=0x00000000004CBEEC string=0x00000000004CBEF0 "a"
 *   insn=0x00000000004CBF08 string=0x00000000004CBF0C "\n"
 *   insn=0x00000000004CBF14 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CBF24 string=0x00000000004CBF28 ""
 *   insn=0x00000000004CBF28 string=0x00000000004CBF2C "\t"
 *   insn=0x00000000004CBF40 string=0x00000000004CBF44 "h"
 *   insn=0x00000000004CBF50 string=0x00000000004CBF54 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::InitWithData(__int64 a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v10; // w23
  int v11; // w22
  bool v12; // cc
  int v13; // w8
  int v14; // w23
  int v15; // w28
  int v16; // w15
  int v17; // w25
  int v18; // w20
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x0
  __int64 v21; // x9
  _BYTE *v22; // x28
  __int64 v23; // x9
  __int64 v24; // x8
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x10
  _BYTE *v27; // x8
  char *v28; // x9
  __int64 v29; // x9
  _BYTE *v30; // x8
  _BYTE *v31; // x10
  int v32; // w9
  char *v33; // x10
  char v34; // t1
  __int64 v35; // x9
  _BYTE *v36; // x8
  int v37; // w9
  char v38; // w10
  __int64 v39; // x12
  __int64 v40; // x11
  const char *v41; // x13
  const char *v42; // x14
  unsigned __int128 v43; // q0
  unsigned __int128 v44; // q4
  unsigned __int128 *v45; // x14
  int v46; // w10
  char v47; // t1
  int v48; // w8
  size_t v49; // x25
  int v50; // w20
  unsigned __int64 v51; // x0
  char *v52; // x28
  size_t v53; // x25
  __int64 v54; // x24
  int v55; // w20
  char *v56; // x26
  __int64 v57; // x12
  __int64 v58; // x11
  const char *v59; // x13
  const char *v60; // x14
  unsigned __int128 v61; // q0
  unsigned __int128 v62; // q4
  unsigned __int128 *v63; // x14
  const char *v64; // x11
  char *v65; // x12
  __int64 v66; // x13
  const char *v67; // x14
  char *v68; // x14
  _BYTE *v69; // [xsp+18h] [xbp-78h]
  __int64 v70; // [xsp+28h] [xbp-68h]
  __int64 v71; // [xsp+28h] [xbp-68h]
  int8x16x4_t v72; // 0:q0.16,16:q1.16,32:q2.16,48:q3.16
  int8x16x4_t v73; // 0:q4.16,16:q5.16,32:q6.16,48:q7.16

  _ReadStatusReg(TPIDR_EL0);
  glGetIntegerv();
  v10 = 1;
  glGenTextures();
  glBindTexture();
  glTexParameteri();
  glTexParameteri();
  do
  {
    v11 = v10;
    v12 = v10 < a3;
    v10 *= 2;
  }
  while ( v12 );
  v13 = 1;
  do
  {
    v14 = v13;
    v12 = v13 < a4;
    v13 *= 2;
  }
  while ( v12 );
  v15 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 60) = v11;
  *(_DWORD *)(a1 + 64) = v14;
  if ( (unsigned int)(v15 - 1) > 7 )
  {
    v16 = 0;
    if ( v15 != a5 )
    {
LABEL_7:
      v70 = a1;
      v17 = a4 * a3;
      v18 = v16;
      if ( v16 * a4 * a3 < 0LL )
        v19 = -1;
      else
        v19 = v16 * v17;
      v20 = operator new[](v19);
      if ( v15 == 6 )
      {
        if ( v17 >= 1 )
        {
          v25 = (unsigned int)(v17 - 1) + 1LL;
          v22 = (_BYTE *)v20;
          if ( v25 >= 0x21 )
          {
            if ( (v17 & 0x1F) != 0 )
              v39 = v17 & 0x1F;
            else
              v39 = 32;
            v26 = v25 - v39;
            v40 = 0;
            v27 = (_BYTE *)(v20 + v25 - v39);
            v28 = &a2[4 * v26];
            v41 = a2 + 64;
            v16 = v18;
            do
            {
              v42 = v41 - 64;
              v43 = (unsigned __int128)vld4q_s8(v41);
              v44 = (unsigned __int128)vld4q_s8(v42);
              v45 = (unsigned __int128 *)(v20 + v40);
              v40 += 32;
              v41 += 128;
              *v45 = v44;
              v45[1] = v43;
            }
            while ( v26 != v40 );
            if ( !v39 )
              goto LABEL_48;
          }
          else
          {
            v16 = v18;
            LODWORD(v26) = 0;
            v27 = (_BYTE *)v20;
            v28 = a2;
          }
          v46 = v17 - v26;
          do
          {
            v47 = *v28;
            v28 += 4;
            --v46;
            *v27++ = v47;
          }
          while ( v46 );
LABEL_48:
          a1 = v70;
LABEL_49:
          a2 = v22;
          if ( v11 != a3 )
            goto LABEL_50;
          goto LABEL_18;
        }
        goto LABEL_26;
      }
      if ( v15 != 7 )
      {
        if ( v15 == 8 )
        {
          v21 = (unsigned int)(v17 - 1);
          v22 = (_BYTE *)v20;
          if ( v17 >= 1 )
          {
            if ( (unsigned __int64)(v21 + 1) >= 0x20 )
            {
              v16 = v18;
              if ( v20 >= (unsigned __int64)&a2[4 * (unsigned int)v21 + 4]
                || v20 + 2LL * (unsigned int)v21 + 2 <= (unsigned __int64)a2 )
              {
                v35 = v21 + 1 - (v17 & 0x1F);
                v64 = a2 + 64;
                v36 = (_BYTE *)(v20 + 2 * v35);
                a2 += 4 * v35;
                v65 = (char *)(v20 + 32);
                v66 = v35;
                do
                {
                  v67 = v64 - 64;
                  v72 = vld4q_s8(v64);
                  v73 = vld4q_s8(v67);
                  v68 = v65 - 32;
                  v64 += 128;
                  v72.val[1] = v72.val[3];
                  v73.val[1] = v73.val[3];
                  v66 -= 32;
                  vst2q_s8(v68, *(int8x16x2_t *)v73.val[0].n128_u64);
                  vst2q_s8(v65, *(int8x16x2_t *)v72.val[0].n128_u64);
                  v65 += 64;
                }
                while ( v66 );
                if ( (v17 & 0x1F) == 0 )
                  goto LABEL_48;
                goto LABEL_37;
              }
            }
            else
            {
              v16 = v18;
            }
            LODWORD(v35) = 0;
            v36 = (_BYTE *)v20;
LABEL_37:
            v37 = v17 - v35;
            do
            {
              --v37;
              *v36 = *a2;
              v38 = a2[3];
              a2 += 4;
              v36[1] = v38;
              v36 += 2;
            }
            while ( v37 );
            goto LABEL_48;
          }
LABEL_27:
          v16 = v18;
          a1 = v70;
          goto LABEL_49;
        }
LABEL_26:
        v22 = (_BYTE *)v20;
        goto LABEL_27;
      }
      v23 = (unsigned int)(v17 - 1);
      if ( v17 < 1 )
        goto LABEL_26;
      v24 = v23 + 1;
      v22 = (_BYTE *)v20;
      if ( (unsigned __int64)(v23 + 1) >= 0x21 )
      {
        v16 = v18;
        if ( v20 >= (unsigned __int64)&a2[4 * (unsigned int)v23 + 4] || (unsigned __int64)(a2 + 3) >= v20 + v23 + 1 )
        {
          if ( (v17 & 0x1F) != 0 )
            v57 = v17 & 0x1F;
          else
            v57 = 32;
          v29 = v24 - v57;
          v58 = 0;
          v30 = (_BYTE *)(v20 + v24 - v57);
          v31 = &a2[4 * v29];
          v59 = a2 + 67;
          do
          {
            v60 = v59 - 64;
            v61 = (unsigned __int128)vld4q_s8(v59);
            v62 = (unsigned __int128)vld4q_s8(v60);
            v63 = (unsigned __int128 *)(v20 + v58);
            v58 += 32;
            v59 += 128;
            *v63 = v62;
            v63[1] = v61;
          }
          while ( v29 != v58 );
          if ( !v57 )
            goto LABEL_48;
          goto LABEL_31;
        }
      }
      else
      {
        v16 = v18;
      }
      LODWORD(v29) = 0;
      v30 = (_BYTE *)v20;
      v31 = a2;
LABEL_31:
      v32 = v17 - v29;
      v33 = v31 + 3;
      do
      {
        v34 = *v33;
        v33 += 4;
        --v32;
        *v30++ = v34;
      }
      while ( v32 );
      goto LABEL_48;
    }
  }
  else
  {
    v16 = dword_597F00[v15 - 1];
    if ( v15 != a5 )
      goto LABEL_7;
  }
  v22 = 0;
  if ( v11 != a3 )
    goto LABEL_50;
LABEL_18:
  if ( v14 == a4 )
    goto LABEL_58;
LABEL_50:
  if ( !a2 )
  {
LABEL_58:
    glTexImage2D();
    goto LABEL_59;
  }
  v48 = v14 * v11 * v16;
  v71 = a1;
  v49 = v48;
  v69 = v22;
  v50 = v16;
  if ( v48 < 0LL )
    v51 = -1;
  else
    v51 = v48;
  v52 = (char *)operator new[](v51);
  memset(v52, 0, v49);
  if ( a4 >= 1 )
  {
    v53 = v50 * (__int64)a3;
    v54 = v50 * (__int64)v11;
    v55 = a4;
    v56 = v52;
    do
    {
      memcpy(v56, a2, v53);
      a2 += v53;
      --v55;
      v56 += v54;
    }
    while ( v55 );
  }
  glTexImage2D();
  operator delete[](v52);
  a1 = v71;
  v22 = v69;
LABEL_59:
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(float *)(a1 + 100) = (float)a3 / (float)v11;
  *(float *)(a1 + 104) = (float)a4 / (float)v14;
  glBindTexture();
  if ( v22 )
    operator delete[](v22);
}

