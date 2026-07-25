/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7F54
 * Mangled: _ZN5Caver6Sprite22AddTrianglesFromSpriteEPS0_
 * Demangled: Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *
 * Callers: 1
 *   0x00000000001FC1E0  Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 67
 *   insn=0x00000000004C7F74 string=0x00000000004C7F78 "hjE)"
 *   insn=0x00000000004C7F80 string=0x00000000004C7F84 "k"
 *   insn=0x00000000004C7F84 string=0x00000000004C7F88 "7"
 *   insn=0x00000000004C7F8C string=0x00000000004C7F90 "X"
 *   insn=0x00000000004C7F94 string=0x00000000004C7F98 "{2@"
 *   insn=0x00000000004C7F94 string=0x00000000004C8010 "h"
 *   insn=0x00000000004C7F98 string=0x00000000004C7F9C "h"
 *   insn=0x00000000004C7F9C string=0x00000000004C7FA0 "}@"
 *   insn=0x00000000004C7FA8 string=0x00000000004C7FAC "q"
 *   insn=0x00000000004C7FAC string=0x00000000004C7FB0 "_"
 *   insn=0x00000000004C7FAC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C7FBC string=0x00000000004C7FC0 "6"
 *   insn=0x00000000004C7FBC string=0x00000000004C8074 "6"
 *   insn=0x00000000004C7FC0 string=0x00000000004C7FC4 "_"
 *   insn=0x00000000004C7FC8 string=0x00000000004C7FCC "h"
 *   insn=0x00000000004C7FDC string=0x00000000004C7FE0 "5"
 *   insn=0x00000000004C7FE4 string=0x00000000004C7FF4 "iBA9"
 *   insn=0x00000000004C7FEC string=0x00000000004C7FF0 "5"
 *   insn=0x00000000004C7FEC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C7FF8 string=0x00000000004C7FFC "w*"
 *   insn=0x00000000004C7FFC string=0x00000000004C8000 "i"
 *   insn=0x00000000004C8000 string=0x00000000004C8004 "h""
 *   insn=0x00000000004C8000 string=0x00000000004C800C "h&"
 *   insn=0x00000000004C8018 string=0x00000000004C80AC "h"
 *   insn=0x00000000004C801C string=0x00000000004C8020 "+"
 *   insn=0x00000000004C8020 string=0x00000000004C8024 ""
 *   insn=0x00000000004C8020 string=0x00000000004C8084 "`"
 *   insn=0x00000000004C8024 string=0x00000000004C8028 ""
 *   insn=0x00000000004C802C string=0x00000000004C8030 "P"
 *   insn=0x00000000004C8030 string=0x00000000004C8034 "h"
 *   insn=0x00000000004C8044 string=0x00000000004C8048 "6"
 *   insn=0x00000000004C8044 string=0x00000000004C8094 "6"
 *   insn=0x00000000004C804C string=0x00000000004C8050 ""
 *   insn=0x00000000004C8050 string=0x00000000004C8054 ""
 *   insn=0x00000000004C8064 string=0x00000000004C8068 "5"
 *   insn=0x00000000004C8070 string=0x00000000004C80A8 "x"
 *   insn=0x00000000004C8074 string=0x00000000004C8078 "5"
 *   insn=0x00000000004C8078 string=0x00000000004C807C "v"
 *   insn=0x00000000004C8094 string=0x00000000004C8098 "5"
 *   insn=0x00000000004C8098 string=0x00000000004C809C "v"
 *   insn=0x00000000004C80AC string=0x00000000004C80B0 "j"
 *   insn=0x00000000004C80BC string=0x00000000004C80C0 " )"
 *   insn=0x00000000004C80CC string=0x00000000004C80D0 "_"
 *   insn=0x00000000004C80D4 string=0x00000000004C80D8 "l"
 *   insn=0x00000000004C80D4 string=0x00000000004C814C "w."
 *   insn=0x00000000004C80D8 string=0x00000000004C80DC "h.@"
 *   insn=0x00000000004C80E0 string=0x00000000004C80E4 "k"
 *   insn=0x00000000004C80E4 string=0x00000000004C80E8 "J"
 *   insn=0x00000000004C80E8 string=0x00000000004C80EC "_"
 *   insn=0x00000000004C80EC string=0x00000000004C80F0 "N"
 *   insn=0x00000000004C80F8 string=0x00000000004C80FC "i"
 *   insn=0x00000000004C80FC string=0x00000000004C8100 "_"
 *   insn=0x00000000004C8100 string=0x00000000004C8104 "M"
 *   insn=0x00000000004C8104 string=0x00000000004C8108 "p"
 *   insn=0x00000000004C8108 string=0x00000000004C810C "/"
 *   insn=0x00000000004C8118 string=0x00000000004C811C "m"
 *   insn=0x00000000004C811C string=0x00000000004C8120 "?"
 *   insn=0x00000000004C8120 string=0x00000000004C8124 "b"
 *   insn=0x00000000004C8128 string=0x00000000004C812C "k"
 *   insn=0x00000000004C8130 string=0x00000000004C8134 ".ilx"
 *   insn=0x00000000004C8140 string=0x00000000004C8144 "ni,xK"
 *   insn=0x00000000004C8144 string=0x00000000004C8148 "K"
 *   insn=0x00000000004C814C string=0x00000000004C8150 "x"
 *   insn=0x00000000004C8174 string=0x00000000004C8178 "/A"
 *   insn=0x00000000004C8188 string=0x00000000004C818C "1B"
 *   insn=0x00000000004C819C string=0x00000000004C81A0 "!"
 *   insn=0x00000000004C81A4 string=0x00000000004C81A8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite *this, Caver::Sprite *a2)
{
  int v4; // w26
  int v5; // w23
  __int64 v6; // x24
  int v7; // w27
  unsigned __int64 v8; // x0
  char *v9; // x0
  char *v10; // x21
  void *v11; // x22
  char **v12; // x25
  int v13; // w8
  int v14; // w9
  char *v15; // x8
  unsigned __int64 v16; // x0
  void *v17; // x0
  int v18; // w8
  void *v19; // x21
  const void *v20; // x22
  void *v21; // x0
  void *result; // x0
  __int64 v23; // x10
  unsigned int v24; // w8
  unsigned __int64 v25; // x9
  __int64 v26; // x11
  __int64 v27; // x10
  unsigned __int64 v28; // x14
  __int64 v29; // x12
  __int64 v30; // x13
  unsigned __int64 v31; // x16
  __int64 v32; // x13
  __int64 v33; // x11
  __int64 v34; // x12
  __int16 v35; // w14
  int16x8_t v36; // q0
  int16x8_t *v37; // x15
  int16x8_t *v38; // x16
  __int64 v39; // x17
  int16x8_t v40; // q1
  int16x8_t v41; // q2

  v4 = *((_DWORD *)this + 11);
  v5 = *((_DWORD *)a2 + 11) + v4;
  v6 = *((int *)a2 + 7) + (__int64)*((int *)this + 7);
  if ( *((_DWORD *)this + 10) >= v5 )
    goto LABEL_14;
  v7 = *((_DWORD *)this + 12);
  if ( v7 * v5 < 0LL )
    v8 = -1;
  else
    v8 = v7 * v5;
  v9 = (char *)operator new[](v8);
  v10 = v9;
  if ( v4 <= 0 )
  {
    v12 = (char **)((char *)this + 56);
    v11 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v9;
    if ( !v11 )
      goto LABEL_11;
  }
  else
  {
    v12 = (char **)((char *)this + 56);
    v11 = (void *)*((_QWORD *)this + 7);
    if ( v4 <= v5 )
      v13 = v4;
    else
      v13 = v5;
    memcpy(v9, v11, v7 * v13);
    *v12 = v10;
    if ( !v11 )
      goto LABEL_11;
  }
  operator delete[](v11);
  v10 = *v12;
LABEL_11:
  v14 = *((unsigned __int8 *)this + 80);
  v15 = v10 + 12;
  *((_DWORD *)this + 10) = v5;
  if ( v14 )
  {
    *((_QWORD *)this + 8) = v15;
    v15 = v10 + 16;
  }
  *((_QWORD *)this + 9) = v15;
LABEL_14:
  if ( *((_DWORD *)this + 6) >= (int)v6 )
    goto LABEL_32;
  if ( (int)v6 < 1 )
  {
    v21 = (void *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0;
    if ( !v21 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( __CFADD__(3 * v6, 3 * v6) )
    v16 = -1;
  else
    v16 = 6 * v6;
  v17 = (void *)operator new[](v16);
  v18 = *((_DWORD *)this + 7);
  v19 = v17;
  if ( v18 > 0 )
  {
    v20 = (const void *)*((_QWORD *)this + 4);
    if ( v18 > (int)v6 )
      v18 = v6;
    memcpy(v17, v20, 6LL * v18);
    *((_QWORD *)this + 4) = v19;
    if ( !v20 )
      goto LABEL_31;
    goto LABEL_29;
  }
  v20 = (const void *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v17;
  if ( v20 )
  {
LABEL_29:
    v21 = (void *)v20;
LABEL_30:
    operator delete[](v21);
  }
LABEL_31:
  *((_DWORD *)this + 6) = v6;
LABEL_32:
  result = memcpy(
             (void *)(*((_QWORD *)this + 7) + *((int *)this + 12) * (__int64)*((int *)this + 11)),
             *((const void **)a2 + 7),
             *((int *)a2 + 12) * (__int64)*((int *)a2 + 11));
  v23 = *((int *)a2 + 7);
  if ( (int)v23 < 1 )
    goto LABEL_45;
  v24 = *((_DWORD *)this + 11);
  v25 = *((_QWORD *)a2 + 4);
  v26 = *((_QWORD *)this + 4);
  v27 = 3 * v23;
  if ( v27 <= 1 )
    v28 = 1;
  else
    v28 = v27;
  v29 = 3LL * *((int *)this + 7);
  if ( v28 <= 0xF
    || (v27 <= 1 ? (v30 = 1) : (v30 = v27),
        (v31 = v26 + 6LL * *((int *)this + 7), v31 < v25 + 2 * v30) && v25 < v26 + 2 * (v30 + v29)) )
  {
    v32 = 0;
LABEL_43:
    v33 = v26 + 2 * v29;
    do
    {
      v34 = 2 * v32;
      v35 = *(_WORD *)(v25 + 2 * v32++);
      *(_WORD *)(v33 + v34) = v24 + v35;
    }
    while ( v32 < v27 );
    goto LABEL_45;
  }
  v32 = v28 & 0x7FFFFFFFFFFFFFF0LL;
  v36 = vdupq_n_s16(v24);
  v37 = (int16x8_t *)(v25 + 16);
  v38 = (int16x8_t *)(v31 + 16);
  v39 = v28 & 0x7FFFFFFFFFFFFFF0LL;
  do
  {
    v40 = v37[-1];
    v41 = *v37;
    v37 += 2;
    v39 -= 16;
    v38[-1] = vaddq_s16(v36, v40);
    *v38 = vaddq_s16(v36, v41);
    v38 += 2;
  }
  while ( v39 );
  if ( v28 != v32 )
    goto LABEL_43;
LABEL_45:
  *((_DWORD *)this + 11) = v5;
  *((_DWORD *)this + 7) = v6;
  return result;
}

