/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004457D4
 * Mangled: _ZN5Caver4Mesh21CreateInterleavedDataEiii
 * Demangled: Caver::Mesh::CreateInterleavedData(int,int,int)
 *
 * Callers: 1
 *   0x00000000001F6250  Caver::Mesh::CreateInterleavedData(int,int,int)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *   0x0000000000200D20  Caver::Mesh::AllocateBuffers(int)
 *
 * Referenced strings: 40
 *   insn=0x00000000004457EC string=0x00000000004457F0 "U"
 *   insn=0x00000000004457F8 string=0x00000000004457FC "i"
 *   insn=0x00000000004457FC string=0x0000000000445800 "j"
 *   insn=0x0000000000445804 string=0x0000000000445808 "a\n"
 *   insn=0x000000000044580C string=0x0000000000445810 "hB"
 *   insn=0x000000000044581C string=0x0000000000445820 "i*@"
 *   insn=0x000000000044581C string=0x0000000000445838 "hb"
 *   insn=0x0000000000445828 string=0x0000000000445848 "-\n"
 *   insn=0x0000000000445830 string=0x0000000000445834 """
 *   insn=0x0000000000445840 string=0x0000000000445844 ","
 *   insn=0x0000000000445850 string=0x0000000000445854 "\n"
 *   insn=0x0000000000445860 string=0x0000000000445864 " NK"
 *   insn=0x0000000000445864 string=0x0000000000445868 "K"
 *   insn=0x0000000000445874 string=0x0000000000445878 "."
 *   insn=0x000000000044587C string=0x0000000000445880 "/<"
 *   insn=0x000000000044589C string=0x00000000004458A0 "!"
 *   insn=0x00000000004458AC string=0x00000000004458B0 "A"
 *   insn=0x00000000004458B0 string=0x00000000004458B4 "_"
 *   insn=0x00000000004458B4 string=0x00000000004458B8 "@"
 *   insn=0x00000000004458C8 string=0x00000000004458CC "I%"
 *   insn=0x00000000004458CC string=0x00000000004458D0 "i"
 *   insn=0x00000000004458D4 string=0x00000000004458D8 ")a"
 *   insn=0x00000000004458E0 string=0x00000000004458E4 "hb"
 *   insn=0x00000000004458E8 string=0x00000000004458EC "("
 *   insn=0x00000000004458F0 string=0x0000000000445970 "`\n@"
 *   insn=0x00000000004458FC string=0x0000000000445900 "("
 *   insn=0x0000000000445904 string=0x0000000000445908 "_"
 *   insn=0x000000000044590C string=0x0000000000445910 "i"
 *   insn=0x0000000000445914 string=0x0000000000445918 ")"
 *   insn=0x0000000000445918 string=0x000000000044591C "\t\t"
 *   insn=0x000000000044591C string=0x0000000000445920 ","
 *   insn=0x0000000000445920 string=0x00000000001FB1D0 "0'"
 *   insn=0x0000000000445928 string=0x000000000044592C "9#"
 *   insn=0x0000000000445938 string=0x000000000044593C "("
 *   insn=0x0000000000445940 string=0x0000000000445944 "_"
 *   insn=0x0000000000445958 string=0x000000000044595C "|"
 *   insn=0x0000000000445964 string=0x0000000000445968 "9#"
 *   insn=0x0000000000445974 string=0x0000000000445978 "`"
 *   insn=0x0000000000445998 string=0x00000000004459B8 "F"
 *   insn=0x00000000004459B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Mesh::CreateInterleavedData(Caver::Mesh *this, int a2, int a3, int a4)
{
  __int64 v5; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x11
  int v10; // w23
  int64x2_t v11; // q1
  int64x2_t v12; // q2
  int64x2_t v13; // q0
  int64x2_t *v14; // x12
  int64x2_t v15; // q3
  unsigned __int64 v16; // x13
  int64x2_t v17; // q4
  int64x2_t v18; // q4
  __int64 v19; // x12
  unsigned __int64 *v20; // x11
  unsigned __int64 v21; // x9
  int v22; // w22
  __int64 v23; // x24
  _QWORD *v24; // x25
  int v25; // w26
  __int64 v26; // x23
  _QWORD *v27; // x25
  __int64 v28; // x8
  int v29; // w26
  _QWORD v31[4]; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v32[3]; // [xsp+28h] [xbp-58h] BYREF

  v32[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  v31[0] = (char *)this + 32;
  v31[1] = (char *)this + 56;
  v5 = *((int *)this + 80);
  if ( (int)v5 > 0 )
  {
    v7 = *((_QWORD *)this + 10);
    if ( (unsigned int)v5 >= 4 )
    {
      v11 = (int64x2_t)xmmword_58B480;
      v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = vdupq_n_s64(0x30u);
      v13 = vdupq_n_s64(v7);
      v9 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v14 = (int64x2_t *)v32;
      v15 = vdupq_n_s64(4u);
      v16 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      do
      {
        v17.n128_u64[0] = 24 * v11.n128_u64[0];
        v17.n128_u64[1] = 24 * v11.n128_u64[1];
        v18 = vaddq_s64(v13, v17);
        v11 = vaddq_s64(v11, v15);
        v16 -= 4LL;
        v14[-1] = v18;
        *v14 = vaddq_s64(v18, v12);
        v14 += 2;
      }
      while ( v16 );
      if ( v8 == v5 )
      {
LABEL_10:
        v10 = v5 + 2;
        v31[(int)v5 + 2] = (char *)this + 88;
        if ( (int)v5 + 2 < 0 )
          goto LABEL_19;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = 0;
      v9 = 2;
    }
    v19 = v5 - v8;
    v20 = &v31[v9];
    v21 = v7 + 24 * v8;
    do
    {
      *v20++ = v21;
      --v19;
      v21 += 24LL;
    }
    while ( v19 );
    goto LABEL_10;
  }
  v31[2] = (char *)this + 88;
  v10 = 2;
LABEL_11:
  v22 = 0;
  v23 = (unsigned int)(v10 + 1);
  v24 = v31;
  do
  {
    v25 = *(_DWORD *)(*v24 + 4LL);
    if ( v25 >= 1 )
    {
      *(_QWORD *)(*v24 + 16LL) = *((_QWORD *)this + 34) + v22;
      v22 += Caver::SizeOfDataType() * v25;
    }
    --v23;
    ++v24;
  }
  while ( v23 );
  v26 = (unsigned int)(v10 + 1);
  v27 = v31;
  do
  {
    v28 = *v27;
    v29 = *(_DWORD *)(*v27 + 4LL);
    if ( v29 >= 1 )
    {
      *(_DWORD *)(v28 + 8) = v22;
      *(_QWORD *)(v28 + 16) = v23;
      v23 += (int)(Caver::SizeOfDataType() * v29);
    }
    --v26;
    ++v27;
  }
  while ( v26 );
LABEL_19:
  *((_DWORD *)this + 4) = Caver::SizeOfDataType();
  *((_QWORD *)this + 3) = 0;
  return Caver::Mesh::AllocateBuffers(this, a4);
}

