/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C82F8
 * Mangled: _ZN5Caver6Sprite16CreateVertexDataEiPKNS_7Vector2EiPt
 * Demangled: Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *
 * Callers: 1
 *   0x00000000001F4A30  Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 27
 *   insn=0x00000000004C831C string=0x00000000004C8320 "(u"
 *   insn=0x00000000004C8320 string=0x00000000004C8324 "}@"
 *   insn=0x00000000004C8340 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C834C string=0x00000000004C8360 "0"
 *   insn=0x00000000004C8354 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C837C string=0x00000000004C8380 "D"
 *   insn=0x00000000004C8380 string=0x00000000004C8384 "F"
 *   insn=0x00000000004C838C string=0x00000000004C8390 " "
 *   insn=0x00000000004C83A0 string=0x00000000004C83A4 "1: "
 *   insn=0x00000000004C83A8 string=0x00000000004C83AC "R:!"
 *   insn=0x00000000004C83B4 string=0x00000000004C83B8 "1"
 *   insn=0x00000000004C83B8 string=0x00000000004C83BC "S"
 *   insn=0x00000000004C83C4 string=0x00000000004C83C8 "H" "
 *   insn=0x00000000004C83CC string=0x00000000004C83D0 "n"
 *   insn=0x00000000004C83D0 string=0x00000000004C83D4 "m"
 *   insn=0x00000000004C83D8 string=0x00000000004C83DC "@"0"
 *   insn=0x00000000004C83D8 string=0x00000000004C83E8 "r"
 *   insn=0x00000000004C83E0 string=0x00000000004C83E4 "M"
 *   insn=0x00000000004C83E4 string=0x00000000004C83EC "(" "
 *   insn=0x00000000004C83F4 string=0x00000000004C83F8 " "0"
 *   insn=0x00000000004C83F4 string=0x00000000004C8404 "q"
 *   insn=0x00000000004C83FC string=0x00000000004C8400 "M"
 *   insn=0x00000000004C8400 string=0x00000000004C8408 ""
 *   insn=0x00000000004C8408 string=0x00000000004C840C "r"
 *   insn=0x00000000004C840C string=0x00000000004C8410 "k"
 *   insn=0x00000000004C8418 string=0x00000000004C841C ""
 *   insn=0x00000000004C8430 string=0x00000000004C8434 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Sprite::CreateVertexData(
        Caver::Sprite *this,
        int a2,
        const Caver::Vector2 *a3,
        int a4,
        unsigned __int16 *a5)
{
  int v5; // w23
  unsigned __int64 v7; // x0
  __int64 v11; // x0
  void *v12; // x8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  __int64 v17; // x9
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  __int64 v22; // x8
  __int64 v23; // x11
  float *v24; // x12
  float v25; // w13
  float v26; // s18
  float v27; // s17
  float v28; // s19
  float v29; // s19
  __int64 v30; // x21
  unsigned __int64 v31; // x0
  void *v32; // x0
  void *v33; // x8

  v5 = a2;
  *((_DWORD *)this + 12) = 20;
  if ( a2 < 0 )
    v7 = -1;
  else
    v7 = 20 * a2;
  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 11) = a2;
  v11 = operator new[](v7);
  v12 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v11;
  if ( v12 )
  {
    operator delete[](v12);
    v11 = *((_QWORD *)this + 7);
    v5 = *((_DWORD *)this + 11);
  }
  *((_QWORD *)this + 9) = v11 + 12;
  if ( v5 >= 1 )
  {
    v13 = *((float *)this + 2);
    v14 = *((float *)this + 3);
    v15 = *((float *)this + 4);
    v16 = *((float *)this + 5);
    v17 = *((int *)this + 12);
    v18 = *(float *)(*(_QWORD *)this + 92LL);
    v19 = *(float *)(*(_QWORD *)this + 96LL);
    v20 = *(float *)(*(_QWORD *)this + 100LL);
    v21 = *(float *)(*(_QWORD *)this + 104LL);
    v22 = 0;
    v23 = v11 + 8;
    v24 = (float *)((char *)a3 + 4);
    do
    {
      v25 = *(v24 - 1);
      v26 = v18 + (float)((float)(v20 * (float)(v25 - v13)) / v15);
      v27 = v19 + (float)((float)(v21 * (float)(*v24 - v14)) / v16);
      v28 = 0.0;
      *(_QWORD *)(v23 - 4) = *(unsigned int *)v24;
      *(float *)(v23 - 8) = v25;
      if ( v26 < 0.0 || (v28 = 1.0, v26 > 1.0) )
        v26 = v28;
      v29 = 0.0;
      if ( v27 < 0.0 || (v29 = 1.0, v27 > 1.0) )
        v27 = v29;
      ++v22;
      *(float *)(v23 + 4) = v26;
      *(float *)(v23 + 8) = v27;
      v23 += v17;
      v24 += 2;
    }
    while ( v22 < v5 );
  }
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 7) = a4;
  v30 = 3 * a4;
  if ( __CFADD__(v30, v30) )
    v31 = -1;
  else
    v31 = 2 * v30;
  v32 = (void *)operator new[](v31);
  v33 = (void *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v32;
  if ( v33 )
  {
    operator delete[](v33);
    v32 = (void *)*((_QWORD *)this + 4);
    v30 = 3LL * *((int *)this + 7);
  }
  return memcpy(v32, a5, 2 * v30);
}

