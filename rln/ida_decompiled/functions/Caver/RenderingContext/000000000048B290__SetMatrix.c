/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B290
 * Mangled: _ZN5Caver16RenderingContext9SetMatrixERKNS_7Matrix4E
 * Demangled: Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000001FBDA0  .glLoadMatrixf
 *
 * Referenced strings: 32
 *   insn=0x000000000048B290 string=0x000000000048B294 " "
 *   insn=0x000000000048B29C string=0x000000000048B2A0 "\n"
 *   insn=0x000000000048B2A0 string=0x000000000048B2A4 ","
 *   insn=0x000000000048B2A4 string=0x000000000048B2A8 "I"
 *   insn=0x000000000048B2A8 string=0x000000000048B2AC ")"
 *   insn=0x000000000048B2AC string=0x000000000048B2B0 "*"
 *   insn=0x000000000048B2B0 string=0x000000000048B2B4 "_!"
 *   insn=0x000000000048B2B4 string=0x000000000048B2B8 "\t"
 *   insn=0x000000000048B2B8 string=0x000000000048B2BC "b"
 *   insn=0x000000000048B2C4 string=0x000000000048B340 "jE@"
 *   insn=0x000000000048B2C8 string=0x000000000048B2CC ""
 *   insn=0x000000000048B2CC string=0x000000000048B2D0 "k"
 *   insn=0x000000000048B2D0 string=0x000000000048B2D4 "l"
 *   insn=0x000000000048B2D4 string=0x000000000048B2D8 ","
 *   insn=0x000000000048B2DC string=0x000000000048B2E0 "?"
 *   insn=0x000000000048B2E4 string=0x000000000048B2E8 "k!"
 *   insn=0x000000000048B2E4 string=0x000000000048B300 "L"
 *   insn=0x000000000048B2E8 string=0x000000000048B2EC "k"
 *   insn=0x000000000048B2EC string=0x000000000048B2F0 ""
 *   insn=0x000000000048B2F8 string=0x000000000048B2FC "("
 *   insn=0x000000000048B304 string=0x000000000048B308 "+"
 *   insn=0x000000000048B308 string=0x000000000048B30C "\t"
 *   insn=0x000000000048B30C string=0x000000000048B310 "P"
 *   insn=0x000000000048B310 string=0x000000000048B314 ")"
 *   insn=0x000000000048B314 string=0x000000000048B318 ".@"
 *   insn=0x000000000048B330 string=0x000000000048B334 "a"
 *   insn=0x000000000048B334 string=0x000000000048B338 "_"
 *   insn=0x000000000048B33C string=0x000000000048B350 ""
 *   insn=0x000000000048B340 string=0x000000000048B344 "*E"
 *   insn=0x000000000048B344 string=0x000000000048B348 "?"
 *   insn=0x000000000048B358 string=0x000000000048B35C ""
 *   insn=0x000000000048B368 string=0x00000000001FBDA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetMatrix(__int64 this, const Caver::Matrix4 *a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x11
  __int64 v4; // x10
  unsigned __int64 v5; // x10
  _DWORD *v6; // x9
  const Caver::Matrix4 *v7; // x11
  unsigned __int64 v8; // x11
  bool v9; // cc
  __int64 v10; // x9
  _OWORD *v11; // x13
  __int128 *v12; // x14
  __int64 v13; // x15
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // t1

  v2 = this + 196;
  v3 = this + 136;
  if ( this + 196 <= (unsigned __int64)(this + 136) )
    v4 = this + 136;
  else
    v4 = this + 196;
  v5 = ((unsigned __int64)(v4 + -133 - this) >> 2) + 1;
  v6 = (_DWORD *)(this + 132);
  if ( v5 < 8 )
  {
    v7 = a2;
    do
    {
LABEL_13:
      v16 = *(_DWORD *)v7;
      v7 = (const Caver::Matrix4 *)((char *)v7 + 4);
      *v6++ = v16;
    }
    while ( (unsigned __int64)v6 < v2 );
    goto LABEL_14;
  }
  if ( v2 > v3 )
    v3 = this + 196;
  v8 = v3 + -133 - this;
  if ( v6 < (_DWORD *)((char *)a2 + (v8 & 0xFFFFFFFFFFFFFFFCLL) + 4) )
  {
    v9 = this + ((v8 + 136) & 0xFFFFFFFFFFFFFFFCLL) > (unsigned __int64)a2;
    v7 = a2;
    if ( v9 )
      goto LABEL_13;
  }
  v10 = 4 * (v5 & 0x7FFFFFFFFFFFFFF8LL);
  v7 = (const Caver::Matrix4 *)((char *)a2 + v10);
  v11 = (_OWORD *)(this + 148);
  v6 = (_DWORD *)(this + v10 + 132);
  v12 = (__int128 *)((char *)a2 + 16);
  v13 = v5 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v14 = *(v12 - 1);
    v15 = *v12;
    v13 -= 8;
    v12 += 2;
    *(v11 - 1) = v14;
    *v11 = v15;
    v11 += 2;
  }
  while ( v13 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_13;
LABEL_14:
  if ( !*(_DWORD *)this )
    return glLoadMatrixf();
  *(_BYTE *)(this + 128) = 1;
  return this;
}

