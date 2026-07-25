/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004459BC
 * Mangled: _ZN5Caver4Mesh15AllocateBuffersEi
 * Demangled: Caver::Mesh::AllocateBuffers(int)
 *
 * Callers: 1
 *   0x0000000000200D20  Caver::Mesh::AllocateBuffers(int)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *
 * Referenced strings: 65
 *   insn=0x00000000004459D8 string=0x00000000004459DC "U"
 *   insn=0x00000000004459EC string=0x00000000004459F0 "h"
 *   insn=0x00000000004459F8 string=0x00000000004459FC "i"
 *   insn=0x00000000004459FC string=0x0000000000445A00 "j"
 *   insn=0x0000000000445A04 string=0x0000000000445A08 "iB"
 *   insn=0x0000000000445A08 string=0x0000000000445A0C "?"
 *   insn=0x0000000000445A10 string=0x0000000000445A14 "j*@"
 *   insn=0x0000000000445A10 string=0x0000000000445A2C "ib"
 *   insn=0x0000000000445A14 string=0x0000000000445A18 "?"
 *   insn=0x0000000000445A1C string=0x0000000000445A3C ".\n"
 *   insn=0x0000000000445A24 string=0x0000000000445A28 """
 *   insn=0x0000000000445A34 string=0x0000000000445A38 ","
 *   insn=0x0000000000445A44 string=0x0000000000445A48 "+"
 *   insn=0x0000000000445A54 string=0x0000000000445A58 "@Nl"
 *   insn=0x0000000000445A58 string=0x0000000000445A5C "l"
 *   insn=0x0000000000445A68 string=0x0000000000445A6C "/"
 *   insn=0x0000000000445A70 string=0x0000000000445A74 "0<"
 *   insn=0x0000000000445A90 string=0x0000000000445A94 "!"
 *   insn=0x0000000000445AA0 string=0x0000000000445AA4 "A"
 *   insn=0x0000000000445AA8 string=0x0000000000445AAC "@"
 *   insn=0x0000000000445AAC string=0x0000000000445AD4 "6\t"
 *   insn=0x0000000000445AB4 string=0x0000000000445AB8 "-"
 *   insn=0x0000000000445ABC string=0x0000000000445AC0 "j)"
 *   insn=0x0000000000445AC8 string=0x0000000000445ACC "Ja"
 *   insn=0x0000000000445AD4 string=0x0000000000445AD8 "ib"
 *   insn=0x0000000000445ADC string=0x0000000000445AE0 "I"
 *   insn=0x0000000000445AEC string=0x0000000000445AF0 "8"
 *   insn=0x0000000000445AF8 string=0x0000000000445B08 ")"
 *   insn=0x0000000000445AFC string=0x0000000000445B00 "9#"
 *   insn=0x0000000000445B08 string=0x0000000000445B0C ""
 *   insn=0x0000000000445B0C string=0x0000000000445B10 "*"
 *   insn=0x0000000000445B10 string=0x0000000000445B14 ":"
 *   insn=0x0000000000445B14 string=0x0000000000445B18 " "
 *   insn=0x0000000000445B18 string=0x0000000000445B1C ")"
 *   insn=0x0000000000445B20 string=0x0000000000445B24 "l"
 *   insn=0x0000000000445B20 string=0x00000000001FB1D0 "0'"
 *   insn=0x0000000000445B2C string=0x0000000000445B30 "x"
 *   insn=0x0000000000445B30 string=0x0000000000445AFC "h"
 *   insn=0x0000000000445B48 string=0x0000000000445B4C "w\n"
 *   insn=0x0000000000445B50 string=0x0000000000445B54 "h"
 *   insn=0x0000000000445B50 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000445B54 string=0x0000000000445B58 "`"
 *   insn=0x0000000000445B58 string=0x0000000000445B5C "h"
 *   insn=0x0000000000445B5C string=0x0000000000445B68 "X"
 *   insn=0x0000000000445B64 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000445B68 string=0x0000000000445B6C "h"
 *   insn=0x0000000000445B74 string=0x0000000000445B78 "K"
 *   insn=0x0000000000445B78 string=0x0000000000445B7C ")"
 *   insn=0x0000000000445B7C string=0x0000000000445B80 "l\t@"
 *   insn=0x0000000000445B84 string=0x0000000000445B88 "l\t"
 *   insn=0x0000000000445B88 string=0x0000000000445B8C "a"
 *   insn=0x0000000000445B90 string=0x0000000000445B94 "K"
 *   insn=0x0000000000445B94 string=0x0000000000445B98 "`\n@"
 *   insn=0x0000000000445B9C string=0x0000000000445BA0 "|"
 *   insn=0x0000000000445BA0 string=0x0000000000445BA4 "h"
 *   insn=0x0000000000445BA4 string=0x0000000000445BA8 "}@"
 *   insn=0x0000000000445BB0 string=0x0000000000445BB4 "o"
 *   insn=0x0000000000445BB4 string=0x0000000000445BB8 "h"
 *   insn=0x0000000000445BB8 string=0x0000000000445BBC "`"
 *   insn=0x0000000000445BC0 string=0x0000000000445BD0 "h"
 *   insn=0x0000000000445BC8 string=0x0000000000445BCC "`"
 *   insn=0x0000000000445BD0 string=0x0000000000445BD4 ""
 *   insn=0x0000000000445BD4 string=0x0000000000445BD8 "h"
 *   insn=0x0000000000445BE4 string=0x0000000000445BE8 "!"
 *   insn=0x0000000000445C0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::AllocateBuffers(Caver::Mesh *this, int a2)
{
  int v4; // w8
  __int64 v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x12
  int v9; // w22
  int64x2_t v10; // q1
  int64x2_t v11; // q2
  int64x2_t v12; // q0
  int64x2_t *v13; // x13
  int64x2_t v14; // q3
  unsigned __int64 v15; // x14
  int64x2_t v16; // q4
  int64x2_t v17; // q4
  __int64 v18; // x13
  unsigned __int64 *v19; // x12
  unsigned __int64 v20; // x10
  int v21; // w23
  __int64 v22; // x24
  _QWORD *i; // x25
  int v24; // w26
  int v25; // w27
  int v26; // w8
  unsigned __int64 v27; // x0
  __int64 v28; // x0
  void *v29; // x8
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 *v32; // x10
  __int64 v33; // t1
  int v34; // w0
  unsigned __int64 v35; // x0
  __int64 v36; // x0
  void *v37; // x8
  _QWORD v38[4]; // [xsp+8h] [xbp-88h] BYREF
  _QWORD v39[3]; // [xsp+28h] [xbp-68h] BYREF

  v39[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)this;
  if ( *(int *)this < 1 )
    goto LABEL_27;
  v38[0] = (char *)this + 32;
  v38[1] = (char *)this + 56;
  v5 = *((int *)this + 80);
  if ( (int)v5 <= 0 )
  {
    v9 = 2;
    v38[2] = (char *)this + 88;
    goto LABEL_12;
  }
  v6 = *((_QWORD *)this + 10);
  if ( (unsigned int)v5 < 4 )
  {
    v7 = 0;
    v8 = 2;
LABEL_9:
    v18 = v5 - v7;
    v19 = &v38[v8];
    v20 = v6 + 24 * v7;
    do
    {
      *v19++ = v20;
      --v18;
      v20 += 24LL;
    }
    while ( v18 );
    goto LABEL_11;
  }
  v10 = (int64x2_t)xmmword_58B480;
  v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = vdupq_n_s64(0x30u);
  v12 = vdupq_n_s64(v6);
  v8 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v13 = (int64x2_t *)v39;
  v14 = vdupq_n_s64(4u);
  v15 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  do
  {
    v16.n128_u64[0] = 24 * v10.n128_u64[0];
    v16.n128_u64[1] = 24 * v10.n128_u64[1];
    v17 = vaddq_s64(v12, v16);
    v10 = vaddq_s64(v10, v14);
    v15 -= 4LL;
    v13[-1] = v17;
    *v13 = vaddq_s64(v17, v11);
    v13 += 2;
  }
  while ( v15 );
  if ( v7 != v5 )
    goto LABEL_9;
LABEL_11:
  v9 = v5 + 2;
  v38[(int)v5 + 2] = (char *)this + 88;
  if ( (int)v5 + 2 >= 0 )
  {
LABEL_12:
    v21 = 0;
    v22 = (unsigned int)(v9 + 1) - 1LL;
    for ( i = v38; ; ++i )
    {
      v24 = *(_DWORD *)(*i + 4LL);
      v25 = *(_DWORD *)(*i + 16LL) + (v4 - 1) * *(_DWORD *)(*i + 8LL);
      v26 = v25 + Caver::SizeOfDataType() * v24;
      if ( v26 > v21 )
        v21 = v26;
      if ( !v22 )
        break;
      v4 = *(_DWORD *)this;
      --v22;
    }
    goto LABEL_19;
  }
  v21 = 0;
  LOBYTE(v22) = 1;
LABEL_19:
  if ( v21 < 0LL )
    v27 = -1;
  else
    v27 = v21;
  *((_DWORD *)this + 66) = v21;
  v28 = operator new[](v27);
  v29 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = v28;
  if ( v29 )
    operator delete[](v29);
  if ( (v22 & 1) == 0 )
  {
    v30 = *((_QWORD *)this + 34);
    v31 = (unsigned int)(v9 + 1);
    v32 = v38;
    do
    {
      v33 = *v32++;
      --v31;
      *(_QWORD *)(v33 + 16) += v30;
    }
    while ( v31 );
  }
LABEL_27:
  if ( a2 >= 1 )
  {
    v34 = Caver::SizeOfDataType();
    *((_DWORD *)this + 70) = v34 * a2;
    if ( v34 * a2 < 0LL )
      v35 = -1;
    else
      v35 = v34 * a2;
    v36 = operator new[](v35);
    v37 = (void *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v36;
    if ( v37 )
    {
      operator delete[](v37);
      v36 = *((_QWORD *)this + 36);
    }
    *((_QWORD *)this + 3) += v36;
  }
}

