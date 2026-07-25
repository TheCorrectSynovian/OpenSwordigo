/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005043EC
 * Mangled: _Z20PVRTModelPODCopyNodeRK8SPODNodeRS_i
 * Demangled: PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *
 * Callers: 1
 *   0x00000000001F4050  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 136
 *   insn=0x0000000000504400 string=0x0000000000504404 "h"
 *   insn=0x0000000000504410 string=0x0000000000504414 "h\n@"
 *   insn=0x0000000000504418 string=0x000000000050441C "h"
 *   insn=0x0000000000504420 string=0x0000000000504424 "v"
 *   insn=0x0000000000504424 string=0x0000000000504428 "v"
 *   insn=0x0000000000504428 string=0x0000000000504474 "hb@9a"
 *   insn=0x0000000000504440 string=0x00000000001F6770 "0'"
 *   insn=0x0000000000504448 string=0x000000000050444C "W"
 *   insn=0x000000000050444C string=0x0000000000504450 "v"
 *   insn=0x000000000050445C string=0x0000000000504460 "t"
 *   insn=0x0000000000504474 string=0x0000000000504478 "a"
 *   insn=0x000000000050447C string=0x00000000005044AC "!"
 *   insn=0x0000000000504484 string=0x000000000050451C "a"
 *   insn=0x00000000005044A0 string=0x00000000005044A4 "a"
 *   insn=0x00000000005044A4 string=0x00000000005044A8 "\n"
 *   insn=0x00000000005044AC string=0x00000000005044B0 "U"
 *   insn=0x00000000005044B8 string=0x00000000005044BC "("
 *   insn=0x00000000005044BC string=0x0000000000504780 "\tq}"
 *   insn=0x00000000005044C8 string=0x00000000005047C0 ""
 *   insn=0x00000000005044D4 string=0x00000000005044D8 "a"
 *   insn=0x00000000005044D8 string=0x00000000005044DC "A"
 *   insn=0x00000000005044DC string=0x0000000000504524 "hb@9a"
 *   insn=0x00000000005044F4 string=0x00000000005044F8 "a"
 *   insn=0x0000000000504524 string=0x0000000000504528 "a"
 *   insn=0x000000000050452C string=0x000000000050455C "!"
 *   insn=0x0000000000504534 string=0x00000000005045CC "a"
 *   insn=0x0000000000504550 string=0x0000000000504554 "a"
 *   insn=0x0000000000504554 string=0x0000000000504558 "\n"
 *   insn=0x0000000000504568 string=0x000000000050456C ""
 *   insn=0x000000000050456C string=0x00000000005047EC "\tq}"
 *   insn=0x0000000000504578 string=0x000000000050482C ""
 *   insn=0x0000000000504580 string=0x0000000000504584 "w"
 *   insn=0x0000000000504584 string=0x0000000000504588 "a"
 *   insn=0x0000000000504588 string=0x000000000050458C "A"
 *   insn=0x000000000050458C string=0x00000000005045D4 "hb@9a"@"
 *   insn=0x0000000000504598 string=0x000000000050459C "u"
 *   insn=0x00000000005045A4 string=0x00000000005045A8 "a"
 *   insn=0x00000000005045B4 string=0x00000000005045B8 "j"
 *   insn=0x00000000005045D4 string=0x00000000005045D8 "a"@"
 *   insn=0x00000000005045DC string=0x000000000050460C "!"
 *   insn=0x00000000005045E4 string=0x0000000000504680 "a&@"
 *   insn=0x00000000005045F4 string=0x00000000005045F8 "^"
 *   insn=0x0000000000504600 string=0x0000000000504604 "a"@"
 *   insn=0x0000000000504604 string=0x0000000000504608 "\n"
 *   insn=0x000000000050461C string=0x0000000000504858 "\tq}"
 *   insn=0x0000000000504628 string=0x0000000000504898 ""
 *   insn=0x0000000000504630 string=0x0000000000504634 "K"
 *   insn=0x0000000000504634 string=0x0000000000504638 "a&@"
 *   insn=0x0000000000504638 string=0x000000000050463C "a"
 *   insn=0x000000000050463C string=0x0000000000504688 "hb@9a*@"
 *   insn=0x0000000000504648 string=0x000000000050464C "I"
 *   insn=0x0000000000504654 string=0x0000000000504658 "a&@"
 *   insn=0x0000000000504664 string=0x0000000000504668 ">"
 *   insn=0x0000000000504668 string=0x000000000050466C ""
 *   insn=0x0000000000504670 string=0x0000000000504674 ""
 *   insn=0x0000000000504678 string=0x000000000050467C "a"
 *   insn=0x0000000000504688 string=0x000000000050468C "a*@"
 *   insn=0x0000000000504694 string=0x0000000000504698 "!"
 *   insn=0x0000000000504698 string=0x000000000050473C "a.@"
 *   insn=0x00000000005046A8 string=0x00000000005046AC "1"
 *   insn=0x00000000005046B0 string=0x00000000005046B4 "@"
 *   insn=0x00000000005046B4 string=0x00000000005046B8 "a*@"
 *   insn=0x00000000005046B8 string=0x00000000005046BC "\n"
 *   insn=0x00000000005046C0 string=0x00000000005046C4 "u"
 *   insn=0x00000000005046D0 string=0x00000000005048C4 "\tq}"
 *   insn=0x00000000005046DC string=0x0000000000504904 ""
 *   insn=0x00000000005046E8 string=0x00000000005046EC "a.@"
 *   insn=0x0000000000504708 string=0x000000000050470C "a.@"
 *   insn=0x0000000000504728 string=0x000000000050472C ""
 *   insn=0x0000000000504734 string=0x0000000000504738 "!"
 *   insn=0x0000000000504758 string=0x000000000050475C " "
 *   insn=0x000000000050475C string=0x00000000005047DC "H"
 *   insn=0x0000000000504760 string=0x0000000000504764 "9"
 *   insn=0x0000000000504764 string=0x0000000000504848 "H"
 *   insn=0x0000000000504768 string=0x000000000050476C "R"
 *   insn=0x000000000050476C string=0x00000000005048B4 "H"
 *   insn=0x0000000000504774 string=0x0000000000504778 "!"
 *   insn=0x0000000000504780 string=0x0000000000504784 "*@"
 *   insn=0x0000000000504790 string=0x0000000000504794 "B"
 *   insn=0x0000000000504794 string=0x0000000000504798 "k!"
 *   insn=0x0000000000504798 string=0x000000000050479C "J"
 *   insn=0x00000000005047A0 string=0x00000000005047A4 "!d"
 *   insn=0x00000000005047A4 string=0x00000000005047A8 "a"
 *   insn=0x00000000005047B0 string=0x00000000005047B4 "?"
 *   insn=0x00000000005047B4 string=0x00000000005047B8 "\n"
 *   insn=0x00000000005047C0 string=0x00000000005047C4 ")\t"
 *   insn=0x00000000005047C4 string=0x00000000005047C8 "+E@"
 *   insn=0x00000000005047C8 string=0x00000000005047CC "_"
 *   insn=0x00000000005047CC string=0x00000000005047D0 "j1"
 *   insn=0x00000000005047D0 string=0x00000000005047D4 ""
 *   insn=0x00000000005047E0 string=0x00000000005047E4 "!"
 *   insn=0x00000000005047E4 string=0x00000000005047E8 "M"
 *   insn=0x00000000005047EC string=0x00000000005047F0 "*@"
 *   insn=0x00000000005047FC string=0x0000000000504800 "B"
 *   insn=0x0000000000504800 string=0x0000000000504804 "k!"
 *   insn=0x0000000000504804 string=0x0000000000504808 "J"
 *   insn=0x000000000050480C string=0x0000000000504810 "!d"
 *   insn=0x0000000000504810 string=0x0000000000504814 "a"
 *   insn=0x000000000050481C string=0x0000000000504820 "?"
 *   insn=0x0000000000504820 string=0x0000000000504824 "\n"
 *   insn=0x000000000050482C string=0x0000000000504830 ")\t"
 *   insn=0x0000000000504830 string=0x0000000000504834 "+E@"
 *   insn=0x0000000000504834 string=0x0000000000504838 "_"
 *   insn=0x0000000000504838 string=0x000000000050483C "j1"
 *   insn=0x000000000050483C string=0x0000000000504840 ""
 *   insn=0x000000000050484C string=0x0000000000504850 "A"
 *   insn=0x0000000000504850 string=0x0000000000504854 "^"
 *   insn=0x0000000000504858 string=0x000000000050485C "*@"
 *   insn=0x0000000000504868 string=0x000000000050486C "B"
 *   insn=0x000000000050486C string=0x0000000000504870 "k!"
 *   insn=0x0000000000504870 string=0x0000000000504874 "J"
 *   insn=0x0000000000504878 string=0x000000000050487C "!d"
 *   insn=0x000000000050487C string=0x0000000000504880 "a"
 *   insn=0x0000000000504888 string=0x000000000050488C "?"
 *   insn=0x000000000050488C string=0x0000000000504890 "\n"
 *   insn=0x0000000000504898 string=0x000000000050489C ")\t"
 *   insn=0x000000000050489C string=0x00000000005048A0 "+E@"
 *   insn=0x00000000005048A0 string=0x00000000005048A4 "_"
 *   insn=0x00000000005048A4 string=0x00000000005048A8 "j1"
 *   insn=0x00000000005048A8 string=0x00000000005048AC ""
 *   insn=0x00000000005048B8 string=0x00000000005048BC "a"
 *   insn=0x00000000005048BC string=0x00000000005048C0 "p"
 *   insn=0x00000000005048C4 string=0x00000000005048C8 "*@"
 *   insn=0x00000000005048D4 string=0x00000000005048D8 "B"
 *   insn=0x00000000005048D8 string=0x00000000005048DC "k!"
 *   insn=0x00000000005048DC string=0x00000000005048E0 "J"
 *   insn=0x00000000005048E4 string=0x00000000005048E8 "!d"
 *   insn=0x00000000005048E8 string=0x00000000005048EC "a"
 *   insn=0x00000000005048F4 string=0x00000000005048F8 "?"
 *   insn=0x00000000005048F8 string=0x00000000005048FC "\n"
 *   insn=0x0000000000504900 string=0x0000000000504920 "HA"
 *   insn=0x0000000000504904 string=0x0000000000504908 ")\t"
 *   insn=0x0000000000504908 string=0x000000000050490C "+E@"
 *   insn=0x000000000050490C string=0x0000000000504910 "_"
 *   insn=0x0000000000504910 string=0x0000000000504914 "j1"
 *   insn=0x0000000000504914 string=0x0000000000504918 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char **__fastcall PVRTModelPODCopyNode(const char **result, __int64 a2, unsigned int a3)
{
  const char **v3; // x19
  const char *v6; // x22
  size_t v7; // x0
  const char **v8; // x23
  size_t v9; // x0
  uint32x4_t *v10; // x1
  size_t v11; // x22
  __int64 v12; // x9
  unsigned int v13; // w10
  const char *v14; // x1
  uint32x4_t *v15; // x1
  size_t v16; // x22
  __int64 v17; // x9
  unsigned int v18; // w10
  const char *v19; // x1
  uint32x4_t *v20; // x1
  size_t v21; // x22
  __int64 v22; // x9
  unsigned int v23; // w10
  const char *v24; // x1
  uint32x4_t *v25; // x1
  size_t v26; // x22
  __int64 v27; // x9
  unsigned int v28; // w10
  const char *v29; // x1
  uint32x4_t *v30; // x10
  uint32x4_t v31; // q0
  __int64 v32; // x11
  uint32x4_t v33; // q1
  uint32x4_t v34; // q2
  uint32x4_t v35; // q3
  __int64 v36; // x8
  unsigned int *v37; // x9
  unsigned int v38; // w11
  unsigned int v39; // t1
  uint32x4_t *v40; // x10
  uint32x4_t v41; // q0
  __int64 v42; // x11
  uint32x4_t v43; // q1
  uint32x4_t v44; // q2
  uint32x4_t v45; // q3
  __int64 v46; // x8
  unsigned int *v47; // x9
  unsigned int v48; // w11
  unsigned int v49; // t1
  uint32x4_t *v50; // x10
  uint32x4_t v51; // q0
  __int64 v52; // x11
  uint32x4_t v53; // q1
  uint32x4_t v54; // q2
  uint32x4_t v55; // q3
  __int64 v56; // x8
  unsigned int *v57; // x9
  unsigned int v58; // w11
  unsigned int v59; // t1
  uint32x4_t *v60; // x10
  uint32x4_t v61; // q0
  __int64 v62; // x11
  uint32x4_t v63; // q1
  uint32x4_t v64; // q2
  uint32x4_t v65; // q3
  __int64 v66; // x8
  unsigned int *v67; // x9
  unsigned int v68; // w11
  unsigned int v69; // t1

  v3 = result;
  *(_DWORD *)a2 = *(_DWORD *)result;
  *(_QWORD *)(a2 + 16) = result[2];
  *(_DWORD *)(a2 + 24) = *((_DWORD *)result + 6);
  v6 = result[1];
  if ( v6 )
  {
    v7 = strlen(result[1]) + 1;
    if ( v7 )
    {
      result = (const char **)calloc(v7, 1u);
      v8 = result;
      *(_QWORD *)(a2 + 8) = result;
      if ( !result )
        goto LABEL_7;
      v6 = v3[1];
    }
    else
    {
      v8 = *(const char ***)(a2 + 8);
    }
    v9 = strlen(v6);
    result = (const char **)memcpy(v8, v6, v9 + 1);
  }
LABEL_7:
  v10 = (uint32x4_t *)v3[4];
  if ( ((_BYTE)v3[3] & 1) != 0 )
  {
    if ( !v10 )
    {
      v11 = 4LL * (int)(3 * a3);
      goto LABEL_24;
    }
    if ( a3 )
    {
      if ( a3 <= 7 )
      {
        v12 = 0;
        v13 = 0;
        goto LABEL_87;
      }
      v12 = a3 & 0xFFFFFFF8;
      v30 = v10 + 1;
      v31 = 0u;
      v32 = v12;
      v33 = 0u;
      do
      {
        v34 = v30[-1];
        v35 = *v30;
        v32 -= 8;
        v30 += 2;
        v31 = vmaxq_u32(v31, v34);
        v33 = vmaxq_u32(v33, v35);
      }
      while ( v32 );
      v13 = vmaxvq_u32(vmaxq_u32(v31, v33));
      if ( v12 != a3 )
      {
LABEL_87:
        v36 = a3 - v12;
        v37 = (unsigned int *)v10 + v12;
        do
        {
          v39 = *v37++;
          v38 = v39;
          if ( v13 < v39 )
            v13 = v38;
          --v36;
        }
        while ( v36 );
      }
    }
    else
    {
      v13 = 0;
    }
    v11 = 4LL * (int)(v13 + 3);
    goto LABEL_9;
  }
  v11 = 12;
  if ( !v10 )
    goto LABEL_24;
LABEL_9:
  if ( a3 )
  {
    result = (const char **)calloc(4LL * (int)a3, 4u);
    *(_QWORD *)(a2 + 32) = result;
    if ( result )
    {
      v10 = (uint32x4_t *)v3[4];
      goto LABEL_17;
    }
LABEL_24:
    v14 = v3[5];
    if ( !v14 )
      goto LABEL_25;
    goto LABEL_18;
  }
  result = *(const char ***)(a2 + 32);
LABEL_17:
  result = (const char **)memcpy(result, v10, 4LL * (int)a3);
  v14 = v3[5];
  if ( !v14 )
    goto LABEL_25;
LABEL_18:
  if ( v11 )
  {
    result = (const char **)calloc(v11, 4u);
    *(_QWORD *)(a2 + 40) = result;
    if ( !result )
      goto LABEL_25;
    v14 = v3[5];
  }
  else
  {
    result = *(const char ***)(a2 + 40);
  }
  result = (const char **)memcpy(result, v14, v11);
LABEL_25:
  v15 = (uint32x4_t *)v3[6];
  if ( ((_BYTE)v3[3] & 2) != 0 )
  {
    if ( !v15 )
    {
      v16 = 4LL * (int)(4 * a3);
      goto LABEL_42;
    }
    if ( a3 )
    {
      if ( a3 <= 7 )
      {
        v17 = 0;
        v18 = 0;
        goto LABEL_95;
      }
      v17 = a3 & 0xFFFFFFF8;
      v40 = v15 + 1;
      v41 = 0u;
      v42 = v17;
      v43 = 0u;
      do
      {
        v44 = v40[-1];
        v45 = *v40;
        v42 -= 8;
        v40 += 2;
        v41 = vmaxq_u32(v41, v44);
        v43 = vmaxq_u32(v43, v45);
      }
      while ( v42 );
      v18 = vmaxvq_u32(vmaxq_u32(v41, v43));
      if ( v17 != a3 )
      {
LABEL_95:
        v46 = a3 - v17;
        v47 = (unsigned int *)v15 + v17;
        do
        {
          v49 = *v47++;
          v48 = v49;
          if ( v18 < v49 )
            v18 = v48;
          --v46;
        }
        while ( v46 );
      }
    }
    else
    {
      v18 = 0;
    }
    v16 = 4LL * (int)(v18 + 4);
    goto LABEL_27;
  }
  v16 = 16;
  if ( !v15 )
    goto LABEL_42;
LABEL_27:
  if ( a3 )
  {
    result = (const char **)calloc(4LL * (int)a3, 4u);
    *(_QWORD *)(a2 + 48) = result;
    if ( result )
    {
      v15 = (uint32x4_t *)v3[6];
      goto LABEL_35;
    }
LABEL_42:
    v19 = v3[7];
    if ( !v19 )
      goto LABEL_43;
    goto LABEL_36;
  }
  result = *(const char ***)(a2 + 48);
LABEL_35:
  result = (const char **)memcpy(result, v15, 4LL * (int)a3);
  v19 = v3[7];
  if ( !v19 )
    goto LABEL_43;
LABEL_36:
  if ( v16 )
  {
    result = (const char **)calloc(v16, 4u);
    *(_QWORD *)(a2 + 56) = result;
    if ( !result )
      goto LABEL_43;
    v19 = v3[7];
  }
  else
  {
    result = *(const char ***)(a2 + 56);
  }
  result = (const char **)memcpy(result, v19, v16);
LABEL_43:
  v20 = (uint32x4_t *)v3[8];
  if ( ((_BYTE)v3[3] & 4) != 0 )
  {
    if ( !v20 )
    {
      v21 = 4LL * (int)(7 * a3);
      goto LABEL_60;
    }
    if ( a3 )
    {
      if ( a3 <= 7 )
      {
        v22 = 0;
        v23 = 0;
        goto LABEL_103;
      }
      v22 = a3 & 0xFFFFFFF8;
      v50 = v20 + 1;
      v51 = 0u;
      v52 = v22;
      v53 = 0u;
      do
      {
        v54 = v50[-1];
        v55 = *v50;
        v52 -= 8;
        v50 += 2;
        v51 = vmaxq_u32(v51, v54);
        v53 = vmaxq_u32(v53, v55);
      }
      while ( v52 );
      v23 = vmaxvq_u32(vmaxq_u32(v51, v53));
      if ( v22 != a3 )
      {
LABEL_103:
        v56 = a3 - v22;
        v57 = (unsigned int *)v20 + v22;
        do
        {
          v59 = *v57++;
          v58 = v59;
          if ( v23 < v59 )
            v23 = v58;
          --v56;
        }
        while ( v56 );
      }
    }
    else
    {
      v23 = 0;
    }
    v21 = 4LL * (int)(v23 + 7);
    goto LABEL_45;
  }
  v21 = 28;
  if ( !v20 )
    goto LABEL_60;
LABEL_45:
  if ( a3 )
  {
    result = (const char **)calloc(4LL * (int)a3, 4u);
    *(_QWORD *)(a2 + 64) = result;
    if ( result )
    {
      v20 = (uint32x4_t *)v3[8];
      goto LABEL_53;
    }
LABEL_60:
    v24 = v3[9];
    if ( !v24 )
      goto LABEL_61;
    goto LABEL_54;
  }
  result = *(const char ***)(a2 + 64);
LABEL_53:
  result = (const char **)memcpy(result, v20, 4LL * (int)a3);
  v24 = v3[9];
  if ( !v24 )
    goto LABEL_61;
LABEL_54:
  if ( v21 )
  {
    result = (const char **)calloc(v21, 4u);
    *(_QWORD *)(a2 + 72) = result;
    if ( !result )
      goto LABEL_61;
    v24 = v3[9];
  }
  else
  {
    result = *(const char ***)(a2 + 72);
  }
  result = (const char **)memcpy(result, v24, v21);
LABEL_61:
  v25 = (uint32x4_t *)v3[10];
  if ( ((_BYTE)v3[3] & 8) != 0 )
  {
    if ( !v25 )
    {
      v26 = 4LL * (int)(16 * a3);
      goto LABEL_78;
    }
    if ( !a3 )
    {
      v26 = 64;
      goto LABEL_63;
    }
    if ( a3 > 7 )
    {
      v27 = a3 & 0xFFFFFFF8;
      v60 = v25 + 1;
      v61 = 0u;
      v62 = v27;
      v63 = 0u;
      do
      {
        v64 = v60[-1];
        v65 = *v60;
        v62 -= 8;
        v60 += 2;
        v61 = vmaxq_u32(v61, v64);
        v63 = vmaxq_u32(v63, v65);
      }
      while ( v62 );
      v28 = vmaxvq_u32(vmaxq_u32(v61, v63));
      if ( v27 == a3 )
      {
LABEL_115:
        v26 = 4LL * (int)(v28 + 16);
        goto LABEL_63;
      }
    }
    else
    {
      v27 = 0;
      v28 = 0;
    }
    v66 = a3 - v27;
    v67 = (unsigned int *)v25 + v27;
    do
    {
      v69 = *v67++;
      v68 = v69;
      if ( v28 < v69 )
        v28 = v68;
      --v66;
    }
    while ( v66 );
    goto LABEL_115;
  }
  v26 = 64;
  if ( !v25 )
    goto LABEL_78;
LABEL_63:
  if ( a3 )
  {
    result = (const char **)calloc(4LL * (int)a3, 4u);
    *(_QWORD *)(a2 + 80) = result;
    if ( result )
    {
      v25 = (uint32x4_t *)v3[10];
      goto LABEL_71;
    }
LABEL_78:
    v29 = v3[11];
    if ( !v29 )
      return result;
    goto LABEL_72;
  }
  result = *(const char ***)(a2 + 80);
LABEL_71:
  result = (const char **)memcpy(result, v25, 4LL * (int)a3);
  v29 = v3[11];
  if ( !v29 )
    return result;
LABEL_72:
  if ( !v26 )
  {
    result = *(const char ***)(a2 + 88);
    return (const char **)memcpy(result, v29, v26);
  }
  result = (const char **)calloc(v26, 4u);
  *(_QWORD *)(a2 + 88) = result;
  if ( result )
  {
    v29 = v3[11];
    return (const char **)memcpy(result, v29, v26);
  }
  return result;
}

